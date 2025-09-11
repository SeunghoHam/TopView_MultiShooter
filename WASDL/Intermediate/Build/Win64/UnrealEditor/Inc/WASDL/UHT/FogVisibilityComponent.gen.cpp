// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/System/FOW/FogVisibilityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFogVisibilityComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_UFogVisibilityComponent();
WASDL_API UClass* Z_Construct_UClass_UFogVisibilityComponent_NoRegister();
WASDL_API UEnum* Z_Construct_UEnum_WASDL_ETeamType();
// End Cross Module References

// Begin Enum ETeamType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeamType;
static UEnum* ETeamType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETeamType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETeamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WASDL_ETeamType, (UObject*)Z_Construct_UPackage__Script_WASDL(), TEXT("ETeamType"));
	}
	return Z_Registration_Info_UEnum_ETeamType.OuterSingleton;
}
template<> WASDL_API UEnum* StaticEnum<ETeamType>()
{
	return ETeamType_StaticEnum();
}
struct Z_Construct_UEnum_WASDL_ETeamType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Enemy.Name", "ETeamType::Enemy" },
		{ "ModuleRelativePath", "System/FOW/FogVisibilityComponent.h" },
		{ "Neutral.Name", "ETeamType::Neutral" },
		{ "Player.Name", "ETeamType::Player" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETeamType::Player", (int64)ETeamType::Player },
		{ "ETeamType::Enemy", (int64)ETeamType::Enemy },
		{ "ETeamType::Neutral", (int64)ETeamType::Neutral },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WASDL_ETeamType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WASDL,
	nullptr,
	"ETeamType",
	"ETeamType",
	Z_Construct_UEnum_WASDL_ETeamType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_ETeamType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_ETeamType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WASDL_ETeamType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WASDL_ETeamType()
{
	if (!Z_Registration_Info_UEnum_ETeamType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeamType.InnerSingleton, Z_Construct_UEnum_WASDL_ETeamType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETeamType.InnerSingleton;
}
// End Enum ETeamType

// Begin Class UFogVisibilityComponent Function OnRep_Vis
struct Z_Construct_UFunction_UFogVisibilityComponent_OnRep_Vis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/FOW/FogVisibilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFogVisibilityComponent_OnRep_Vis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFogVisibilityComponent, nullptr, "OnRep_Vis", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFogVisibilityComponent_OnRep_Vis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFogVisibilityComponent_OnRep_Vis_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFogVisibilityComponent_OnRep_Vis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFogVisibilityComponent_OnRep_Vis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFogVisibilityComponent::execOnRep_Vis)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Vis();
	P_NATIVE_END;
}
// End Class UFogVisibilityComponent Function OnRep_Vis

// Begin Class UFogVisibilityComponent
void UFogVisibilityComponent::StaticRegisterNativesUFogVisibilityComponent()
{
	UClass* Class = UFogVisibilityComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Vis", &UFogVisibilityComponent::execOnRep_Vis },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFogVisibilityComponent);
UClass* Z_Construct_UClass_UFogVisibilityComponent_NoRegister()
{
	return UFogVisibilityComponent::StaticClass();
}
struct Z_Construct_UClass_UFogVisibilityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "FOW" },
		{ "IncludePath", "System/FOW/FogVisibilityComponent.h" },
		{ "ModuleRelativePath", "System/FOW/FogVisibilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleForTeam_MetaData[] = {
		{ "ModuleRelativePath", "System/FOW/FogVisibilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleMask_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xeb\x8c\x80 8\xed\x8c\x80\xea\xb9\x8c\xec\xa7\x80 \xec\xa7\x80\xec\x9b\x90 (\xea\xb0\x81 \xeb\xb9\x84\xed\x8a\xb8 = \xed\x8c\x80 \xea\xb0\x80\xec\x8b\x9c \xec\x97\xac\xeb\xb6\x80)\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogVisibilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xeb\x8c\x80 8\xed\x8c\x80\xea\xb9\x8c\xec\xa7\x80 \xec\xa7\x80\xec\x9b\x90 (\xea\xb0\x81 \xeb\xb9\x84\xed\x8a\xb8 = \xed\x8c\x80 \xea\xb0\x80\xec\x8b\x9c \xec\x97\xac\xeb\xb6\x80)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleForTeam_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_bVisibleForTeam;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VisibleMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFogVisibilityComponent_OnRep_Vis, "OnRep_Vis" }, // 2741676737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFogVisibilityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFogVisibilityComponent_Statics::NewProp_bVisibleForTeam_Inner = { "bVisibleForTeam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFogVisibilityComponent_Statics::NewProp_bVisibleForTeam = { "bVisibleForTeam", "OnRep_Vis", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFogVisibilityComponent, bVisibleForTeam), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleForTeam_MetaData), NewProp_bVisibleForTeam_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFogVisibilityComponent_Statics::NewProp_VisibleMask = { "VisibleMask", "OnRep_Vis", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFogVisibilityComponent, VisibleMask), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleMask_MetaData), NewProp_VisibleMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFogVisibilityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFogVisibilityComponent_Statics::NewProp_bVisibleForTeam_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFogVisibilityComponent_Statics::NewProp_bVisibleForTeam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFogVisibilityComponent_Statics::NewProp_VisibleMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFogVisibilityComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFogVisibilityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFogVisibilityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFogVisibilityComponent_Statics::ClassParams = {
	&UFogVisibilityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFogVisibilityComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFogVisibilityComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFogVisibilityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFogVisibilityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFogVisibilityComponent()
{
	if (!Z_Registration_Info_UClass_UFogVisibilityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFogVisibilityComponent.OuterSingleton, Z_Construct_UClass_UFogVisibilityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFogVisibilityComponent.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UFogVisibilityComponent>()
{
	return UFogVisibilityComponent::StaticClass();
}
void UFogVisibilityComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bVisibleForTeam(TEXT("bVisibleForTeam"));
	static const FName Name_VisibleMask(TEXT("VisibleMask"));
	const bool bIsValid = true
		&& Name_bVisibleForTeam == ClassReps[(int32)ENetFields_Private::bVisibleForTeam].Property->GetFName()
		&& Name_VisibleMask == ClassReps[(int32)ENetFields_Private::VisibleMask].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UFogVisibilityComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFogVisibilityComponent);
UFogVisibilityComponent::~UFogVisibilityComponent() {}
// End Class UFogVisibilityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETeamType_StaticEnum, TEXT("ETeamType"), &Z_Registration_Info_UEnum_ETeamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1050855680U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFogVisibilityComponent, UFogVisibilityComponent::StaticClass, TEXT("UFogVisibilityComponent"), &Z_Registration_Info_UClass_UFogVisibilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFogVisibilityComponent), 567165572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_3658721495(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogVisibilityComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
