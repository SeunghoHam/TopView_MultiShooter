// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "TeamPlayerState.h"

#include "TeamGameState.generated.h"

/**
 * 
 */
// 접속자 추가/제거 알림 (UI 갱신용)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateAdded, ATeamPlayerState*, PlayerState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateRemoved, ATeamPlayerState*, PlayerState);

UCLASS()
class WASDL_API ATeamGameState : public AGameState
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable, Category="Players")
	FOnPlayerStateAdded OnPlayerStateAdded;

	UPROPERTY(BlueprintAssignable, Category="Players")
	FOnPlayerStateRemoved OnPlayerStateRemoved;

	// 현재 접속 중인 모든 플레이어 상태 반환
	UFUNCTION(BlueprintCallable, Category="Players")
	void GetConnectedPlayers(TArray<ATeamPlayerState*>& OutPlayers) const;
	
	
protected:
	virtual void AddPlayerState(APlayerState* PlayerState) override;
	virtual void RemovePlayerState(APlayerState* PlayerState) override;
};
