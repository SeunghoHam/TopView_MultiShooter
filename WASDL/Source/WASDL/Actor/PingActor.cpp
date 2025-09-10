// Fill out your copyright notice in the Description page of Project Settings.


#include "PingActor.h"

// Sets default values
APingActor::APingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;                // ★ 전체에게 복제
	SetReplicateMovement(false);       // 움직이지 않으면 false (움직이면 true)
	bOnlyRelevantToOwner = false;      // ★ 오너만 보이지 않게
	bAlwaysRelevant = true;            // (권장) 핑은 짧게 쓰니 항상 관련 처리
	//SetLifeSpan(3.f);                  // 몇 초 뒤 자동 삭제
	//SetNetCullDistanceSquared(FMath::Square(30000.f)); // 멀리서도 보이게(옵션)
}

// Called when the game starts or when spawned
void APingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

