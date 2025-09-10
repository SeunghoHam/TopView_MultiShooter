// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraPivotActor.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ACameraPivotActor::ACameraPivotActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

}

// Called when the game starts or when spawned
void ACameraPivotActor::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void ACameraPivotActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACameraPivotActor::CameraInitialize(APlayerController* playerCtrl)
{
	SpringArm->TargetArmLength = DefaultSpringArm;
	SpringArm->SetRelativeRotation(FRotator(-50.f, 0.f, 0.f));
	SpringArm->SetUsingAbsoluteRotation(true); // 컨트롤러 회전에 영향받지 않게
	SpringArm->bUsePawnControlRotation = false;
	SpringArm->bDoCollisionTest = false;

	Camera->bUsePawnControlRotation = false;

	//APlayerController* PC = Cast<APlayerController>(UGameplayStatics::GetPlayerController(GetWorld(),0));
	playerCtrl->SetViewTarget(this);
	
}

void ACameraPivotActor::UpdateCameraLocation(const FVector& _location)
{
	SetActorLocation(_location);
}

void ACameraPivotActor::UpdateSpringArm(float _delta)
{
	
}

