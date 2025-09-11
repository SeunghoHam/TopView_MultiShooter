// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Actor/PingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePingActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_APingActor();
WASDL_API UClass* Z_Construct_UClass_APingActor_NoRegister();
// End Cross Module References

// Begin Class APingActor
void APingActor::StaticRegisterNativesAPingActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APingActor);
UClass* Z_Construct_UClass_APingActor_NoRegister()
{
	return APingActor::StaticClass();
}
struct Z_Construct_UClass_APingActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/PingActor.h" },
		{ "ModuleRelativePath", "Actor/PingActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APingActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APingActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APingActor_Statics::ClassParams = {
	&APingActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APingActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APingActor()
{
	if (!Z_Registration_Info_UClass_APingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APingActor.OuterSingleton, Z_Construct_UClass_APingActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APingActor.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<APingActor>()
{
	return APingActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APingActor);
APingActor::~APingActor() {}
// End Class APingActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_PingActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APingActor, APingActor::StaticClass, TEXT("APingActor"), &Z_Registration_Info_UClass_APingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APingActor), 1717481898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_PingActor_h_881773955(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_PingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_PingActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
