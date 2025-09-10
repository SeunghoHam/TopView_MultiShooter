// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "VisionRevealerComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=(FOW), meta=(BlueprintSpawnableComponent))
class WASDL_API UVisionRevealerComponent : public USphereComponent
{
	GENERATED_BODY()
	protected:
	UVisionRevealerComponent();
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FOW")
	float VisionRadius = 600.f; // 시야 반경(게임 밸런싱 파라미터)

	UFUNCTION(BlueprintCallable, Category="FOW")
	void SetVisionRadius(float NewRadius);

	//UPROPERTY(VisibleAnywhere,BlueprintReadOnly, ReplicatedUsing=OnRep_CurrentTeam)
	int32 CurrentTeam = 0;

	UFUNCTION()
	void OnRep_CurrentTeam();
	void SetCurrentTeam(int32 _team) { CurrentTeam = _team;}// OnRep_CurrentTeam();} // 호출제거함(중복제거 막기)
	int32 GetCurrentTeam(){return CurrentTeam;}
private:
	// 겹치는 적의 "가시 카운트" (여러 아군 원 중복 대비)
	TMap<TWeakObjectPtr<AActor>, int32> VisibleCount;

	//UFUNCTION() void OnEnter(UPrimitiveComponent*, AActor* Other, UPrimitiveComponent*, int32, bool, const FHitResult&);
	UFUNCTION() void OnEnter(UPrimitiveComponent*_pri, AActor* Other, UPrimitiveComponent* _pri2, int32 _int, bool _bool, const FHitResult& _hitR);
	UFUNCTION() void OnExit(UPrimitiveComponent*_pri, AActor* Other, UPrimitiveComponent* _pri2, int32 _int);


	bool IsEnemy(const AActor* Other) const; // 팀 비교 로직은 임시로 false→나중에 교체
};
