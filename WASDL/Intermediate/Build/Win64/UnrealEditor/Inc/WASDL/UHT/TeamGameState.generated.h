// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/TeamGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATeamPlayerState;
#ifdef WASDL_TeamGameState_generated_h
#error "TeamGameState.generated.h already included, missing '#pragma once' in TeamGameState.h"
#endif
#define WASDL_TeamGameState_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_15_DELEGATE \
WASDL_API void FOnPlayerStateAdded_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStateAdded, ATeamPlayerState* PlayerState);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_16_DELEGATE \
WASDL_API void FOnPlayerStateRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStateRemoved, ATeamPlayerState* PlayerState);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetConnectedPlayers);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeamGameState(); \
	friend struct Z_Construct_UClass_ATeamGameState_Statics; \
public: \
	DECLARE_CLASS(ATeamGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(ATeamGameState)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeamGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATeamGameState(ATeamGameState&&); \
	ATeamGameState(const ATeamGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeamGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeamGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeamGameState) \
	NO_API virtual ~ATeamGameState();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_18_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_21_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class ATeamGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
