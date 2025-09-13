// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamPlayerState.h"
#include "Net/UnrealNetwork.h"

void ATeamPlayerState::OnRep_TeamId()
{
	// 값 바뀜 알림용
}


void ATeamPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ATeamPlayerState, Health);
}


void ATeamPlayerState::SetHealth(float current,float max)
{
	if (MaxHealth ==0) MaxHealth = max;
	if (HasAuthority()) // 체력 변경은 서버 권한에서만
	{
		//const float Old = Health;
		Health = FMath::Clamp(current, 0.f ,MaxHealth);
		//LastHealth = Old;
		
		// 서버 즉시 반영
		OnHealthChanged.Broadcast(Health,	MaxHealth);
		
		// 클라이언트는 OnRep_Health에서 받음
	}
}

void ATeamPlayerState::OnRep_Health()
{
	//const float Old = LastHealth;
	//LastHealth = Health;
	OnHealthChanged.Broadcast(Health, Health);
}
