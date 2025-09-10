// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyHealthWidget.h"
#include "Components/ProgressBar.h"

void UEnemyHealthWidget::SetHeatlhBarColor(FColor color)
{
	//FColor asdf  = FColor::Blue;
	HealthBar->SetFillColorAndOpacity(color);
}

void UEnemyHealthWidget::UpdateHealthBar(float Current, float Max)
{
	//HealthBar->Percent(Current/Max);
}
