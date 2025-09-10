// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerListWidget.h"

#include "PlayerListPart.h"
#include "PlayerWidget.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "ProfilingDebugging/BootProfiling.h"
#include "WASDL/System/TeamPlayerState.h"
#include "WASDL/System/TeamGameState.h"
void UPlayerListWidget::NativeConstruct()
{
	Super::NativeConstruct();

	MyGS = Cast<ATeamGameState>(UGameplayStatics::GetGameState(this));
	if (!MyGS || !PlayerRowClass || !ListBox) return;

	// 초기 전체 구성
	RebuildAll();

	// 동적 입퇴장 반영
	MyGS->OnPlayerStateAdded.AddDynamic(this, &UPlayerListWidget::HandlePlayerAdded);
	MyGS->OnPlayerStateRemoved.AddDynamic(this, &UPlayerListWidget::HandlePlayerRemoved);
}

void UPlayerListWidget::TryInitPlayerList()
{
	UE_LOG(LogTemp, Warning, TEXT("InitPlayerList"));
	Multicast_PlayerListRebuild();
}

void UPlayerListWidget::Multicast_PlayerListRebuild_Implementation()
{
	RebuildAll();
}


void UPlayerListWidget::RebuildAll()
{
	ListBox->ClearChildren();
	RowMap.Empty();

	TArray<ATeamPlayerState*> Players;
	MyGS->GetConnectedPlayers(Players);

	// 로컬 플레이어는 제외(“다른 플레이어”만)
	APlayerController* PC = GetOwningPlayer();
	if (!PC) return;
	ATeamPlayerState* LocalPS = PC ? PC->GetPlayerState<ATeamPlayerState>() : nullptr;

	UE_LOG(LogTemp, Warning, TEXT("[ListWidget] Player Count : %d"), Players.Num());
	// ★ 원하는 규칙으로 정렬 (예: PlayerId 오름차순)
	/*
	Players.Sort([](const ATeamPlayerState* A, const ATeamPlayerState* B)
		{
		return A->GetPlayerId() < B->GetPlayerId();
		});
	*/	
	for (ATeamPlayerState* PS : Players)
	{
		//if (PS && PS != LocalPS) // 이 옵션 켜있으면 리스트에 본인 제외
			HandlePlayerAdded(PS);
	}
}

void UPlayerListWidget::HandlePlayerAdded(ATeamPlayerState* PS)
{
	if (!PS || RowMap.Contains(PS)) return;

	if (PlayerRowClass == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("[PlayerListWidget]  PlayerlistPart WBP is Null"));
	}
	if (UPlayerListPart* Row = CreateWidget<UPlayerListPart>(GetOwningPlayer(), PlayerRowClass))
	{
		// 기존 PlayerWidget은 AUzuha*를 받도록 되어 있었음 → PlayerState 기반으로 변경 필요
		
		Row->SetPlayerState(PS);
		ListBox->AddChild(Row);
		RowMap.Add(PS, Row);
	}
}

void UPlayerListWidget::HandlePlayerRemoved(ATeamPlayerState* PS)
{
	if (UPlayerListPart** Found = RowMap.Find(PS))
	{
		if (UPlayerListPart* Row = *Found)
		{
			Row->RemoveFromParent();
		}
		RowMap.Remove(PS);
	}
}
