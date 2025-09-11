// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Character/UzuhaController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUzuhaController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_AUzuhaController();
WASDL_API UClass* Z_Construct_UClass_AUzuhaController_NoRegister();
// End Cross Module References

// Begin Class AUzuhaController
void AUzuhaController::StaticRegisterNativesAUzuhaController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUzuhaController);
UClass* Z_Construct_UClass_AUzuhaController_NoRegister()
{
	return AUzuhaController::StaticClass();
}
struct Z_Construct_UClass_AUzuhaController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/UzuhaController.h" },
		{ "ModuleRelativePath", "Character/UzuhaController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMC_Player_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/UzuhaController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/UzuhaController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LMAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/UzuhaController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RMAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/UzuhaController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CtrlAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Character/UzuhaController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LMAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RMAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CtrlAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUzuhaController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuhaController_Statics::NewProp_IMC_Player = { "IMC_Player", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuhaController, IMC_Player), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMC_Player_MetaData), NewProp_IMC_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuhaController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuhaController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuhaController_Statics::NewProp_LMAction = { "LMAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuhaController, LMAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LMAction_MetaData), NewProp_LMAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuhaController_Statics::NewProp_RMAction = { "RMAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuhaController, RMAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RMAction_MetaData), NewProp_RMAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuhaController_Statics::NewProp_CtrlAction = { "CtrlAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuhaController, CtrlAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CtrlAction_MetaData), NewProp_CtrlAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUzuhaController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuhaController_Statics::NewProp_IMC_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuhaController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuhaController_Statics::NewProp_LMAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuhaController_Statics::NewProp_RMAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuhaController_Statics::NewProp_CtrlAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUzuhaController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUzuhaController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUzuhaController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUzuhaController_Statics::ClassParams = {
	&AUzuhaController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AUzuhaController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AUzuhaController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUzuhaController_Statics::Class_MetaDataParams), Z_Construct_UClass_AUzuhaController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUzuhaController()
{
	if (!Z_Registration_Info_UClass_AUzuhaController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUzuhaController.OuterSingleton, Z_Construct_UClass_AUzuhaController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUzuhaController.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<AUzuhaController>()
{
	return AUzuhaController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUzuhaController);
AUzuhaController::~AUzuhaController() {}
// End Class AUzuhaController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_UzuhaController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUzuhaController, AUzuhaController::StaticClass, TEXT("AUzuhaController"), &Z_Registration_Info_UClass_AUzuhaController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUzuhaController), 2151792990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_UzuhaController_h_2246850280(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_UzuhaController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_UzuhaController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
