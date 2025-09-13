// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "NiagaraComponent.h"
#include "GameFramework/Character.h"
#include "Uzuha.generated.h"


class UFogVisibilityComponent;
class UVisionRevealerComponent; // 필요한가?
class UAnimationControlComponent;
class UHealthComponent;
class USoundComponent;
class UEnemyHealthWidget;
class UWidgetComponent;


class UCameraComponent;
class USpringArmComponent;
class AUzuhaController;
class UUzuhaAnimInstance;
class UCursorWidget;
class UPlayerWidget;
class UUserWidget;
class UPlayerListWidget;
class AOrderWidgetActor;
class APingActor;
class ACommandCenter;
 
UENUM(BlueprintType)
enum class EAttackState : uint8
{
	Idle,
	Idle_Weapon,
	Shoot,
};

UENUM()
enum class EPlayerState : uint8
{
	Normal,
	Attack,
	Order,
};
UCLASS()
class WASDL_API AUzuha : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	AUzuha();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_Controller() override;
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UFogVisibilityComponent* VisibilityComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UVisionRevealerComponent* VisionRevealerComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	USoundComponent* SoundComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UHealthComponent* HealthComponent;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UWidgetComponent* HealthWidget;
	//UPROPERTY(EditAnywhere,BlueprintReadWrite)
	//TSubclassOf<UEnemyHealthWidget> HealthWidgetClass;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<UEnemyHealthWidget> HealthWidgetClass;
	UPROPERTY()	
	UEnemyHealthWidget* HealthWidgetInstance;
	// Called every frame
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(AllowPrivateAccess))
	UCameraComponent* Camera;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(AllowPrivateAccess))
	USpringArmComponent* SpringArm;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=EditorSetting)
	/*	TSubclassOf<ACameraPivotActor> CameraPivotActorClass;
	//ACameraPivotActor* CameraPivot= nullptr;*/
	USceneComponent* CameraPivot;
	
	UPROPERTY(EditAnywhere, Category=EditorSetting)
	TSubclassOf<UCursorWidget> CursorWidgetClass; // WBP_Cursor
	UCursorWidget* CursorWidget;
	
	UPROPERTY(EditAnywhere, Category=EditorSetting)
	TSubclassOf<UPlayerWidget> PlayerWidgetClass;
	UPlayerWidget* PlayerWidget;
	
	UPROPERTY(Editanywhere, Category=EditorSetting)
	TSubclassOf<UPlayerListWidget> PlayerListWidgetClass;
	UPlayerListWidget* PlayerListWidget;

	UPROPERTY(EditAnywhere, Category=EditorSetting)
	TSubclassOf<APingActor> PingActorClass;

	
	UPROPERTY(EditAnywhere, Category=EditorSetting)
	UNiagaraSystem* MuzzleFlashFX;
	
	
	APingActor* PingActor = nullptr;
	
	virtual void Tick(float DeltaTime) override;
	
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta=(AllowPrivateAccess))
	UAnimationControlComponent* AnimationComponent;
	UPROPERTY(EditAnywhere,Category=EditorSetting)
	TSubclassOf<AOrderWidgetActor> OrderWidgetActorClass;

	void SetController(AUzuhaController* _Ctr);
	AUzuhaController* PC;
	// 서버에서 공격 판정 실행 (클라 → 서버)
	UFUNCTION(Server, Reliable)
	void Server_TryAttack(const FVector_NetQuantizeNormal& ShootDir);

	// 서버에서만 호출: 라인트레이스 & 데미지 적용
	void DoAttackTrace_Server(const FVector& ShootDir);

	// (선택) 히트 FX/사운드 전파
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_OnHitFX();//const FVector_NetQuantize& HitLocation);
	
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_DebugLine(FVector_NetQuantize Start, FVector_NetQuantize End, FColor Color = FColor::Red,
							 float LifeTime = 0.4f, float Thickness = 2.f);

	void SpawnPing();//FVector Location);

	UFUNCTION(Server,Reliable)
	void Server_SpawnPing();

	UFUNCTION(NetMulticast,Reliable)
	void Multicast_SpawnPing();
	
	UFUNCTION()
	void TrySpawnTank();//FVector_NetQuantize Location);
	
	UFUNCTION(Server, Reliable)
	void Server_SpawnTank();//FVector_NetQuantize Location);

	UFUNCTION(NetMulticast, Reliable)
	void Multicsat_SpawnTank();///FVector_NetQuantize Location);
	
	
	UCameraComponent* GetCamera() {return Camera;}
	//UPROPERTY(Ediat)
	void LM_Press();
	void LM_Release();
	void RM_Press();
	void RM_Release();
	void Ctrl_Press();
	void Ctrl_Relesae();

	// OrderWidget버튼 클릭에도 실행
	void DestroyOrderWidget(bool _isClick);

	//AUzuhaController* GetPlayerController() { return UzuhaController;}
	
	UPROPERTY(Replicated)
	FVector SpawnLocation =FVector::ZeroVector;
private:
	FTimerHandle ListWidgetTimer;
	void ListWidgetInit();
	AOrderWidgetActor* OrderWidget;
	
	UPROPERTY()
	TArray<AActor*> CommandCenter;
	
	UPROPERTY()
	ACommandCenter* CommandCenterInstance;
	//void CreateFowSubsystem();
	UFUNCTION(NetMulticast, Reliable)
	void MultiCast_OnDeath();
	
	//void HandleDeath(); // 서버 전용
	void EnsureLocalUI();
	// 공격
	AActor* FindNearestEnemy_Registry(float MaxRadius);
	//AActor* CurrentTarget;
	void CheckFrontDistance();
	//FVector CameraPoint;
	void SetNewCameraPivot();
	void ResetCameraPivot();
	bool bTargetCamOn =false;
	FTimerHandle CameraTimer;
	void SetAttackModeLook(bool bEnable);
	void GetMouseGroundLocation();
	FVector OutLocation = FVector::ZeroVector;
	float MaxDist = FLT_MAX;
	void UpdateAimRotation(); // 커서 바라보기
	// 서버가 권위로 보관 → 모든 클라에 복제
	UPROPERTY(ReplicatedUsing=OnRep_AimYaw)
	float ReplicatedAimYaw = 0.f;

	UFUNCTION()
	void OnRep_AimYaw(); // 클라에서 수신 시 회전 적용

	// 클라 → 서버 전송 (지연/패킷절약 위해 Unreliable 권장)
	UFUNCTION(Server, Unreliable)
	void ServerSetAimYaw(float NewYaw);


	FVector EnemyPoint;	
	FVector CameraPoint = FVector::ZeroVector; 
	FVector Direction = FVector::ZeroVector;
	float AttackRange = 600.f;
	void Q_Press();
	void Q_Relesae();
	
	
	void OrderSpawn(const FVector& _point);

	bool bRMPressed = false;
	
	//AUzuhaController* UzuhaController;
	
	float DefaultSpringArm = 650.0f;
	float SpringArmAlpha=0.0f;
	void UpdateSpringArm(float _delta);
	/*
	void TryRegisterRevealer();
	FTimerHandle RegisterDelayHandle;
	*/

	//void AutoAttack();
	void AttackDealyReset();
	bool bIsAutoAttack = false; // 자동공격 취소상태로 만들기
	bool bCanAttack = true; // 클릭 대기시간 뒤에 정상화
	float AttackCoolTime = 0.2f;
	FTimerHandle AttackDelayHandle;
	FTimerHandle AttackTimerHandle;
	EAttackState AttackState;

	UUzuhaAnimInstance* AnimInstance;
	EPlayerState PlayerState = EPlayerState::Normal;

	UPROPERTY(Replicated)
	AActor* CurrentTarget = nullptr;
	
	void HandleDeath();
	void RegisterRevealer();
	FTimerHandle RegisterDelayHandle;
};
