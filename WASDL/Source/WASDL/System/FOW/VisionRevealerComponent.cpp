// Fill out your copyright notice in the Description page of Project Settings.


#include "VisionRevealerComponent.h"

#include "FogOfWarSubsystem.h"
#include "FogVisibilityComponent.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"

UVisionRevealerComponent::UVisionRevealerComponent()
{

	SetHiddenInGame(true);
	SetVisibility(false, true);
	SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SetCollisionResponseToAllChannels(ECR_Ignore);
	SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap); // 임시: Pawn만 감지
	bHiddenInGame = false; // 컴포넌트 자체는 숨김X
	PrimaryComponentTick.bCanEverTick = false;
	InitSphereRadius(VisionRadius);
}

void UVisionRevealerComponent::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("VisionRevealer : %s"), *GetOwner()->GetName());
	SetSphereRadius(VisionRadius, true);
	OnComponentBeginOverlap.AddDynamic(this, &UVisionRevealerComponent::OnEnter);
	OnComponentEndOverlap.AddDynamic(this, &UVisionRevealerComponent::OnExit);
}

void UVisionRevealerComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UVisionRevealerComponent, CurrentTeam);
}

void UVisionRevealerComponent::OnRep_CurrentTeam()
{
	// 팀 변경시 해야할 처리
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White,TEXT("Onrep_currentTime"));
	if (UWorld* W = GetWorld())
		if (auto* FOW = W->GetSubsystem<UFogOfWarSubsystem>())
		{
			const int32 LocalTeam = UFogVisibilityComponent::GetLocalTeamId(this);
			if (GetCurrentTeam() == LocalTeam)
				FOW->RegisterRevealer(this, GetScaledSphereRadius(), GetCurrentTeam());
			else
				FOW->UnregisterRevealer(this);
		}
}

void UVisionRevealerComponent::SetVisionRadius(float NewRadius)
{
	VisionRadius = NewRadius;
	SetSphereRadius(VisionRadius, true);
}

bool UVisionRevealerComponent::IsEnemy(const AActor* Other) const
{
	// TODO: IGenericTeamAgentInterface로 팀 비교. 지금은 적/아군 구분 없이 Pawn만 처리한다고 가정.
	return Other && Other != GetOwner();
}

void UVisionRevealerComponent::OnEnter(UPrimitiveComponent* _pri, AActor* Other, UPrimitiveComponent* _pri2, int32 _int,
	bool _bool, const FHitResult& _hitR)
{
	if (!IsEnemy(Other)) return;
	int32& Count = VisibleCount.FindOrAdd(Other);
	++Count;
	// 가시 토글은 UFogVisibilityComponent(복제)로만 처리
	// 보이냐 안보이냐 확인은 FOW Manager에서 확인할거
	//가시/숨김은 서버 Subsystem + UFogVisibilityComponent 복제로만 처리하게 단일화!
}

void UVisionRevealerComponent::OnExit(UPrimitiveComponent* _pri, AActor* Other, UPrimitiveComponent* _pri2, int32 _int)
{
	if (!IsEnemy(Other)) return;
	if (int32* Count = VisibleCount.Find(Other))
	{
		*Count = FMath::Max(0, *Count - 1);
		if (*Count == 0)
		{
			VisibleCount.Remove(Other);
		}
	}
}
