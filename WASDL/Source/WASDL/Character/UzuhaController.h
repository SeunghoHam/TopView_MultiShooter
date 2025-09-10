// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UzuhaController.generated.h"

/**
 * 
 */
class UInputAction;
class UInputMappingContext;
class AUzuha;
struct FInputActionValue;
UCLASS()
class WASDL_API AUzuhaController : public APlayerController
{
	GENERATED_BODY()

	AUzuhaController();
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnRep_Pawn() override;
	virtual void OnUnPossess() override;
	virtual void SetupInputComponent() override;
	virtual void Tick(float DeltaSeconds) override;

	
public:

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* IMC_Player;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* LMAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* RMAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* CtrlAction;


private:
	void OnMove(const FInputActionValue& Value);
	void OnLM_Press();
	void OnLM_Release();
	void OnRM_Press();
	void OnRM_Release();
	void OnCtrl_Press();
	void OnCtrl_Relesae();


	bool bIsRMPressed = false;
	bool bIsCtrlPressed= false;
	AUzuha* Uzuha;
};
