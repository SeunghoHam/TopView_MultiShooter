// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommandCenter.generated.h"

class ATank;
UCLASS()
class WASDL_API ACommandCenter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACommandCenter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

public:	
	float MaxHP;
	UPROPERTY(ReplicatedUsing=OnRep_Health, VisibleInstanceOnly, Category="HP")
	float CurrentHP = 100.f;
	UPROPERTY(Replicated, VisibleInstanceOnly, Category="HP")
	bool bIsDead = false;
	UFUNCTION()
	void OnRep_Health();

	UPROPERTY(EditAnywhere)
	USceneComponent* SC;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UStaticMeshComponent* SpawnPoint;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UStaticMeshComponent* CenterMesh;
	
	UFUNCTION(NetMulticast, Reliable)
	void MultiCast_OnDeath();
	
	void HandleDeath(); // 서버 전용

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TSubclassOf<ATank> TankClass;
	
	void TryCreateTank(const FVector& _spawnPoint);
	
	UFUNCTION(NetMulticast, Reliable)
	void MultiCast_SpawnTank(const FVector_NetQuantize& _spawnPoint);
	
};
