// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemyAnimInstance.generated.h"

/**
 * 
 */
UENUM()
enum class EAnimType : uint8
{
	Idle,
	Walk,
	Attack,
	Death,
};
UCLASS()
class WASDL_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EAnimType AnimType = EAnimType::Idle;

	UFUNCTION(BlueprintCallable)
	void SetAnimType(EAnimType _type){ AnimType = _type;}
};
