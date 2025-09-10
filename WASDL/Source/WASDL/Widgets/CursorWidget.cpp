// Fill out your copyright notice in the Description page of Project Settings.


#include "CursorWidget.h"
#include "Components/Image.h"
//#include "Textures/SlateTextureData.h"

void UCursorWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	ChangeCursorColor(ECursorType::Normal);
	ChangeCursorIcon(ECursorType::Normal);
	
}


void UCursorWidget::ChangeCursorIcon(const ECursorType& _type)
{
	if (_type == ECursorType::Normal)
	{
		CursorImage->SetBrushFromTexture(NormalCursorTexture,true);
	}
	else if (_type == ECursorType::Attack)
	{
		CursorImage->SetBrushFromTexture(AttackCursorTexture,true);
		
	}
	else if (_type == ECursorType::Order)
	{
		CursorImage->SetBrushFromTexture(OrderCursorTexture,true);
	}
}


void UCursorWidget::ChangeCursorColor(const ECursorType& _type)
{
	if (_type == ECursorType::Normal)
	{
		CursorImage->SetBrushTintColor(White);
	}
	else if (_type == ECursorType::Attack)
	{
		CursorImage->SetBrushTintColor(Red);
	}
	else if (_type == ECursorType::Order)
	{
		CursorImage->SetBrushTintColor(Blue);
	}
	CursorImage->SetBrushSize(CursorSize);
}
