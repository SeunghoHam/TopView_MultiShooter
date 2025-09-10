// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UzuhaGameMode.generated.h"
//class UAudioManagerSubsystem;
/**
 * 
 */
UCLASS()
class WASDL_API AUzuhaGameMode : public AGameModeBase
{
	GENERATED_BODY()
	AUzuhaGameMode();
	
public:
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
