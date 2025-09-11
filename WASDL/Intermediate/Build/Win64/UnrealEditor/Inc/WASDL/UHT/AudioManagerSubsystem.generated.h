// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/Audio/AudioManagerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAudioComponent;
class USceneComponent;
enum class ESoundName : uint8;
struct FSoundHandle;
#ifdef WASDL_AudioManagerSubsystem_generated_h
#error "AudioManagerSubsystem.generated.h already included, missing '#pragma once' in AudioManagerSubsystem.h"
#endif
#define WASDL_AudioManagerSubsystem_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundHandle_Statics; \
	WASDL_API static class UScriptStruct* StaticStruct();


template<> WASDL_API UScriptStruct* StaticStruct<struct FSoundHandle>();

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAudioFinished); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execStopByName); \
	DECLARE_FUNCTION(execStopByHandle); \
	DECLARE_FUNCTION(execPlayRandom);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioManagerSubsystem(); \
	friend struct Z_Construct_UClass_UAudioManagerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAudioManagerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(UAudioManagerSubsystem)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioManagerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioManagerSubsystem(UAudioManagerSubsystem&&); \
	UAudioManagerSubsystem(const UAudioManagerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioManagerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioManagerSubsystem) \
	NO_API virtual ~UAudioManagerSubsystem();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_49_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_52_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class UAudioManagerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h


#define FOREACH_ENUM_ESOUNDTYPE(op) \
	op(ESoundType::Effect) \
	op(ESoundType::Vocal) 

enum class ESoundType : uint8;
template<> struct TIsUEnumClass<ESoundType> { enum { Value = true }; };
template<> WASDL_API UEnum* StaticEnum<ESoundType>();

#define FOREACH_ENUM_ESOUNDNAME(op) \
	op(ESoundName::effect_Shoot) \
	op(ESoundName::effect_ZugglingAttack) \
	op(ESoundName::effect_ZugglingDead) \
	op(ESoundName::effect_TankDestroy) 

enum class ESoundName : uint8;
template<> struct TIsUEnumClass<ESoundName> { enum { Value = true }; };
template<> WASDL_API UEnum* StaticEnum<ESoundName>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
