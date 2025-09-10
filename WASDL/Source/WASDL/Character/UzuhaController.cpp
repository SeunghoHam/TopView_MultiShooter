// Fill out your copyright notice in the Description page of Project Settings.


#include "UzuhaController.h"
//Input
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
// CharacterMovement
#include "GameFramework/Character.h"

// Controller
//#include "Camera/CameraComponent.h"
#include "Uzuha.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "WASDL/System/FOW/VisionRevealerComponent.h"
#include"WASDL/Character/Uzuha.h"

AUzuhaController::AUzuhaController()
{
	
}

void AUzuhaController::BeginPlay()
{
	Super::BeginPlay();

	//Uzuha = Cast<AUzuha>(UGameplayStatics::GetPlayerCharacter(GetWorld(),0));
}

void AUzuhaController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	Uzuha = Cast<AUzuha>(InPawn);
	if (Uzuha) Uzuha->SetController(this); // 서버 클라이언트 부착
	if (!GetWorld()) return;
	GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Yellow,
		FString::Printf(TEXT("%s Possess : PawnName  : %s"),*this->GetName(),* InPawn->GetName()));
	/*
	if (InPawn)
	{
		if (auto* VR = InPawn->FindComponentByClass<UVisionRevealerComponent>())
		{
			// Possesss 에서 설정해도됨
			//VR->SetCurrentTeam(VR->GetCurrentTeam());
		}
	}*/
}

void AUzuhaController::OnRep_Pawn()
{
	Super::OnRep_Pawn();
	Uzuha = Cast<AUzuha>(GetPawn());
	if (Uzuha) Uzuha->SetController(this);        // 클라 측 연결
}

void AUzuhaController::OnUnPossess()
{
	Uzuha = nullptr;
	Super::OnUnPossess();
	
}

void AUzuhaController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
		GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(IMC_Player, 0);
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AUzuhaController::OnMove);
		
		EnhancedInputComponent->BindAction(LMAction, ETriggerEvent::Started, this, &AUzuhaController::OnLM_Press);
		EnhancedInputComponent->BindAction(LMAction, ETriggerEvent::Completed, this, &AUzuhaController::OnLM_Release);
		
		EnhancedInputComponent->BindAction(RMAction	, ETriggerEvent::Started, this, &AUzuhaController::OnRM_Press);
		EnhancedInputComponent->BindAction(RMAction	, ETriggerEvent::Completed, this, &AUzuhaController::OnRM_Release);
		
		EnhancedInputComponent->BindAction(CtrlAction, ETriggerEvent::Started, this, &AUzuhaController::OnCtrl_Press);
		EnhancedInputComponent->BindAction(CtrlAction, ETriggerEvent::Completed, this, &AUzuhaController::OnCtrl_Relesae);
		//EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &AUzuhaController::OnMove);

	}
}

void AUzuhaController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}


void AUzuhaController::OnMove(const FInputActionValue& Value)
{
	if (!IsLocalController()) return;
	FVector2D Input = Value.Get<FVector2D>();
	//GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Yellow, FString::Printf(TEXT("InputY : %f"), Input.Y));
	//GEngine->AddOnScreenDebugMessage(2, 1.f, FColor::Yellow, FString::Printf(TEXT("InputX : %f"), Input.X));
	
	const FRotator ControlRot = GetControlRotation();
	const FRotator YawOnly(0.f, ControlRot.Yaw, 0.f);

	const FVector Forward = FRotationMatrix(YawOnly).GetUnitAxis(EAxis::X);
	const FVector Right = FRotationMatrix(YawOnly).GetUnitAxis(EAxis::Y);
	//FVector ActorLocation = GetOwner()->GetActorLocation();
/*
	GEngine->AddOnScreenDebugMessage(2, 5.f, FColor::Yellow,
		FString::Printf(TEXT("Character : %s"), *Uzuha()->GetName()));
*/	
	GetCharacter()->AddMovementInput(Forward,Input.Y);//* 5.f);
	//Uzuha->AddMovementInput(Forward,Input.Y);//* 5.f);
	GetCharacter()->AddMovementInput(Right,Input.X);
	//Uzuha->AddMovementInput(Right,Input.X);
}

void AUzuhaController::OnLM_Press()
{
	if (!Uzuha) return;
	Uzuha->LM_Press();
}

void AUzuhaController::OnLM_Release()
{
	if (!Uzuha) return;
	Uzuha->LM_Release();
}

void AUzuhaController::OnRM_Press()
{
	if (bIsRMPressed) return;
	bIsRMPressed = true;
	if (!Uzuha)
	{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White,	TEXT("Uzuha is null"));
		return;
	}
	Uzuha->RM_Press();
}

void AUzuhaController::OnRM_Release()
{
	bIsRMPressed =false;
	if (!Uzuha) return;
	Uzuha->RM_Release();
}

void AUzuhaController::OnCtrl_Press()
{
	if (bIsCtrlPressed) return;
	bIsCtrlPressed = true;
	if (!Uzuha) return;
	Uzuha->Ctrl_Press();
}

void AUzuhaController::OnCtrl_Relesae()
{
	bIsCtrlPressed =false;
	if (!Uzuha) return;
	Uzuha->Ctrl_Relesae();
}
