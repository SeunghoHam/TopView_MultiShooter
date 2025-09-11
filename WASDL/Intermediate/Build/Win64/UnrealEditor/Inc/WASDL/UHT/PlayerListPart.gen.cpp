// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Widgets/PlayerListPart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerListPart() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_ATeamPlayerState_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UPlayerListPart();
WASDL_API UClass* Z_Construct_UClass_UPlayerListPart_NoRegister();
// End Cross Module References

// Begin Class UPlayerListPart Function OnHealthChangedHandler
struct Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics
{
	struct PlayerListPart_eventOnHealthChangedHandler_Parms
	{
		float current;
		float max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/PlayerListPart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::NewProp_current = { "current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerListPart_eventOnHealthChangedHandler_Parms, current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerListPart_eventOnHealthChangedHandler_Parms, max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::NewProp_current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::NewProp_max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerListPart, nullptr, "OnHealthChangedHandler", nullptr, nullptr, Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::PlayerListPart_eventOnHealthChangedHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::PlayerListPart_eventOnHealthChangedHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerListPart::execOnHealthChangedHandler)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_current);
	P_GET_PROPERTY(FFloatProperty,Z_Param_max);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHealthChangedHandler(Z_Param_current,Z_Param_max);
	P_NATIVE_END;
}
// End Class UPlayerListPart Function OnHealthChangedHandler

// Begin Class UPlayerListPart
void UPlayerListPart::StaticRegisterNativesUPlayerListPart()
{
	UClass* Class = UPlayerListPart::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHealthChangedHandler", &UPlayerListPart::execOnHealthChangedHandler },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerListPart);
UClass* Z_Construct_UClass_UPlayerListPart_NoRegister()
{
	return UPlayerListPart::StaticClass();
}
struct Z_Construct_UClass_UPlayerListPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/PlayerListPart.h" },
		{ "ModuleRelativePath", "Widgets/PlayerListPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerListPart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/PlayerListPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerListPart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/PlayerListPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS_MetaData[] = {
		{ "ModuleRelativePath", "Widgets/PlayerListPart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerListPart_OnHealthChangedHandler, "OnHealthChangedHandler" }, // 256478922
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerListPart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerListPart_Statics::NewProp_PlayerNameText = { "PlayerNameText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerListPart, PlayerNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNameText_MetaData), NewProp_PlayerNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerListPart_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerListPart, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerListPart_Statics::NewProp_PS = { "PS", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerListPart, PS), Z_Construct_UClass_ATeamPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS_MetaData), NewProp_PS_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerListPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerListPart_Statics::NewProp_PlayerNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerListPart_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerListPart_Statics::NewProp_PS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerListPart_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerListPart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerListPart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerListPart_Statics::ClassParams = {
	&UPlayerListPart::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerListPart_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerListPart_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerListPart_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerListPart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerListPart()
{
	if (!Z_Registration_Info_UClass_UPlayerListPart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerListPart.OuterSingleton, Z_Construct_UClass_UPlayerListPart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerListPart.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UPlayerListPart>()
{
	return UPlayerListPart::StaticClass();
}
UPlayerListPart::UPlayerListPart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerListPart);
UPlayerListPart::~UPlayerListPart() {}
// End Class UPlayerListPart

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerListPart, UPlayerListPart::StaticClass, TEXT("UPlayerListPart"), &Z_Registration_Info_UClass_UPlayerListPart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerListPart), 231160849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_1913389439(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListPart_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
