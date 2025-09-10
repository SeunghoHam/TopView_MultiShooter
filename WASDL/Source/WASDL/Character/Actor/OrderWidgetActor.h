// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OrderWidgetActor.generated.h"
class UWidgetComponent;
class UOrderWidget;
class AUzuha;
UCLASS()
class WASDL_API AOrderWidgetActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOrderWidgetActor();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<UOrderWidget> OrderWidgetClass;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UWidgetComponent* OrderWidget = nullptr;
	void SetPlayer(AUzuha* _player);

	// 서버에서 세팅 → 각 클라에 복제됨
	UPROPERTY(ReplicatedUsing=OnRep_Player)
	AUzuha* Player;

	UFUNCTION()
	void OnRep_Player();
private:

	USceneComponent* SC = nullptr;

	UOrderWidget* OrderWidgetInstance;
	
	void LookPlayer();
	void BindWidgetToLocalPlayer();
};
