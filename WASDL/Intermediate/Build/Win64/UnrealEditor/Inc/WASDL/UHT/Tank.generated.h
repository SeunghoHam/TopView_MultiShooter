// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Actor/Tank/Tank.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define WASDL_Tank_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TankAttack_Implementation(); \
	virtual void Multicast_MuzzleFlash_Implementation(); \
	virtual void TurnHead_Implementation(float DeltaTime); \
	virtual void TankOnTarget_Implementation(); \
	virtual void MultiCast_DeathEffectMotion_Implementation(); \
	DECLARE_FUNCTION(execTankAttack); \
	DECLARE_FUNCTION(execMulticast_MuzzleFlash); \
	DECLARE_FUNCTION(execTurnHead); \
	DECLARE_FUNCTION(execTankIsActive); \
	DECLARE_FUNCTION(execGetOrderLocation); \
	DECLARE_FUNCTION(execSetOrderLocation); \
	DECLARE_FUNCTION(execTankOnTarget); \
	DECLARE_FUNCTION(execMultiCast_DeathEffectMotion);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_19_CALLBACK_WRAPPERS
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(ATank) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OrderLocation=NETFIELD_REP_START, \
		HeadLocation, \
		NETFIELD_REP_END=HeadLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATank(ATank&&); \
	ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank) \
	NO_API virtual ~ATank();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_16_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_19_CALLBACK_WRAPPERS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_19_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class ATank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
