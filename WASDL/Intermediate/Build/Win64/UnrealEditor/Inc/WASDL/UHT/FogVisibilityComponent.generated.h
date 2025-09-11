// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/FOW/FogVisibilityComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_FogVisibilityComponent_generated_h
#error "FogVisibilityComponent.generated.h already included, missing '#pragma once' in FogVisibilityComponent.h"
#endif
#define WASDL_FogVisibilityComponent_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Vis);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFogVisibilityComponent(); \
	friend struct Z_Construct_UClass_UFogVisibilityComponent_Statics; \
public: \
	DECLARE_CLASS(UFogVisibilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(UFogVisibilityComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bVisibleForTeam=NETFIELD_REP_START, \
		VisibleMask, \
		NETFIELD_REP_END=VisibleMask	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFogVisibilityComponent(UFogVisibilityComponent&&); \
	UFogVisibilityComponent(const UFogVisibilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFogVisibilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFogVisibilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFogVisibilityComponent) \
	NO_API virtual ~UFogVisibilityComponent();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_17_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class UFogVisibilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h


#define FOREACH_ENUM_ETEAMTYPE(op) \
	op(ETeamType::Player) \
	op(ETeamType::Enemy) \
	op(ETeamType::Neutral) 

enum class ETeamType : uint8;
template<> struct TIsUEnumClass<ETeamType> { enum { Value = true }; };
template<> WASDL_API UEnum* StaticEnum<ETeamType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
