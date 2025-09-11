// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Components/HealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define WASDL_HealthComponent_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_HealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateWidget_Server_Implementation(float CurHP); \
	DECLARE_FUNCTION(execUpdateHealthUI); \
	DECLARE_FUNCTION(execUpdateWidget_Server); \
	DECLARE_FUNCTION(execOnRep_CurrentHP);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_HealthComponent_h_14_CALLBACK_WRAPPERS
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_HealthComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHP=NETFIELD_REP_START, \
		bIsDead, \
		NETFIELD_REP_END=bIsDead	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_HealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealthComponent(UHealthComponent&&); \
	UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent) \
	NO_API virtual ~UHealthComponent();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_HealthComponent_h_11_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_HealthComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_HealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_HealthComponent_h_14_CALLBACK_WRAPPERS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_HealthComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_HealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
