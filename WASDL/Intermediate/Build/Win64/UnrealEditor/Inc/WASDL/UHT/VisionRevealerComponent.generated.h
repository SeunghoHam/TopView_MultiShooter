// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/FOW/VisionRevealerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef WASDL_VisionRevealerComponent_generated_h
#error "VisionRevealerComponent.generated.h already included, missing '#pragma once' in VisionRevealerComponent.h"
#endif
#define WASDL_VisionRevealerComponent_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnExit); \
	DECLARE_FUNCTION(execOnEnter); \
	DECLARE_FUNCTION(execOnRep_CurrentTeam); \
	DECLARE_FUNCTION(execSetVisionRadius);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVisionRevealerComponent(); \
	friend struct Z_Construct_UClass_UVisionRevealerComponent_Statics; \
public: \
	DECLARE_CLASS(UVisionRevealerComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(UVisionRevealerComponent)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVisionRevealerComponent(UVisionRevealerComponent&&); \
	UVisionRevealerComponent(const UVisionRevealerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVisionRevealerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisionRevealerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVisionRevealerComponent) \
	NO_API virtual ~UVisionRevealerComponent();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_12_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class UVisionRevealerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
