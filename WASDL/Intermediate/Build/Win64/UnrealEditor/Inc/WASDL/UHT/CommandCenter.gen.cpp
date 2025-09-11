// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Actor/CommandCenter.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommandCenter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_ACommandCenter();
WASDL_API UClass* Z_Construct_UClass_ACommandCenter_NoRegister();
WASDL_API UClass* Z_Construct_UClass_ATank_NoRegister();
// End Cross Module References

// Begin Class ACommandCenter Function MultiCast_OnDeath
static FName NAME_ACommandCenter_MultiCast_OnDeath = FName(TEXT("MultiCast_OnDeath"));
void ACommandCenter::MultiCast_OnDeath()
{
	ProcessEvent(FindFunctionChecked(NAME_ACommandCenter_MultiCast_OnDeath),NULL);
}
struct Z_Construct_UFunction_ACommandCenter_MultiCast_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/CommandCenter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACommandCenter_MultiCast_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACommandCenter, nullptr, "MultiCast_OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACommandCenter_MultiCast_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACommandCenter_MultiCast_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACommandCenter_MultiCast_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACommandCenter_MultiCast_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACommandCenter::execMultiCast_OnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MultiCast_OnDeath_Implementation();
	P_NATIVE_END;
}
// End Class ACommandCenter Function MultiCast_OnDeath

// Begin Class ACommandCenter Function MultiCast_SpawnTank
struct CommandCenter_eventMultiCast_SpawnTank_Parms
{
	FVector_NetQuantize _spawnPoint;
};
static FName NAME_ACommandCenter_MultiCast_SpawnTank = FName(TEXT("MultiCast_SpawnTank"));
void ACommandCenter::MultiCast_SpawnTank(FVector_NetQuantize const& _spawnPoint)
{
	CommandCenter_eventMultiCast_SpawnTank_Parms Parms;
	Parms._spawnPoint=_spawnPoint;
	ProcessEvent(FindFunctionChecked(NAME_ACommandCenter_MultiCast_SpawnTank),&Parms);
}
struct Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/CommandCenter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__spawnPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__spawnPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank_Statics::NewProp__spawnPoint = { "_spawnPoint", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommandCenter_eventMultiCast_SpawnTank_Parms, _spawnPoint), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__spawnPoint_MetaData), NewProp__spawnPoint_MetaData) }; // 1723029535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank_Statics::NewProp__spawnPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACommandCenter, nullptr, "MultiCast_SpawnTank", nullptr, nullptr, Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank_Statics::PropPointers), sizeof(CommandCenter_eventMultiCast_SpawnTank_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank_Statics::Function_MetaDataParams) };
static_assert(sizeof(CommandCenter_eventMultiCast_SpawnTank_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACommandCenter::execMultiCast_SpawnTank)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param__spawnPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MultiCast_SpawnTank_Implementation(Z_Param__spawnPoint);
	P_NATIVE_END;
}
// End Class ACommandCenter Function MultiCast_SpawnTank

// Begin Class ACommandCenter Function OnRep_Health
struct Z_Construct_UFunction_ACommandCenter_OnRep_Health_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/CommandCenter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACommandCenter_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACommandCenter, nullptr, "OnRep_Health", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACommandCenter_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACommandCenter_OnRep_Health_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACommandCenter_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACommandCenter_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACommandCenter::execOnRep_Health)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health();
	P_NATIVE_END;
}
// End Class ACommandCenter Function OnRep_Health

// Begin Class ACommandCenter
void ACommandCenter::StaticRegisterNativesACommandCenter()
{
	UClass* Class = ACommandCenter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MultiCast_OnDeath", &ACommandCenter::execMultiCast_OnDeath },
		{ "MultiCast_SpawnTank", &ACommandCenter::execMultiCast_SpawnTank },
		{ "OnRep_Health", &ACommandCenter::execOnRep_Health },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACommandCenter);
UClass* Z_Construct_UClass_ACommandCenter_NoRegister()
{
	return ACommandCenter::StaticClass();
}
struct Z_Construct_UClass_ACommandCenter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/CommandCenter.h" },
		{ "ModuleRelativePath", "Actor/CommandCenter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "Actor/CommandCenter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "Actor/CommandCenter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SC_MetaData[] = {
		{ "Category", "CommandCenter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/CommandCenter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[] = {
		{ "Category", "CommandCenter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/CommandCenter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterMesh_MetaData[] = {
		{ "Category", "CommandCenter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/CommandCenter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TankClass_MetaData[] = {
		{ "Category", "CommandCenter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\x9c\xeb\xb2\x84 \xec\xa0\x84\xec\x9a\xa9\n" },
#endif
		{ "ModuleRelativePath", "Actor/CommandCenter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\x9c\xeb\xb2\x84 \xec\xa0\x84\xec\x9a\xa9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TankClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACommandCenter_MultiCast_OnDeath, "MultiCast_OnDeath" }, // 3616165052
		{ &Z_Construct_UFunction_ACommandCenter_MultiCast_SpawnTank, "MultiCast_SpawnTank" }, // 1186506410
		{ &Z_Construct_UFunction_ACommandCenter_OnRep_Health, "OnRep_Health" }, // 2153946415
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACommandCenter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACommandCenter_Statics::NewProp_CurrentHP = { "CurrentHP", "OnRep_Health", (EPropertyFlags)0x0010000100020821, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACommandCenter, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHP_MetaData), NewProp_CurrentHP_MetaData) };
void Z_Construct_UClass_ACommandCenter_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((ACommandCenter*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACommandCenter_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000020821, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACommandCenter), &Z_Construct_UClass_ACommandCenter_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACommandCenter_Statics::NewProp_SC = { "SC", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACommandCenter, SC), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SC_MetaData), NewProp_SC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACommandCenter_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACommandCenter, SpawnPoint), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPoint_MetaData), NewProp_SpawnPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACommandCenter_Statics::NewProp_CenterMesh = { "CenterMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACommandCenter, CenterMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterMesh_MetaData), NewProp_CenterMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACommandCenter_Statics::NewProp_TankClass = { "TankClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACommandCenter, TankClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATank_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TankClass_MetaData), NewProp_TankClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACommandCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACommandCenter_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACommandCenter_Statics::NewProp_bIsDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACommandCenter_Statics::NewProp_SC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACommandCenter_Statics::NewProp_SpawnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACommandCenter_Statics::NewProp_CenterMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACommandCenter_Statics::NewProp_TankClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACommandCenter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACommandCenter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACommandCenter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACommandCenter_Statics::ClassParams = {
	&ACommandCenter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACommandCenter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACommandCenter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACommandCenter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACommandCenter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACommandCenter()
{
	if (!Z_Registration_Info_UClass_ACommandCenter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACommandCenter.OuterSingleton, Z_Construct_UClass_ACommandCenter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACommandCenter.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<ACommandCenter>()
{
	return ACommandCenter::StaticClass();
}
void ACommandCenter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentHP(TEXT("CurrentHP"));
	static const FName Name_bIsDead(TEXT("bIsDead"));
	const bool bIsValid = true
		&& Name_CurrentHP == ClassReps[(int32)ENetFields_Private::CurrentHP].Property->GetFName()
		&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACommandCenter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACommandCenter);
ACommandCenter::~ACommandCenter() {}
// End Class ACommandCenter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACommandCenter, ACommandCenter::StaticClass, TEXT("ACommandCenter"), &Z_Registration_Info_UClass_ACommandCenter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACommandCenter), 4160041521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_2343803909(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Actor_CommandCenter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
