// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Character/Animation/UzuhaAnimMontageMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUzuhaAnimMontageMap() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_UUzuhaAnimMontageMap();
WASDL_API UClass* Z_Construct_UClass_UUzuhaAnimMontageMap_NoRegister();
// End Cross Module References

// Begin Class UUzuhaAnimMontageMap
void UUzuhaAnimMontageMap::StaticRegisterNativesUUzuhaAnimMontageMap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUzuhaAnimMontageMap);
UClass* Z_Construct_UClass_UUzuhaAnimMontageMap_NoRegister()
{
	return UUzuhaAnimMontageMap::StaticClass();
}
struct Z_Construct_UClass_UUzuhaAnimMontageMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/Animation/UzuhaAnimMontageMap.h" },
		{ "ModuleRelativePath", "Character/Animation/UzuhaAnimMontageMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageMap_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "UzuhaAnimMontageMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use soft references so content can be streamed and cooking references are preserved\n" },
#endif
		{ "ModuleRelativePath", "Character/Animation/UzuhaAnimMontageMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use soft references so content can be streamed and cooking references are preserved" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MontageMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MontageMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MontageMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUzuhaAnimMontageMap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::NewProp_MontageMap_ValueProp = { "MontageMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::NewProp_MontageMap_Key_KeyProp = { "MontageMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::NewProp_MontageMap = { "MontageMap", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUzuhaAnimMontageMap, MontageMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageMap_MetaData), NewProp_MontageMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::NewProp_MontageMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::NewProp_MontageMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::NewProp_MontageMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::ClassParams = {
	&UUzuhaAnimMontageMap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUzuhaAnimMontageMap()
{
	if (!Z_Registration_Info_UClass_UUzuhaAnimMontageMap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUzuhaAnimMontageMap.OuterSingleton, Z_Construct_UClass_UUzuhaAnimMontageMap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUzuhaAnimMontageMap.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UUzuhaAnimMontageMap>()
{
	return UUzuhaAnimMontageMap::StaticClass();
}
UUzuhaAnimMontageMap::UUzuhaAnimMontageMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUzuhaAnimMontageMap);
UUzuhaAnimMontageMap::~UUzuhaAnimMontageMap() {}
// End Class UUzuhaAnimMontageMap

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimMontageMap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUzuhaAnimMontageMap, UUzuhaAnimMontageMap::StaticClass, TEXT("UUzuhaAnimMontageMap"), &Z_Registration_Info_UClass_UUzuhaAnimMontageMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUzuhaAnimMontageMap), 4167217385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimMontageMap_h_2371445450(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimMontageMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimMontageMap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
