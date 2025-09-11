// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/FOW/FogOfWarManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_FogOfWarManager_generated_h
#error "FogOfWarManager.generated.h already included, missing '#pragma once' in FogOfWarManager.h"
#endif
#define WASDL_FogOfWarManager_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFOW_Revealer_Statics; \
	WASDL_API static class UScriptStruct* StaticStruct();


template<> WASDL_API UScriptStruct* StaticStruct<struct FFOW_Revealer>();

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUVRadiusToWorld); \
	DECLARE_FUNCTION(execUVToWorld); \
	DECLARE_FUNCTION(execWorldToUV);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFogOfWarManager(); \
	friend struct Z_Construct_UClass_AFogOfWarManager_Statics; \
public: \
	DECLARE_CLASS(AFogOfWarManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(AFogOfWarManager)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFogOfWarManager(AFogOfWarManager&&); \
	AFogOfWarManager(const AFogOfWarManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFogOfWarManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFogOfWarManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFogOfWarManager) \
	NO_API virtual ~AFogOfWarManager();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_19_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class AFogOfWarManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
