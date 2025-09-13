// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FogVisibilityComponent.generated.h"


UENUM()
enum class ETeamType : uint8
{
	Player =0,
	Enemy = 1,
	Neutral =2,
};
UCLASS( ClassGroup=(FOW), meta=(BlueprintSpawnableComponent) )
class WASDL_API UFogVisibilityComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFogVisibilityComponent();

protected:
	// Called when the game starts
	//virtual void BeginPlay() override;
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPROPERTY(ReplicatedUsing=OnRep_Vis)
	TArray<bool> bVisibleForTeam;
		// 최대 8팀까지 지원 (각 비트 = 팀 가시 여부)
	UPROPERTY(ReplicatedUsing=OnRep_Vis)
	uint8 VisibleMask = 0;
	
	UFUNCTION()
	void OnRep_Vis();

	bool IsVisibleForTeam(int32 TeamId) const;
	void SetVisibleMask(uint8 NewMask);
	// helper
	void SetVisibleForTeam(const int32& TeamId, bool bVisible);
	/*
	FORCEINLINE bool IsVisibleForTeam(int32 TeamId) const
	{
		return (VisibleMask & (1u << TeamId)) != 0;
	}*/
	//void SetVisibleMask(uint8 NewMask) { if (VisibleMask != NewMask){ VisibleMask = NewMask; OnRep_Vis(); } }
	// 로컬 팀 Id를 어디서 가져올지는 프로젝트 규약에 맞춰 설정
	static int32 GetLocalTeamId(const UObject* WorldContext);


};
