// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WASDL/Character/BaseCharacter.h"
#include "BaseEnemy.generated.h"

class UVisionRevealerComponent;
class UFogVisibilityComponent;
class UWidgetComponent;
class UEnemyHealthWidget;
class UAnimationControlComponent;
class ACommandCenter;
class UEnemyAnimInstance;
class UHealthComponent;

//class UAnimMontage;
struct FTimerHandle;
UCLASS()
class WASDL_API ABaseEnemy : public ABaseCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	// virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	//virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	// Called every frame

	virtual void Tick(float DeltaTime) override;
public:
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(AllowPrivateAccess))
	UAnimationControlComponent* AnimationComponent;

	//virtual bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation) const override;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UEnemyAnimInstance* AnimInstance = nullptr;

	//UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Setting)
	//TObjectPtr<UAnimMontage> AttackMontage;
	
	//UPROPERTY()
	//TArray<AActor*> CommandCenter;
	
	//UPROPERTY()
	//ACommandCenter* CommandCenterInstance;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FVector GetTargetLocation();
	
		
	virtual void OnRep_AttackRotation() override;
	//UFUNCTION(BlueprintCallable, BlueprintPure)
	//AActor* GetTarget();

	//UFUNCTION(BlueprintCallable, BlueprintPure)
	//bool GetIsTargetNear();
	
	
	//UFUNCTION(BlueprintCallable)
	//FVector GetTargetLocation(); // BTT 에서 이 함수 받아올거임

	//UPROPERTY(Replicated)
	//AActor* CurrentTarget = nullptr; // 커맨드 센터가 아닌 타겟

	virtual bool GetIsTargetNear() override;
	
	UFUNCTION(BlueprintCallable)
	void TryAttack(); // BTT에서 공격 실행
	
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_AttackMotionEffect(FVector _dir);



	// 공격 모션 만들기
	void AttackPreset();
	void AttackReset();
	FVector Astart=  FVector::ZeroVector;
	FVector Aend = FVector::ZeroVector;
	FRotator ARstart = FRotator::ZeroRotator;
	FRotator ARend = FRotator::ZeroRotator;
	
	UPROPERTY(Replicated)
	FVector Acurrent = FVector::ZeroVector;
	UPROPERTY(Replicated)
	FQuat ARcurrent = FQuat::Identity;
	bool bAttacking = false;
	bool bAttackPart = true;
	float DurationTime = 0.f;
	float AttackTime = 0.15f;
	
	
	AActor* TraceArond(float _radius);
	//AActor* FindNearestEnemy_Registry(FName _tag ,float MaxRadius);
	
	FVector AttackDir;

	//float MaxHP;
	
	//UPROPERTY(ReplicatedUsing=OnRep_Health, VisibleInstanceOnly, Category="HP")
	//float CurrentHP;
	//UPROPERTY(Replicated, VisibleInstanceOnly, Category="HP")
	//bool bIsDead = false;
	
	//UFUNCTION()
	//void OnRep_Health();

	UFUNCTION(BlueprintCallable)
	void TaskAttackEnd();
	
	//UFUNCTION(NetMulticast, Reliable)
	//void MultiCast_OnDeath();
	
	//void Server_OnDeath();
	//void HandleDeath();
	virtual void HandleDeath() override;
	virtual void Server_OnDeath() override;
	virtual void Multicast_OnDeath() override;
	

	//virtual void TryRegister() override;
	//void TryRegisterRevealer();
	FTimerHandle RegisterDelayHandle;
};

