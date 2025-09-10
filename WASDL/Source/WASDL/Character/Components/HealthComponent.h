// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChanged, float, NewHP, float, OldHP);
class UProgressBar;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WASDL_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

public:
	void HealthInitialize(float _health);//, UProgressBar* _barWidget);
	UPROPERTY(EditDefaultsOnly) float MaxHP = 100.f;

	UPROPERTY(ReplicatedUsing=OnRep_CurrentHP)
	float CurrentHP;

	UPROPERTY(Replicated, BlueprintReadOnly)
	bool bIsDead = false;


	UPROPERTY(EditAnywhere, Transient) UProgressBar* HPBarWidgetInstance = nullptr; // Transient 권장

	void SetHealthBarHandle(FColor _color);
	
	UFUNCTION()
	void OnRep_CurrentHP(); // Replicated로 클라에서 호출됨

	//UFUNCTION(Server, Reliable)
	//void Server_ApplyDamage(float Amount, AActor* Instigator);
	
	//UFUNCTION(NetMulticast, Reliable)
	//void Multicast_OnDeath();

	UFUNCTION(Server,Reliable)
	void UpdateWidget_Server(float CurHP);
	// HPwidget업데이트를 위한 델리게이트
	
	//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChanged, float, NewHP, float, OldHP);
	//UPROPERTY(BlueprintAssignable) FOnHealthChanged OnHealthChanged;
	
	UFUNCTION()
	void UpdateHealthUI(); // 서버 / 클라 공통 Ui갱신
	
	// 편의 Getter
	float GetHP() const { return CurrentHP; }
	float GetMax() const { return MaxHP; }
	bool  IsDead() const { return bIsDead; }
};
