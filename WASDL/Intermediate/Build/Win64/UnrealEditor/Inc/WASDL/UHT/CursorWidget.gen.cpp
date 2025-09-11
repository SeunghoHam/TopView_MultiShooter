// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Widgets/CursorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCursorWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_UCursorWidget();
WASDL_API UClass* Z_Construct_UClass_UCursorWidget_NoRegister();
WASDL_API UEnum* Z_Construct_UEnum_WASDL_ECursorType();
// End Cross Module References

// Begin Enum ECursorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECursorType;
static UEnum* ECursorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECursorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECursorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WASDL_ECursorType, (UObject*)Z_Construct_UPackage__Script_WASDL(), TEXT("ECursorType"));
	}
	return Z_Registration_Info_UEnum_ECursorType.OuterSingleton;
}
template<> WASDL_API UEnum* StaticEnum<ECursorType>()
{
	return ECursorType_StaticEnum();
}
struct Z_Construct_UEnum_WASDL_ECursorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Name", "ECursorType::Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n *///class FTexture;\n" },
#endif
		{ "ModuleRelativePath", "Widgets/CursorWidget.h" },
		{ "Normal.Name", "ECursorType::Normal" },
		{ "Order.Name", "ECursorType::Order" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//class FTexture;" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECursorType::Normal", (int64)ECursorType::Normal },
		{ "ECursorType::Attack", (int64)ECursorType::Attack },
		{ "ECursorType::Order", (int64)ECursorType::Order },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WASDL_ECursorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WASDL,
	nullptr,
	"ECursorType",
	"ECursorType",
	Z_Construct_UEnum_WASDL_ECursorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_ECursorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_ECursorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WASDL_ECursorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WASDL_ECursorType()
{
	if (!Z_Registration_Info_UEnum_ECursorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECursorType.InnerSingleton, Z_Construct_UEnum_WASDL_ECursorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECursorType.InnerSingleton;
}
// End Enum ECursorType

// Begin Class UCursorWidget
void UCursorWidget::StaticRegisterNativesUCursorWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCursorWidget);
UClass* Z_Construct_UClass_UCursorWidget_NoRegister()
{
	return UCursorWidget::StaticClass();
}
struct Z_Construct_UClass_UCursorWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/CursorWidget.h" },
		{ "ModuleRelativePath", "Widgets/CursorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CursorWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/CursorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalCursorTexture_MetaData[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Widgets/CursorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCursorTexture_MetaData[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Widgets/CursorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderCursorTexture_MetaData[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Widgets/CursorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorSize_MetaData[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Widgets/CursorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_White_MetaData[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Widgets/CursorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Widgets/CursorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[] = {
		{ "Category", "Cursor" },
		{ "ModuleRelativePath", "Widgets/CursorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CursorImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalCursorTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackCursorTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderCursorTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CursorSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_White;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Red;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Blue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCursorWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCursorWidget_Statics::NewProp_CursorImage = { "CursorImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorWidget, CursorImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorImage_MetaData), NewProp_CursorImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCursorWidget_Statics::NewProp_NormalCursorTexture = { "NormalCursorTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorWidget, NormalCursorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalCursorTexture_MetaData), NewProp_NormalCursorTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCursorWidget_Statics::NewProp_AttackCursorTexture = { "AttackCursorTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorWidget, AttackCursorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCursorTexture_MetaData), NewProp_AttackCursorTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCursorWidget_Statics::NewProp_OrderCursorTexture = { "OrderCursorTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorWidget, OrderCursorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderCursorTexture_MetaData), NewProp_OrderCursorTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCursorWidget_Statics::NewProp_CursorSize = { "CursorSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorWidget, CursorSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorSize_MetaData), NewProp_CursorSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCursorWidget_Statics::NewProp_White = { "White", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorWidget, White), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_White_MetaData), NewProp_White_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCursorWidget_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorWidget, Red), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Red_MetaData), NewProp_Red_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCursorWidget_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCursorWidget, Blue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blue_MetaData), NewProp_Blue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCursorWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorWidget_Statics::NewProp_CursorImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorWidget_Statics::NewProp_NormalCursorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorWidget_Statics::NewProp_AttackCursorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorWidget_Statics::NewProp_OrderCursorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorWidget_Statics::NewProp_CursorSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorWidget_Statics::NewProp_White,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorWidget_Statics::NewProp_Red,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCursorWidget_Statics::NewProp_Blue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCursorWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCursorWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCursorWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCursorWidget_Statics::ClassParams = {
	&UCursorWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCursorWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCursorWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCursorWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCursorWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCursorWidget()
{
	if (!Z_Registration_Info_UClass_UCursorWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCursorWidget.OuterSingleton, Z_Construct_UClass_UCursorWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCursorWidget.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UCursorWidget>()
{
	return UCursorWidget::StaticClass();
}
UCursorWidget::UCursorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCursorWidget);
UCursorWidget::~UCursorWidget() {}
// End Class UCursorWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECursorType_StaticEnum, TEXT("ECursorType"), &Z_Registration_Info_UEnum_ECursorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3721854545U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCursorWidget, UCursorWidget::StaticClass, TEXT("UCursorWidget"), &Z_Registration_Info_UClass_UCursorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCursorWidget), 3952063929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_1384481273(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Widgets_CursorWidget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
