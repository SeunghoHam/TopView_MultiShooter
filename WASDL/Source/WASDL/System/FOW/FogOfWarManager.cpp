// Fill out your copyright notice in the Description page of Project Settings.


#include "FogOfWarManager.h"

#include "FogOfWarSubsystem.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Engine/Canvas.h"
#include "Materials/MaterialInstanceDynamic.h"


static const FName PARAM_CenterUV(TEXT("CenterUV"));
static const FName PARAM_Radius  (TEXT("Radius"));
static const FName PARAM_Feather (TEXT("Feather"));
static const FName PARAM_Intensity(TEXT("Intensity"));

// Sets default values
AFogOfWarManager::AFogOfWarManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AFogOfWarManager::BeginPlay()
{
	Super::BeginPlay();
	if (!GetWorld()->IsNetMode(NM_ListenServer)) return;
	UE_LOG(LogTemp, Warning, TEXT("[FOW-Manager] This=%p Name=%s"), this, *GetName());
	if (BrushActorClass && OverlayActorClass)
	{
		FActorSpawnParameters param ;//= FActorSpawnParameters();
		param.Owner= this;
		param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		BrushActor =  GetWorld()->SpawnActor<AActor>(BrushActorClass, FVector::ZeroVector, FRotator::ZeroRotator, param);
		OverlayActor =	GetWorld( )->SpawnActor<AActor>(OverlayActorClass, FVector::ZeroVector, FRotator::ZeroRotator, param);
	}

	FogRT = UCanvasRenderTarget2D::CreateCanvasRenderTarget2D(GetWorld(), UCanvasRenderTarget2D::StaticClass(),
	                                                          FogRTSize.X, FogRTSize.Y);
	FogRT->bForceLinearGamma = true;
	FogRT->SRGB = false;
	FogRT->UpdateResource();
	// MID 한개 생성하기
	if (BrushActor)
	{
		if (UStaticMeshComponent* brushMesh = BrushActor->FindComponentByClass<UStaticMeshComponent>())
		{
			if (UMaterialInterface* brushMat = brushMesh->GetMaterial(0))
			{
				
				BrushMID = UMaterialInstanceDynamic::Create(brushMat, this);
				// 프레임마다 바꿀 필요 없는 상수파라미터는 여기서 1회만 할당
				//BrushMID->SetScalarParameterValue(PARAM_Feather, 0.015f);
				BrushMID->SetScalarParameterValue(PARAM_Intensity, 1.0f);
				//BrushMID->SetVectorParameterValue("CenterUV", FLinearColor(0.5f, 0.5f, 0, 0));
				//BrushMID->SetScalarParameterValue("Radius", 0.12f);
				//BrushMID->SetScalarParameterValue("Feather",0.024f);
				//UpdateFog();
				
				UE_LOG(LogTemp, Warning, TEXT("BrushMat : %s"), *brushMat->GetName());
				UE_LOG(LogTemp, Warning, TEXT("BrushMID : %s"), *BrushMID->GetName());
			}
			else
			{
				//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red ,TEXT("[FOG Manager] BrushMat = null"));
				UE_LOG(LogTemp, Warning, TEXT("Brush mat null"));
			}
		}
	}
	if (!BrushMID && BrushMaterial)
	{
		BrushMID = UMaterialInstanceDynamic::Create(BrushMaterial, this);
		if (BrushMID)
		{
			UE_LOG(LogTemp, Warning, TEXT("Second BrushMID Setting"));

			//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red ,TEXT("[FOG Manager] BrushMat = SeocndSetting"));
			BrushMID->SetScalarParameterValue("Intensity", 1.0f);
		}
	}

	if (OverlayActor)
	{
		
		if (UStaticMeshComponent* Mesh = OverlayActor->FindComponentByClass<UStaticMeshComponent>())
		{
			/*
			const FVector Center((WorldMin.X+WorldMax.X)*0.5f, (WorldMin.Y+WorldMax.Y)*0.5f, 100.f);
			const float SX = (WorldMax.X - WorldMin.X) / 100.f; // BasicShapes/Plane 기준
			const float SY = (WorldMax.Y - WorldMin.Y) / 100.f;

			Mesh->SetWorldLocation(Center);
			//Mesh->SetWorldRotation(FRotator(0.f, 0.f, 0.f)); // XY 평면 덮기
			Mesh->SetWorldScale3D(FVector(SX, SY, 1.f));
			Mesh->SetTranslucentSortPriority(2000);
			Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			*/
			if (UMaterialInterface* BaseMat = Mesh->GetMaterial(0)) // 엑터를 할당받지만 생성은 안하고, 가져오는 용도로 씀
			{
				OverlayMID = UMaterialInstanceDynamic::Create(BaseMat, this);

				UE_LOG(LogTemp, Warning, TEXT("OverlayMID : %s"), *OverlayMID->GetName());

				//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta,
				//			FString::Printf(TEXT("OverlayMID : %s"), *OverlayMID->GetName()));
				// 초기 파라미터 1회 세팅
				if (FogRT) OverlayMID->SetTextureParameterValue(TEXT("FogRT"), FogRT);
				OverlayMID->SetVectorParameterValue(TEXT("WorldMin"), FLinearColor(WorldMin.X, WorldMin.Y, 0, 0));
				OverlayMID->SetVectorParameterValue(TEXT("WorldMax"), FLinearColor(WorldMax.X, WorldMax.Y, 0, 0));
				OverlayMID->SetScalarParameterValue(TEXT("DarkStrength"), 0.1f); // 취향
				// (옵션) 색 틴트도 있으면 설정
				// OverlayMID->SetVectorParameterValue(TEXT("TintColor"), FLinearColor(0,0,0,1));
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("OverlayMat =null"));
				//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red ,TEXT("[FOG Manager] OverlayMat = null"));
			}
		}
	}

	// 간격 갱신 0.1s (10Hz)
	//GetWorldTimerManager().SetTimer(TickHandle, this, &AFogOfWarManager::UpdateFog, 0.1f, true);

	// 월드 영역을 지정해야 UV가 맞아짐

	//UpdateFog();
}

// Called every frame
void AFogOfWarManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FVector2D AFogOfWarManager::WorldToUV(const FVector& W) const
{
	const float DenX = FMath::Max(KINDA_SMALL_NUMBER, WorldMax.X - WorldMin.X);
	const float DenY = FMath::Max(KINDA_SMALL_NUMBER, WorldMax.Y - WorldMin.Y);
	// 월드 X,Y를 0~1로 정규화
	//const float U = (W.X - WorldMin.X) *InvSize.X; // (WorldMax.X - WorldMin.X);
	const float U = (W.X - WorldMin.X) / DenX; // (WorldMax.X - WorldMin.X);
	//const float V = (W.Y - WorldMin.Y) *InvSize.Y; // (WorldMax.Y - WorldMin.Y);
	const float V = (W.Y - WorldMin.Y) / DenY; // (WorldMax.Y - WorldMin.Y);

	UE_LOG(LogTemp, Warning,
  TEXT("W=(%.1f,%.1f) Min=(%.1f,%.1f) Max=(%.1f,%.1f) UVraw=(%.3f,%.3f) UV=(%.3f,%.3f)"),
  W.X, W.Y, WorldMin.X, WorldMin.Y, WorldMax.X, WorldMax.Y, DenX, DenY, U, V);
	
	return FVector2D(FMath::Clamp(U, 0.f, 1.f), FMath::Clamp(V, 0.f, 1.f));
}

float AFogOfWarManager::WorldRadiusToUV(float WorldRadius) const
{
	const float Wx = FMath::Max(KINDA_SMALL_NUMBER, WorldMax.X - WorldMin.X);
	const float Wy = FMath::Max(KINDA_SMALL_NUMBER, WorldMax.Y - WorldMin.Y);
	const float Ux = WorldRadius / Wx;
	const float Uy = WorldRadius / Wy;
	return FMath::Max(Ux, Uy); // 또는 평균/최소 선택
}

FVector AFogOfWarManager::UVToWorld(const FVector2D& UV) const
{
	const float X = FMath::Lerp(WorldMin.X, WorldMax.X, UV.X);
	const float Y = FMath::Lerp(WorldMin.Y, WorldMax.Y, UV.Y);
	return FVector(X, Y, 10.f);
}

float AFogOfWarManager::UVRadiusToWorld(float RUV) const
{
	const float Wx = FMath::Max(KINDA_SMALL_NUMBER, WorldMax.X - WorldMin.X);
	const float Wy = FMath::Max(KINDA_SMALL_NUMBER, WorldMax.Y - WorldMin.Y);
	return RUV * FMath::Max(Wx, Wy);
}

void AFogOfWarManager::AutoFitBoundsFromRevealers()
{
	if (RevealerSources.Num()==0) return;

	FVector2D Min( FLT_MAX,  FLT_MAX);
	FVector2D Max(-FLT_MAX, -FLT_MAX);

	for (const auto& Src : RevealerSources)
	{
		if (!Src.IsValid()) continue;
		const FVector P = Src->GetComponentLocation();
		Min.X = FMath::Min(Min.X, P.X - DefaultWorldRadius);
		Min.Y = FMath::Min(Min.Y, P.Y - DefaultWorldRadius);
		Max.X = FMath::Max(Max.X, P.X + DefaultWorldRadius);
		Max.Y = FMath::Max(Max.Y, P.Y + DefaultWorldRadius);
	}

	if (Min.X < Max.X && Min.Y < Max.Y)
	{
		WorldMin = FVector(Min.X - BoundsMargin, Min.Y - BoundsMargin, 0);
		WorldMax = FVector(Max.X + BoundsMargin, Max.Y + BoundsMargin, 0);

		if (OverlayMID) {
			OverlayMID->SetVectorParameterValue("WorldMin", FLinearColor(WorldMin.X, WorldMin.Y, 0, 0));
			OverlayMID->SetVectorParameterValue("WorldMax", FLinearColor(WorldMax.X, WorldMax.Y, 0, 0));
		}
	}
}

void AFogOfWarManager::UpdateFog()
{
	if (!FogRT)
	{
		// UE_LOG(LogTemp, Warning, TEXT("UpdateFog Call"));
		return;
	}
	
	UCanvas* Canvas = nullptr;
	FVector2D Size;
	FDrawToRenderTargetContext Ctx;

	// 캔버스 만들기
	UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(this, FogRT, Canvas, Size, Ctx);

	// 검정 그리기
	UKismetRenderingLibrary::ClearRenderTarget2D(this, FogRT, FLinearColor::Black);

	if (!BrushMID)
	{
		UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(this, Ctx);
		//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::White,	TEXT("UpdateFogfalse"));
		UE_LOG(LogTemp, Error, TEXT("BrushMID = null"));
		return;
	}

	// 3) 각 Revealer에 소프트 원 찍기(흰색) ( 리빌러마다 K2_DrawMaterial)
	if (Canvas)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Fog Update In Canvas"));
		UE_LOG(LogTemp, Warning, TEXT("RevealerSources Count : %d"), RevealerSources.Num());
		
		for (auto& Src : RevealerSources)
		{
			if (!Src.IsValid()) continue;
			//DrawDebugSphere(GetWorld(), Src->GetComponentLocation(), 64.f ,16, FColor::Yellow);
			
			FVector WPos = Src->GetComponentLocation();
			FVector2D UV = WorldToUV(WPos);
			UV.Y= 1- UV.Y;

			// 소스가 개별 Radius를 제공하지 않으면 기본값으로
			//const float RWorld = DefaultWorldRadius;
			float RUV = WorldRadiusToUV(DefaultWorldRadius);
			RUV = FMath::Clamp(RUV, 0.1f, 0.30f);
			//const float FR = FMath::Max(0.001f, FeatherRatio); // FUV 클램프 때문에 추가함
			const float FUV = FMath::Clamp(RUV * FeatherRatio, 0.001f, RUV * 0.95f);

			UE_LOG(LogTemp, Warning, TEXT("RT=%s MID=%s Canvas=%s Size=(%.0f,%.0f)"),
	  FogRT?TEXT("Y"):TEXT("N"), BrushMID?TEXT("Y"):TEXT("N"),
	  Canvas?TEXT("Y"):TEXT("N"), Size.X, Size.Y);
			
			BrushMID->SetVectorParameterValue(PARAM_CenterUV, FLinearColor(UV.X, UV.Y, 0, 0));
			BrushMID->SetScalarParameterValue(PARAM_Radius, RUV);
			BrushMID->SetScalarParameterValue(PARAM_Feather,FUV);
			BrushMID->SetScalarParameterValue(PARAM_Intensity, 1.0f);
			DrawDebugSphere(GetWorld(), UVToWorld(UV),UVRadiusToWorld(RUV), 24, FColor::Green, false, 0.1f, 0, 2.f);
			// K2_DrawMaterial은 UV가 아닌 픽셀 좌표를 받으므로, 머티리얼 안에서 UV 기반 그라디언트를 그리게 설계
			// RT 전체에 머티리얼 1회 드로우 (머티 내부에서 UV로 원 생성)
			Canvas->K2_DrawMaterial(BrushMID, FVector2D::ZeroVector, Size, FVector2D::ZeroVector);
			//GEngine->AddOnScreenDebugMessage(3, 1.f, FColor::White, FString::Printf(TEXT("RUV = %f"), RUV));
		}
	}

	// 4) 닫기 EndDrawCanvas
	UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(this, Ctx);
}
