// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UzuhaAnimInstance.generated.h"

/**
 * 
 */

UENUM(blueprintType)
enum class EAnimState : uint8
{
	Idle,
	Idle_Weapon,
	Shoot,
};
UCLASS()
class WASDL_API UUzuhaAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	void SetAnimState(EAnimState _state){ AnimState = _state; }
	EAnimState AnimState;
	
};
