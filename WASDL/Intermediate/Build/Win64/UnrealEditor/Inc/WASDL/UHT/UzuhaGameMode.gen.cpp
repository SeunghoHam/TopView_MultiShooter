// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/UzuhaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUzuhaGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_AUzuhaGameMode();
WASDL_API UClass* Z_Construct_UClass_AUzuhaGameMode_NoRegister();
// End Cross Module References

// Begin Class AUzuhaGameMode
void AUzuhaGameMode::StaticRegisterNativesAUzuhaGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUzuhaGameMode);
UClass* Z_Construct_UClass_AUzuhaGameMode_NoRegister()
{
	return AUzuhaGameMode::StaticClass();
}
struct Z_Construct_UClass_AUzuhaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UzuhaGameMode.h" },
		{ "ModuleRelativePath", "UzuhaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUzuhaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUzuhaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUzuhaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUzuhaGameMode_Statics::ClassParams = {
	&AUzuhaGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUzuhaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUzuhaGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUzuhaGameMode()
{
	if (!Z_Registration_Info_UClass_AUzuhaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUzuhaGameMode.OuterSingleton, Z_Construct_UClass_AUzuhaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUzuhaGameMode.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<AUzuhaGameMode>()
{
	return AUzuhaGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUzuhaGameMode);
AUzuhaGameMode::~AUzuhaGameMode() {}
// End Class AUzuhaGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_UzuhaGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUzuhaGameMode, AUzuhaGameMode::StaticClass, TEXT("AUzuhaGameMode"), &Z_Registration_Info_UClass_AUzuhaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUzuhaGameMode), 3931357634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_UzuhaGameMode_h_1151356513(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_UzuhaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_UzuhaGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
