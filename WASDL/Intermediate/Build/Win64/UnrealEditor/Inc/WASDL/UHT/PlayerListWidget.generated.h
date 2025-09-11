// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/PlayerListWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_PlayerListWidget_generated_h
#error "PlayerListWidget.generated.h already included, missing '#pragma once' in PlayerListWidget.h"
#endif
#define WASDL_PlayerListWidget_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_PlayerListRebuild_Implementation(); \
	DECLARE_FUNCTION(execMulticast_PlayerListRebuild);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_20_CALLBACK_WRAPPERS
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerListWidget(); \
	friend struct Z_Construct_UClass_UPlayerListWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerListWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(UPlayerListWidget)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerListWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerListWidget(UPlayerListWidget&&); \
	UPlayerListWidget(const UPlayerListWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerListWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerListWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerListWidget) \
	NO_API virtual ~UPlayerListWidget();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_17_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_20_CALLBACK_WRAPPERS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class UPlayerListWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
