// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamGameState.h"


void ATeamGameState::AddPlayerState(APlayerState* PlayerState)
{
	Super::AddPlayerState(PlayerState);
	if (ATeamPlayerState* MPS = Cast<ATeamPlayerState>(PlayerState))
	{
		UE_LOG(LogTemp, Warning, TEXT("adding player state %s"), *MPS->GetName());
		OnPlayerStateAdded.Broadcast(MPS);
	}
}

void ATeamGameState::RemovePlayerState(APlayerState* PlayerState)
{
	if (ATeamPlayerState* MPS = Cast<ATeamPlayerState>(PlayerState))
	{
		OnPlayerStateRemoved.Broadcast(MPS);
	}
	Super::RemovePlayerState(PlayerState);
}


void ATeamGameState::GetConnectedPlayers(TArray<ATeamPlayerState*>& OutPlayers) const
{
	OutPlayers.Reset();
	for (APlayerState* PS : PlayerArray) // PlayerArray는 엔진이 자동 복제해서 클라에서도 항상 최신목록 접속가능
	{
		if (ATeamPlayerState* MPS = Cast<ATeamPlayerState>(PS))
		{
			OutPlayers.Add(MPS);
		}
	}
}