// Fill out your copyright notice in the Description page of Project Settings.


#include "FogVisibilityComponent.h"

#include "VisionRevealerComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Actor.h"

static int32 G_LastLocalTeam = 0;
// Sets default values for this component's properties
UFogVisibilityComponent::UFogVisibilityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;

	// ...
	SetIsReplicatedByDefault(true);
	//bVisibleForTeam.Init(false,3);
	// 비트마스크 사용하면 모든값이 0?
	//bVisibleForTeam.Init(false,3);
}

void UFogVisibilityComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFogVisibilityComponent, VisibleMask);
	//DOREPLIFETIME(UFogVisibilityComponent, bVisibleForTeam);
}


void UFogVisibilityComponent::SetVisibleMask(uint8 NewMask)
{
	if (VisibleMask != NewMask)
	{
		VisibleMask = NewMask;
		OnRep_Vis();
	}
}

void UFogVisibilityComponent::SetVisibleForTeam(const int32& TeamId, bool bVisible)
{
	/*
	if (bVisibleForTeam.IsValidIndex(TeamId))
	//if (TeamId != TeamId)
	{
		bVisibleForTeam[0] = bVisible; // 이 값이 변경되면서 DOREPLIFETIME 으로 전송되긴함
		OnRep_Vis(); // 서버에서도 즉시적용
	}*/
	/*
	const uint8 Bit = (1u << TeamId);
	if (bVisible)  VisibleMask |=  Bit;
	else           VisibleMask &= ~Bit;
	OnRep_Vis();*/
	
	if (TeamId < 0 || TeamId >= 8) return;
	const uint8 Bit = (1u << TeamId);
	if (bVisible) VisibleMask |= Bit;
	else VisibleMask &= ~Bit;
	OnRep_Vis(); // 서버에서도 즉시 적용
}

void UFogVisibilityComponent::OnRep_Vis()
{
	/*
	const int32 LocalTeam = GetLocalTeamId(this);
	// 내 팀이라면 bForme가 true, 아니면 false?
	const bool bForMe = bVisibleForTeam.IsValidIndex(LocalTeam) ? bVisibleForTeam[LocalTeam] : false;
	//const bool bForMe = bVisibleForTeam.Find(LocalTeam);
	if (AActor* Owner =  GetOwner())
	{
		Owner->SetActorHiddenInGame(!bForMe); // Hidden이니까 bForMe의 부정값
		//  필요하면 이펙트/소리등 토글
	}*/
	// Team 개수 3개 사용하기

	// 리슨 서버 호스트(권위 + 로컬 뷰)는 화면 토글이 필요함
	if (GetOwnerRole() == ROLE_Authority)
	{
		if (UWorld* W = GetWorld())
		{
			// 전용서버(NM_DedicatedServer)는 화면이 없으니 제외, 리슨서버만 적용
			if (W->GetNetMode() == NM_ListenServer)
			{
				const int32 LocalTeam = GetLocalTeamId(this);
				const bool bForMe = ((VisibleMask >> LocalTeam) & 1u) != 0;
				if (AActor* Owner = GetOwner())
					Owner->SetActorHiddenInGame(!bForMe);
			}
		}
		return; // 권위이면서 리슨서버 처리 후 종료
	}
	//if (GetOwnerRole() == ROLE_Authority) return; // 서버에서는 시각효과 토글 불필요
	// 서버는 이미 반영되어있음
	const int32 LocalTeam = GetLocalTeamId(this);
	const bool bForMe = ((VisibleMask >> LocalTeam) & 1u) != 0;
	if (AActor* Owner = GetOwner())
		Owner->SetActorHiddenInGame(!bForMe); // 나에게 안보이도록
}

bool UFogVisibilityComponent::IsVisibleForTeam(int32 TeamId) const
{
	if (TeamId < 0 || TeamId >= 8) return false;
	return (VisibleMask & (1u << TeamId)) != 0;
}


int32 UFogVisibilityComponent::GetLocalTeamId(const UObject* WorldContext)
{
	// TODO 구현: 로컬 PC의 Controller/PlayerState에서 TeamId를 읽어 반환
	// 최소 예시:
	if (!WorldContext || !WorldContext->GetWorld())
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Red,TEXT("[FOGVisibilityComponent] GetLocalID : object"));
		return G_LastLocalTeam;
	}
	const UWorld* W = WorldContext->GetWorld();
	if (APlayerController* PC = W->GetFirstPlayerController())
	{
		if (APawn* P = PC->GetPawn())
		{
			if (UVisionRevealerComponent* VR = P->FindComponentByClass<UVisionRevealerComponent>())
			{
				const int32 T = FMath::Clamp(VR->GetCurrentTeam(), 0, 2); 
				//GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Red,
				//FString::Printf( TEXT("[FOGVisibilitycomponent] GetLocalID : Success : Clamp : %d"), T));
				G_LastLocalTeam =T;
				return G_LastLocalTeam;
				// 팀 0~7 가정(비트마스크) — 필요 시 상수로 관리
				//return VR->GetCurrentTeam();
			}
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Red,TEXT("[FOGVisibilitycomponent] GetLocalID : Controlller"));
		
	}
	/*
	if (auto* VR =  GetOwner()->FindComponentByClass<UVisionRevealerComponent>())
	{
		const int32 i = VR->GetCurrentTeam();
		return i;
	}*/
	return 0; // 0 : Player, 1 : Enemy, 2 : Default
}
