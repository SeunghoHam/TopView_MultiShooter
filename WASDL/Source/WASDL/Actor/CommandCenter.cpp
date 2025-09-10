// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandCenter.h"

#include "Net/UnrealNetwork.h"
#include "WASDL/Character/Actor/Tank/Tank.h"

// Sets default values
ACommandCenter::ACommandCenter()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	//SetReplicates(true);
	SetCanBeDamaged(true);

	CenterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CommandCenterMesh"));
	RootComponent = CenterMesh;
	
	SpawnPoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpawnPoint"));
	SpawnPoint->SetupAttachment(RootComponent);

	
	//SpawnPoint->SetCollisionEnabled();
}

// Called when the game starts or when spawned
void ACommandCenter::BeginPlay()
{
	Super::BeginPlay();
	CurrentHP = 20.0f;
	MaxHP = 20.f;
}

float ACommandCenter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
                                 class AController* EventInstigator, AActor* DamageCauser)
{
	const float Applied = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser); // ★
	if (!HasAuthority() || bIsDead) return 0.0f;

	const float OldHP = CurrentHP;
	CurrentHP = FMath::Clamp(CurrentHP - FMath::Max(0.f, DamageAmount),
	                         0.f,
	                         MaxHP);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta, FString::Printf(TEXT("currnethp : %f"), CurrentHP));

	if (CurrentHP <= 0 && !bIsDead)
	{
		bIsDead = true;
		HandleDeath(); // 서버에서만 실행되게
		MultiCast_OnDeath(); // FX 애니메이션 브로드캐스트
	}
	return OldHP - CurrentHP;
}

// Called every frame
void ACommandCenter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACommandCenter::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACommandCenter, CurrentHP);
	DOREPLIFETIME(ACommandCenter, bIsDead);
}

void ACommandCenter::OnRep_Health()
{
}

void ACommandCenter::HandleDeath()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString::Printf(TEXT("CommandCenterDestroy")));
	SetActorEnableCollision(false);
}

void ACommandCenter::TryCreateTank(const FVector& _spawnPoint)
{
	MultiCast_SpawnTank(_spawnPoint);

}

void ACommandCenter::MultiCast_SpawnTank_Implementation(const FVector_NetQuantize& _spawnPoint)
{
	if (HasAuthority())
	{

		if (TankClass)
		{
			//FActorSpawnParameters params;
			ATank* tank = GetWorld()->SpawnActor<ATank>(TankClass, SpawnPoint->GetComponentLocation(),
														SpawnPoint->GetComponentRotation());
			tank->SetOrderLocation(_spawnPoint);
		}	
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("[CommandCenter] TankClass null"));
		}

	}
}


void ACommandCenter::MultiCast_OnDeath_Implementation()
{
}
