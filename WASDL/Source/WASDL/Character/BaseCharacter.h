// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UFogVisibilityComponent;
class UVisionRevealerComponent; // 필요한가?
class UAnimationControlComponent;
class UHealthComponent;
class USoundComponent;
class UEnemyHealthWidget;
class UWidgetComponent;
class ACommandCenter;
struct FTimerHandle;

UCLASS()
class WASDL_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	ABaseCharacter();
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UFogVisibilityComponent* VisibilityComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UVisionRevealerComponent* VisionRevealerComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	USoundComponent* SoundComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UHealthComponent* HealthComponent;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UWidgetComponent* HealthWidget;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<UEnemyHealthWidget> HealthWidgetClass;
	
	UPROPERTY()	
	UEnemyHealthWidget* HealthWidgetInstance;



	//BlueprintTask에서 사용함
	UFUNCTION(BlueprintCallable, BlueprintPure)
	AActor* GetTarget();
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual bool GetIsTargetNear(); // CurrentTarget 여기서 결정됨

	
	
	UPROPERTY(Replicated) // Replicateed
	AActor* CurrentTarget = nullptr;

	UPROPERTY(ReplicatedUsing=OnRep_AttackRotation) // Replicated
	FQuat AttackRotation;

	UPROPERTY()
	TArray<AActor*> CommandCenter;
	
	UPROPERTY()
	ACommandCenter* CommandCenterInstance;

	UFUNCTION()
	virtual void OnRep_AttackRotation();
	
	FName TargetTag = "";
	float FindRadius = 0.f; // 적 공격 전 탐색용. 다음 적 탐색은 FLT_MAX 범위로 검사함

	UFUNCTION()
	virtual void CheckCurrentHP() {};
	float GetDamage = 0.f;
	FVector TraceRange = FVector(50.f, 50.f, 25.f);
	AActor* TraceArond(float _radius); // 공격범위 내부에 공격할 적 찾기
	AActor* FindNearestTarget_Registry(FName _tag ,float MaxRadius); // MoveTo까지의 적 찾기

	UFUNCTION(NetMulticast,Reliable)
	virtual void Multicast_OnDeath();
	
		
	UFUNCTION(Server,Reliable)
	virtual void Server_OnDeath();
	virtual void HandleDeath();
	//virtual void TryRegister(){};
	void ObjectRegisterRevealer(int _TeamNumber);
	FTimerHandle RegisterDelayHandle;
	//TObjectPtr<ACommandCenter> CommandCenterInst;
};
