// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Enemy/EnemyAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_UEnemyAnimInstance();
WASDL_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();
WASDL_API UEnum* Z_Construct_UEnum_WASDL_EAnimType();
// End Cross Module References

// Begin Enum EAnimType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimType;
static UEnum* EAnimType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WASDL_EAnimType, (UObject*)Z_Construct_UPackage__Script_WASDL(), TEXT("EAnimType"));
	}
	return Z_Registration_Info_UEnum_EAnimType.OuterSingleton;
}
template<> WASDL_API UEnum* StaticEnum<EAnimType>()
{
	return EAnimType_StaticEnum();
}
struct Z_Construct_UEnum_WASDL_EAnimType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Comment", "/**\n * \n */" },
		{ "Attack.Name", "EAnimType::Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Death.Comment", "/**\n * \n */" },
		{ "Death.Name", "EAnimType::Death" },
		{ "Idle.Comment", "/**\n * \n */" },
		{ "Idle.Name", "EAnimType::Idle" },
		{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
		{ "Walk.Comment", "/**\n * \n */" },
		{ "Walk.Name", "EAnimType::Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimType::Walk", (int64)EAnimType::Walk },
		{ "EAnimType::Idle", (int64)EAnimType::Idle },
		{ "EAnimType::Attack", (int64)EAnimType::Attack },
		{ "EAnimType::Death", (int64)EAnimType::Death },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WASDL_EAnimType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WASDL,
	nullptr,
	"EAnimType",
	"EAnimType",
	Z_Construct_UEnum_WASDL_EAnimType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_EAnimType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_EAnimType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WASDL_EAnimType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WASDL_EAnimType()
{
	if (!Z_Registration_Info_UEnum_EAnimType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimType.InnerSingleton, Z_Construct_UEnum_WASDL_EAnimType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimType.InnerSingleton;
}
// End Enum EAnimType

// Begin Class UEnemyAnimInstance Function SetAnimType
struct Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics
{
	struct EnemyAnimInstance_eventSetAnimType_Parms
	{
		EAnimType _type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyAnimInstance_eventSetAnimType_Parms, _type), Z_Construct_UEnum_WASDL_EAnimType, METADATA_PARAMS(0, nullptr) }; // 1149551630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::NewProp__type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::NewProp__type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnimInstance, nullptr, "SetAnimType", nullptr, nullptr, Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::EnemyAnimInstance_eventSetAnimType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::EnemyAnimInstance_eventSetAnimType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyAnimInstance::execSetAnimType)
{
	P_GET_ENUM(EAnimType,Z_Param__type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimType(EAnimType(Z_Param__type));
	P_NATIVE_END;
}
// End Class UEnemyAnimInstance Function SetAnimType

// Begin Class UEnemyAnimInstance
void UEnemyAnimInstance::StaticRegisterNativesUEnemyAnimInstance()
{
	UClass* Class = UEnemyAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAnimType", &UEnemyAnimInstance::execSetAnimType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyAnimInstance);
UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister()
{
	return UEnemyAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UEnemyAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Enemy/EnemyAnimInstance.h" },
		{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimType_MetaData[] = {
		{ "Category", "EnemyAnimInstance" },
		{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyAnimInstance_SetAnimType, "SetAnimType" }, // 1060511902
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_AnimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_AnimType = { "AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnimInstance, AnimType), Z_Construct_UEnum_WASDL_EAnimType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimType_MetaData), NewProp_AnimType_MetaData) }; // 1149551630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_AnimType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_AnimType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams = {
	&UEnemyAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyAnimInstance()
{
	if (!Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton, Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyAnimInstance.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UEnemyAnimInstance>()
{
	return UEnemyAnimInstance::StaticClass();
}
UEnemyAnimInstance::UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnimInstance);
UEnemyAnimInstance::~UEnemyAnimInstance() {}
// End Class UEnemyAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimType_StaticEnum, TEXT("EAnimType"), &Z_Registration_Info_UEnum_EAnimType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1149551630U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyAnimInstance, UEnemyAnimInstance::StaticClass, TEXT("UEnemyAnimInstance"), &Z_Registration_Info_UClass_UEnemyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAnimInstance), 2504638718U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_2305051094(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_EnemyAnimInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
