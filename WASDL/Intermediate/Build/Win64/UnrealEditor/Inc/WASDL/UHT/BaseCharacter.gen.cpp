// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Character/BaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_ABaseCharacter();
WASDL_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
WASDL_API UClass* Z_Construct_UClass_ACommandCenter_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UEnemyHealthWidget_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UFogVisibilityComponent_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
WASDL_API UClass* Z_Construct_UClass_USoundComponent_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UVisionRevealerComponent_NoRegister();
// End Cross Module References

// Begin Class ABaseCharacter Function CheckCurrentHP
struct Z_Construct_UFunction_ABaseCharacter_CheckCurrentHP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa0\x81 \xea\xb3\xb5\xea\xb2\xa9 \xec\xa0\x84 \xed\x83\x90\xec\x83\x89\xec\x9a\xa9. \xeb\x8b\xa4\xec\x9d\x8c \xec\xa0\x81 \xed\x83\x90\xec\x83\x89\xec\x9d\x80 FLT_MAX \xeb\xb2\x94\xec\x9c\x84\xeb\xa1\x9c \xea\xb2\x80\xec\x82\xac\xed\x95\xa8\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x81 \xea\xb3\xb5\xea\xb2\xa9 \xec\xa0\x84 \xed\x83\x90\xec\x83\x89\xec\x9a\xa9. \xeb\x8b\xa4\xec\x9d\x8c \xec\xa0\x81 \xed\x83\x90\xec\x83\x89\xec\x9d\x80 FLT_MAX \xeb\xb2\x94\xec\x9c\x84\xeb\xa1\x9c \xea\xb2\x80\xec\x82\xac\xed\x95\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_CheckCurrentHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "CheckCurrentHP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_CheckCurrentHP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_CheckCurrentHP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseCharacter_CheckCurrentHP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_CheckCurrentHP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execCheckCurrentHP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckCurrentHP();
	P_NATIVE_END;
}
// End Class ABaseCharacter Function CheckCurrentHP

// Begin Class ABaseCharacter Function GetIsTargetNear
struct Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics
{
	struct BaseCharacter_eventGetIsTargetNear_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseCharacter_eventGetIsTargetNear_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseCharacter_eventGetIsTargetNear_Parms), &Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetIsTargetNear", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::BaseCharacter_eventGetIsTargetNear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::BaseCharacter_eventGetIsTargetNear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execGetIsTargetNear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsTargetNear();
	P_NATIVE_END;
}
// End Class ABaseCharacter Function GetIsTargetNear

// Begin Class ABaseCharacter Function GetTarget
struct Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics
{
	struct BaseCharacter_eventGetTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintTask\xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa8\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintTask\xec\x97\x90\xec\x84\x9c \xec\x82\xac\xec\x9a\xa9\xed\x95\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetTarget", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::BaseCharacter_eventGetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::BaseCharacter_eventGetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseCharacter_GetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execGetTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetTarget();
	P_NATIVE_END;
}
// End Class ABaseCharacter Function GetTarget

// Begin Class ABaseCharacter Function Multicast_OnDeath
static FName NAME_ABaseCharacter_Multicast_OnDeath = FName(TEXT("Multicast_OnDeath"));
void ABaseCharacter::Multicast_OnDeath()
{
	ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_Multicast_OnDeath),NULL);
}
struct Z_Construct_UFunction_ABaseCharacter_Multicast_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MoveTo\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\xa0\x81 \xec\xb0\xbe\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MoveTo\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\xa0\x81 \xec\xb0\xbe\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_Multicast_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "Multicast_OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_Multicast_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_Multicast_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseCharacter_Multicast_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_Multicast_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execMulticast_OnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_OnDeath_Implementation();
	P_NATIVE_END;
}
// End Class ABaseCharacter Function Multicast_OnDeath

// Begin Class ABaseCharacter Function OnRep_AttackRotation
struct Z_Construct_UFunction_ABaseCharacter_OnRep_AttackRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_OnRep_AttackRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "OnRep_AttackRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_OnRep_AttackRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_OnRep_AttackRotation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseCharacter_OnRep_AttackRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_OnRep_AttackRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execOnRep_AttackRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttackRotation();
	P_NATIVE_END;
}
// End Class ABaseCharacter Function OnRep_AttackRotation

// Begin Class ABaseCharacter Function Server_OnDeath
static FName NAME_ABaseCharacter_Server_OnDeath = FName(TEXT("Server_OnDeath"));
void ABaseCharacter::Server_OnDeath()
{
	ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_Server_OnDeath),NULL);
}
struct Z_Construct_UFunction_ABaseCharacter_Server_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_Server_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "Server_OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_Server_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_Server_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseCharacter_Server_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_Server_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execServer_OnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_OnDeath_Implementation();
	P_NATIVE_END;
}
// End Class ABaseCharacter Function Server_OnDeath

// Begin Class ABaseCharacter
void ABaseCharacter::StaticRegisterNativesABaseCharacter()
{
	UClass* Class = ABaseCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCurrentHP", &ABaseCharacter::execCheckCurrentHP },
		{ "GetIsTargetNear", &ABaseCharacter::execGetIsTargetNear },
		{ "GetTarget", &ABaseCharacter::execGetTarget },
		{ "Multicast_OnDeath", &ABaseCharacter::execMulticast_OnDeath },
		{ "OnRep_AttackRotation", &ABaseCharacter::execOnRep_AttackRotation },
		{ "Server_OnDeath", &ABaseCharacter::execServer_OnDeath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacter);
UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
{
	return ABaseCharacter::StaticClass();
}
struct Z_Construct_UClass_ABaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BaseCharacter.h" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityComponent_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisionRevealerComponent_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundComponent_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidget_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidgetClass_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CurrentTarget \xec\x97\xac\xea\xb8\xb0\xec\x84\x9c \xea\xb2\xb0\xec\xa0\x95\xeb\x90\xa8\n// Replicateed\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CurrentTarget \xec\x97\xac\xea\xb8\xb0\xec\x84\x9c \xea\xb2\xb0\xec\xa0\x95\xeb\x90\xa8\nReplicateed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRotation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated\n" },
#endif
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandCenter_MetaData[] = {
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandCenterInstance_MetaData[] = {
		{ "ModuleRelativePath", "Character/BaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisibilityComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisionRevealerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthWidgetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommandCenter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommandCenter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommandCenterInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_CheckCurrentHP, "CheckCurrentHP" }, // 2116811505
		{ &Z_Construct_UFunction_ABaseCharacter_GetIsTargetNear, "GetIsTargetNear" }, // 3063618438
		{ &Z_Construct_UFunction_ABaseCharacter_GetTarget, "GetTarget" }, // 3939390204
		{ &Z_Construct_UFunction_ABaseCharacter_Multicast_OnDeath, "Multicast_OnDeath" }, // 1364701175
		{ &Z_Construct_UFunction_ABaseCharacter_OnRep_AttackRotation, "OnRep_AttackRotation" }, // 3804164934
		{ &Z_Construct_UFunction_ABaseCharacter_Server_OnDeath, "Server_OnDeath" }, // 3347452659
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_VisibilityComponent = { "VisibilityComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, VisibilityComponent), Z_Construct_UClass_UFogVisibilityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityComponent_MetaData), NewProp_VisibilityComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_VisionRevealerComponent = { "VisionRevealerComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, VisionRevealerComponent), Z_Construct_UClass_UVisionRevealerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisionRevealerComponent_MetaData), NewProp_VisionRevealerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SoundComponent = { "SoundComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, SoundComponent), Z_Construct_UClass_USoundComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundComponent_MetaData), NewProp_SoundComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthWidget = { "HealthWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, HealthWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthWidget_MetaData), NewProp_HealthWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthWidgetClass = { "HealthWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, HealthWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnemyHealthWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthWidgetClass_MetaData), NewProp_HealthWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthWidgetInstance = { "HealthWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, HealthWidgetInstance), Z_Construct_UClass_UEnemyHealthWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthWidgetInstance_MetaData), NewProp_HealthWidgetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AttackRotation = { "AttackRotation", "OnRep_AttackRotation", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, AttackRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRotation_MetaData), NewProp_AttackRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CommandCenter_Inner = { "CommandCenter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CommandCenter = { "CommandCenter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, CommandCenter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandCenter_MetaData), NewProp_CommandCenter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CommandCenterInstance = { "CommandCenterInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, CommandCenterInstance), Z_Construct_UClass_ACommandCenter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandCenterInstance_MetaData), NewProp_CommandCenterInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_VisibilityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_VisionRevealerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SoundComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AttackRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CommandCenter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CommandCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_CommandCenterInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
	&ABaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseCharacter()
{
	if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<ABaseCharacter>()
{
	return ABaseCharacter::StaticClass();
}
void ABaseCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentTarget(TEXT("CurrentTarget"));
	static const FName Name_AttackRotation(TEXT("AttackRotation"));
	const bool bIsValid = true
		&& Name_CurrentTarget == ClassReps[(int32)ENetFields_Private::CurrentTarget].Property->GetFName()
		&& Name_AttackRotation == ClassReps[(int32)ENetFields_Private::AttackRotation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABaseCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
ABaseCharacter::~ABaseCharacter() {}
// End Class ABaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_BaseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, ABaseCharacter::StaticClass, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 4003014211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_BaseCharacter_h_3826635889(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_BaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_BaseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
