// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraPivotActor.generated.h"

class UCameraComponent;
class USpringArmComponent;
UCLASS()
class WASDL_API ACameraPivotActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACameraPivotActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
public:	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(AllowPrivateAccess))
	UCameraComponent* Camera;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(AllowPrivateAccess))
	USpringArmComponent* SpringArm;

	void CameraInitialize(APlayerController* playerCtrl);
	
	void UpdateCameraLocation(const FVector& _location);
	float DefaultSpringArm = 800.0f;
	float SpringArmAlpha=0.0f;
	void UpdateSpringArm(float _delta);
};
