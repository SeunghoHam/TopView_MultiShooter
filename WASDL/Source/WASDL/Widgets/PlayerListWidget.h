// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerListWidget.generated.h"

/**
 * 
 */
class UVerticalBox;
class UPlayerWidget;
class ATeamGameState;
class ATeamPlayerState;
class UPlayerListPart;
UCLASS()
class WASDL_API UPlayerListWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	virtual void NativeConstruct() override;

	void TryInitPlayerList();
	
	//UFUNCTION(Server,Reliable)
	//void Server_InitPlayerList();

	UFUNCTION(NetMulticast,Reliable)
	void Multicast_PlayerListRebuild();
	
	// 위젯 클래스(한 행)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI")
	TSubclassOf<UPlayerListPart> PlayerRowClass;
	
	//void Binding();
	
protected:
	UPROPERTY(meta=(BindWidget))
	UVerticalBox* ListBox;

private:
	UPROPERTY()
	ATeamGameState* MyGS;
	UPROPERTY()
	TMap<ATeamPlayerState*, UPlayerListPart*> RowMap;

	void RebuildAll();
	void HandlePlayerAdded(ATeamPlayerState* PS);
	void HandlePlayerRemoved(ATeamPlayerState* PS);
};
