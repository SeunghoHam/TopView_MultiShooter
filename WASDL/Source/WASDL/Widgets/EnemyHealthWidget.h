// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnemyHealthWidget.generated.h"

/**
 * 
 */
class UProgressBar;
UCLASS()
class WASDL_API UEnemyHealthWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta= (BindWidget))
	UProgressBar* HealthBar;

	UProgressBar* GetBar(){return HealthBar;}
	void SetHeatlhBarColor(FColor color);

	
	void UpdateHealthBar(float Current, float Max);
};
