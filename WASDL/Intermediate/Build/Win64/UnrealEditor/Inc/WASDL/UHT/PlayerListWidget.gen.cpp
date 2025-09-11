// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Widgets/PlayerListWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerListWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_ATeamGameState_NoRegister();
WASDL_API UClass* Z_Construct_UClass_ATeamPlayerState_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UPlayerListPart_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UPlayerListWidget();
WASDL_API UClass* Z_Construct_UClass_UPlayerListWidget_NoRegister();
// End Cross Module References

// Begin Class UPlayerListWidget Function Multicast_PlayerListRebuild
static FName NAME_UPlayerListWidget_Multicast_PlayerListRebuild = FName(TEXT("Multicast_PlayerListRebuild"));
void UPlayerListWidget::Multicast_PlayerListRebuild()
{
	ProcessEvent(FindFunctionChecked(NAME_UPlayerListWidget_Multicast_PlayerListRebuild),NULL);
}
struct Z_Construct_UFunction_UPlayerListWidget_Multicast_PlayerListRebuild_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(Server,Reliable)\n//void Server_InitPlayerList();\n" },
#endif
		{ "ModuleRelativePath", "Widgets/PlayerListWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(Server,Reliable)\nvoid Server_InitPlayerList();" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerListWidget_Multicast_PlayerListRebuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerListWidget, nullptr, "Multicast_PlayerListRebuild", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerListWidget_Multicast_PlayerListRebuild_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerListWidget_Multicast_PlayerListRebuild_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerListWidget_Multicast_PlayerListRebuild()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerListWidget_Multicast_PlayerListRebuild_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerListWidget::execMulticast_PlayerListRebuild)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PlayerListRebuild_Implementation();
	P_NATIVE_END;
}
// End Class UPlayerListWidget Function Multicast_PlayerListRebuild

// Begin Class UPlayerListWidget
void UPlayerListWidget::StaticRegisterNativesUPlayerListWidget()
{
	UClass* Class = UPlayerListWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Multicast_PlayerListRebuild", &UPlayerListWidget::execMulticast_PlayerListRebuild },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerListWidget);
UClass* Z_Construct_UClass_UPlayerListWidget_NoRegister()
{
	return UPlayerListWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerListWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/PlayerListWidget.h" },
		{ "ModuleRelativePath", "Widgets/PlayerListWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRowClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9c\x84\xec\xa0\xaf \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4(\xed\x95\x9c \xed\x96\x89)\n" },
#endif
		{ "ModuleRelativePath", "Widgets/PlayerListWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9c\x84\xec\xa0\xaf \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4(\xed\x95\x9c \xed\x96\x89)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/PlayerListWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyGS_MetaData[] = {
		{ "ModuleRelativePath", "Widgets/PlayerListWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/PlayerListWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerRowClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyGS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RowMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerListWidget_Multicast_PlayerListRebuild, "Multicast_PlayerListRebuild" }, // 3300247487
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerListWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_PlayerRowClass = { "PlayerRowClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerListWidget, PlayerRowClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerListPart_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRowClass_MetaData), NewProp_PlayerRowClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_ListBox = { "ListBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerListWidget, ListBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListBox_MetaData), NewProp_ListBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_MyGS = { "MyGS", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerListWidget, MyGS), Z_Construct_UClass_ATeamGameState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyGS_MetaData), NewProp_MyGS_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_RowMap_ValueProp = { "RowMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPlayerListPart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_RowMap_Key_KeyProp = { "RowMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATeamPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_RowMap = { "RowMap", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerListWidget, RowMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowMap_MetaData), NewProp_RowMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerListWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_PlayerRowClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_ListBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_MyGS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_RowMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_RowMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerListWidget_Statics::NewProp_RowMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerListWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerListWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerListWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerListWidget_Statics::ClassParams = {
	&UPlayerListWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerListWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerListWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerListWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerListWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerListWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerListWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerListWidget.OuterSingleton, Z_Construct_UClass_UPlayerListWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerListWidget.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UPlayerListWidget>()
{
	return UPlayerListWidget::StaticClass();
}
UPlayerListWidget::UPlayerListWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerListWidget);
UPlayerListWidget::~UPlayerListWidget() {}
// End Class UPlayerListWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerListWidget, UPlayerListWidget::StaticClass, TEXT("UPlayerListWidget"), &Z_Registration_Info_UClass_UPlayerListWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerListWidget), 3507843002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_4100441946(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_PlayerListWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
