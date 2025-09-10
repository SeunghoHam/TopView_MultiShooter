// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "WASDL/Character/Components/AnimationControlComponent.h"
#include "WASDL/System/FOW/FogOfWarSubsystem.h"
#include "WASDL/System/FOW/FogVisibilityComponent.h"
#include "WASDL/System/FOW/VisionRevealerComponent.h"
#include "WASDL/Widgets/EnemyHealthWidget.h"
#include "Kismet/GameplayStatics.h"
#include "WASDL/Actor/CommandCenter.h"
#include "WASDL/Enemy/EnemyAnimInstance.h"
#include "EngineUtils.h" // TActorIterator
#include "WASDL/Character/Components/HealthComponent.h"
#include "WASDL/Character/Components/SoundComponent.h"
#include "WASDL/System/Audio/AudioManagerSubsystem.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//bReplicates = true;
	//SetReplicateMovement(true);
	//bOnlyRelevantToOwner= false;
	//bNetUseOwnerRelevancy =false;
	//SetCanBeDamaged(true);
	
	AnimationComponent = CreateDefaultSubobject<UAnimationControlComponent>(TEXT("AnimationComponent"));

}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	HealthComponent->HealthInitialize(20.f);
	if (UUserWidget* UW = HealthWidget->GetUserWidgetObject())              // ✅ 인스턴스 얻기
	{
		if (UEnemyHealthWidget* EH = Cast<UEnemyHealthWidget>(UW))
		{
			EH->SetHeatlhBarColor(FColor::Red);
			HealthComponent->HPBarWidgetInstance = EH->GetBar();            // ✅ 바 포인터 연결
			HealthComponent->UpdateHealthUI();                             // 초기 값 갱신
			HealthWidget->PrimaryComponentTick.TickGroup = TG_PostUpdateWork;
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0F, FColor::Red, TEXT("[Enemy] Widget is null"));
	}

	
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("CommandCenter"), CommandCenter);
	//GEngine->AddOnScreenDebugMessage(-1, 3.0F, FColor::Yellow,
	 //                                FString::Printf(TEXT("CommandCenterCount : %d"), CommandCenter.Num()));
	if (CommandCenter.Num() != 0)
	{
		CommandCenterInstance = Cast<ACommandCenter>(CommandCenter.IsValidIndex(0) ? CommandCenter[0] : nullptr);
		//GEngine->AddOnScreenDebugMessage(-1, 3.0F, FColor::Yellow,
		  //                               FString::Printf(
		//	                                 TEXT("Get CommandCenter : %s"), *CommandCenterInstance->GetName()));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0F, FColor::Red, TEXT("Fail Get CommandCenter"));
	}

	TargetTag = "PlayerTeam";
	FindRadius = 300.f;
	GetWorld()->GetTimerManager().SetTimer(RegisterDelayHandle, this, &ABaseEnemy::TryRegister, 0.3f, false);
}

void ABaseEnemy::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABaseEnemy, Acurrent);
	DOREPLIFETIME(ABaseEnemy, ARcurrent);
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentTarget)
	{
		AttackDir = (CurrentTarget->GetActorLocation() - GetActorLocation()).GetSafeNormal();
		
		//FRotator rot= AttackDir.Rotation();
		//float yawOnly = rot.Yaw;
		//GetMesh()->SetWorldRotation(yawOnly);
		//GetMesh()->SetWorldRotation(FRotator(0.f, yawOnly, 0.f));
	}
	
	if (bAttacking)
	{
		if (bAttackPart) // 공격 (앞으로 이동 및 회전)
		{
			// Lerp 0 ~ 1
			DurationTime += DeltaTime;
			if (DurationTime >= AttackTime)
			{
				bAttackPart = false;
			}
		}
		else
		{
			// Lerp 1 ~ 0
			DurationTime -= DeltaTime;

			if (DurationTime <= 0)
			{
				bAttacking =false;
			}
		}
		ARcurrent = FMath::Lerp(ARstart,ARend,DurationTime/AttackTime);
		Acurrent =  FMath::Lerp(Astart, Aend, DurationTime / AttackTime);
		SetActorLocation(Acurrent);
		//SetActorRotation(ARcurrent);
		SetActorRelativeRotation(ARcurrent);
	}
	
	// 1) 위치 업데이트
	const FVector WidgetLoc = GetActorLocation() + FVector(0.f, 0.f, 150.f);
	HealthWidget->SetWorldLocation(WidgetLoc);
	FRotator rot = FRotator(180.f, 0.f, 0.f);
	HealthWidget->SetWorldRotation(rot.Quaternion());
}
void ABaseEnemy::TaskAttackEnd()
{
	AnimInstance->SetAnimType(EAnimType::Idle);
}

void ABaseEnemy::HandleDeath()
{
	if (HasAuthority())
	{
		Multicast_OnDeath();
	}
	else
	{
		Server_OnDeath();
	}
	// 서버 전용의 사망 처리.
	/*
	if (auto* FOW = GetWorld()->GetSubsystem<UFogOfWarSubsystem>())
	{
		if (VisibilityComponent) FOW->UnregisterRevealer(VisionRevealerComponent);
	}*/
	
	//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Yellow, FString::Printf(TEXT("HandleDeath")));

	//BP_DeathMontage()
	/*
	if (HasAuthority())
	{
		SoundComponent->PlayAtLocation(ESoundName::effect_ZugglingDead, GetActorLocation());
		GetCharacterMovement()->DisableMovement();
		SetActorEnableCollision(false);
		// 필요 시 Ragdoll: GetMesh()->SetSimulatePhysics(true);
		SetLifeSpan(0.5f);
	}*/
}

void ABaseEnemy::Server_OnDeath()
{
	Super::Server_OnDeath();
}

void ABaseEnemy::Multicast_OnDeath()
{
	Super::Multicast_OnDeath();
	SoundComponent->PlayAtLocation(ESoundName::effect_ZugglingDead, GetActorLocation());
	GetCharacterMovement()->DisableMovement();
	SetActorEnableCollision(false);
	// 필요 시 Ragdoll: GetMesh()->SetSimulatePhysics(true);
	SetLifeSpan(0.5f);
	AnimInstance->SetAnimType(EAnimType::Death);
	
}

void ABaseEnemy::TryRegister()
{
	Super::TryRegister();
	RegisterRevealer(1);
}


// 클라 네트워크 프로파일러 시야 밖 적 네트워크 업데이트가 사라짐.
// 시야 바깥서는 스켈레톤 /애니메이션 패킷도 안오게 함
bool ABaseEnemy::IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation) const
{
	if (!Super::IsNetRelevantFor(RealViewer, ViewTarget, SrcLocation))
		return false;

	// RealViewer의 팀 추출(프로젝트 규약에 맞게)
	const int32 ViewerTeam = /* IGenericTeamAgentInterface 등으로 */ 0;

	if (const UWorld* W = GetWorld())
	{
		if (const auto* FOW = W->GetSubsystem<UFogOfWarSubsystem>())
		{
			// 내 위치가 해당 팀에 보일 때만 관련성 인정
			return FOW->IsLocationVisibleToTeam(GetActorLocation(), ViewerTeam);
		}
	}
	return true; // 안전망: FOW 없으면 전송
}



FVector ABaseEnemy::GetTargetLocation()
{
	/*
	if (!CommandCenterInstance) 
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red,TEXT("TargetLocation is Zero"));
		return FindNearestEnemy_Registry(FLT_MAX)->GetActorLocation();
	}
	*/

	//GEngine->AddOnScreenDebugMessage(-1, 1.0f,FColor::Yellow,
	//	FString::Printf(TEXT("CommandCenter : %s"), *CommandCenterInstance->GetName()));
	//AnimInstance->SetAnimType(EAnimType::Walk);
	AActor* NextTarget = FindNearestEnemy_Registry("PlayerTeam",FLT_MAX);
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f,FColor::Yellow,
	//	FString::Printf(TEXT("NextTarget : %s"), *NextTarget->GetName()));
	if (NextTarget)
	{
		return NextTarget->GetActorLocation();
	}
	else
	{
		return GetActorLocation() + (GetActorForwardVector() * 100.f);
	}
}

void ABaseEnemy::OnRep_AttackRotation()
{
	//Super::OnRep_AttackRotation();
	SetActorRotation(AttackRotation);
}

/*
bool ABaseEnemy::GetIsTargetNear()
{
	CurrentTarget = TraceArond(300.f);
	if (CurrentTarget)
	{

		return true;
	}
	GEngine->AddOnScreenDebugMessage(-1, 0.3f, FColor::Blue, TEXT("Target is Null"));
	return false;
}
*/
void ABaseEnemy::TryAttack()
{
	if (CurrentTarget)
	{
		DrawDebugLine(GetWorld(),
			GetActorLocation(),
			CurrentTarget->GetActorLocation(),
			FColor::Yellow, false, 1.0f);

		// Authority만 진행됨
		
		if (HasAuthority()) // 데미지 계산은 서버에서만
		{
			//AttackRotation = AttackDir.Rotation();
			
			FRotator newRot = FRotator(0, AttackDir.Rotation().Yaw, 0);
			AttackRotation = newRot.Quaternion();
			//SetActorRotation(quat);

			
			AttackPreset();
			UE_LOG(LogTemp, Log, TEXT("Target : %s"), *CurrentTarget->GetName());
			Multicast_AttackMotionEffect(GetActorLocation());
			UGameplayStatics::ApplyDamage(
				CurrentTarget,
				10.f,
				GetController(),
				this,
				UDamageType::StaticClass()
				);
		}
	}
	else
	{
		 //  주변에 대상이 없는경우
		
	}
	CurrentTarget = nullptr;
}

void ABaseEnemy::AttackPreset()
{
	bAttacking= true;
	bAttackPart = true;
	DurationTime = 0.f;
	Astart = GetActorLocation();
	Aend = GetActorLocation() + (AttackDir * 50.0f);
	ARstart = FRotator::ZeroRotator;
	ARend = FRotator(-20.f, 0.f,0.f);
}

void ABaseEnemy::AttackReset()
{
	bAttacking= false;
	bAttackPart = true;
	DurationTime = 0.f;
	Astart = FVector::ZeroVector;
	Aend = FVector::ZeroVector;
}

void ABaseEnemy::Multicast_AttackMotionEffect_Implementation(FVector _dir)
{
	//AttackMotion(_dir);
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green,TEXT("Sound1"));
	/*
	if (UAudioManagerSubsystem* Mgr = GetGameInstance()->GetSubsystem<UAudioManagerSubsystem>())
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green,TEXT("Sound2"));
		// 3D 공간 재생: 위치 기반이 가장 안전
		Mgr->PlayAtLocation(ESoundName::effect_ZugglingAttack, GetActorLocation());
		// 또는 Attach:
		// Mgr->PlayAttached(Name, GetRootComponent());
	}*/
	//BP_AttackMotion(_dir);
	if (SoundComponent)
	{
		SoundComponent->PlayAtLocation(ESoundName::effect_ZugglingAttack,_dir);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red,TEXT("[Enemy] SoundComponent = null"));

	}
}

/*
AActor* ABaseEnemy::TraceArond(float _radius)
{
	FVector _halfSize = FVector(50.f, 50.f, 25.f);
	//float _Radius = 200.0f;
	//FVector Forward = GetActorForwardVector();
	//FVector CollisionStart = (GetActorForwardVector() * 50) + GetActorLocation();
	//FVector CollisionEnd = (GetActorForwardVector() * 200) + GetActorLocation();

	TArray<FHitResult> OutHits;
	FRotator Orient = GetActorRotation();
	FQuat Rot = Orient.Quaternion();

	//FHitResult Hit;
	FCollisionQueryParams param;
	param.AddIgnoredActor(this);
	FCollisionShape BoxShape = FCollisionShape::MakeBox(_halfSize);
	//FCollisionShape SphereShpae = FCollisionShape::MakeSphere(_radius);
	// FCollisionQueryParams& Params;


	//FVector Center = (CollisionStart + CollisionEnd) * 0.5f;
	//FVector BoxExtend = _halfSize;

	FVector SphereStart = GetActorLocation() - ( GetActorForwardVector() * _radius);
	FVector SphereEnd = GetActorLocation() + ( GetActorForwardVector() * _radius);
	//FVector SpehreEnd = 
	bool bHit = GetWorld()->SweepMultiByChannel(
		OutHits,
		SphereStart,
		SphereEnd,
		Rot,
		ECC_Visibility,
		BoxShape, param);
	//DrawDebugSphere(GetWorld(),GetActorLocation(),_radius,16,FColor::Cyan,false ,1.0f);
	
	DrawDebugBox(
		GetWorld(),
		GetActorLocation(),
		_halfSize,
		Rot,
		FColor::Blue,
		false,
		0.5f);
	
	if (bHit)
	{
		for (const FHitResult& HitActor : OutHits)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, FString::Printf(TEXT("Hit ACtor : %s"), *HitActor.GetActor()->GetName()));
			if (HitActor.GetActor()->ActorHasTag("PlayerTeam"))
			{
				return HitActor.GetActor();
			}
		}
	}
	return nullptr;
}
*/
/*
void ABaseEnemy::TryRegisterRevealer()
{
	if (auto* FOW = GetWorld()->GetSubsystem<UFogOfWarSubsystem>())
	{
		if (VisionRevealerComponent)
		{
			int32 TeamID = 1;
			VisionRevealerComponent->SetCurrentTeam(TeamID);
			FOW->RegisterRevealer(VisionRevealerComponent, VisionRevealerComponent->GetScaledSphereRadius(), TeamID);
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red,TEXT("[Enemy] FOWsubsystem 없음"));
	}
}
*/