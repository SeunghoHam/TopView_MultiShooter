// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "FogOfWarManager.generated.h"


USTRUCT()
struct FFOW_Revealer
{
	GENERATED_BODY()
	// 이미 프로젝트에 있다면 중복 선언 제거
	TWeakObjectPtr<USceneComponent> Source;
	float Radius = 800.f; // 월드 단위(없으면 기본)
};
UCLASS()
class WASDL_API AFogOfWarManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFogOfWarManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:

	// ====== [월드 영역] ======
	// 오버레이 머티리얼과 동일 값으로 사용
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FOW|World")
	FVector WorldMin = FVector(-5000, -5000, 0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FOW|World")
	FVector WorldMax = FVector( 5000,  5000, 0);

	//UPROPERTY(EditAnywhere, Category="FOW|RT")
	//int32 RTSize = 1024;

	UPROPERTY(EditAnywhere, Category="FOW|RT")
	FIntPoint FogRTSize = FIntPoint(1024, 1024);
	
	// 소스가 자체 반경을 안 주는 경우 사용할 기본 반경(월드 단위)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FOW|Brush")
	float DefaultWorldRadius = 800.f;
	
	// 경계 부드러움(월드→UV 변환 후 비율로 쓰면 안전)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FOW|Brush")
	float FeatherRatio = 0.024f; // RadiusUV * 0.2



	
	UPROPERTY(BlueprintReadOnly, Category="FOW|RT")
	UCanvasRenderTarget2D* FogRT = nullptr;

	// Materials
	// FogOfWarManager.h

	UPROPERTY(EditAnywhere, Category="FOW")
	TSubclassOf<AActor> OverlayActorClass = nullptr;
	AActor* OverlayActor = nullptr;
	
	//UPROPERTY(EditAnywhere, Category="FOW|Materials")
	//UMaterialInterface* OverlayMaterial = nullptr; // BP_FogOverlay 참조

	UPROPERTY(EditAnywhere, Category="FOW")
	TSubclassOf<AActor> BrushActorClass = nullptr;
	AActor* BrushActor = nullptr;
	
	UPROPERTY(Transient)
	UMaterialInstanceDynamic* OverlayMID = nullptr;
	
	// 시야 원을 찍는 브러시 머티리얼(소프트 원)
	// 
	UPROPERTY(EditAnywhere, Category="FOW|Materials")
	UMaterialInterface* BrushMaterial = nullptr; // 월드에 배치되면 그다음에 할당해주기

	UPROPERTY()
	UMaterialInstanceDynamic* BrushMID = nullptr; // 재사용할 MID
	

	// Revealer들을 외부(Subsystem)에서 넣어줌
	//UPROPERTY(BlueprintReadWrite, Category="FOW")
	UPROPERTY()
	TArray<TWeakObjectPtr<USceneComponent>> RevealerSources;

	UFUNCTION(BlueprintCallable, Category="FOW")
	FVector2D WorldToUV(const FVector& W) const;
	float WorldRadiusToUV(float WorldRadius) const;

	UFUNCTION(BlueprintCallable) FVector    UVToWorld(const FVector2D& UV) const;   // 월드 좌표로 되돌리기
	UFUNCTION(BlueprintCallable) float      UVRadiusToWorld(float RUV) const;


	UPROPERTY(EditAnywhere, Category="FOW|World")
	float BoundsMargin = 1000.f;
	void AutoFitBoundsFromRevealers();
private:
	FTimerHandle TickHandle;
	void UpdateFog();

	FVector2D InvSize = FVector2D::ZeroVector;

};
