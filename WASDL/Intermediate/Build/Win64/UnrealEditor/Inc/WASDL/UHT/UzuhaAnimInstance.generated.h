// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Animation/UzuhaAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_UzuhaAnimInstance_generated_h
#error "UzuhaAnimInstance.generated.h already included, missing '#pragma once' in UzuhaAnimInstance.h"
#endif
#define WASDL_UzuhaAnimInstance_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUzuhaAnimInstance(); \
	friend struct Z_Construct_UClass_UUzuhaAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UUzuhaAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(UUzuhaAnimInstance)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUzuhaAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUzuhaAnimInstance(UUzuhaAnimInstance&&); \
	UUzuhaAnimInstance(const UUzuhaAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUzuhaAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUzuhaAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUzuhaAnimInstance) \
	NO_API virtual ~UUzuhaAnimInstance();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_20_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class UUzuhaAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h


#define FOREACH_ENUM_EANIMSTATE(op) \
	op(EAnimState::Idle) \
	op(EAnimState::Idle_Weapon) \
	op(EAnimState::Shoot) 

enum class EAnimState : uint8;
template<> struct TIsUEnumClass<EAnimState> { enum { Value = true }; };
template<> WASDL_API UEnum* StaticEnum<EAnimState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
