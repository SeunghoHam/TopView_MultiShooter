// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerListPart.generated.h"

/**
 * 
 */
class UTextBlock;
class UProgressBar;
class UPlayerListWidget;

class ATeamPlayerState;
UCLASS()
class WASDL_API UPlayerListPart : public UUserWidget
{
	GENERATED_BODY()
	
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

public:
	void SetPlayerState(ATeamPlayerState* _ps);
	
protected:
	UPROPERTY(meta=(BindWidget), BlueprintReadOnly)
	UTextBlock* PlayerNameText;

	UPROPERTY(meta=(BindWidget), BlueprintReadOnly)
	UProgressBar* HealthBar;


	//UPROPERTY(meta=(BindWidget), BlueprintReadOnly)
	//UPlayerListWidget* ListWidget;

private:
	UPROPERTY()
	ATeamPlayerState* PS;

	UFUNCTION()
	void OnHealthChangedHandler(float current, float max);//float OldHealth, float NewHealth);
};
