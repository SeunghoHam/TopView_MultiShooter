// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/CommandCenter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
#ifdef WASDL_CommandCenter_generated_h
#error "CommandCenter.generated.h already included, missing '#pragma once' in CommandCenter.h"
#endif
#define WASDL_CommandCenter_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MultiCast_SpawnTank_Implementation(FVector_NetQuantize const& _spawnPoint); \
	virtual void MultiCast_OnDeath_Implementation(); \
	DECLARE_FUNCTION(execMultiCast_SpawnTank); \
	DECLARE_FUNCTION(execMultiCast_OnDeath); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_13_CALLBACK_WRAPPERS
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACommandCenter(); \
	friend struct Z_Construct_UClass_ACommandCenter_Statics; \
public: \
	DECLARE_CLASS(ACommandCenter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(ACommandCenter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHP=NETFIELD_REP_START, \
		bIsDead, \
		NETFIELD_REP_END=bIsDead	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACommandCenter(ACommandCenter&&); \
	ACommandCenter(const ACommandCenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACommandCenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACommandCenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACommandCenter) \
	NO_API virtual ~ACommandCenter();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_10_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_13_CALLBACK_WRAPPERS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class ACommandCenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
