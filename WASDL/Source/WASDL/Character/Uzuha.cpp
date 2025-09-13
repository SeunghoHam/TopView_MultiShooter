// Fill out your copyright notice in the Description page of Project Settings.


#include "Uzuha.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "UzuhaController.h"
#include "Kismet/GameplayStatics.h"
#include "UzuhaController.h"
#include "Blueprint/UserWidget.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/UzuhaAnimInstance.h"
#include "EngineUtils.h"
// FOW
#include "MathUtil.h"
// Sets default values
#include "Components/AnimationControlComponent.h"
#include "NiagaraFunctionLibrary.h"

#include "WASDL/Enemy/BaseEnemy.h"

// Widget
#include "Actor/OrderWidgetActor.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/HealthComponent.h"
#include "Components/SoundComponent.h"
#include "Components/WidgetComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"
#include "WASDL/Actor/CommandCenter.h"
#include "WASDL/Actor/PingActor.h"
#include "WASDL/System/TeamPlayerState.h"
#include "WASDL/System/Audio/AudioManagerSubsystem.h"
#include "WASDL/System/FOW/FogOfWarSubsystem.h"
#include "WASDL/System/FOW/FogVisibilityComponent.h"
#include "WASDL/System/FOW/VisionRevealerComponent.h"
#include "WASDL/Widgets/CursorWidget.h"
#include "WASDL/Widgets/OrderWidget.h"
#include "WASDL/Widgets/PlayerWidget.h"
#include "WASDL/Widgets/EnemyHealthWidget.h"
#include "WASDL/Widgets/PlayerListWidget.h"

AUzuha::AUzuha()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	//bReplicateMovement = true;
	//SetReplicates(true);
	//bCanBeDamaged = true;
	SetCanBeDamaged(true);
	//SetReplicateMovement(true);
	
	//bOnlyRelevantToOwner = false; // 소유자 관련성 끄기 (원격 클라에 안보임)
	
	NetUpdateFrequency = 30.f;
	MinNetUpdateFrequency = 15.f;
	
	// 컨트롤러 회전은 사용하지 않음 (탑뷰용)
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	CameraPivot = CreateDefaultSubobject<USceneComponent>(TEXT("CameraPivot"));
	CameraPivot->SetupAttachment(RootComponent);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(CameraPivot);
	SpringArm->TargetArmLength = DefaultSpringArm;
	SpringArm->SetRelativeRotation(FRotator(-40.f, 0.f, 0.f));
	SpringArm->SetUsingAbsoluteRotation(true); // 컨트롤러 회전에 영향받지 않게
	SpringArm->bUsePawnControlRotation = false;
	SpringArm->bDoCollisionTest = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	Camera->bUsePawnControlRotation = false;

	
	// 이동 방향을 바라보도록
	auto* Move = GetCharacterMovement();
	//Move->SetMovementMode(MOVE_Walking);
	Move->MaxWalkSpeed = 600.f;
	Move->bOrientRotationToMovement = true; // 기본 이동방향 바라보기
	Move->bUseControllerDesiredRotation = false; // 기본 : 컨트롤러 회전 사용 X
	Move->RotationRate = FRotator(0.f, 720.f, 0.f);
	//Move->SetPlaneConstraintNormal(FVector::UpVector); // (0,0,1) ← 이게 정답
	// 혹시 모르니 원점도 초기화
	//Move->SetPlaneConstraintOrigin(FVector::ZeroVector);
	//Move->bConstrainToPlane = false;
	
	// 탑뷰 평면 제약 쓰려면 ‘Z’로!
	Move->SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting::Z);  // 축 고정
	// 스프링암 + 카메라 (탑뷰 각도)
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	VisibilityComponent = CreateDefaultSubobject<UFogVisibilityComponent>(TEXT("VisibilityComponent"));
	VisionRevealerComponent = CreateDefaultSubobject<UVisionRevealerComponent>(TEXT("VisionRevealer"));
	VisionRevealerComponent->SetupAttachment(RootComponent);
	
	SoundComponent = CreateDefaultSubobject<USoundComponent>(TEXT("SoundComponent"));
		
	HealthWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBarWidget"));
	HealthWidget->SetupAttachment(RootComponent);
	
	HealthWidget->SetWidgetSpace(EWidgetSpace::World); // 월드 공간 유지
	HealthWidget->SetDrawSize(FVector2D(128,10));
	//HealthWidget->SetDrawAtDesiredSize(true);
	HealthWidget->SetWidgetClass(HealthWidgetClass);
	//HealthWidget->SetWidgetClass(HealthWidgetClass);
	HealthWidget->SetTwoSided(true); // 필요 시 양면 렌더
	HealthWidget->SetUsingAbsoluteRotation(true); // 액터 회전 영향 제외(권장)

	// ★ 가시성/소유자 플래그를 모두 해제 (누구에게나 보이도록)
	HealthWidget->SetHiddenInGame(false);
	HealthWidget->SetVisibility(true, true);
	HealthWidget->SetOnlyOwnerSee(false);
	HealthWidget->SetOwnerNoSee(false);
	
	AnimationComponent = CreateDefaultSubobject<UAnimationControlComponent>(TEXT("AnimationComponent"));
	
	/*
	static ConstructorHelpers::FClassFinder<UCursorWidget> CursorBPClass(TEXT("/Game/Widgets/WBP_Cursor.WBP_Cursor_C"));
	if (CursorBPClass.Succeeded())
	{
		CursorWidgetClass = CursorBPClass.Class;
	}
	else GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("[Uzuha] CursorWidget null"));
	*/
}

// Called when the game starts or when spawned
void AUzuha::BeginPlay()
{
	Super::BeginPlay();
	SetAttackModeLook(false);
	AnimInstance = Cast<UUzuhaAnimInstance>(GetMesh()->GetAnimInstance());

	if (HealthComponent)
	{
		HealthComponent->HealthInitialize(120.0f);
		//HealthComponent->
	}
	
	
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("CommandCenter"), CommandCenter);
	if (CommandCenter.Num() != 0)
	{
		CommandCenterInstance = Cast<ACommandCenter>(CommandCenter.IsValidIndex(0) ? CommandCenter[0] : nullptr);
		//GEngine->AddOnScreenDebugMessage(-1, 3.0F, FColor::Yellow,
		//                               FString::Printf(
		//	                                 TEXT("Get CommandCenter : %s"), *CommandCenterInstance->GetName()));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0F, FColor::Red, TEXT("[Uzuha] CommandCenter"));
	}

	TWeakObjectPtr<AUzuha> Weak(this);
	GetWorld()->GetTimerManager().SetTimer(RegisterDelayHandle, [Weak,this]()
	{
		if (!Weak.IsValid())return;
		RegisterRevealer();
	}, 0.3,false);
	//GetWorld()->GetTimerManager().SetTimer(ListWidgetTimer, this, &AUzuha::ListWidgetInit, 1.0f, false);
}

void AUzuha::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(AUzuha, ReplicatedAimYaw,COND_SkipOwner); // 소유자에게 불필요한 복제 차단함
	//DOREPLIFETIME(AUzuha, CurrentHP);
	//DOREPLIFETIME(AUzuha, bIsDead);
}

float AUzuha::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator,
	AActor* DamageCauser)
{
	if (//!HasAuthority() ||
		HealthComponent->bIsDead) return 0.0f;
	
	const float OldHP = HealthComponent->CurrentHP;

	HealthComponent->CurrentHP = FMath::Clamp(HealthComponent->CurrentHP - DamageAmount, //FMath::Max(0.f, DamageAmount),
							 0.f,
							 HealthComponent->MaxHP);


	if (GetNetMode() == NM_ListenServer)
	{
		HealthComponent->OnRep_CurrentHP();
	}
	
	//HealthComponent->UpdateHealthUI();
	
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Magenta, FString::Printf(TEXT("GetDamaged : %f"), HealthComponent->CurrentHP));
	/*
	ATeamPlayerState* PS = GetPlayerState<ATeamPlayerState>();
	if (PS)
	{
		const float NewHP = FMath::Clamp(PS->GetHealth() - DamageAmount, 0.f, 100.f);
		PS->SetHealth(NewHP, HealthComponent->MaxHP); // → 모든 클라 UI가 OnRep로 갱신됨
	}
	*/
	
	if (HealthComponent->CurrentHP <= 0 && !HealthComponent->bIsDead)
	{
		HealthComponent->bIsDead = true;
		HandleDeath(); // 서버에서만 실행되게
		//MultiCast_OnDeath(); // FX 애니메이션 브로드캐스트
	}
	
	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}

void AUzuha::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	PC = Cast<AUzuhaController>(NewController);   // ✅ 서버에서 즉시 연결
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green,
	//FString::Printf(TEXT("%s Controller  : %s"), *this->GetName(), *PC->GetName()));
	EnsureLocalUI();      // 로컬이면 UI 보장
}

void AUzuha::OnRep_Controller()
{
	Super::OnRep_Controller();
	PC = Cast<AUzuhaController>(GetController());  // ✅ 클라에서 복제 완료 시점에 연결
	EnsureLocalUI();                               // 로컬이면 UI 보장
}

// Called every frame
void AUzuha::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateAimRotation(); // 매 프레임 커서 방향으로 회전
	VisionRevealerComponent->SetWorldLocation(GetActorLocation());
	auto* Move = GetCharacterMovement();
	const float V = Move->Velocity.Size();
	const float A = Move->GetCurrentAcceleration().Size();
	const bool OnGround = Move->IsMovingOnGround();
	const auto Mode = Move->MovementMode;

	/*
	GEngine->AddOnScreenDebugMessage(11, 0.f, FColor::Cyan,
	  FString::Printf(TEXT("Vel=%.1f  Acc=%.1f  Mode=%d  OnGround=%d"),
	  V, A, (int)Mode, OnGround));
*/
	
	if (CameraPivot)
	{
		UpdateSpringArm(DeltaTime);
		//CameraPivot->UpdateCameraLocation(CameraPoint);
		if (bTargetCamOn)
		{
			SetNewCameraPivot();
		}
		else
		{
			CameraPoint = GetActorLocation();
		}
	}
	const FVector WidgetLoc = GetActorLocation() + FVector(0.f, 0.f, 150.f);
	HealthWidget->SetWorldLocation(WidgetLoc);
	FRotator rot = FRotator(180.f, 0.f, 0.f);
	HealthWidget->SetWorldRotation(rot.Quaternion());
	if (!PC) return;

	return;
	// 1) 위치 업데이트(이미 하고 있다면 유지)
	//const FVector WidgetLoc = GetActorLocation() + FVector(0.f, 0.f, 150.f);
	HealthWidget->SetWorldLocation(WidgetLoc);

	// 2) 서버가 ‘전용 서버’면 UI 불필요 → 스킵
	if (GetNetMode() == NM_DedicatedServer) return;

	// 3) 이 프로세스의 ‘로컬 플레이어들’ 중 카메라 선택
	APlayerCameraManager* BestCam = nullptr;
	float BestDistSq = TNumericLimits<float>::Max();

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* localPC = It->Get();
		if (!localPC || !localPC->IsLocalController()) continue; // 로컬만
		if (APlayerCameraManager* Cam = localPC->PlayerCameraManager)
		{
			const float DSq = FVector::DistSquared(HealthWidget->GetComponentLocation(), Cam->GetCameraLocation());
			if (DSq < BestDistSq)
			{
				BestDistSq = DSq;
				BestCam = Cam;
			}
		}
	}

	if (BestCam)
	{
		FRotator LookAt = UKismetMathLibrary::FindLookAtRotation(WidgetLoc, BestCam->GetCameraLocation());

		// 풀 빌보드
		// LookAt.Roll = 0.f;           // 필요 시 롤만 고정

		// Yaw-Only(상하 기울임 없이 수평만): 원하면 아래 두 줄 사용
		// LookAt.Pitch = 0.f;
		// LookAt.Roll  = 0.f;

		// 위젯 앞면이 뒤를 향하면 180도 보정
		//LookAt.Yaw += 180.f;

		HealthWidget->SetWorldRotation(LookAt);
	}
}

void AUzuha::SetController(AUzuhaController* _Ctr)
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White, TEXT("SetCtr"));
	PC = _Ctr; // 저장
	EnsureLocalUI(); // 로컬상태라면 UI 보장
}

void AUzuha::UpdateAimRotation()
{
	if (!PC) return;
	if (!bRMPressed) return;
	if (PlayerState != EPlayerState::Attack) return;
	
	FVector MouseLocation, MouseDirection;
	// 🔹 마우스의 월드 위치와 방향을 얻기
	if (PC->DeprojectMousePositionToWorld(MouseLocation, MouseDirection))
	{
		FHitResult HitResult;
		FVector End = MouseLocation + (MouseDirection * 10000.0f);

		// 🔹 마우스 방향으로 레이캐스트하여 충돌한 지점 찾기
		if (GetWorld()->LineTraceSingleByChannel(HitResult, MouseLocation, End, ECC_Visibility))
		{
			//float Distance = FVector::Dist(HitResult.ImpactPoint, GetActorLocation());
			//GEngine->AddOnScreenDebugMessage(1, 0.2f,FColor::White,FString::Printf(TEXT("Distance: %f"),Distance));
			FVector TargetLocation = HitResult.ImpactPoint;
			Direction = (TargetLocation - GetActorLocation()).GetSafeNormal();
			//OwnerToMouseDirection = Direction;
			FRotator NewRot = Direction.Rotation();
			float yawOnly = NewRot.Yaw;

			SetActorRotation(FRotator(0.f, yawOnly, 0.f));
			//Controller->SetControlRotation(FRotator(0.f, yawOnly, 0.f));

			// 2) 서버 권위 업데이트(레이트 제한)
			if (!HasAuthority())
			{
				//const float Now = GetWorld()->GetTimeSeconds();
				//const bool bigChange = FMath::Abs(yawOnly - LastSentAimYaw) > 1.5f;   // 각도 임계
				//const bool timeUp    = (Now - LastAimSendTime) > 0.06f;             // 약 16Hz

				//if (bigChange || timeUp)
				{
					ServerSetAimYaw(yawOnly);
					//LastSentAimYaw   = NewYaw;
					//LastAimSendTime  = Now;
				}
			}
			else
			{
				// 리슨서버 호스트(권위)도 복제 변수 갱신(멀티에 필수)
				ReplicatedAimYaw = yawOnly;
			}
		}
	}
}

void AUzuha::OnRep_AimYaw()
{
	// 소유 클라는 로컬에서 이미 돌리고 있으니 제외하고,
	// 시뮬레이티드 프록시들만 서버 값으로 회전시킴
	if (!IsLocallyControlled())
	{
		SetActorRotation(FRotator(0.f, ReplicatedAimYaw, 0.f));
	}
}

void AUzuha::ServerSetAimYaw_Implementation(float NewYaw)
{
	ReplicatedAimYaw = NewYaw;
	// 서버 권위로 실제 회전 적용
	SetActorRotation(FRotator(0.f, ReplicatedAimYaw, 0.f));
}


void AUzuha::Server_TryAttack_Implementation(const FVector_NetQuantizeNormal& ShootDir)
{
	Multicast_OnHitFX(); // 이펙트 브로드캐스트
	DoAttackTrace_Server(ShootDir);
}

void AUzuha::DoAttackTrace_Server(const FVector& ShootDir)
{
	//auto* PC = Cast<AUzuhaController>(GetController());
	if (!PC) return;
	
	// 보안/치트 방지: 서버 기준 위치/방향 사용
	CurrentTarget = FindNearestEnemy_Registry(900.0f); // 시야 범위랑 맞춰줘야댐
	if (!CurrentTarget) return;
	
	//const FVector Start = GetActorLocation();
	const FVector Start = GetActorLocation();
	// const FVector End   = Start + ShootDir.GetSafeNormal() * AttackRange;
	const FVector End   = CurrentTarget->GetActorLocation();
	Multicast_DebugLine(Start,End);
	//DrawDebugLine(GetWorld(), Start, End, FColor::White, false, 0.4f, 0, 2.0f);
	UGameplayStatics::ApplyDamage(
			CurrentTarget,
			10.f,
			PC,
			this,
			UDamageType::StaticClass()
			);
}


void AUzuha::SpawnPing()//FVector Location)
{
	if (HasAuthority())
	{
		Multicast_SpawnPing();
	}
	else
	{
		Server_SpawnPing();
	}
}

void AUzuha::Server_SpawnPing_Implementation()
{
	Multicast_SpawnPing();
}

void AUzuha::Multicast_SpawnPing_Implementation()
{
	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	// (선택) 오너는 누가 눌렀는지 식별용으로만 설정
	Params.Owner = this;

	PingActor =  GetWorld()->SpawnActor<APingActor>(PingActorClass, SpawnLocation, FRotator::ZeroRotator, Params);
}

void AUzuha::TrySpawnTank()//FVector_NetQuantize Location)
{
	if (HasAuthority())
	{
		Multicsat_SpawnTank();	
	}
	else
	{
		Server_SpawnTank();
	}
}

void AUzuha::Multicsat_SpawnTank_Implementation()//FVector_NetQuantize Location)
{
	if (CommandCenterInstance)
	{
		CommandCenterInstance->MultiCast_SpawnTank(SpawnLocation);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1,2.0f, FColor::Red,
			TEXT("[Uzuha] CommandCenter is null"));
	}
}

void AUzuha::Server_SpawnTank_Implementation()//FVector_NetQuantize Location)
{
	Multicsat_SpawnTank();
}


void AUzuha::Multicast_OnHitFX_Implementation()//const FVector_NetQuantize& HitLocation)
{
	// TODO: 파티클/사운드 재생 (서버/클라 모두 보이게)
	// UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactFX, HitLocation);
	AttackState = EAttackState::Shoot;
	AnimInstance->SetAnimState(EAnimState::Shoot);
	
	// Muzzle 소켓에 붙여 재생: 위치/회전을 소켓에 '스냅' (정확히 일치)
	UNiagaraComponent* NC = UNiagaraFunctionLibrary::SpawnSystemAttached(
		MuzzleFlashFX,
		GetMesh(),                   // 붙일 컴포넌트 (무기 메쉬면 그쪽으로 교체)
		FName("Muzzle_01"),             // 소켓/본 이름 (대소문자 정확히!)
		FVector::ZeroVector,         // 소켓 기준 위치 오프셋
		FRotator::ZeroRotator,       // 소켓 기준 회전 오프셋
		EAttachLocation::SnapToTarget, // 소켓 트랜스폼에 스냅
		/*bAutoDestroy=*/true,       // 끝나면 자동 파괴
		/*bAutoActivate=*/true
	);
	
	/*
	auto socket = 
	GetMesh();*/
	// UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), MuzzleFlashFX	, GetMesh()->GetSocketByName("Muzzle")->GetSocketLocation());
	
	//AnimationComponent->server_playon
	if (AnimationComponent->MontageMapData != nullptr)
	{
		AnimationComponent->PlayByName("Shoot", 1.0f);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1 ,3.0f, FColor::Red, TEXT("[AnimationComponent] MontageMapData = null"));
	}
	SoundComponent->PlayHandle(ESoundName::effect_Shoot,this);
}

void AUzuha::Multicast_DebugLine_Implementation(FVector_NetQuantize Start, FVector_NetQuantize End, FColor Color,
                                                float LifeTime, float Thickness)
{
	if (GetNetMode() == NM_DedicatedServer) return;
	//DrawDebugLine(GetWorld(), Start, End, Color, /*bPersistentLines=*/false, LifeTime, /*DepthPriority=*/0, Thickness);
}



void AUzuha::LM_Press()
{
	//auto* PC = Cast<AUzuhaController>(GetController());
	if (!PC)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red,TEXT("Controller = null"));
		return;
	}
	//  순서 중요함
	// 1. 땅에서 방향 확인하기, 2. 바라보고있는방향 라인 트레이스
	if (PlayerState == EPlayerState::Normal)
	{
	}
	else if (PlayerState == EPlayerState::Attack)
	{
		if (!bCanAttack) return;
		bCanAttack = false;
		bIsAutoAttack= true;
		GetWorld()->GetTimerManager().SetTimer(AttackTimerHandle,this,
			&AUzuha::Multicast_OnHitFX, AttackCoolTime, true);

		GetWorld()->GetTimerManager().ClearTimer(AttackDelayHandle);
		GetWorld()->GetTimerManager().SetTimer(AttackDelayHandle, this,
			&AUzuha::AttackDealyReset, AttackCoolTime- 0.05f,false);
		
		GetMouseGroundLocation(); // 1
		//CheckFrontDistance(); // 2
		
		if (HasAuthority())
		{
			Multicast_OnHitFX(); // 이펙트 브로드캐스트
			DoAttackTrace_Server(Direction); // 리슨서버 호스트의 로컬공격
		}
		else
		{
			Server_TryAttack(Direction); // 원격의 클라 -> 서버 RPC호출
		}
	}
	else if (PlayerState == EPlayerState::Order)
	{
		if (OrderWidget) return;
		FHitResult Hit;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);
		if (APawn* Pawn = PC->GetPawn()) Params.AddIgnoredActor(Pawn);

		FVector MouseWorldOrigin, MouseWorldDir;
		if (PC->DeprojectMousePositionToWorld(MouseWorldOrigin, MouseWorldDir))
		{
			const FVector Start = MouseWorldOrigin; // 카메라 근처(클리핑된 마우스 광선 시작점)
			const FVector End = Start + MouseWorldDir * 2000; // 커서 방향으로 충분히 멀리

			const bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params);
			//DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 0.5f);

			if (bHit)
			{
				SpawnLocation = Hit.ImpactPoint;
				//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("SpawnOrderWidget"));

				OrderWidget = GetWorld()->SpawnActor<AOrderWidgetActor>(OrderWidgetActorClass, SpawnLocation,
				                                                        FRotator::ZeroRotator);
				OrderWidget->SetPlayer(this);
				SpawnPing();
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red,TEXT("생성불가"));
			}
		}
	}
}

void AUzuha::LM_Release()
{
	if (bIsAutoAttack) // 자동공격중이라면
	{
		bIsAutoAttack = false;
		GetWorld()->GetTimerManager().ClearTimer(AttackTimerHandle);
	}
}

void AUzuha::RM_Press()
{
	//auto* PC = Cast<AUzuhaController>(GetController());
	if (!PC)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red,TEXT("PC 없음"));
		return;
	}

	if (PlayerState == EPlayerState::Order)
	{
		DestroyOrderWidget(false);
	}
	bRMPressed = true;
	SetAttackModeLook(true);
	CursorWidget->ChangeCursorIcon(ECursorType::Attack);
	PlayerState = EPlayerState::Attack;
}

void AUzuha::RM_Release()
{
	//auto* PC = Cast<AUzuhaController>(GetController());
	if (!PC) return;
	bRMPressed = false;
	if (bIsAutoAttack) // 자동공격중이라면
	{
		bIsAutoAttack = false;
		GetWorld()->GetTimerManager().ClearTimer(AttackTimerHandle);
	}
	SetAttackModeLook(false);
	CursorWidget->ChangeCursorIcon(ECursorType::Normal);
	PlayerState = EPlayerState::Normal;
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White,TEXT("RM Release"));
}

void AUzuha::Ctrl_Press()
{
	if (!IsLocallyControlled()) return;
	if (bIsAutoAttack) // 자동공격중이라면
	{
		bIsAutoAttack = false;
		GetWorld()->GetTimerManager().ClearTimer(AttackTimerHandle);
	}
	//if (CursorWidget == nullptr)
	CursorWidget->ChangeCursorIcon(ECursorType::Order);
	PlayerState = EPlayerState::Order;
}

void AUzuha::Ctrl_Relesae()
{
	CursorWidget->ChangeCursorIcon(ECursorType::Normal);
	PlayerState = EPlayerState::Normal;
	//PlayerWidget->DestoryOrderWidget();
	DestroyOrderWidget(false);
}

void AUzuha::DestroyOrderWidget(bool _isClick)
{
	if (OrderWidget)
	{
		OrderWidget->Destroy();
		OrderWidget=nullptr;
		
		PingActor->Destroy();
		PingActor = nullptr;
	}
	if(_isClick)
	{
		TrySpawnTank();
	}
}

void AUzuha::ListWidgetInit()
{
	PlayerListWidget->TryInitPlayerList();
}

void AUzuha::MultiCast_OnDeath_Implementation()
{
	// DeatAnim
}

void AUzuha::HandleDeath()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White,TEXT("Death Uzuha"));
	
}

void AUzuha::RegisterRevealer()
{
	if (auto* FOW = GetWorld()->GetSubsystem<UFogOfWarSubsystem>())
	{
		if (VisionRevealerComponent)
		{
			int32 TeamID = 0;
			VisionRevealerComponent->SetCurrentTeam(TeamID);
			FOW->RegisterRevealer(VisionRevealerComponent, VisionRevealerComponent->GetScaledSphereRadius(), TeamID);
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red,TEXT("[Enemy] FOWsubsystem 없음"));
	}

	if (HasAuthority())
	{
		//PlayerWidget->PlayerList->Multicast_InitPlayerList();
	}
}

void AUzuha::EnsureLocalUI()
{
	// ✅ UI/입력 세팅은 "로컬로 소유한 클라이언트"에서만!
	if (!IsLocallyControlled()) return;
	{
			if (!PC) PC = Cast<AUzuhaController>(GetController());

			if (PC)
			{
				//GEngine->AddOnScreenDebugMessage(-1, 5.0f,FColor::Green,FString::Printf(TEXT("Contrlller : %s"), *PC->GetName()));
				PC->bShowMouseCursor = true;
				PC->bEnableClickEvents = true;
				PC->bEnableMouseOverEvents = true;
				// 입력 모드: 게임(키보드) + 커서 표시
				/*
				FInputModeGameOnly Mode;
				Mode.SetConsumeCaptureMouseDown(false);
				Controller->SetInputMode(Mode);*/

				//FInputModeGameOnly Mode;
				FInputModeGameAndUI Mode;
				Mode.SetHideCursorDuringCapture(false);
				Mode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
				PC->SetInputMode(Mode);
				if (PC && CursorWidgetClass)
				{
					CursorWidget = CreateWidget<UCursorWidget>(PC, CursorWidgetClass, NAME_None);
					PC->SetMouseCursorWidget(EMouseCursor::Default, CursorWidget); // 소프트웨어 커서
					//CursorWidget->ChangeCursorColor(ECursorType::Normal);
					// 커서 이미지를 위젯으로 교체
				}
				
				if (PC && PlayerWidgetClass)
				{
					PlayerWidget = CreateWidget<UPlayerWidget>(PC, PlayerWidgetClass, NAME_None);
					PlayerWidget->AddToViewport();
				}
				if (PC&&PlayerListWidgetClass)
				{
					PlayerListWidget = CreateWidget<UPlayerListWidget>(PC, PlayerListWidgetClass, NAME_None);
					PlayerListWidget->AddToViewport();
					//PlayerListWidget->Multicast_PlayerListRebuild();
				}
			}

		
		if (HealthWidget)
		{
			HealthWidget->InitWidget();
			//HealthComponent->HealthInitialize(50.f); 각자 캐릭터에서 할겨
			if (UUserWidget* UW = HealthWidget->GetUserWidgetObject())              // ✅ 인스턴스 얻기
			{
				if (UEnemyHealthWidget* EH = Cast<UEnemyHealthWidget>(UW))
				{
					//EH->SetHeatlhBarColor(FColor::Blue);
					HealthComponent->HPBarWidgetInstance = EH->GetBar();            // ✅ 바 포인터 연결
					//HealthComponent->HPBarWidgetInstance->
					HealthComponent->UpdateHealthUI();                             // 초기 값 갱신
					//HealthWidget->PrimaryComponentTick.TickGroup = TG_PostUpdateWork;
				}
			}
			else
			{
				GEngine->AddOnScreenDebugMessage(-1, 3.0F, FColor::Red, TEXT("[Enemy] Widget is null"));
			}
		}
	
		
	}
}

AActor* AUzuha::FindNearestEnemy_Registry(float MaxRadius)
{
	float ClosestDist = FLT_MAX;
	AActor* Closest = nullptr;
	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("FindNear"));
	for (TActorIterator<AActor> It(GetWorld()); It; ++It)
	{
		if (It->ActorHasTag("Enemy"))
		{
			float Dist = FVector::Dist(GetActorLocation(), It->GetActorLocation());
			//DrawDebugLine(GetWorld(), GetActorLocation(), It->GetActorLocation(), FColor::Blue, false, 1.0f);
			if (Dist < ClosestDist)
			{
				Closest = *It;
				ClosestDist = Dist;
			}
		}
	}
	return Closest;
}

void AUzuha::CheckFrontDistance()
{
	FHitResult HitResult;
	FVector EndPoint = GetActorLocation() + (Direction * AttackRange);
	if (GetWorld()->LineTraceSingleByChannel(HitResult, GetActorLocation(), EndPoint, ECC_Visibility))
	{
		if (ABaseEnemy* hit = Cast<ABaseEnemy>(HitResult.GetActor()))
		{
			// 여기서 보이는 상태인지 검사하기
			//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Cyan, FString::Printf(TEXT("Hit %s"), *hit->GetName()));
			EndPoint = hit->GetActorLocation();
			//enemypoiunt = EndPoint;
			//hit->GetDamaged(10.0f);
			//SetNewCameraPivot();
			/*
			bTargetCamOn = true;
			CameraPoint = EndPoint;
			
			if (GetWorld()->GetTimerManager().IsTimerActive(CameraTimer))
			{
				GetWorld()->GetTimerManager().ClearTimer(CameraTimer);
			}
			GetWorld()->GetTimerManager().SetTimer(CameraTimer,
			                                       this,
			                                       &AUzuha::ResetCameraPivot, 1.5f, false);*/
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red,TEXT("No Hit"));
		//CameraPoint = EndPoint;
	}
	//DrawDebugLine(GetWorld(), GetActorLocation(), EndPoint, FColor::Red, false, 1.0f);
}

void AUzuha::SetNewCameraPivot()
{
	FVector CameraDirection = (CameraPoint - GetActorLocation()).GetSafeNormal();
	//DrawDebugLine(GetWorld(),GetActorLocation(), CameraPoint)
	float dir = FVector::Dist(CameraDirection, GetActorLocation());

	CameraPoint = GetActorLocation() + (CameraDirection * (dir * 0.5f));
	//CameraPivot->UpdateCameraLocation(lerpLocation);
	//CameraPivot->SetWorldLocation(lerpLocation);
	//CameraPoint =  lerpLocation;

	// 몇 초 뒤에 원래 위치로 복귀되도록 해야댐
}

void AUzuha::ResetCameraPivot()
{
	//CameraPivot->SetRelativeLocation(FVector::ZeroVector);
	bTargetCamOn = false;
}


void AUzuha::SetAttackModeLook(bool bEnable)
{
	UCharacterMovementComponent* Move = GetCharacterMovement();
	if (!Move) return;

	if (bEnable)
	{
		// ── 분리 모드: 이동은 WASD대로, 회전은 컨트롤러 Yaw(=우리가 계산)로
		Move->bOrientRotationToMovement = false;
		Move->bUseControllerDesiredRotation = true; // 회전을 컨트롤러 Yaw로 구동
		bUseControllerRotationYaw = false; // 캐릭터가 컨트롤러 Yaw를 '직접' 즉시 반영하는 건 X
	}
	else
	{
		// ── 결합 모드: 이동 방향을 바라보기
		Move->bOrientRotationToMovement = true;
		Move->bUseControllerDesiredRotation = false;
		bUseControllerRotationYaw = false; // 탑뷰에선 보통 false 유지
	}
}

void AUzuha::GetMouseGroundLocation()
{
	//auto* PC = Cast<AUzuhaController>(GetController());
	if (!PC) return;
	FVector MouseLocation, MouseDirection;
	// 🔹 마우스의 월드 위치와 방향을 얻기
	if (PC->DeprojectMousePositionToWorld(MouseLocation, MouseDirection))
	{
		FHitResult HitResult;
		FVector End = MouseLocation + (MouseDirection * 10000.0f);

		// 🔹 마우스 방향으로 레이캐스트하여 충돌한 지점 찾기
		if (GetWorld()->LineTraceSingleByChannel(HitResult, MouseLocation, End, ECC_Visibility))
		{
			float Distance = FVector::Dist(HitResult.ImpactPoint, GetActorLocation());
			//GEngine->AddOnScreenDebugMessage(1, 0.2f, FColor::White, FString::Printf(TEXT("Distance: %f"), Distance));
			FVector TargetLocation = HitResult.ImpactPoint;
			TargetLocation.Z = GetActorLocation().Z;
			//TargetLocation.X += 10.0f;
			Direction = (TargetLocation - GetActorLocation()).GetSafeNormal();
			//OwnerToMouseDirection = Direction;
			FRotator NewRot = Direction.Rotation();
			float yawOnly = NewRot.Yaw;
			SetActorRotation(FRotator(0.f, yawOnly, 0.f));
		}
	}
}

void AUzuha::Q_Press()
{
}

void AUzuha::Q_Relesae()
{
}


void AUzuha::OrderSpawn(const FVector& _point)
{
}


void AUzuha::UpdateSpringArm(float _delta)
{
	/*
	if (SpringArm->TargetArmLength >= DefaultSpringArm ||
		SpringArm->TargetArmLength <= DefaultSpringArm - 150) return;
	*/
	static float speed = 1000.f;
	if (bRMPressed)
	{
		SpringArmAlpha += _delta * speed;
	}
	else
	{
		SpringArmAlpha -= _delta * speed;
	}
	SpringArmAlpha = FMathf::Clamp(SpringArmAlpha, 0.0f, 120.0f);
	//float newSRL = FMath::Clamp(SpringArmAlpha, 0, 150);

	//CameraPivot->SpringArm->TargetArmLength = DefaultSpringArm + SpringArmAlpha;
	SpringArm->TargetArmLength = DefaultSpringArm + SpringArmAlpha;
}

void AUzuha::AttackDealyReset()
{
	bCanAttack = true;
}
