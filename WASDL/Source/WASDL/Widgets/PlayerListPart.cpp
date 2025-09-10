// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerListPart.h"

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "WASDL/System/TeamPlayerState.h"

void UPlayerListPart::NativeConstruct()
{
	Super::NativeConstruct();
}

void UPlayerListPart::NativeDestruct()
{
	if (PS)
	{
		PS->OnHealthChanged.RemoveDynamic(this, &UPlayerListPart::OnHealthChangedHandler);
		PS = nullptr;
	}
	Super::NativeDestruct();
}

void UPlayerListPart::SetPlayerState(ATeamPlayerState* _ps)
{
	if (!_ps) return;

	// 기존 바인딩 해제 후 교체
	if (PS)
		PS->OnHealthChanged.RemoveDynamic(this, &UPlayerListPart::OnHealthChangedHandler);

	PS = _ps;
	PS->OnHealthChanged.AddDynamic(this, &UPlayerListPart::OnHealthChangedHandler);

	// 초기 표시
	if (PlayerNameText) PlayerNameText->SetText(FText::FromString(PS->GetPlayerName()));
	if (HealthBar)      HealthBar->SetPercent(PS->GetHealth() /PS->GetMaxHealth()); // max값에 100 말고 받아오는식으로 
}

void UPlayerListPart::OnHealthChangedHandler(float current, float max)//float OldHealth, float NewHealth)
{
	if (HealthBar)
		HealthBar->SetPercent(current / max);
}
