// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "WASDL/Character/Animation/UzuhaAnimMontageMap.h"

#include "AnimationControlComponent.generated.h"


// ----- Blueprint multicast events -----
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMontageBlendOutEvent, UAnimMontage*, Montage, bool, bInterrupted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMontageEndedEvent, UAnimMontage*, Montage, bool, bInterrupted);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WASDL_API UAnimationControlComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UAnimationControlComponent();

protected:
	// Called when the game starts
	//virtual void BeginPlay() override;
	/*
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
*/
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Anim)
	UUzuhaAnimMontageMap* MontageMapData;
	//TMap<FName, UAnimMontage*> MontageMap;


	// If true, only the server may initiate authoritative actions (recommended for multiplayer).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Network")
	bool bServerAuthOnly = true;

	// Auto-bind to the current AnimInstance delegates (blending-out/ended) on register.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Anim")
	bool bAutoBindDelegates = true;


	// Optional: override the SkeletalMeshComponent if owner is not a Character or you want a sub-mesh.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Anim")
	TObjectPtr<USkeletalMeshComponent> TargetMeshOverride = nullptr;


	// === Blueprint Events ===
	// Broadcasts when any montage on this component's AnimInstance starts blending out.
	UPROPERTY(BlueprintAssignable, Category="Anim|Events")
	FMontageBlendOutEvent OnMontageBlendingOut;


	// Broadcasts when any montage on this component's AnimInstance ends.
	UPROPERTY(BlueprintAssignable, Category="Anim|Events")
	FMontageEndedEvent OnMontageEnded;


	// === High-level API (Blueprint-callable) ===
	UFUNCTION(BlueprintCallable, Category="Anim|Montage")
	float PlayMontage(UAnimMontage* Montage, float PlayRate = 1.0f, FName StartSection = NAME_None);


	UFUNCTION(BlueprintCallable, Category="Anim|Montage")
	float PlayByName(FName Key, float PlayRate = 1.0f, FName StartSection = NAME_None);


	UFUNCTION(BlueprintCallable, Category="Anim|Montage")
	void StopMontage(UAnimMontage* Montage, float BlendOutTime = 0.25f);


	UFUNCTION(BlueprintCallable, Category="Anim|Montage")
	void PauseMontage(UAnimMontage* Montage);


	UFUNCTION(BlueprintCallable, Category="Anim|Montage")
	void ResumeMontage(UAnimMontage* Montage);


	UFUNCTION(BlueprintCallable, Category="Anim|Montage")
	void JumpToSection(UAnimMontage* Montage, FName SectionName);


	UFUNCTION(BlueprintCallable, Category="Anim|Montage")
	void SetPlayRate(UAnimMontage* Montage, float NewRate);


	UFUNCTION(BlueprintCallable, Category="Anim|Montage")
	void SetPosition(UAnimMontage* Montage, float NewPositionSeconds, bool bFireNotifies = true);


	UFUNCTION(BlueprintPure, Category="Anim|Montage")
	bool IsPlaying(UAnimMontage* Montage) const;


	UFUNCTION(BlueprintPure, Category="Anim|Montage")
	float GetPosition(UAnimMontage* Montage) const;


	UFUNCTION(BlueprintPure, Category="Anim|Montage")
	float GetLength(UAnimMontage* Montage) const;
protected:
	
	UAnimMontage* GetMontageByKey(TSoftObjectPtr<UAnimMontage>* _data);
	
	virtual void OnRegister() override;
	virtual void OnUnregister() override;


	// Get current AnimInstance from the chosen mesh.
	UAnimInstance* GetAnimInstance() const;
	USkeletalMeshComponent* ResolveMesh() const;


	// Delegate handlers (bound to AnimInstance)
	UFUNCTION()
	void HandleMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);


	UFUNCTION()
	void HandleMontageEnded(UAnimMontage* Montage, bool bInterrupted);


	// Helper to check if we should route to server
	bool ShouldRouteToServer() const;


	// Use ACharacter::PlayAnimMontage on the server for proper replication.
	float ServerAuthoritativePlay(UAnimMontage* Montage, float PlayRate, FName StartSection);


	// Cache last bound AnimInstance to safely unbind
	UPROPERTY(Transient)
	TWeakObjectPtr<UAnimInstance> BoundAnimInstance;


	// === RPCs ===
	UFUNCTION(Server, Reliable)
	void Server_PlayMontage(UAnimMontage* Montage, float PlayRate, FName StartSection);
	

	UFUNCTION(Server, Reliable)
	void Server_StopMontage(UAnimMontage* Montage, float BlendOutTime);


	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PauseMontage(UAnimMontage* Montage);


	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ResumeMontage(UAnimMontage* Montage);


	UFUNCTION(NetMulticast, Reliable)
	void Multicast_JumpToSection(UAnimMontage* Montage, FName SectionName);


	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetPlayRate(UAnimMontage* Montage, float NewRate);


	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetPosition(UAnimMontage* Montage, float NewPositionSeconds, bool bFireNotifies);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PlayMontage(UAnimMontage* Montage, float PlayRate, FName StartSection);
};
