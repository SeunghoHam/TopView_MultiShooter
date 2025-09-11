// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Enemy/BaseEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_ABaseCharacter();
WASDL_API UClass* Z_Construct_UClass_ABaseEnemy();
WASDL_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UAnimationControlComponent_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();
// End Cross Module References

// Begin Class ABaseEnemy Function GetTargetLocation
struct Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics
{
	struct BaseEnemy_eventGetTargetLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY()\n//ACommandCenter* CommandCenterInstance;\n" },
#endif
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY()\nACommandCenter* CommandCenterInstance;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventGetTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetTargetLocation", nullptr, nullptr, Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::BaseEnemy_eventGetTargetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::BaseEnemy_eventGetTargetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_GetTargetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetTargetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execGetTargetLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTargetLocation();
	P_NATIVE_END;
}
// End Class ABaseEnemy Function GetTargetLocation

// Begin Class ABaseEnemy Function Multicast_AttackMotionEffect
struct BaseEnemy_eventMulticast_AttackMotionEffect_Parms
{
	FVector _dir;
};
static FName NAME_ABaseEnemy_Multicast_AttackMotionEffect = FName(TEXT("Multicast_AttackMotionEffect"));
void ABaseEnemy::Multicast_AttackMotionEffect(FVector _dir)
{
	BaseEnemy_eventMulticast_AttackMotionEffect_Parms Parms;
	Parms._dir=_dir;
	ProcessEvent(FindFunctionChecked(NAME_ABaseEnemy_Multicast_AttackMotionEffect),&Parms);
}
struct Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BTT\xec\x97\x90\xec\x84\x9c \xea\xb3\xb5\xea\xb2\xa9 \xec\x8b\xa4\xed\x96\x89\n" },
#endif
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BTT\xec\x97\x90\xec\x84\x9c \xea\xb3\xb5\xea\xb2\xa9 \xec\x8b\xa4\xed\x96\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__dir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect_Statics::NewProp__dir = { "_dir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventMulticast_AttackMotionEffect_Parms, _dir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect_Statics::NewProp__dir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "Multicast_AttackMotionEffect", nullptr, nullptr, Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect_Statics::PropPointers), sizeof(BaseEnemy_eventMulticast_AttackMotionEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseEnemy_eventMulticast_AttackMotionEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execMulticast_AttackMotionEffect)
{
	P_GET_STRUCT(FVector,Z_Param__dir);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_AttackMotionEffect_Implementation(Z_Param__dir);
	P_NATIVE_END;
}
// End Class ABaseEnemy Function Multicast_AttackMotionEffect

// Begin Class ABaseEnemy Function TaskAttackEnd
struct Z_Construct_UFunction_ABaseEnemy_TaskAttackEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION()\n//void OnRep_Health();\n" },
#endif
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION()\nvoid OnRep_Health();" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_TaskAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "TaskAttackEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_TaskAttackEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_TaskAttackEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseEnemy_TaskAttackEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_TaskAttackEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execTaskAttackEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TaskAttackEnd();
	P_NATIVE_END;
}
// End Class ABaseEnemy Function TaskAttackEnd

// Begin Class ABaseEnemy Function TryAttack
struct Z_Construct_UFunction_ABaseEnemy_TryAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_TryAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "TryAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_TryAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_TryAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseEnemy_TryAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_TryAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execTryAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryAttack();
	P_NATIVE_END;
}
// End Class ABaseEnemy Function TryAttack

// Begin Class ABaseEnemy
void ABaseEnemy::StaticRegisterNativesABaseEnemy()
{
	UClass* Class = ABaseEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTargetLocation", &ABaseEnemy::execGetTargetLocation },
		{ "Multicast_AttackMotionEffect", &ABaseEnemy::execMulticast_AttackMotionEffect },
		{ "TaskAttackEnd", &ABaseEnemy::execTaskAttackEnd },
		{ "TryAttack", &ABaseEnemy::execTryAttack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemy);
UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
{
	return ABaseEnemy::StaticClass();
}
struct Z_Construct_UClass_ABaseEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/BaseEnemy.h" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "BaseEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acurrent_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ARcurrent_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acurrent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ARcurrent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEnemy_GetTargetLocation, "GetTargetLocation" }, // 3276992237
		{ &Z_Construct_UFunction_ABaseEnemy_Multicast_AttackMotionEffect, "Multicast_AttackMotionEffect" }, // 2748520486
		{ &Z_Construct_UFunction_ABaseEnemy_TaskAttackEnd, "TaskAttackEnd" }, // 2248754053
		{ &Z_Construct_UFunction_ABaseEnemy_TryAttack, "TryAttack" }, // 118778263
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AnimationComponent = { "AnimationComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, AnimationComponent), Z_Construct_UClass_UAnimationControlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationComponent_MetaData), NewProp_AnimationComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, AnimInstance), Z_Construct_UClass_UEnemyAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstance_MetaData), NewProp_AnimInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Acurrent = { "Acurrent", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, Acurrent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acurrent_MetaData), NewProp_Acurrent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ARcurrent = { "ARcurrent", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, ARcurrent), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ARcurrent_MetaData), NewProp_ARcurrent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AnimationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AnimInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Acurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_ARcurrent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
	&ABaseEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseEnemy()
{
	if (!Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<ABaseEnemy>()
{
	return ABaseEnemy::StaticClass();
}
void ABaseEnemy::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Acurrent(TEXT("Acurrent"));
	static const FName Name_ARcurrent(TEXT("ARcurrent"));
	const bool bIsValid = true
		&& Name_Acurrent == ClassReps[(int32)ENetFields_Private::Acurrent].Property->GetFName()
		&& Name_ARcurrent == ClassReps[(int32)ENetFields_Private::ARcurrent].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABaseEnemy"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
ABaseEnemy::~ABaseEnemy() {}
// End Class ABaseEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemy, ABaseEnemy::StaticClass, TEXT("ABaseEnemy"), &Z_Registration_Info_UClass_ABaseEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemy), 3271391983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_4155704508(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Enemy_BaseEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
