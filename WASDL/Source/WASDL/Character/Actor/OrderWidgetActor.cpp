// Fill out your copyright notice in the Description page of Project Settings.


#include "OrderWidgetActor.h"
#include "WASDL/Widgets/OrderWidget.h"
#include "Components/WidgetComponent.h"
#include "WASDL/Character/Uzuha.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "WASDL/Character/UzuhaController.h"
// Sets default values
AOrderWidgetActor::AOrderWidgetActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates =true;
	SC = CreateDefaultSubobject<USceneComponent>(TEXT("SC"));
	RootComponent=  SC;
	OrderWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("OrderWidget"));
	OrderWidget->SetupAttachment(SC);
	OrderWidget->SetWidgetClass(OrderWidgetClass);
	OrderWidget->SetDrawSize(FVector2D(256, 256));
}
// Called when the game starts or when spawned
void AOrderWidgetActor::BeginPlay()
{
	Super::BeginPlay();
	OrderWidgetInstance = Cast<UOrderWidget>(OrderWidget->GetUserWidgetObject()); //Cast<UOrderWidget> (OrderWidget->GetClass());
}

// Called every frame
void AOrderWidgetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	LookPlayer();	
}

void AOrderWidgetActor::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AOrderWidgetActor, Player);
}

void AOrderWidgetActor::SetPlayer(AUzuha* _player)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green,FString::Printf(TEXT("Name : %s"), *_player->GetName()));
	Player = _player; // Authority랑 무관하게 저장해야 OnRep발동
	
	if (HasAuthority())
	{
		SetOwner(Player);
		//SetOwner(_player ? _player->GetController() : nullptr); // (선택) 리레번시 도움
	}
	// 호스트(리슨서버)의 로컬 화면에도 나오도록
	BindWidgetToLocalPlayer();
	
	//OrderWidgetInstance->SetPlayer(_player);

	/*
	if (GetNetMode() != NM_DedicatedServer) // 뷰포트가 있는 쪽에서만
	{
		//if (APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0))
		if (AUzuhaController* PC = Player->GetPlayerController())
		{
			if (OrderWidget) // UWidgetComponent*
			{
				if (ULocalPlayer* LP = PC->GetLocalPlayer())
				{
					OrderWidget->SetOwnerPlayer(LP);   // ★ 핵심
				}
				//OrderWidget->SetDrawAtDesiredSize(true);
				// (엔진버전에 따라) WidgetComp->SetReceiveHardwareInput(true); // 가능하면 켜기
			}
		}
	}*/
}

void AOrderWidgetActor::OnRep_Player()
{
	// 원격 클라에 Player 포인터가 복제되면 여기로 옴
	BindWidgetToLocalPlayer();
}

void AOrderWidgetActor::LookPlayer()
{
	if (Player == nullptr) return;

	FVector dir = (Player->GetCamera()->GetComponentLocation() - GetActorLocation()).GetSafeNormal();
	FRotator set = dir.Rotation();
	float yawOnly = set.Yaw;
	SetActorRotation(FRotator(0.f, yawOnly, 0.f));
	//OrderWidget->SetWorldRotation(FRotator(0.f, yawOnly, 0.f));
}

void AOrderWidgetActor::BindWidgetToLocalPlayer()
{
	// 뷰포트 없는 데디서버는 스킵
	if (GetNetMode() == NM_DedicatedServer) return;

	// 1) 로컬 플레이어 컨트롤러/로컬플레이어 확보
	AUzuhaController* PC = Cast<AUzuhaController>( Player->GetController()); // UGameplayStatics::GetPlayerController(this, 0);
	if (!PC)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("[OrderWidgtActor] PC return"));
		return;
	}
	ULocalPlayer* LP = PC->GetLocalPlayer();
	if (!LP)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("[OrderWidgtActor] LP return"));
		return;
	}
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green,FString::Printf(TEXT("LP : %s"), *LP->GetName()));
	
	// 2) 이 액터가 가리키는 Player가 “이 클라이언트의 로컬 폰”인지 확인
	//    (로컬 클라만 입력을 받게 하려는 경우)
	/*
	if (Player && !Player->IsLocallyControlled())
	{
		// 이 클라가 소유하지 않는 주문 UI라면 굳이 OwnerPlayer 안 붙임
		// 만약 모든 클라가 클릭 가능해야 한다면 위 if 블록을 제거하세요.
		return;
	}*/

	// 3) OwnerPlayer 바인딩 + 실제 위젯 인스턴스 가져오기
	if (OrderWidget)
	{
		OrderWidget->SetOwnerPlayer(LP);            // ★ 핵심
		OrderWidget->SetWidgetSpace(EWidgetSpace::Screen);

		
		OrderWidgetInstance = Cast<UOrderWidget>( OrderWidget->GetUserWidgetObject());
		if (OrderWidgetInstance)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Blue, TEXT("[OrderWidgtActor] WidgetBindingSuccess"));
			//OrderWidgetInstance = Cast<UOrderWidget>(W);   // ← 컴포넌트가 만든 “진짜” 인스턴스
			if (OrderWidgetInstance && Player)
			{
				OrderWidgetInstance->SetPlayer(Player);    // 데이터 바인딩
			}
		}
	}
}

