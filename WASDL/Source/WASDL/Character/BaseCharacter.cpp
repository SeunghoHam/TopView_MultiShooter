// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

#include "Components/SoundComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "WASDL/Character/Components/HealthComponent.h"
#include "WASDL/System/FOW/FogVisibilityComponent.h"
#include "WASDL/System/FOW/VisionRevealerComponent.h"
#include "WASDL/System/FOW/FogOfWarSubsystem.h"
#include "Components/WidgetComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "WASDL/Widgets/EnemyHealthWidget.h"
#include "WASDL/Actor/CommandCenter.h"
#include "EngineUtils.h" // TactorIterator
#include "Kismet/GameplayStatics.h"
// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	bReplicates = true;
	//SetReplicates(true);
	//bReplicates = true;              // ✅
	//bReplicateMovement = true;       // 필요 시
	SetCanBeDamaged(true);
	
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	
	VisibilityComponent = CreateDefaultSubobject<UFogVisibilityComponent>(TEXT("VisibilityComponent"));
	VisionRevealerComponent = CreateDefaultSubobject<UVisionRevealerComponent>(TEXT("VisionRevealer"));
	VisionRevealerComponent->SetupAttachment(RootComponent);
	
	SoundComponent = CreateDefaultSubobject<USoundComponent>(TEXT("SoundComponent"));
		
	HealthWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPWidgetComponent"));
	HealthWidget->SetupAttachment(RootComponent);
	HealthWidget->SetWidgetSpace(EWidgetSpace::World); // 월드 공간 유지
	HealthWidget->SetDrawSize(FVector2D(128,10));
	HealthWidget->SetWidgetClass(HealthWidgetClass);
	//HealthWidget->SetDrawAtDesiredSize(true);
	HealthWidget->SetTwoSided(false); // 필요 시 양면 렌더
	HealthWidget->SetUsingAbsoluteRotation(true); // 액터 회전 영향 제외(권장
	
	// 모두에게 보이도록
	HealthWidget->SetHiddenInGame(false);
	HealthWidget->SetVisibility(true, true);
	HealthWidget->SetOnlyOwnerSee(false);
	HealthWidget->SetOwnerNoSee(false);
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (GetNetMode() == NM_DedicatedServer) return; // ✅ 전용서버에선 UI 스킵

	if (HealthWidget)
	{
		HealthWidget->InitWidget();
		//HealthComponent->HealthInitialize(50.f); 각자 캐릭터에서 할겨
		if (UUserWidget* UW = HealthWidget->GetUserWidgetObject())              // ✅ 인스턴스 얻기
		{
			if (UEnemyHealthWidget* EH = Cast<UEnemyHealthWidget>(UW))
			{
				HealthComponent->HPBarWidgetInstance = EH->GetBar();            // ✅ 바 포인터 연결
				//HealthComponent->HPBarWidgetInstance->
				HealthComponent->UpdateHealthUI();                             // 초기 값 갱신
				HealthWidget->PrimaryComponentTick.TickGroup = TG_PostUpdateWork;
			}
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0F, FColor::Red, TEXT("[Enemy] Widget is null"));
		}
	}

	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("CommandCenter"), CommandCenter);
	
	if (CommandCenter.Num() != 0)
	{
		CommandCenterInstance = Cast<ACommandCenter>(CommandCenter.IsValidIndex(0) ? CommandCenter[0] : nullptr);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0F, FColor::Red, TEXT("Fail Get CommandCenter"));
	}
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	const FVector WidgetLoc = GetActorLocation() + FVector(0.f, 0.f, 150.f);
	HealthWidget->SetWorldLocation(WidgetLoc);
	FRotator rot = FRotator(180.f, 0.f, 0.f);
	HealthWidget->SetWorldRotation(rot.Quaternion());
	return;
	// 1) 위치 업데이트(이미 하고 있다면 유지)
	//const FVector WidgetLoc = GetActorLocation() + FVector(0.f, 0.f, 150.f);
	HealthWidget->SetWorldLocation(WidgetLoc);

	// 2) 서버가 ‘전용 서버’면 UI 불필요 → 스킵
	if (GetNetMode() == NM_DedicatedServer) return;

	// 3) 이 프로세스의 ‘로컬 플레이어들’ 중 카메라 선택
	APlayerCameraManager* BestCam = nullptr;
	float BestDistSq = TNumericLimits<float>::Max();

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* PC = It->Get();
		if (!PC || !PC->IsLocalController()) continue; // 로컬만
		if (APlayerCameraManager* Cam = PC->PlayerCameraManager)
		{
			const float DSq = FVector::DistSquared(HealthWidget->GetComponentLocation(), Cam->GetCameraLocation());
			if (DSq < BestDistSq)
			{
				BestDistSq = DSq;
				BestCam = Cam;
			}
		}
	}

	if (BestCam)
	{
		FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(WidgetLoc, BestCam->GetCameraLocation());

		// 풀 빌보드
		// LookAt.Roll = 0.f;           // 필요 시 롤만 고정

		// Yaw-Only(상하 기울임 없이 수평만): 원하면 아래 두 줄 사용
		// LookAt.Pitch = 0.f;
		// LookAt.Roll  = 0.f;

		// 위젯 앞면이 뒤를 향하면 180도 보정
		//LookAt.Yaw += 180.f;

		HealthWidget->SetWorldRotation(LookAt);
	}
}

float ABaseCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
	class AController* EventInstigator, AActor* DamageCauser)
{
	if (!HasAuthority() || HealthComponent->bIsDead) return 0.0f;
	
	const float OldHP = HealthComponent->CurrentHP;
	const float CurHP = FMath::Clamp(OldHP - DamageAmount,//FMath::Max(0.f, DamageAmount),
							 0.f,
							 HealthComponent->MaxHP);

	HealthComponent->CurrentHP = CurHP;
	HealthComponent->UpdateWidget_Server(CurHP);
	//HealthComponent->ApplyDamage_Server(DamageAmount);
	//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, FString::Printf(TEXT(" %s:CurrentHP : %f"),*GetName() ,HealthComponent->CurrentHP));
	
	if (CurHP <= 0 && !HealthComponent->IsDead())
	{
		HealthComponent->bIsDead = true;
		HandleDeath(); // 서버에서만 실행되게
	}
	
	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}


void ABaseCharacter::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABaseCharacter, CurrentTarget);
	DOREPLIFETIME(ABaseCharacter, AttackRotation);
}

AActor* ABaseCharacter::GetTarget()
{
	if (TargetTag == "")
	{
		GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Magenta,TEXT("[BaseCharacter] Not Set TargetTag, FindRadius"));
		return this;
	}
	if (AActor* next = FindNearestTarget_Registry(TargetTag, FindRadius)) return next;
	return CommandCenterInstance;
}

bool ABaseCharacter::GetIsTargetNear()
{
	CurrentTarget = TraceArond(FindRadius);

	if (HealthComponent && HealthComponent->IsDead())
		return false;
	
	if (CurrentTarget)
	{
		return true;
	}
		GEngine->AddOnScreenDebugMessage(-1, 0.3f, FColor::Blue, FString::Printf( TEXT("Target is Null. R : %f"), FindRadius));
		return false;
}

void ABaseCharacter::OnRep_AttackRotation()
{
	
}

AActor* ABaseCharacter::TraceArond(float _radius)
{
	FVector _halfSize = TraceRange; //FVector(50.f, 50.f, 25.f);
	TArray<FHitResult> OutHits;
	FRotator Orient = GetActorRotation();
	FQuat Rot = Orient.Quaternion();


	FCollisionQueryParams param;
	param.AddIgnoredActor(this);
	FCollisionShape BoxShape = FCollisionShape::MakeBox(_halfSize);
	
	FVector Start = GetActorLocation() - ( GetActorForwardVector() * _radius);
	FVector End = GetActorLocation() + ( GetActorForwardVector() * _radius);
	//FVector SpehreEnd = 
	bool bHit = GetWorld()->SweepMultiByChannel(
		OutHits,
		Start,
		End,
		Rot,
		ECC_Visibility,
		BoxShape, param);
	DrawDebugBox(
		GetWorld(),
		GetActorLocation(),
		_halfSize,
		Rot,
		FColor::Blue,
		false,
		0.5f);
	
	UE_LOG(LogTemp, Warning, TEXT("TargetTag : %s"),*TargetTag.ToString());
	
	if (bHit)
	{
		for (const FHitResult& HitActor : OutHits)
		{
			if (HitActor.GetActor()->ActorHasTag(TargetTag))
			{
				UE_LOG(LogTemp, Warning, TEXT("SetTarget : %s"), *HitActor.GetActor()->GetName());
				return HitActor.GetActor();
			}
		}
	}
	return nullptr;
}

AActor* ABaseCharacter::FindNearestTarget_Registry(FName _tag, float MaxRadius)
{
	float ClosestDist = MaxRadius; // FLT_MAX
	AActor* Closest = nullptr;
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("FindNear"));
	for (TActorIterator<AActor> It(GetWorld()); It; ++It)
	{
		if (It->ActorHasTag(_tag))
		{
			float Dist = FVector::Dist(GetActorLocation(), It->GetActorLocation());
			UE_LOG(LogTemp, Warning, TEXT("FindTarget Dist : %f"), Dist);
			DrawDebugLine(GetWorld(), GetActorLocation(), It->GetActorLocation(), FColor::Blue, false, 1.0f);
			if (Dist < ClosestDist)
			{
				Closest = *It;
				ClosestDist = Dist;
			}
		}
	}
	return Closest;
}

void ABaseCharacter::Multicast_OnDeath_Implementation()
{
	
}

void ABaseCharacter::Server_OnDeath_Implementation()
{
	//Multicast_OnDeath();
}

void ABaseCharacter::HandleDeath()
{
	if (auto* FOW = GetWorld()->GetSubsystem<UFogOfWarSubsystem>())
	{
		if (VisibilityComponent) FOW->UnregisterRevealer(VisionRevealerComponent);
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("virtual Destory Success"));
	}
}

void ABaseCharacter::ObjectRegisterRevealer(int _TeamNumber)
{
	if (auto* FOW = GetWorld()->GetSubsystem<UFogOfWarSubsystem>())
	{
		if (VisionRevealerComponent)
		{
			
			int32 TeamID = _TeamNumber;
			VisionRevealerComponent->SetCurrentTeam(TeamID);
			FOW->RegisterRevealer(VisionRevealerComponent, VisionRevealerComponent->GetScaledSphereRadius(), TeamID);
			UE_LOG(LogTemp, Warning, TEXT("Register [%d]"), TeamID);
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta,
				FString::Printf(TEXT("Enemy Register: %s. Team : %d"), *GetName(), VisionRevealerComponent->GetCurrentTeam()));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red,TEXT("[Enemy] FOWsubsystem 없음"));
	}
}