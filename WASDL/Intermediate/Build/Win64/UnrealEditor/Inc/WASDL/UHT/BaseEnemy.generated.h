// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/BaseEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_BaseEnemy_generated_h
#error "BaseEnemy.generated.h already included, missing '#pragma once' in BaseEnemy.h"
#endif
#define WASDL_BaseEnemy_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_AttackMotionEffect_Implementation(FVector _dir); \
	DECLARE_FUNCTION(execTaskAttackEnd); \
	DECLARE_FUNCTION(execMulticast_AttackMotionEffect); \
	DECLARE_FUNCTION(execTryAttack); \
	DECLARE_FUNCTION(execGetTargetLocation);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_23_CALLBACK_WRAPPERS
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseEnemy(); \
	friend struct Z_Construct_UClass_ABaseEnemy_Statics; \
public: \
	DECLARE_CLASS(ABaseEnemy, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(ABaseEnemy) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Acurrent=NETFIELD_REP_START, \
		ARcurrent, \
		NETFIELD_REP_END=ARcurrent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseEnemy(ABaseEnemy&&); \
	ABaseEnemy(const ABaseEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseEnemy) \
	NO_API virtual ~ABaseEnemy();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_20_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_23_CALLBACK_WRAPPERS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_23_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class ABaseEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
