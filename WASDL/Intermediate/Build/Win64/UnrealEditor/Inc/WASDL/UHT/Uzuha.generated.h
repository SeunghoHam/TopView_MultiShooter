// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Uzuha.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FVector_NetQuantize;
struct FVector_NetQuantizeNormal;
#ifdef WASDL_Uzuha_generated_h
#error "Uzuha.generated.h already included, missing '#pragma once' in Uzuha.h"
#endif
#define WASDL_Uzuha_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSetAimYaw_Implementation(float NewYaw); \
	virtual void MultiCast_OnDeath_Implementation(); \
	virtual void Multicsat_SpawnTank_Implementation(); \
	virtual void Server_SpawnTank_Implementation(); \
	virtual void Multicast_SpawnPing_Implementation(); \
	virtual void Server_SpawnPing_Implementation(); \
	virtual void Multicast_DebugLine_Implementation(FVector_NetQuantize Start, FVector_NetQuantize End, FColor Color, float LifeTime, float Thickness); \
	virtual void Multicast_OnHitFX_Implementation(); \
	virtual void Server_TryAttack_Implementation(FVector_NetQuantizeNormal const& ShootDir); \
	DECLARE_FUNCTION(execServerSetAimYaw); \
	DECLARE_FUNCTION(execOnRep_AimYaw); \
	DECLARE_FUNCTION(execMultiCast_OnDeath); \
	DECLARE_FUNCTION(execMulticsat_SpawnTank); \
	DECLARE_FUNCTION(execServer_SpawnTank); \
	DECLARE_FUNCTION(execTrySpawnTank); \
	DECLARE_FUNCTION(execMulticast_SpawnPing); \
	DECLARE_FUNCTION(execServer_SpawnPing); \
	DECLARE_FUNCTION(execMulticast_DebugLine); \
	DECLARE_FUNCTION(execMulticast_OnHitFX); \
	DECLARE_FUNCTION(execServer_TryAttack);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_51_CALLBACK_WRAPPERS
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUzuha(); \
	friend struct Z_Construct_UClass_AUzuha_Statics; \
public: \
	DECLARE_CLASS(AUzuha, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(AUzuha) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SpawnLocation=NETFIELD_REP_START, \
		ReplicatedAimYaw, \
		CurrentTarget, \
		NETFIELD_REP_END=CurrentTarget	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUzuha(AUzuha&&); \
	AUzuha(const AUzuha&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUzuha); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUzuha); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUzuha) \
	NO_API virtual ~AUzuha();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_48_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_51_CALLBACK_WRAPPERS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_51_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class AUzuha>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h


#define FOREACH_ENUM_EATTACKSTATE(op) \
	op(EAttackState::Idle) \
	op(EAttackState::Idle_Weapon) \
	op(EAttackState::Shoot) 

enum class EAttackState : uint8;
template<> struct TIsUEnumClass<EAttackState> { enum { Value = true }; };
template<> WASDL_API UEnum* StaticEnum<EAttackState>();

#define FOREACH_ENUM_EPLAYERSTATE(op) \
	op(EPlayerState::Normal) \
	op(EPlayerState::Attack) \
	op(EPlayerState::Order) 

enum class EPlayerState : uint8;
template<> struct TIsUEnumClass<EPlayerState> { enum { Value = true }; };
template<> WASDL_API UEnum* StaticEnum<EPlayerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
