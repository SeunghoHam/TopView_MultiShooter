// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UzuhaAnimMontageMap.generated.h"

/**
 * 
 */
UCLASS()
class WASDL_API UUzuhaAnimMontageMap : public UDataAsset
{
	GENERATED_BODY()
	
public:
	// Use soft references so content can be streamed and cooking references are preserved
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess))
	TMap<FName, TSoftObjectPtr<UAnimMontage>> MontageMap;
	//TMap<FName, TObjectPtr<UAnimMontage>> MontageMap;
	//TMap<FName, UAnimMontage*> MontageMap;
};
