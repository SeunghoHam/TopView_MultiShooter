// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/EnemyAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAnimType : uint8;
#ifdef WASDL_EnemyAnimInstance_generated_h
#error "EnemyAnimInstance.generated.h already included, missing '#pragma once' in EnemyAnimInstance.h"
#endif
#define WASDL_EnemyAnimInstance_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAnimType);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyAnimInstance(); \
	friend struct Z_Construct_UClass_UEnemyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UEnemyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(UEnemyAnimInstance)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnemyAnimInstance(UEnemyAnimInstance&&); \
	UEnemyAnimInstance(const UEnemyAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyAnimInstance) \
	NO_API virtual ~UEnemyAnimInstance();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_20_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class UEnemyAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h


#define FOREACH_ENUM_EANIMTYPE(op) \
	op(EAnimType::Walk) \
	op(EAnimType::Idle) \
	op(EAnimType::Attack) \
	op(EAnimType::Death) 

enum class EAnimType : uint8;
template<> struct TIsUEnumClass<EAnimType> { enum { Value = true }; };
template<> WASDL_API UEnum* StaticEnum<EAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
