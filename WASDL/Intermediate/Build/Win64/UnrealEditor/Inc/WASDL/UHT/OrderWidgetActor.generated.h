// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Actor/OrderWidgetActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_OrderWidgetActor_generated_h
#error "OrderWidgetActor.generated.h already included, missing '#pragma once' in OrderWidgetActor.h"
#endif
#define WASDL_OrderWidgetActor_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Player);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOrderWidgetActor(); \
	friend struct Z_Construct_UClass_AOrderWidgetActor_Statics; \
public: \
	DECLARE_CLASS(AOrderWidgetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(AOrderWidgetActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Player=NETFIELD_REP_START, \
		NETFIELD_REP_END=Player	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOrderWidgetActor(AOrderWidgetActor&&); \
	AOrderWidgetActor(const AOrderWidgetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOrderWidgetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOrderWidgetActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOrderWidgetActor) \
	NO_API virtual ~AOrderWidgetActor();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_11_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class AOrderWidgetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
