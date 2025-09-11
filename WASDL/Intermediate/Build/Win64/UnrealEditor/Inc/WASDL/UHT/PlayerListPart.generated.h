// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/PlayerListPart.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_PlayerListPart_generated_h
#error "PlayerListPart.generated.h already included, missing '#pragma once' in PlayerListPart.h"
#endif
#define WASDL_PlayerListPart_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHealthChangedHandler);


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerListPart(); \
	friend struct Z_Construct_UClass_UPlayerListPart_Statics; \
public: \
	DECLARE_CLASS(UPlayerListPart, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(UPlayerListPart)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerListPart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerListPart(UPlayerListPart&&); \
	UPlayerListPart(const UPlayerListPart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerListPart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerListPart); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerListPart) \
	NO_API virtual ~UPlayerListPart();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_17_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class UPlayerListPart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
