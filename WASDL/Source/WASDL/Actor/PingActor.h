// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PingActor.generated.h"

UCLASS()
class WASDL_API APingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
public:	
	
	// FOW를 무시하고 항상 보이게 하고 싶다면(옵션)
	virtual bool IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget,
								  const FVector& SrcLocation) const override
	{
		return true; // 핑은 모두에게 보이게
	}

};
