// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/CursorWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WASDL_CursorWidget_generated_h
#error "CursorWidget.generated.h already included, missing '#pragma once' in CursorWidget.h"
#endif
#define WASDL_CursorWidget_generated_h

#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCursorWidget(); \
	friend struct Z_Construct_UClass_UCursorWidget_Statics; \
public: \
	DECLARE_CLASS(UCursorWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WASDL"), NO_API) \
	DECLARE_SERIALIZER(UCursorWidget)


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCursorWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCursorWidget(UCursorWidget&&); \
	UCursorWidget(const UCursorWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCursorWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCursorWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCursorWidget) \
	NO_API virtual ~UCursorWidget();


#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_21_PROLOG
#define FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WASDL_API UClass* StaticClass<class UCursorWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h


#define FOREACH_ENUM_ECURSORTYPE(op) \
	op(ECursorType::Normal) \
	op(ECursorType::Attack) \
	op(ECursorType::Order) 

enum class ECursorType : uint8;
template<> struct TIsUEnumClass<ECursorType> { enum { Value = true }; };
template<> WASDL_API UEnum* StaticEnum<ECursorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
