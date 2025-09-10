// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TeamPlayerState.generated.h"

/**
 * 
 */

// 체력 변경 브로드캐스트(블루프린트에서도 바인딩 가능)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChanged, float, ChangeHealth, float, MaxHealth);
UCLASS()
class WASDL_API ATeamPlayerState : public APlayerState
{
	GENERATED_BODY()
	//ATeamPlayerState();
	//virtual void BeginPlay() override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_TeamId, Category="Team")
	uint8 TeamId = 0; // 0=아군, 1=적 (원하면 enum 사용)

	UFUNCTION() void OnRep_TeamId();

	// 헬퍼
	UFUNCTION(BlueprintCallable, Category="Team")
	void SetTeamId(uint8 InId) { TeamId = InId; OnRep_TeamId(); }

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	//virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& Out) const override;

	// ↓플레이어 체력 공유하기

	// 서버에서만 호출: 권한 체크 포함
	UFUNCTION(BlueprintCallable, Category="Health")
	void SetHealth(float current,float max);

	UFUNCTION(BlueprintPure, Category="Health")
	float GetHealth() const { return Health; }

	UFUNCTION()
	float GetMaxHealth() const {return MaxHealth;}

	UPROPERTY(BlueprintAssignable, Category="Health")
	FOnHealthChanged OnHealthChanged;

protected:
	UPROPERTY(ReplicatedUsing=OnRep_Health)
	float Health;

	float MaxHealth =0;

	UFUNCTION()
	void OnRep_Health();

	//virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
	//float LastHealth;
	
};
