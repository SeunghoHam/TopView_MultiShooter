// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/OrderWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_OrderWidget_generated_h
#error "OrderWidget.generated.h already included, missing '#pragma once' in OrderWidget.h"
#endif
#define WASDL_OrderWidget_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnMissile); \
	DECLARE_FUNCTION(execSpawnTank);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrderWidget(); \
	friend struct Z_Construct_UClass_UOrderWidget_Statics; \
public: \
	DECLARE_CLASS(UOrderWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(UOrderWidget)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrderWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOrderWidget(UOrderWidget&&); \
	UOrderWidget(const UOrderWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrderWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrderWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrderWidget) \
	NO_API virtual ~UOrderWidget();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_17_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class UOrderWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
