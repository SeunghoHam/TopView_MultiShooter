// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Components/SoundComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
enum class ESoundName : uint8;
struct FSoundHandle;
#ifdef WASDL_SoundComponent_generated_h
#error "SoundComponent.generated.h already included, missing '#pragma once' in SoundComponent.h"
#endif
#define WASDL_SoundComponent_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execStopByName); \
	DECLARE_FUNCTION(execStopByHandle); \
	DECLARE_FUNCTION(execPlayAtLocation); \
	DECLARE_FUNCTION(execPlayRandomHandle); \
	DECLARE_FUNCTION(execPlay2DHandle); \
	DECLARE_FUNCTION(execPlayHandle);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundComponent(); \
	friend struct Z_Construct_UClass_USoundComponent_Statics; \
public: \
	DECLARE_CLASS(USoundComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(USoundComponent)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundComponent(USoundComponent&&); \
	USoundComponent(const USoundComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundComponent) \
	NO_API virtual ~USoundComponent();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_16_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class USoundComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
