// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CursorWidget.generated.h"

/**
 * 
 */
//class FTexture;
UENUM()
enum class ECursorType : uint8
{
	Normal,
	Attack,
	Order,
};
class UImage;
UCLASS()
class WASDL_API UCursorWidget : public UUserWidget
{
	GENERATED_BODY()
virtual void NativePreConstruct() override;
public:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidget))
	UImage* CursorImage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cursor")
	UTexture2D* NormalCursorTexture = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cursor")
	UTexture2D* AttackCursorTexture = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Cursor")
	UTexture2D* OrderCursorTexture = nullptr;

	
	void ChangeCursorIcon(const ECursorType& _type);
	void ChangeCursorColor(const ECursorType& _type);


	UPROPERTY(EditAnywhere,Category="Cursor") FVector2D CursorSize = FVector2D(32.f, 32.f);
	UPROPERTY(EditAnywhere,Category="Cursor") FLinearColor White = FLinearColor(1.f ,1.f, 1.f,1.f);
	UPROPERTY(EditAnywhere,Category="Cursor") FLinearColor Red = FLinearColor(0.9f ,0.f, 0.f,1.f);
	UPROPERTY(EditAnywhere,Category="Cursor") FLinearColor Blue = FLinearColor(0.f ,0.f, 1.f,1.f);
};
