// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OrderWidget.generated.h"

/**
 * 
 */
class AUzuha;
class UButton;
class UVerticalBox;

//DECLARE_DELEGATE_TwoParams(FOnHPSet,float,float);
UCLASS(Blueprintable)
class WASDL_API UOrderWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	
	virtual void NativeConstruct() override;
public:
	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UVerticalBox* VerticalBox;

	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UButton* SpawnTankBtn;
	
	void OrderWidgetShow();
	void OrderWidgetHide();

	void SetPlayer(AUzuha* _player);

	UFUNCTION()
	void SpawnTank();
	UFUNCTION()
	void SpawnMissile();
	
	void DestroyWidget();

	// 델리게이트 인스턴스
	//FOnHPSet OnHPSet;
	//void OtherInstance();
private:
	AUzuha* Player;
};


