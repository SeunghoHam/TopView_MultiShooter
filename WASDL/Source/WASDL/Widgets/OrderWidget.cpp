// Fill out your copyright notice in the Description page of Project Settings.


#include "OrderWidget.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "WASDL/Character/Uzuha.h"

void UOrderWidget::NativeConstruct()
{
	Super::NativeConstruct();
	/*
	SpawnTankBtn->OnClicked.RemoveAll(this); // 중복 방지
	SpawnTankBtn->OnClicked.AddUniqueDynamic(this, &UOrderWidget::SpawnTank);
	*/
}

void UOrderWidget::OrderWidgetShow()
{
	VerticalBox->SetRenderScale(FVector2D(1.0f, 1.0f));// = WidgetTransform;
}

void UOrderWidget::OrderWidgetHide()
{
	VerticalBox->SetRenderScale(FVector2D(0.0f, 0.0f));// = WidgetTransform;
}

void UOrderWidget::SetPlayer(AUzuha* _player)
{
	Player = _player;
	SpawnTankBtn->OnClicked.RemoveAll(this); // 중복 방지
	SpawnTankBtn->OnClicked.AddUniqueDynamic(this, &UOrderWidget::SpawnTank);
}

void UOrderWidget::SpawnMissile()
{
	
}

void UOrderWidget::SpawnTank()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow,TEXT("[OrderWidget] SpawnTank"));
	// 플레이어쪽의 스폰탱크 가져오기
	DestroyWidget();
}

void UOrderWidget::DestroyWidget()
{
	if (Player)
	{
		Player->DestroyOrderWidget(true);
		//Player->Server_TryTankSpawn();
	}
}
