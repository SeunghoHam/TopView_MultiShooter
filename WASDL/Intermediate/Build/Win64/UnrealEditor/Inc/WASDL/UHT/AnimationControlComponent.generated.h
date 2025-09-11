// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Components/AnimationControlComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef WASDL_AnimationControlComponent_generated_h
#error "AnimationControlComponent.generated.h already included, missing '#pragma once' in AnimationControlComponent.h"
#endif
#define WASDL_AnimationControlComponent_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_15_DELEGATE \
WASDL_API void FMontageBlendOutEvent_DelegateWrapper(const FMulticastScriptDelegate& MontageBlendOutEvent, UAnimMontage* Montage, bool bInterrupted);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_16_DELEGATE \
WASDL_API void FMontageEndedEvent_DelegateWrapper(const FMulticastScriptDelegate& MontageEndedEvent, UAnimMontage* Montage, bool bInterrupted);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_PlayMontage_Implementation(UAnimMontage* Montage, float PlayRate, FName StartSection); \
	virtual void Multicast_SetPosition_Implementation(UAnimMontage* Montage, float NewPositionSeconds, bool bFireNotifies); \
	virtual void Multicast_SetPlayRate_Implementation(UAnimMontage* Montage, float NewRate); \
	virtual void Multicast_JumpToSection_Implementation(UAnimMontage* Montage, FName SectionName); \
	virtual void Multicast_ResumeMontage_Implementation(UAnimMontage* Montage); \
	virtual void Multicast_PauseMontage_Implementation(UAnimMontage* Montage); \
	virtual void Server_StopMontage_Implementation(UAnimMontage* Montage, float BlendOutTime); \
	virtual void Server_PlayMontage_Implementation(UAnimMontage* Montage, float PlayRate, FName StartSection); \
	DECLARE_FUNCTION(execMulticast_PlayMontage); \
	DECLARE_FUNCTION(execMulticast_SetPosition); \
	DECLARE_FUNCTION(execMulticast_SetPlayRate); \
	DECLARE_FUNCTION(execMulticast_JumpToSection); \
	DECLARE_FUNCTION(execMulticast_ResumeMontage); \
	DECLARE_FUNCTION(execMulticast_PauseMontage); \
	DECLARE_FUNCTION(execServer_StopMontage); \
	DECLARE_FUNCTION(execServer_PlayMontage); \
	DECLARE_FUNCTION(execHandleMontageEnded); \
	DECLARE_FUNCTION(execHandleMontageBlendingOut); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execJumpToSection); \
	DECLARE_FUNCTION(execResumeMontage); \
	DECLARE_FUNCTION(execPauseMontage); \
	DECLARE_FUNCTION(execStopMontage); \
	DECLARE_FUNCTION(execPlayByName); \
	DECLARE_FUNCTION(execPlayMontage);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_21_CALLBACK_WRAPPERS
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationControlComponent(); \
	friend struct Z_Construct_UClass_UAnimationControlComponent_Statics; \
public: \
	DECLARE_CLASS(UAnimationControlComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(UAnimationControlComponent)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationControlComponent(UAnimationControlComponent&&); \
	UAnimationControlComponent(const UAnimationControlComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationControlComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationControlComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimationControlComponent) \
	NO_API virtual ~UAnimationControlComponent();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_18_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_21_CALLBACK_WRAPPERS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class UAnimationControlComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
