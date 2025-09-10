// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FogOfWarManager.h"
#include "FogOfWarSubsystem.generated.h"

/**
 * 
 */

class AFogOfWarManager;
class UFogVisibilityComponent;
class UVisionRevealerComponent;
/*
USTRUCT()
struct FFOW_Revealer
{
	GENERATED_BODY()
	TWeakObjectPtr<USceneComponent> Source;
	float Radius = 1200.f;
};
*/
UCLASS()
class WASDL_API UFogOfWarSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:
	void SetManager(AFogOfWarManager* In) {Manager = In;}
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	//virtual void OnWorldBeginPlay(UWorld& InWorld) override;
	virtual void Deinitialize() override;


	// 등록/해제
	void RegisterRevealer(USceneComponent* Comp, float Radius, const int32 TeamID);
	void UnregisterRevealer(USceneComponent* Comp);

	// 가시 판정
	bool IsLocationVisibleToTeam(const FVector& WorldPos, int32 TeamId) const;

	// 주기 갱신(서버 전용)
	void ServerTick(float DeltaSeconds);

	// 매니저 Actor(마스크 RT 갱신)
	UPROPERTY(editanywhere, Category="FOW")
	TSubclassOf<AFogOfWarManager> ManagerClass = nullptr;
	UPROPERTY()
	AFogOfWarManager* Manager = nullptr;

private:
	//TArray<FFOW_Revealer> TeamRevealer[2]; // 팀 2개 가정
	FTimerHandle TickHandle;

	//static int32 ResolveTeamIdFromOwner(const USceneComponent* Comp);
	void RebuildManagerRevealerList(); // Manager에 소스 전달

private:
	static constexpr int32 MaxTeams = 3;
	TArray<FFOW_Revealer> TeamRevealer[MaxTeams];
};
