// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget.generated.h"

/**
 * 
 */
class AUzuha;
//class ATeamPlayerState;
//class ATeamGameState;
//class UPlayerListWidget;

UCLASS()
class WASDL_API UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
public:
	
	//UPROPERTY(editanywhere, meta=(BindWidget))
	//UPlayerListWidget* PlayerList;
	
	void SpawnOrderWidget();
	void DestoryOrderWidget();
private:
	//AUzuha* Player;
public:
	//void SetPlayer(AUzuha* _player);
};
