// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Widgets/OrderWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrderWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_UOrderWidget();
WASDL_API UClass* Z_Construct_UClass_UOrderWidget_NoRegister();
// End Cross Module References

// Begin Class UOrderWidget Function SpawnMissile
struct Z_Construct_UFunction_UOrderWidget_SpawnMissile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/OrderWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrderWidget_SpawnMissile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrderWidget, nullptr, "SpawnMissile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrderWidget_SpawnMissile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrderWidget_SpawnMissile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOrderWidget_SpawnMissile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrderWidget_SpawnMissile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrderWidget::execSpawnMissile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnMissile();
	P_NATIVE_END;
}
// End Class UOrderWidget Function SpawnMissile

// Begin Class UOrderWidget Function SpawnTank
struct Z_Construct_UFunction_UOrderWidget_SpawnTank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/OrderWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrderWidget_SpawnTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrderWidget, nullptr, "SpawnTank", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrderWidget_SpawnTank_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrderWidget_SpawnTank_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOrderWidget_SpawnTank()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrderWidget_SpawnTank_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrderWidget::execSpawnTank)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnTank();
	P_NATIVE_END;
}
// End Class UOrderWidget Function SpawnTank

// Begin Class UOrderWidget
void UOrderWidget::StaticRegisterNativesUOrderWidget()
{
	UClass* Class = UOrderWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnMissile", &UOrderWidget::execSpawnMissile },
		{ "SpawnTank", &UOrderWidget::execSpawnTank },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrderWidget);
UClass* Z_Construct_UClass_UOrderWidget_NoRegister()
{
	return UOrderWidget::StaticClass();
}
struct Z_Construct_UClass_UOrderWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DELEGATE_TwoParams(FOnHPSet,float,float);\n" },
#endif
		{ "IncludePath", "Widgets/OrderWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Widgets/OrderWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DELEGATE_TwoParams(FOnHPSet,float,float);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OrderWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/OrderWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTankBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OrderWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/OrderWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnTankBtn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrderWidget_SpawnMissile, "SpawnMissile" }, // 506942173
		{ &Z_Construct_UFunction_UOrderWidget_SpawnTank, "SpawnTank" }, // 27585842
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrderWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrderWidget_Statics::NewProp_VerticalBox = { "VerticalBox", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrderWidget, VerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalBox_MetaData), NewProp_VerticalBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrderWidget_Statics::NewProp_SpawnTankBtn = { "SpawnTankBtn", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrderWidget, SpawnTankBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTankBtn_MetaData), NewProp_SpawnTankBtn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrderWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrderWidget_Statics::NewProp_VerticalBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrderWidget_Statics::NewProp_SpawnTankBtn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrderWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrderWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrderWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrderWidget_Statics::ClassParams = {
	&UOrderWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOrderWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrderWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrderWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrderWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrderWidget()
{
	if (!Z_Registration_Info_UClass_UOrderWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrderWidget.OuterSingleton, Z_Construct_UClass_UOrderWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrderWidget.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UOrderWidget>()
{
	return UOrderWidget::StaticClass();
}
UOrderWidget::UOrderWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrderWidget);
UOrderWidget::~UOrderWidget() {}
// End Class UOrderWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrderWidget, UOrderWidget::StaticClass, TEXT("UOrderWidget"), &Z_Registration_Info_UClass_UOrderWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrderWidget), 2527913936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_2347761684(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_OrderWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
