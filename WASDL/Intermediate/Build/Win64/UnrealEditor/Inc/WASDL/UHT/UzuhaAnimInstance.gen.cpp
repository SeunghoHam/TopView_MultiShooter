// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Character/Animation/UzuhaAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUzuhaAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_UUzuhaAnimInstance();
WASDL_API UClass* Z_Construct_UClass_UUzuhaAnimInstance_NoRegister();
WASDL_API UEnum* Z_Construct_UEnum_WASDL_EAnimState();
// End Cross Module References

// Begin Enum EAnimState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimState;
static UEnum* EAnimState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WASDL_EAnimState, (UObject*)Z_Construct_UPackage__Script_WASDL(), TEXT("EAnimState"));
	}
	return Z_Registration_Info_UEnum_EAnimState.OuterSingleton;
}
template<> WASDL_API UEnum* StaticEnum<EAnimState>()
{
	return EAnimState_StaticEnum();
}
struct Z_Construct_UEnum_WASDL_EAnimState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Idle.Comment", "/**\n * \n */" },
		{ "Idle.Name", "EAnimState::Idle" },
		{ "Idle_Weapon.Comment", "/**\n * \n */" },
		{ "Idle_Weapon.Name", "EAnimState::Idle_Weapon" },
		{ "ModuleRelativePath", "Character/Animation/UzuhaAnimInstance.h" },
		{ "Shoot.Comment", "/**\n * \n */" },
		{ "Shoot.Name", "EAnimState::Shoot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimState::Idle", (int64)EAnimState::Idle },
		{ "EAnimState::Idle_Weapon", (int64)EAnimState::Idle_Weapon },
		{ "EAnimState::Shoot", (int64)EAnimState::Shoot },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WASDL_EAnimState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WASDL,
	nullptr,
	"EAnimState",
	"EAnimState",
	Z_Construct_UEnum_WASDL_EAnimState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_EAnimState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_EAnimState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WASDL_EAnimState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WASDL_EAnimState()
{
	if (!Z_Registration_Info_UEnum_EAnimState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimState.InnerSingleton, Z_Construct_UEnum_WASDL_EAnimState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimState.InnerSingleton;
}
// End Enum EAnimState

// Begin Class UUzuhaAnimInstance
void UUzuhaAnimInstance::StaticRegisterNativesUUzuhaAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUzuhaAnimInstance);
UClass* Z_Construct_UClass_UUzuhaAnimInstance_NoRegister()
{
	return UUzuhaAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UUzuhaAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/Animation/UzuhaAnimInstance.h" },
		{ "ModuleRelativePath", "Character/Animation/UzuhaAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUzuhaAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUzuhaAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUzuhaAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUzuhaAnimInstance_Statics::ClassParams = {
	&UUzuhaAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUzuhaAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UUzuhaAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUzuhaAnimInstance()
{
	if (!Z_Registration_Info_UClass_UUzuhaAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUzuhaAnimInstance.OuterSingleton, Z_Construct_UClass_UUzuhaAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUzuhaAnimInstance.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UUzuhaAnimInstance>()
{
	return UUzuhaAnimInstance::StaticClass();
}
UUzuhaAnimInstance::UUzuhaAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUzuhaAnimInstance);
UUzuhaAnimInstance::~UUzuhaAnimInstance() {}
// End Class UUzuhaAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimState_StaticEnum, TEXT("EAnimState"), &Z_Registration_Info_UEnum_EAnimState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3890308785U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUzuhaAnimInstance, UUzuhaAnimInstance::StaticClass, TEXT("UUzuhaAnimInstance"), &Z_Registration_Info_UClass_UUzuhaAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUzuhaAnimInstance), 1400775160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_4160102843(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Animation_UzuhaAnimInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
