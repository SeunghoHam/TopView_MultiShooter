// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/TeamPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_TeamPlayerState_generated_h
#error "TeamPlayerState.generated.h already included, missing '#pragma once' in TeamPlayerState.h"
#endif
#define WASDL_TeamPlayerState_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_14_DELEGATE \
WASDL_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float ChangeHealth, float MaxHealth);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execSetTeamId); \
	DECLARE_FUNCTION(execOnRep_TeamId);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeamPlayerState(); \
	friend struct Z_Construct_UClass_ATeamPlayerState_Statics; \
public: \
	DECLARE_CLASS(ATeamPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(ATeamPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TeamId=NETFIELD_REP_START, \
		Health, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeamPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATeamPlayerState(ATeamPlayerState&&); \
	ATeamPlayerState(const ATeamPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeamPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeamPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeamPlayerState) \
	NO_API virtual ~ATeamPlayerState();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_15_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class ATeamPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
