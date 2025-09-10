// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WASDL/Character/BaseCharacter.h"
#include "NiagaraComponent.h"
#include "Tank.generated.h"

class UWidgetComponent;
class UHealthComponent;
class UFogVisibilityComponent;
class UVisionRevealerComponent;
class UEnemyHealthWidget;
UCLASS()
class WASDL_API ATank : public ABaseCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATank();

//protected:
	// Called when the game starts or when spawned
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category="Tank")
	USceneComponent* Wheel;
	//UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category="Tank")
	//USceneComponent* WheelInstance;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Tank")
	USceneComponent* Body;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Tank")
	USceneComponent* Head;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Tank")
	USceneComponent* Muzzle;

	
	void FindTankParts();
	USceneComponent* FindSceneComponentByName(FName TargetName) const;
	UFUNCTION(Netmulticast,Unreliable)
	void MultiCast_DeathEffectMotion();

	virtual void TryRegister() override;

	UFUNCTION(NetMulticast,Unreliable,BlueprintCallable)
	void TankOnTarget();

	
	void SetOrderLocation(const FVector& location) {OrderLocation = location;}
	UFUNCTION(BlueprintCallable)
	FVector GetOrderLocation()const {return OrderLocation;}


	UPROPERTY(EditAnywhere)
	UNiagaraSystem* TankMuzzleFX;
	
	UPROPERTY(Replicated)
	FVector OrderLocation;
	UFUNCTION(BlueprintCallable)
	bool TankIsActive()const { return bTankActive; } // 스폰 후 작전지역으로 이동
	bool bTankActive = true;
	
	UPROPERTY()
	bool bSetTankHead=  false;
	FQuat OriginRot;
	FQuat TargetRot;
	//FRotator CurrentRot;
	float DeltaAmount=  0.0f;
	float RotateTime= 0.8f;

	UFUNCTION(NetMulticast,Reliable)
	void TurnHead(float DeltaTime);

	virtual void OnRep_AttackRotation() override;
	FVector TankAttackDir= FVector::ZeroVector;


	UFUNCTION(Netmulticast,Unreliable)
	void Multicast_MuzzleFlash();
	
	UFUNCTION(NetMulticast, Unreliable,BlueprintCallable)
	void TankAttack();
	UPROPERTY()
	bool bTankAttack=  false;
	bool bAttacking = true;
	FVector OriginLoc;
	FVector TargetLoc;
	UPROPERTY(Replicated)
	FVector	HeadLocation;
	float AttackTime = 0.2f;
	
	bool bTargetActive = false;

	
	void HandleDeath() override;

};

