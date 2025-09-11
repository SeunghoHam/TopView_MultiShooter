// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

#include "Components/ProgressBar.h"
#include "Misc/CoreDelegatesInternal.h"
#include "Net/UnrealNetwork.h"
#include "WASDL/Widgets/EnemyHealthWidget.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
	// SetISReplicated 금지
	// SetReplciatedByDefault(true) 사용하기
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UHealthComponent, CurrentHP);
	DOREPLIFETIME(UHealthComponent, bIsDead);
}

void UHealthComponent::HealthInitialize(float _health)//, UProgressBar* _barWidget)
{
	MaxHP = _health;
	CurrentHP = _health;

	UpdateHealthUI();
	//HPBarWidgetInstance = _barWidget;
	//OnRep_CurrentHP(); // 초기화 한번 해주까
}

void UHealthComponent::SetHealthBarHandle(FColor _color)
{
	if (HPBarWidgetInstance)
	{
		UEnemyHealthWidget* widget = Cast<UEnemyHealthWidget>(HPBarWidgetInstance);
		widget->SetHeatlhBarColor(_color);
	}
}

void UHealthComponent::OnRep_CurrentHP()
{
	const float Cur = FMath::Clamp(CurrentHP, 0.f, MaxHP);
	UpdateHealthUI(); // 클라 업데이트
	
	// (선택) OnHealthChanged.Broadcast(Cur, /*Old=*/Cur); // 위젯이 델리게이트로 듣게 해도 좋음
}

void UHealthComponent::UpdateWidget_Server_Implementation(float CurHP)
{
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White,TEXT("Update HP Widget"));
	CurrentHP = CurHP;
	//UpdateHealthUI();
	
	if (GetOwner()->HasAuthority())
	{
		UpdateHealthUI();
	}
}

void UHealthComponent::UpdateHealthUI()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White,TEXT("Update HP Widget"));
	const float Cur= FMath::Clamp(CurrentHP, 0.f, MaxHP);
	if (HPBarWidgetInstance) HPBarWidgetInstance->SetPercent(Cur/ MaxHP); // 서버 업데이트
}

/*
void UHealthComponent::Multicast_OnDeath_Implementation()
{
	
}

void UHealthComponent::Server_ApplyDamage_Implementation(float Amount, AActor* Instigator)
{
	
}
*/