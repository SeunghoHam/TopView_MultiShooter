// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/System/FOW/FogOfWarSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFogOfWarSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_AFogOfWarManager_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UFogOfWarSubsystem();
WASDL_API UClass* Z_Construct_UClass_UFogOfWarSubsystem_NoRegister();
// End Cross Module References

// Begin Class UFogOfWarSubsystem
void UFogOfWarSubsystem::StaticRegisterNativesUFogOfWarSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFogOfWarSubsystem);
UClass* Z_Construct_UClass_UFogOfWarSubsystem_NoRegister()
{
	return UFogOfWarSubsystem::StaticClass();
}
struct Z_Construct_UClass_UFogOfWarSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nUSTRUCT()\nstruct FFOW_Revealer\n{\n\x09GENERATED_BODY()\n\x09TWeakObjectPtr<USceneComponent> Source;\n\x09""float Radius = 1200.f;\n};\n*/" },
#endif
		{ "IncludePath", "System/FOW/FogOfWarSubsystem.h" },
		{ "ModuleRelativePath", "System/FOW/FogOfWarSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USTRUCT()\nstruct FFOW_Revealer\n{\n       GENERATED_BODY()\n       TWeakObjectPtr<USceneComponent> Source;\n       float Radius = 1200.f;\n};" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerClass_MetaData[] = {
		{ "Category", "FOW" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa7\xa4\xeb\x8b\x88\xec\xa0\x80 Actor(\xeb\xa7\x88\xec\x8a\xa4\xed\x81\xac RT \xea\xb0\xb1\xec\x8b\xa0)\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\xa4\xeb\x8b\x88\xec\xa0\x80 Actor(\xeb\xa7\x88\xec\x8a\xa4\xed\x81\xac RT \xea\xb0\xb1\xec\x8b\xa0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "ModuleRelativePath", "System/FOW/FogOfWarSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ManagerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFogOfWarSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFogOfWarSubsystem_Statics::NewProp_ManagerClass = { "ManagerClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFogOfWarSubsystem, ManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFogOfWarManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerClass_MetaData), NewProp_ManagerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFogOfWarSubsystem_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFogOfWarSubsystem, Manager), Z_Construct_UClass_AFogOfWarManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFogOfWarSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFogOfWarSubsystem_Statics::NewProp_ManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFogOfWarSubsystem_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFogOfWarSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFogOfWarSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFogOfWarSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFogOfWarSubsystem_Statics::ClassParams = {
	&UFogOfWarSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFogOfWarSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFogOfWarSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFogOfWarSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFogOfWarSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFogOfWarSubsystem()
{
	if (!Z_Registration_Info_UClass_UFogOfWarSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFogOfWarSubsystem.OuterSingleton, Z_Construct_UClass_UFogOfWarSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFogOfWarSubsystem.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UFogOfWarSubsystem>()
{
	return UFogOfWarSubsystem::StaticClass();
}
UFogOfWarSubsystem::UFogOfWarSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFogOfWarSubsystem);
UFogOfWarSubsystem::~UFogOfWarSubsystem() {}
// End Class UFogOfWarSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFogOfWarSubsystem, UFogOfWarSubsystem::StaticClass, TEXT("UFogOfWarSubsystem"), &Z_Registration_Info_UClass_UFogOfWarSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFogOfWarSubsystem), 927892338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarSubsystem_h_1241235373(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
