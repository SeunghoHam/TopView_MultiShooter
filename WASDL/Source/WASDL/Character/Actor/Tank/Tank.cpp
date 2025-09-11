// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "Components/ArrowComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "WASDL/Character/Components/HealthComponent.h"
#include "WASDL/Character/Components/SoundComponent.h"
#include "WASDL/System/Audio/AudioManagerSubsystem.h"
#include "NiagaraFunctionLibrary.h"
// Sets default values
ATank::ATank()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ATank::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ATank, HeadLocation);
	DOREPLIFETIME(ATank, OrderLocation);
}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
	FindTankParts(); // 컴포넌트 태그 넣어줘야함
	if (HealthComponent) HealthComponent->HealthInitialize(70.f);

	
	TargetTag = "Enemy";
	FindRadius = 1200.f;
	TraceRange = FVector(FindRadius, FindRadius, 40.f);
	GetWorld()->GetTimerManager().SetTimer(RegisterDelayHandle, this, &ATank::TryRegister, 0.3f, false);
}

// Called every frame
void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if (!bTankActive) return;
	if (!Head)
	{
		GEngine->AddOnScreenDebugMessage(3, 1.0f, FColor::Red,TEXT("[Tank] Head is Null"));
		return;
	}
	
	if (bSetTankHead)
	{
		if (HasAuthority()) TurnHead(DeltaTime);
		if (DeltaAmount >= RotateTime)
			bSetTankHead =false;
	}

	if (bTankAttack)
	{
		if (bAttacking)
		{
			DeltaAmount += DeltaTime;	
			HeadLocation=  FMath::Lerp(OriginLoc,TargetLoc,
	FMath::Clamp(DeltaAmount/AttackTime,0.f,1.f));
		}
		else
		{
			DeltaAmount -= DeltaTime;
			HeadLocation=  FMath::Lerp(OriginLoc,TargetLoc,
			FMath::Clamp(DeltaAmount/AttackTime,0.f,1.f));
		}
		Head->SetWorldLocation(HeadLocation);
		if (bAttacking &&  DeltaAmount >= AttackTime)
		{
			AttackTime *= 3.f;
			DeltaAmount = AttackTime;
			bAttacking = false; // 공격 종료 후 원상태로 복귀
		}
		if (!bAttacking && DeltaAmount <= 0)
			bTankAttack =false;
	}
}

void ATank::MultiCast_DeathEffectMotion_Implementation()
{
	if (SoundComponent)
	{
		SoundComponent->PlayAtLocation(ESoundName::effect_TankDestroy, GetActorLocation());
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT("[Tank] SoundComponent null")));
	}
}

void ATank::FindTankParts()
{
	Wheel = FindSceneComponentByName(TEXT("Wheel"));
	Body = FindSceneComponentByName(TEXT("Body"));
	Head = FindSceneComponentByName(TEXT("Head"));
	Muzzle = FindSceneComponentByName(TEXT("Muzzle"));


	if (!Wheel) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red,TEXT("[Tank] Wheel Null"));
	if (!Body) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red,TEXT("[Tank] Bdoy Null"));
	if (!Head) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red,TEXT("[Tank] Head Null"));
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White,
		FString::Printf(TEXT("Body : %s, Wheel : %s, Head : %s"),*Body->GetName(), *Wheel->GetName(), *Head->GetName()));
}

USceneComponent* ATank::FindSceneComponentByName(FName Tag) const
{
	if (!ensure(Tag != NAME_None)) return nullptr;

	TInlineComponentArray<USceneComponent*> SceneComps(this);
	for (USceneComponent* Comp : SceneComps)
	{
		if (IsValid(Comp) && Comp->ComponentHasTag(Tag))
			return Comp;
	}
	return nullptr;
}

void ATank::TryRegister()
{
	Super::TryRegister();
	RegisterRevealer(0);
}

void ATank::SetOrderLocation(const FVector& location)
{
	OrderLocation = location;
}

void ATank::TankOnTarget_Implementation()
{
	//  화구 돌리기
	DeltaAmount = 0;
	bSetTankHead = true;

	if (Head) OriginRot = Head->GetComponentRotation().Quaternion();
	
	TankAttackDir = (CurrentTarget->GetActorLocation() - Head->GetComponentLocation()).GetSafeNormal();
	
	FRotator rot = TankAttackDir.Rotation();
	TargetRot = FRotator(0.f, rot.Yaw, 0.f).Quaternion();
	AttackRotation = Head->GetComponentRotation().Quaternion();
	//AttackRotation = TargetRot;
}



void ATank::TankAttack_Implementation()
{
	DeltaAmount =0;
	bTankAttack = true;
	bAttacking = true;
	AttackTime = 0.1f;

	OriginLoc = Head->GetComponentLocation();
	// 목표 헤드 -> 타겟. (반대로 지정할거임)
	if (CurrentTarget)
		TargetLoc =  Head->GetComponentLocation() + (-TankAttackDir * 20.f);
	SoundComponent->PlayAtLocation(ESoundName::effect_Shoot, GetActorLocation());

	if (HasAuthority())
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("attack!"));
		Multicast_MuzzleFlash();
		UGameplayStatics::ApplyDamage(
			CurrentTarget,
			10.f,
			GetController(),
			this,
			UDamageType::StaticClass()
			);
	}
	CurrentTarget = nullptr;
	
}
void ATank::Multicast_MuzzleFlash_Implementation()
{
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(
	   GetWorld(), TankMuzzleFX, Muzzle->GetComponentLocation(), TankAttackDir.Rotation(), FVector(1.f));
}

void ATank::TurnHead_Implementation(float DeltaTime)
{
	DeltaAmount += DeltaTime;
	
	const float Alpha = FMath::Clamp(DeltaAmount / RotateTime, 0.f, 1.f);
	const FQuat NewQ = FQuat::Slerp(OriginRot, TargetRot, Alpha).GetNormalized();
	
	AttackRotation = NewQ;//.Rotator();      // ✅ 진짜로 갱신
	OnRep_AttackRotation();
	//Head->SetWorldRotation(NewQ);         // ✅ 쿼터니언으로 직접 적용 가능
	// 혹은: Head->SetWorldRotation(AttackRotation);
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("[Tank] Turn"));
	/*
	AttackRotation.Quaternion() = FQuat::Slerp(OriginRot.Quaternion(), TargetRot.Quaternion(),// DeltaTime, 8.0f);
FMath::Clamp(DeltaAmount / RotateTime,0.f,1.f)); // 제한
	//AttackRotation = FRotator(0.f, AttackRotation.Yaw ,0.f);//.Quaternion();
	Head->SetWorldRotation(AttackRotation);
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow,TEXT("[Tank] Turn"));*/
}

void ATank::OnRep_AttackRotation()
{
	//Super::OnRep_AttackRotation();
	if (Head)
	{
		Head->SetWorldRotation(AttackRotation);
	}
}

void ATank::HandleDeath()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::Printf(TEXT("Tank HandleDeath")));
	//GetCharacterMovement()->DisableMovement();
	SetActorEnableCollision(false);
	// 필요 시 Ragdoll: GetMesh()->SetSimulatePhysics(true);
	SetLifeSpan(0.5f);
	MultiCast_DeathEffectMotion();
	//SoundComponent->Play2DHandle(ESoundName::effect_TankDestroy);
	//SoundComponent->Play2DHandle(ESoundName::)
}
