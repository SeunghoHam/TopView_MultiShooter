// Fill out your copyright notice in the Description page of Project Settings.


#include "FogOfWarSubsystem.h"
#include "FogOfWarManager.h"
#include "EngineUtils.h"
#include "FogVisibilityComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
//#include ""
void UFogOfWarSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// 생성자에서는 FclassFinder, Initizlie에서는 LoadClass
	
	ManagerClass = LoadClass<AFogOfWarManager>(nullptr, TEXT("/Game/Actor/FOW/BP_FOWManager.BP_FOWManager_C"));
	
	
	if (ManagerClass)
	{
		FActorSpawnParameters Params;
		//Params.Owner = GetWorld();
		Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		Manager =
			GetWorld()->SpawnActor<AFogOfWarManager>(ManagerClass, FTransform::Identity, Params);
	}
	
	
	if (UWorld* W = GetWorld())
	{
		/*
		// 레벨에 배치된 Manager를 찾거나 스폰
		for (TActorIterator<AFogOfWarManager> It(W); It; ++It)
		{
			UE_LOG(LogTemp, Warning, TEXT("Find FOW Manager : %s"), *It->GetName());
			Manager = *It;
			break;
		}
		if (!Manager)
		{
			Manager = W->SpawnActor<AFogOfWarManager>();
			UE_LOG(LogTemp, Error, TEXT("Create FOW Manager : %s"), *Manager->GetName());
			
		}
		*/
		// 10Hz 서버틱
		
		if (W->GetNetMode() != NM_Client)
			//W->GetNetMode() == NM_ListenServer
			//|| W->GetNetMode() == EToolkitMode::Standalone) // 서버에서만 실행
		{
			W->GetTimerManager().SetTimer(TickHandle, [this]() { ServerTick(0.1f); }, 0.1f, true);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("OnlyWork Server!"));
		}
	}
	
	RebuildManagerRevealerList();
	UE_LOG(LogTemp, Warning, TEXT("FOG Subsystem Booting"));
}

void UFogOfWarSubsystem::Deinitialize()
{
	GetWorld()->GetTimerManager().ClearTimer(TickHandle);
	Manager->Destroy();
	
	Super::Deinitialize();
}

void UFogOfWarSubsystem::RegisterRevealer(USceneComponent* Comp, float Radius, const int32 TeamID)
{
	if (!Comp) return;
	if (!Manager) return;
	// ★ Manager 보장

	/*
	if (!Manager)
	{
		if (UWorld* W = GetWorld())
		{
			for (TActorIterator<AFogOfWarManager> It(W); It; ++It)
			{
				Manager = *It;
				UE_LOG(LogTemp, Warning, TEXT("[FOW Manager] : %s"), *Manager->GetName());
				break;
			}
			if (!Manager) { Manager = W->SpawnActor<AFogOfWarManager>(); }
		}
	}
	*/
	UE_LOG(LogTemp, Warning, TEXT("[FOW-Subsys] Manager=%p Name=%s"),
   Manager, Manager ? *Manager->GetName() : TEXT("None"));
	if (!Manager) {
		if (UWorld* W = GetWorld()) {
			for (TActorIterator<AFogOfWarManager> It(W); It; ++It) { Manager = *It; break; }
		}
		ensureAlwaysMsgf(Manager, TEXT("[FOW] Place AFogOfWarManager in level."));
		if (!Manager) return; // 없으면 조용히 종료
	}

	// TeamID 정규화
	int32 inteamID = FMath::Clamp(TeamID, 0, 2);
	//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green,
	//	FString::Printf( TEXT("[FOW Subsystem] RegisterRevealer TeamID :%d"), inteamID));

	// 2) 중복 제거: 모든 팀 버킷에서 이 컴포넌트가 있으면 제거
	// 왜 중복제거 하느냐? 여럽ㄴ 등록될 때 덮어쓰기 보장을 위해서. 같은 위치에 원 두번 그려지는거 방지
	
	for (int t = 0; t < MaxTeams; ++t)
	{
		TeamRevealer[t].RemoveAll([Comp](const FFOW_Revealer& R)
		{
			return R.Source.Get() == Comp;
		});
	}
	// 3) 동일 팀 버킷에 추가(또는 업데이트)
	//    - 같은 Comp가 같은 팀으로 재등록되는 경우엔 Radius만 업데이트하고 싶다면 Find 후 갱신 로직으로 바꿔도 OK
	UE_LOG(LogTemp, Warning, TEXT("InteamID : %d"), inteamID);
	TeamRevealer[inteamID].Add({ Comp, Radius });

	/*
	// 4) 디버그: 버킷별/합계 출력
	int32 Total = 0;
	for (int t = 0; t < MaxTeams; ++t) Total += TeamRevealer[t].Num();

	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green,
		FString::Printf(TEXT("[FOW] RegisterRevealer Team=%d | Bucket=%d | Total=%d"),
			inteamID, TeamRevealer[inteamID].Num(), Total));
*/
	// 5) 매니저 리스트 재구성(로컬 팀 버킷만 싣기)
	RebuildManagerRevealerList();
	
	/*
	// TODO: Comp의 소유자 팀에 따라 TeamRevealer[TeamId]에 넣기
	TeamRevealer[TeamID].Add({Comp, Radius}); // 임시: 팀0

	
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green,
	FString::Printf( TEXT("TimeRevealer Size : %d"), TeamRevealer->Num()));
	RebuildManagerRevealerList();*/
}

void UFogOfWarSubsystem::UnregisterRevealer(USceneComponent* Comp)
{
	if (!Manager) return;
	for (int t = 0; t < MaxTeams; ++t)
	{
		TeamRevealer[t].RemoveAll([Comp](const FFOW_Revealer& R) { return R.Source.Get() == Comp; });
	}
	RebuildManagerRevealerList();
}

bool UFogOfWarSubsystem::IsLocationVisibleToTeam(const FVector& WorldPos, int32 TeamId) const
{
	if (TeamId < 0 || TeamId >= MaxTeams) return false;
	const auto& Rs = TeamRevealer[TeamId];
	for (const auto& R : Rs)
	{
		if (!R.Source.IsValid()) continue;
		const float Dist2D = FVector::Dist2D(WorldPos, R.Source->GetComponentLocation());
		if (Dist2D <= R.Radius)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Location check true"));
			return true;
		}
	}
			//UE_LOG(LogTemp, Warning, TEXT("Location check false"));
	
	return false;
}

void UFogOfWarSubsystem::ServerTick(float DeltaSeconds)
{
	if (!Manager)
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Red, TEXT("serverTick Manager null"));
		return;
	}
	
	// 서버에서 적 유닛들을 스캔하여 가시 여부 반영(간단 예시)
	if (!GetWorld()) return;
	for (TActorIterator<AActor> It(GetWorld()); It; ++It) // 월드에 있는 모든 Actor를 검사
	{
		AActor* A = *It;
		// 적 유닛 판정: UFogVisibilityComponent가 붙어있다고 가정
		
		// FogVisibilityComponent를 보유시

		if (UFogVisibilityComponent* Vis = A->FindComponentByClass<UFogVisibilityComponent>())
		{
			//UE_LOG(LogTemp,Warning, TEXT("ServerTick : %s"), *A->GetName());
			/*
			// LocationVisibletoTeam 계산해서 보일지 말지 결정
			const bool bVisibleToTeam0 = IsLocationVisibleToTeam(A->GetActorLocation(), 0);
			Vis->SetVisibleForTeam(0, bVisibleToTeam0);*/
			uint8 Mask = 0;
			const FVector Loc = A->GetActorLocation();
			for (int32 Team = 0; Team < MaxTeams; ++Team)
			{
				if (IsLocationVisibleToTeam(Loc, Team))
					Mask |= (1u << Team);
			}
			Vis->SetVisibleMask(Mask); // 한 번에 반영
		}
	}
}


void UFogOfWarSubsystem::RebuildManagerRevealerList()
{
	if (!Manager)
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Red, TEXT("[FOW Subsystem] : RebuildManagerRevealerlist "));
		return;
	}
	
	//Manager->RevealerSources.Empty();
	//GEngine->AddOnScreenDebugMessage(2, 2.f, FColor::Green, TEXT("[FOW Subsystem] : RebuildManagerRevealerlist 업데이트 성공"));
	static int32 LastTeam = 0;
	const int32 LocalTeam = UFogVisibilityComponent::GetLocalTeamId(this);
	const int32 UseTeam   = (LocalTeam >= 0 && LocalTeam < MaxTeams) ? LocalTeam
							: (LastTeam >= 0   && LastTeam   < MaxTeams) ? LastTeam
																		 : 0; // 0 폴백
	//
	// 로컬 팀 판정이 순간적으로 다름녀 버킷을 보고 Keep previous발동. 
	const TArray<FFOW_Revealer>& Bucket = TeamRevealer[UseTeam]; //TeamRevealer[UseTeam];
	// ★ 빈 버킷이면 덮어쓰지 말고 유지
	if (Bucket.Num() == 0)
	{
		UE_LOG(LogTemp, Verbose, TEXT("[FOW] Rebuild: skip(empty bucket) keep=%d"),
			  Manager->RevealerSources.Num());
		return;
	}
	LastTeam = UseTeam;
	//LastTeam = LocalTeam;
	
	Manager->RevealerSources.Empty(Bucket.Num());
	for (const auto& R : Bucket) // 버킷이 비어있으면 추가 생성 안함
	{
		UE_LOG(LogTemp, Warning, TEXT("Rebuild - Bucket Count++"));

		if (R.Source.IsValid())
			Manager->RevealerSources.Add(R.Source);
		
	}


	//UE_LOG(LogTemp, Verbose, TEXT("[FOW] Rebuild: Team=%d -> ManagerSources=%d"),
	//	  LocalTeam, Manager->RevealerSources.Num());
	
	//Manager->AutoFitBoundsFromRevealers();
	UE_LOG(LogTemp, Warning, TEXT("RevealerSources Count : %d"), Manager->RevealerSources.Num());
}
