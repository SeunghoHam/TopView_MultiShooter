// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Character/Uzuha.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUzuha() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_ACommandCenter_NoRegister();
WASDL_API UClass* Z_Construct_UClass_AOrderWidgetActor_NoRegister();
WASDL_API UClass* Z_Construct_UClass_APingActor_NoRegister();
WASDL_API UClass* Z_Construct_UClass_AUzuha();
WASDL_API UClass* Z_Construct_UClass_AUzuha_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UAnimationControlComponent_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UCursorWidget_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UEnemyHealthWidget_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UFogVisibilityComponent_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UPlayerListWidget_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();
WASDL_API UClass* Z_Construct_UClass_USoundComponent_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UVisionRevealerComponent_NoRegister();
WASDL_API UEnum* Z_Construct_UEnum_WASDL_EAttackState();
WASDL_API UEnum* Z_Construct_UEnum_WASDL_EPlayerState();
// End Cross Module References

// Begin Enum EAttackState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttackState;
static UEnum* EAttackState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttackState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttackState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WASDL_EAttackState, (UObject*)Z_Construct_UPackage__Script_WASDL(), TEXT("EAttackState"));
	}
	return Z_Registration_Info_UEnum_EAttackState.OuterSingleton;
}
template<> WASDL_API UEnum* StaticEnum<EAttackState>()
{
	return EAttackState_StaticEnum();
}
struct Z_Construct_UEnum_WASDL_EAttackState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Idle.Name", "EAttackState::Idle" },
		{ "Idle_Weapon.Name", "EAttackState::Idle_Weapon" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
		{ "Shoot.Name", "EAttackState::Shoot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttackState::Idle", (int64)EAttackState::Idle },
		{ "EAttackState::Idle_Weapon", (int64)EAttackState::Idle_Weapon },
		{ "EAttackState::Shoot", (int64)EAttackState::Shoot },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WASDL_EAttackState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WASDL,
	nullptr,
	"EAttackState",
	"EAttackState",
	Z_Construct_UEnum_WASDL_EAttackState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_EAttackState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_EAttackState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WASDL_EAttackState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WASDL_EAttackState()
{
	if (!Z_Registration_Info_UEnum_EAttackState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttackState.InnerSingleton, Z_Construct_UEnum_WASDL_EAttackState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttackState.InnerSingleton;
}
// End Enum EAttackState

// Begin Enum EPlayerState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerState;
static UEnum* EPlayerState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WASDL_EPlayerState, (UObject*)Z_Construct_UPackage__Script_WASDL(), TEXT("EPlayerState"));
	}
	return Z_Registration_Info_UEnum_EPlayerState.OuterSingleton;
}
template<> WASDL_API UEnum* StaticEnum<EPlayerState>()
{
	return EPlayerState_StaticEnum();
}
struct Z_Construct_UEnum_WASDL_EPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Name", "EPlayerState::Attack" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
		{ "Normal.Name", "EPlayerState::Normal" },
		{ "Order.Name", "EPlayerState::Order" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerState::Normal", (int64)EPlayerState::Normal },
		{ "EPlayerState::Attack", (int64)EPlayerState::Attack },
		{ "EPlayerState::Order", (int64)EPlayerState::Order },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WASDL_EPlayerState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WASDL,
	nullptr,
	"EPlayerState",
	"EPlayerState",
	Z_Construct_UEnum_WASDL_EPlayerState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_EPlayerState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_EPlayerState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WASDL_EPlayerState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WASDL_EPlayerState()
{
	if (!Z_Registration_Info_UEnum_EPlayerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerState.InnerSingleton, Z_Construct_UEnum_WASDL_EPlayerState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerState.InnerSingleton;
}
// End Enum EPlayerState

// Begin Class AUzuha Function Multicast_DebugLine
struct Uzuha_eventMulticast_DebugLine_Parms
{
	FVector_NetQuantize Start;
	FVector_NetQuantize End;
	FColor Color;
	float LifeTime;
	float Thickness;
};
static FName NAME_AUzuha_Multicast_DebugLine = FName(TEXT("Multicast_DebugLine"));
void AUzuha::Multicast_DebugLine(FVector_NetQuantize Start, FVector_NetQuantize End, FColor Color, float LifeTime, float Thickness)
{
	Uzuha_eventMulticast_DebugLine_Parms Parms;
	Parms.Start=Start;
	Parms.End=End;
	Parms.Color=Color;
	Parms.LifeTime=LifeTime;
	Parms.Thickness=Thickness;
	ProcessEvent(FindFunctionChecked(NAME_AUzuha_Multicast_DebugLine),&Parms);
}
struct Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//const FVector_NetQuantize& HitLocation);\n" },
#endif
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "const FVector_NetQuantize& HitLocation);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uzuha_eventMulticast_DebugLine_Parms, Start), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uzuha_eventMulticast_DebugLine_Parms, End), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uzuha_eventMulticast_DebugLine_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uzuha_eventMulticast_DebugLine_Parms, LifeTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uzuha_eventMulticast_DebugLine_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUzuha, nullptr, "Multicast_DebugLine", nullptr, nullptr, Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::PropPointers), sizeof(Uzuha_eventMulticast_DebugLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Uzuha_eventMulticast_DebugLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUzuha_Multicast_DebugLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUzuha_Multicast_DebugLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUzuha::execMulticast_DebugLine)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_Start);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_End);
	P_GET_STRUCT(FColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_DebugLine_Implementation(Z_Param_Start,Z_Param_End,Z_Param_Color,Z_Param_LifeTime,Z_Param_Thickness);
	P_NATIVE_END;
}
// End Class AUzuha Function Multicast_DebugLine

// Begin Class AUzuha Function MultiCast_OnDeath
static FName NAME_AUzuha_MultiCast_OnDeath = FName(TEXT("MultiCast_OnDeath"));
void AUzuha::MultiCast_OnDeath()
{
	ProcessEvent(FindFunctionChecked(NAME_AUzuha_MultiCast_OnDeath),NULL);
}
struct Z_Construct_UFunction_AUzuha_MultiCast_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//void CreateFowSubsystem();\n" },
#endif
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void CreateFowSubsystem();" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUzuha_MultiCast_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUzuha, nullptr, "MultiCast_OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_MultiCast_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUzuha_MultiCast_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUzuha_MultiCast_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUzuha_MultiCast_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUzuha::execMultiCast_OnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MultiCast_OnDeath_Implementation();
	P_NATIVE_END;
}
// End Class AUzuha Function MultiCast_OnDeath

// Begin Class AUzuha Function Multicast_OnHitFX
static FName NAME_AUzuha_Multicast_OnHitFX = FName(TEXT("Multicast_OnHitFX"));
void AUzuha::Multicast_OnHitFX()
{
	ProcessEvent(FindFunctionChecked(NAME_AUzuha_Multicast_OnHitFX),NULL);
}
struct Z_Construct_UFunction_AUzuha_Multicast_OnHitFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// (\xec\x84\xa0\xed\x83\x9d) \xed\x9e\x88\xed\x8a\xb8 FX/\xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xec\xa0\x84\xed\x8c\x8c\n" },
#endif
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(\xec\x84\xa0\xed\x83\x9d) \xed\x9e\x88\xed\x8a\xb8 FX/\xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xec\xa0\x84\xed\x8c\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUzuha_Multicast_OnHitFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUzuha, nullptr, "Multicast_OnHitFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_Multicast_OnHitFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUzuha_Multicast_OnHitFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUzuha_Multicast_OnHitFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUzuha_Multicast_OnHitFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUzuha::execMulticast_OnHitFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_OnHitFX_Implementation();
	P_NATIVE_END;
}
// End Class AUzuha Function Multicast_OnHitFX

// Begin Class AUzuha Function Multicast_SpawnPing
static FName NAME_AUzuha_Multicast_SpawnPing = FName(TEXT("Multicast_SpawnPing"));
void AUzuha::Multicast_SpawnPing()
{
	ProcessEvent(FindFunctionChecked(NAME_AUzuha_Multicast_SpawnPing),NULL);
}
struct Z_Construct_UFunction_AUzuha_Multicast_SpawnPing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUzuha_Multicast_SpawnPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUzuha, nullptr, "Multicast_SpawnPing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_Multicast_SpawnPing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUzuha_Multicast_SpawnPing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUzuha_Multicast_SpawnPing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUzuha_Multicast_SpawnPing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUzuha::execMulticast_SpawnPing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_SpawnPing_Implementation();
	P_NATIVE_END;
}
// End Class AUzuha Function Multicast_SpawnPing

// Begin Class AUzuha Function Multicsat_SpawnTank
static FName NAME_AUzuha_Multicsat_SpawnTank = FName(TEXT("Multicsat_SpawnTank"));
void AUzuha::Multicsat_SpawnTank()
{
	ProcessEvent(FindFunctionChecked(NAME_AUzuha_Multicsat_SpawnTank),NULL);
}
struct Z_Construct_UFunction_AUzuha_Multicsat_SpawnTank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FVector_NetQuantize Location);\n" },
#endif
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FVector_NetQuantize Location);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUzuha_Multicsat_SpawnTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUzuha, nullptr, "Multicsat_SpawnTank", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_Multicsat_SpawnTank_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUzuha_Multicsat_SpawnTank_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUzuha_Multicsat_SpawnTank()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUzuha_Multicsat_SpawnTank_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUzuha::execMulticsat_SpawnTank)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicsat_SpawnTank_Implementation();
	P_NATIVE_END;
}
// End Class AUzuha Function Multicsat_SpawnTank

// Begin Class AUzuha Function OnRep_AimYaw
struct Z_Construct_UFunction_AUzuha_OnRep_AimYaw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUzuha_OnRep_AimYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUzuha, nullptr, "OnRep_AimYaw", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_OnRep_AimYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUzuha_OnRep_AimYaw_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUzuha_OnRep_AimYaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUzuha_OnRep_AimYaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUzuha::execOnRep_AimYaw)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AimYaw();
	P_NATIVE_END;
}
// End Class AUzuha Function OnRep_AimYaw

// Begin Class AUzuha Function Server_SpawnPing
static FName NAME_AUzuha_Server_SpawnPing = FName(TEXT("Server_SpawnPing"));
void AUzuha::Server_SpawnPing()
{
	ProcessEvent(FindFunctionChecked(NAME_AUzuha_Server_SpawnPing),NULL);
}
struct Z_Construct_UFunction_AUzuha_Server_SpawnPing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FVector Location);\n" },
#endif
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FVector Location);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUzuha_Server_SpawnPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUzuha, nullptr, "Server_SpawnPing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_Server_SpawnPing_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUzuha_Server_SpawnPing_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUzuha_Server_SpawnPing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUzuha_Server_SpawnPing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUzuha::execServer_SpawnPing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SpawnPing_Implementation();
	P_NATIVE_END;
}
// End Class AUzuha Function Server_SpawnPing

// Begin Class AUzuha Function Server_SpawnTank
static FName NAME_AUzuha_Server_SpawnTank = FName(TEXT("Server_SpawnTank"));
void AUzuha::Server_SpawnTank()
{
	ProcessEvent(FindFunctionChecked(NAME_AUzuha_Server_SpawnTank),NULL);
}
struct Z_Construct_UFunction_AUzuha_Server_SpawnTank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FVector_NetQuantize Location);\n" },
#endif
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FVector_NetQuantize Location);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUzuha_Server_SpawnTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUzuha, nullptr, "Server_SpawnTank", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_Server_SpawnTank_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUzuha_Server_SpawnTank_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUzuha_Server_SpawnTank()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUzuha_Server_SpawnTank_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUzuha::execServer_SpawnTank)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SpawnTank_Implementation();
	P_NATIVE_END;
}
// End Class AUzuha Function Server_SpawnTank

// Begin Class AUzuha Function Server_TryAttack
struct Uzuha_eventServer_TryAttack_Parms
{
	FVector_NetQuantizeNormal ShootDir;
};
static FName NAME_AUzuha_Server_TryAttack = FName(TEXT("Server_TryAttack"));
void AUzuha::Server_TryAttack(FVector_NetQuantizeNormal const& ShootDir)
{
	Uzuha_eventServer_TryAttack_Parms Parms;
	Parms.ShootDir=ShootDir;
	ProcessEvent(FindFunctionChecked(NAME_AUzuha_Server_TryAttack),&Parms);
}
struct Z_Construct_UFunction_AUzuha_Server_TryAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c \xea\xb3\xb5\xea\xb2\xa9 \xed\x8c\x90\xec\xa0\x95 \xec\x8b\xa4\xed\x96\x89 (\xed\x81\xb4\xeb\x9d\xbc \xe2\x86\x92 \xec\x84\x9c\xeb\xb2\x84)\n" },
#endif
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c \xea\xb3\xb5\xea\xb2\xa9 \xed\x8c\x90\xec\xa0\x95 \xec\x8b\xa4\xed\x96\x89 (\xed\x81\xb4\xeb\x9d\xbc \xe2\x86\x92 \xec\x84\x9c\xeb\xb2\x84)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShootDir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUzuha_Server_TryAttack_Statics::NewProp_ShootDir = { "ShootDir", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uzuha_eventServer_TryAttack_Parms, ShootDir), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootDir_MetaData), NewProp_ShootDir_MetaData) }; // 1520846145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUzuha_Server_TryAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUzuha_Server_TryAttack_Statics::NewProp_ShootDir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_Server_TryAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUzuha_Server_TryAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUzuha, nullptr, "Server_TryAttack", nullptr, nullptr, Z_Construct_UFunction_AUzuha_Server_TryAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_Server_TryAttack_Statics::PropPointers), sizeof(Uzuha_eventServer_TryAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_Server_TryAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUzuha_Server_TryAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Uzuha_eventServer_TryAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUzuha_Server_TryAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUzuha_Server_TryAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUzuha::execServer_TryAttack)
{
	P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ShootDir);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_TryAttack_Implementation(Z_Param_ShootDir);
	P_NATIVE_END;
}
// End Class AUzuha Function Server_TryAttack

// Begin Class AUzuha Function ServerSetAimYaw
struct Uzuha_eventServerSetAimYaw_Parms
{
	float NewYaw;
};
static FName NAME_AUzuha_ServerSetAimYaw = FName(TEXT("ServerSetAimYaw"));
void AUzuha::ServerSetAimYaw(float NewYaw)
{
	Uzuha_eventServerSetAimYaw_Parms Parms;
	Parms.NewYaw=NewYaw;
	ProcessEvent(FindFunctionChecked(NAME_AUzuha_ServerSetAimYaw),&Parms);
}
struct Z_Construct_UFunction_AUzuha_ServerSetAimYaw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x81\xb4\xeb\x9d\xbc \xe2\x86\x92 \xec\x84\x9c\xeb\xb2\x84 \xec\xa0\x84\xec\x86\xa1 (\xec\xa7\x80\xec\x97\xb0/\xed\x8c\xa8\xed\x82\xb7\xec\xa0\x88\xec\x95\xbd \xec\x9c\x84\xed\x95\xb4 Unreliable \xea\xb6\x8c\xec\x9e\xa5)\n" },
#endif
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x81\xb4\xeb\x9d\xbc \xe2\x86\x92 \xec\x84\x9c\xeb\xb2\x84 \xec\xa0\x84\xec\x86\xa1 (\xec\xa7\x80\xec\x97\xb0/\xed\x8c\xa8\xed\x82\xb7\xec\xa0\x88\xec\x95\xbd \xec\x9c\x84\xed\x95\xb4 Unreliable \xea\xb6\x8c\xec\x9e\xa5)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewYaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUzuha_ServerSetAimYaw_Statics::NewProp_NewYaw = { "NewYaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Uzuha_eventServerSetAimYaw_Parms, NewYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUzuha_ServerSetAimYaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUzuha_ServerSetAimYaw_Statics::NewProp_NewYaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_ServerSetAimYaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUzuha_ServerSetAimYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUzuha, nullptr, "ServerSetAimYaw", nullptr, nullptr, Z_Construct_UFunction_AUzuha_ServerSetAimYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_ServerSetAimYaw_Statics::PropPointers), sizeof(Uzuha_eventServerSetAimYaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_ServerSetAimYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUzuha_ServerSetAimYaw_Statics::Function_MetaDataParams) };
static_assert(sizeof(Uzuha_eventServerSetAimYaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUzuha_ServerSetAimYaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUzuha_ServerSetAimYaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUzuha::execServerSetAimYaw)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewYaw);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSetAimYaw_Implementation(Z_Param_NewYaw);
	P_NATIVE_END;
}
// End Class AUzuha Function ServerSetAimYaw

// Begin Class AUzuha Function TrySpawnTank
struct Z_Construct_UFunction_AUzuha_TrySpawnTank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUzuha_TrySpawnTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUzuha, nullptr, "TrySpawnTank", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUzuha_TrySpawnTank_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUzuha_TrySpawnTank_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUzuha_TrySpawnTank()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUzuha_TrySpawnTank_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUzuha::execTrySpawnTank)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TrySpawnTank();
	P_NATIVE_END;
}
// End Class AUzuha Function TrySpawnTank

// Begin Class AUzuha
void AUzuha::StaticRegisterNativesAUzuha()
{
	UClass* Class = AUzuha::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Multicast_DebugLine", &AUzuha::execMulticast_DebugLine },
		{ "MultiCast_OnDeath", &AUzuha::execMultiCast_OnDeath },
		{ "Multicast_OnHitFX", &AUzuha::execMulticast_OnHitFX },
		{ "Multicast_SpawnPing", &AUzuha::execMulticast_SpawnPing },
		{ "Multicsat_SpawnTank", &AUzuha::execMulticsat_SpawnTank },
		{ "OnRep_AimYaw", &AUzuha::execOnRep_AimYaw },
		{ "Server_SpawnPing", &AUzuha::execServer_SpawnPing },
		{ "Server_SpawnTank", &AUzuha::execServer_SpawnTank },
		{ "Server_TryAttack", &AUzuha::execServer_TryAttack },
		{ "ServerSetAimYaw", &AUzuha::execServerSetAimYaw },
		{ "TrySpawnTank", &AUzuha::execTrySpawnTank },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUzuha);
UClass* Z_Construct_UClass_AUzuha_NoRegister()
{
	return AUzuha::StaticClass();
}
struct Z_Construct_UClass_AUzuha_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Uzuha.h" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityComponent_MetaData[] = {
		{ "Category", "Uzuha" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisionRevealerComponent_MetaData[] = {
		{ "Category", "Uzuha" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundComponent_MetaData[] = {
		{ "Category", "Uzuha" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Uzuha" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidget_MetaData[] = {
		{ "Category", "Uzuha" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidgetClass_MetaData[] = {
		{ "Category", "Uzuha" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere,BlueprintReadWrite)\n//TSubclassOf<UEnemyHealthWidget> HealthWidgetClass;\n" },
#endif
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere,BlueprintReadWrite)\nTSubclassOf<UEnemyHealthWidget> HealthWidgetClass;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Uzuha" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called every frame\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Uzuha" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPivot_MetaData[] = {
		{ "Category", "EditorSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\x09TSubclassOf<ACameraPivotActor> CameraPivotActorClass;\n\x09//ACameraPivotActor* CameraPivot= nullptr;*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<ACameraPivotActor> CameraPivotActorClass;\n//ACameraPivotActor* CameraPivot= nullptr;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorWidgetClass_MetaData[] = {
		{ "Category", "EditorSetting" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerWidgetClass_MetaData[] = {
		{ "Category", "EditorSetting" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerListWidgetClass_MetaData[] = {
		{ "Category", "EditorSetting" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PingActorClass_MetaData[] = {
		{ "Category", "EditorSetting" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashFX_MetaData[] = {
		{ "Category", "EditorSetting" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Uzuha" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderWidgetActorClass_MetaData[] = {
		{ "Category", "EditorSetting" },
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//AUzuhaController* GetPlayerController() { return UzuhaController;}\n" },
#endif
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AUzuhaController* GetPlayerController() { return UzuhaController;}" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandCenter_MetaData[] = {
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommandCenterInstance_MetaData[] = {
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAimYaw_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xbb\xa4\xec\x84\x9c \xeb\xb0\x94\xeb\x9d\xbc\xeb\xb3\xb4\xea\xb8\xb0\n// \xec\x84\x9c\xeb\xb2\x84\xea\xb0\x80 \xea\xb6\x8c\xec\x9c\x84\xeb\xa1\x9c \xeb\xb3\xb4\xea\xb4\x80 \xe2\x86\x92 \xeb\xaa\xa8\xeb\x93\xa0 \xed\x81\xb4\xeb\x9d\xbc\xec\x97\x90 \xeb\xb3\xb5\xec\xa0\x9c\n" },
#endif
		{ "ModuleRelativePath", "Character/Uzuha.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbb\xa4\xec\x84\x9c \xeb\xb0\x94\xeb\x9d\xbc\xeb\xb3\xb4\xea\xb8\xb0\n\xec\x84\x9c\xeb\xb2\x84\xea\xb0\x80 \xea\xb6\x8c\xec\x9c\x84\xeb\xa1\x9c \xeb\xb3\xb4\xea\xb4\x80 \xe2\x86\x92 \xeb\xaa\xa8\xeb\x93\xa0 \xed\x81\xb4\xeb\x9d\xbc\xec\x97\x90 \xeb\xb3\xb5\xec\xa0\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "ModuleRelativePath", "Character/Uzuha.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisibilityComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisionRevealerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthWidgetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraPivot;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CursorWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerListWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PingActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OrderWidgetActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommandCenter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CommandCenter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommandCenterInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReplicatedAimYaw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUzuha_Multicast_DebugLine, "Multicast_DebugLine" }, // 1549260479
		{ &Z_Construct_UFunction_AUzuha_MultiCast_OnDeath, "MultiCast_OnDeath" }, // 3386497062
		{ &Z_Construct_UFunction_AUzuha_Multicast_OnHitFX, "Multicast_OnHitFX" }, // 2987723736
		{ &Z_Construct_UFunction_AUzuha_Multicast_SpawnPing, "Multicast_SpawnPing" }, // 3270917146
		{ &Z_Construct_UFunction_AUzuha_Multicsat_SpawnTank, "Multicsat_SpawnTank" }, // 1699901634
		{ &Z_Construct_UFunction_AUzuha_OnRep_AimYaw, "OnRep_AimYaw" }, // 1105543092
		{ &Z_Construct_UFunction_AUzuha_Server_SpawnPing, "Server_SpawnPing" }, // 4063953265
		{ &Z_Construct_UFunction_AUzuha_Server_SpawnTank, "Server_SpawnTank" }, // 4031555279
		{ &Z_Construct_UFunction_AUzuha_Server_TryAttack, "Server_TryAttack" }, // 4181567401
		{ &Z_Construct_UFunction_AUzuha_ServerSetAimYaw, "ServerSetAimYaw" }, // 1365096485
		{ &Z_Construct_UFunction_AUzuha_TrySpawnTank, "TrySpawnTank" }, // 435798152
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUzuha>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_VisibilityComponent = { "VisibilityComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, VisibilityComponent), Z_Construct_UClass_UFogVisibilityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityComponent_MetaData), NewProp_VisibilityComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_VisionRevealerComponent = { "VisionRevealerComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, VisionRevealerComponent), Z_Construct_UClass_UVisionRevealerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisionRevealerComponent_MetaData), NewProp_VisionRevealerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_SoundComponent = { "SoundComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, SoundComponent), Z_Construct_UClass_USoundComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundComponent_MetaData), NewProp_SoundComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_HealthWidget = { "HealthWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, HealthWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthWidget_MetaData), NewProp_HealthWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_HealthWidgetClass = { "HealthWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, HealthWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnemyHealthWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthWidgetClass_MetaData), NewProp_HealthWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_HealthWidgetInstance = { "HealthWidgetInstance", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, HealthWidgetInstance), Z_Construct_UClass_UEnemyHealthWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthWidgetInstance_MetaData), NewProp_HealthWidgetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_CameraPivot = { "CameraPivot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, CameraPivot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPivot_MetaData), NewProp_CameraPivot_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_CursorWidgetClass = { "CursorWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, CursorWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCursorWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorWidgetClass_MetaData), NewProp_CursorWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_PlayerWidgetClass = { "PlayerWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, PlayerWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerWidgetClass_MetaData), NewProp_PlayerWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_PlayerListWidgetClass = { "PlayerListWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, PlayerListWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerListWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerListWidgetClass_MetaData), NewProp_PlayerListWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_PingActorClass = { "PingActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, PingActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APingActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PingActorClass_MetaData), NewProp_PingActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_MuzzleFlashFX = { "MuzzleFlashFX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, MuzzleFlashFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlashFX_MetaData), NewProp_MuzzleFlashFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_AnimationComponent = { "AnimationComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, AnimationComponent), Z_Construct_UClass_UAnimationControlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationComponent_MetaData), NewProp_AnimationComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_OrderWidgetActorClass = { "OrderWidgetActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, OrderWidgetActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AOrderWidgetActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderWidgetActorClass_MetaData), NewProp_OrderWidgetActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_CommandCenter_Inner = { "CommandCenter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_CommandCenter = { "CommandCenter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, CommandCenter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandCenter_MetaData), NewProp_CommandCenter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_CommandCenterInstance = { "CommandCenterInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, CommandCenterInstance), Z_Construct_UClass_ACommandCenter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommandCenterInstance_MetaData), NewProp_CommandCenterInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_ReplicatedAimYaw = { "ReplicatedAimYaw", "OnRep_AimYaw", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, ReplicatedAimYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedAimYaw_MetaData), NewProp_ReplicatedAimYaw_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUzuha_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUzuha, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUzuha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_VisibilityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_VisionRevealerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_SoundComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_HealthWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_HealthWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_HealthWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_CameraPivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_CursorWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_PlayerWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_PlayerListWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_PingActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_MuzzleFlashFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_AnimationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_OrderWidgetActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_CommandCenter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_CommandCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_CommandCenterInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_ReplicatedAimYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUzuha_Statics::NewProp_CurrentTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUzuha_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUzuha_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUzuha_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUzuha_Statics::ClassParams = {
	&AUzuha::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AUzuha_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUzuha_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUzuha_Statics::Class_MetaDataParams), Z_Construct_UClass_AUzuha_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUzuha()
{
	if (!Z_Registration_Info_UClass_AUzuha.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUzuha.OuterSingleton, Z_Construct_UClass_AUzuha_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUzuha.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<AUzuha>()
{
	return AUzuha::StaticClass();
}
void AUzuha::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SpawnLocation(TEXT("SpawnLocation"));
	static const FName Name_ReplicatedAimYaw(TEXT("ReplicatedAimYaw"));
	static const FName Name_CurrentTarget(TEXT("CurrentTarget"));
	const bool bIsValid = true
		&& Name_SpawnLocation == ClassReps[(int32)ENetFields_Private::SpawnLocation].Property->GetFName()
		&& Name_ReplicatedAimYaw == ClassReps[(int32)ENetFields_Private::ReplicatedAimYaw].Property->GetFName()
		&& Name_CurrentTarget == ClassReps[(int32)ENetFields_Private::CurrentTarget].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AUzuha"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUzuha);
AUzuha::~AUzuha() {}
// End Class AUzuha

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttackState_StaticEnum, TEXT("EAttackState"), &Z_Registration_Info_UEnum_EAttackState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3115440111U) },
		{ EPlayerState_StaticEnum, TEXT("EPlayerState"), &Z_Registration_Info_UEnum_EPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 844713456U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUzuha, AUzuha::StaticClass, TEXT("AUzuha"), &Z_Registration_Info_UClass_AUzuha, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUzuha), 3212723162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_2118925574(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Uzuha_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
