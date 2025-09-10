// Fill out your copyright notice in the Description page of Project Settings.


#include "UzuhaGameMode.h"

#include "NavigationSystem.h"
#include "System/TeamGameState.h"
#include "System/TeamPlayerState.h"

AUzuhaGameMode::AUzuhaGameMode()
{
	//GameStateClass  = ATeamGameState::StaticClass();
	//PlayerStateClass = ATeamPlayerState::StaticClass();
}

void AUzuhaGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	// 서버에서만 실행되는지 확인
	//if (GetLocalRole() == ROLE_Authority)
	{
		// 컨트롤러와 Pawn이 유효한지 확인
		if (NewPlayer && NewPlayer->GetPawn())
		{
			UE_LOG(LogTemp, Warning, TEXT("PostLogin: Player '%s' logged in. Controller: '%s', Pawn: '%s'"),
				   *NewPlayer->GetName(),
				   *NewPlayer->GetName(),
				   *NewPlayer->GetPawn()->GetName());
		}
	}
}
