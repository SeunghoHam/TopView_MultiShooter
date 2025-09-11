// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Character/Actor/Tank/Tank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_ABaseCharacter();
WASDL_API UClass* Z_Construct_UClass_ATank();
WASDL_API UClass* Z_Construct_UClass_ATank_NoRegister();
// End Cross Module References

// Begin Class ATank Function GetOrderLocation
struct Z_Construct_UFunction_ATank_GetOrderLocation_Statics
{
	struct Tank_eventGetOrderLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATank_GetOrderLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tank_eventGetOrderLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATank_GetOrderLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATank_GetOrderLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_GetOrderLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_GetOrderLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, nullptr, "GetOrderLocation", nullptr, nullptr, Z_Construct_UFunction_ATank_GetOrderLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_GetOrderLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATank_GetOrderLocation_Statics::Tank_eventGetOrderLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_GetOrderLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATank_GetOrderLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATank_GetOrderLocation_Statics::Tank_eventGetOrderLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATank_GetOrderLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATank_GetOrderLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATank::execGetOrderLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetOrderLocation();
	P_NATIVE_END;
}
// End Class ATank Function GetOrderLocation

// Begin Class ATank Function MultiCast_DeathEffectMotion
static FName NAME_ATank_MultiCast_DeathEffectMotion = FName(TEXT("MultiCast_DeathEffectMotion"));
void ATank::MultiCast_DeathEffectMotion()
{
	ProcessEvent(FindFunctionChecked(NAME_ATank_MultiCast_DeathEffectMotion),NULL);
}
struct Z_Construct_UFunction_ATank_MultiCast_DeathEffectMotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_MultiCast_DeathEffectMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, nullptr, "MultiCast_DeathEffectMotion", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_MultiCast_DeathEffectMotion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATank_MultiCast_DeathEffectMotion_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATank_MultiCast_DeathEffectMotion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATank_MultiCast_DeathEffectMotion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATank::execMultiCast_DeathEffectMotion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MultiCast_DeathEffectMotion_Implementation();
	P_NATIVE_END;
}
// End Class ATank Function MultiCast_DeathEffectMotion

// Begin Class ATank Function Multicast_MuzzleFlash
static FName NAME_ATank_Multicast_MuzzleFlash = FName(TEXT("Multicast_MuzzleFlash"));
void ATank::Multicast_MuzzleFlash()
{
	ProcessEvent(FindFunctionChecked(NAME_ATank_Multicast_MuzzleFlash),NULL);
}
struct Z_Construct_UFunction_ATank_Multicast_MuzzleFlash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_Multicast_MuzzleFlash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, nullptr, "Multicast_MuzzleFlash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_Multicast_MuzzleFlash_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATank_Multicast_MuzzleFlash_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATank_Multicast_MuzzleFlash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATank_Multicast_MuzzleFlash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATank::execMulticast_MuzzleFlash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_MuzzleFlash_Implementation();
	P_NATIVE_END;
}
// End Class ATank Function Multicast_MuzzleFlash

// Begin Class ATank Function SetOrderLocation
struct Z_Construct_UFunction_ATank_SetOrderLocation_Statics
{
	struct Tank_eventSetOrderLocation_Parms
	{
		FVector location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATank_SetOrderLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tank_eventSetOrderLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_location_MetaData), NewProp_location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATank_SetOrderLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATank_SetOrderLocation_Statics::NewProp_location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_SetOrderLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_SetOrderLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, nullptr, "SetOrderLocation", nullptr, nullptr, Z_Construct_UFunction_ATank_SetOrderLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_SetOrderLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATank_SetOrderLocation_Statics::Tank_eventSetOrderLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_SetOrderLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATank_SetOrderLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATank_SetOrderLocation_Statics::Tank_eventSetOrderLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATank_SetOrderLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATank_SetOrderLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATank::execSetOrderLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOrderLocation(Z_Param_Out_location);
	P_NATIVE_END;
}
// End Class ATank Function SetOrderLocation

// Begin Class ATank Function TankAttack
static FName NAME_ATank_TankAttack = FName(TEXT("TankAttack"));
void ATank::TankAttack()
{
	ProcessEvent(FindFunctionChecked(NAME_ATank_TankAttack),NULL);
}
struct Z_Construct_UFunction_ATank_TankAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_TankAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, nullptr, "TankAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_TankAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATank_TankAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATank_TankAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATank_TankAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATank::execTankAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TankAttack_Implementation();
	P_NATIVE_END;
}
// End Class ATank Function TankAttack

// Begin Class ATank Function TankIsActive
struct Z_Construct_UFunction_ATank_TankIsActive_Statics
{
	struct Tank_eventTankIsActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATank_TankIsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Tank_eventTankIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATank_TankIsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Tank_eventTankIsActive_Parms), &Z_Construct_UFunction_ATank_TankIsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATank_TankIsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATank_TankIsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_TankIsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_TankIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, nullptr, "TankIsActive", nullptr, nullptr, Z_Construct_UFunction_ATank_TankIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_TankIsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATank_TankIsActive_Statics::Tank_eventTankIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_TankIsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATank_TankIsActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATank_TankIsActive_Statics::Tank_eventTankIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATank_TankIsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATank_TankIsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATank::execTankIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TankIsActive();
	P_NATIVE_END;
}
// End Class ATank Function TankIsActive

// Begin Class ATank Function TankOnTarget
static FName NAME_ATank_TankOnTarget = FName(TEXT("TankOnTarget"));
void ATank::TankOnTarget()
{
	ProcessEvent(FindFunctionChecked(NAME_ATank_TankOnTarget),NULL);
}
struct Z_Construct_UFunction_ATank_TankOnTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_TankOnTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, nullptr, "TankOnTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_TankOnTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATank_TankOnTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATank_TankOnTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATank_TankOnTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATank::execTankOnTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TankOnTarget_Implementation();
	P_NATIVE_END;
}
// End Class ATank Function TankOnTarget

// Begin Class ATank Function TurnHead
struct Tank_eventTurnHead_Parms
{
	float DeltaTime;
};
static FName NAME_ATank_TurnHead = FName(TEXT("TurnHead"));
void ATank::TurnHead(float DeltaTime)
{
	Tank_eventTurnHead_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	ProcessEvent(FindFunctionChecked(NAME_ATank_TurnHead),&Parms);
}
struct Z_Construct_UFunction_ATank_TurnHead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATank_TurnHead_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tank_eventTurnHead_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATank_TurnHead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATank_TurnHead_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_TurnHead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATank_TurnHead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATank, nullptr, "TurnHead", nullptr, nullptr, Z_Construct_UFunction_ATank_TurnHead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_TurnHead_Statics::PropPointers), sizeof(Tank_eventTurnHead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATank_TurnHead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATank_TurnHead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Tank_eventTurnHead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATank_TurnHead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATank_TurnHead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATank::execTurnHead)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TurnHead_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ATank Function TurnHead

// Begin Class ATank
void ATank::StaticRegisterNativesATank()
{
	UClass* Class = ATank::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOrderLocation", &ATank::execGetOrderLocation },
		{ "MultiCast_DeathEffectMotion", &ATank::execMultiCast_DeathEffectMotion },
		{ "Multicast_MuzzleFlash", &ATank::execMulticast_MuzzleFlash },
		{ "SetOrderLocation", &ATank::execSetOrderLocation },
		{ "TankAttack", &ATank::execTankAttack },
		{ "TankIsActive", &ATank::execTankIsActive },
		{ "TankOnTarget", &ATank::execTankOnTarget },
		{ "TurnHead", &ATank::execTurnHead },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATank);
UClass* Z_Construct_UClass_ATank_NoRegister()
{
	return ATank::StaticClass();
}
struct Z_Construct_UClass_ATank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Actor/Tank/Tank.h" },
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wheel_MetaData[] = {
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "Category", "Tank" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category=\"Tank\")\n//USceneComponent* WheelInstance;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category=\"Tank\")\nUSceneComponent* WheelInstance;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[] = {
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Muzzle_MetaData[] = {
		{ "Category", "Tank" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TankMuzzleFX_MetaData[] = {
		{ "Category", "Tank" },
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderLocation_MetaData[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetTankHead_MetaData[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTankAttack_MetaData[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadLocation_MetaData[] = {
		{ "ModuleRelativePath", "Character/Actor/Tank/Tank.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wheel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Head;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Muzzle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TankMuzzleFX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrderLocation;
	static void NewProp_bSetTankHead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetTankHead;
	static void NewProp_bTankAttack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTankAttack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeadLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATank_GetOrderLocation, "GetOrderLocation" }, // 2225960385
		{ &Z_Construct_UFunction_ATank_MultiCast_DeathEffectMotion, "MultiCast_DeathEffectMotion" }, // 120573540
		{ &Z_Construct_UFunction_ATank_Multicast_MuzzleFlash, "Multicast_MuzzleFlash" }, // 1407868431
		{ &Z_Construct_UFunction_ATank_SetOrderLocation, "SetOrderLocation" }, // 1244287026
		{ &Z_Construct_UFunction_ATank_TankAttack, "TankAttack" }, // 941455096
		{ &Z_Construct_UFunction_ATank_TankIsActive, "TankIsActive" }, // 1027075060
		{ &Z_Construct_UFunction_ATank_TankOnTarget, "TankOnTarget" }, // 838734306
		{ &Z_Construct_UFunction_ATank_TurnHead, "TurnHead" }, // 2880575561
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATank>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_Wheel = { "Wheel", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATank, Wheel), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wheel_MetaData), NewProp_Wheel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATank, Body), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATank, Head), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Head_MetaData), NewProp_Head_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_Muzzle = { "Muzzle", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATank, Muzzle), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Muzzle_MetaData), NewProp_Muzzle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_TankMuzzleFX = { "TankMuzzleFX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATank, TankMuzzleFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TankMuzzleFX_MetaData), NewProp_TankMuzzleFX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_OrderLocation = { "OrderLocation", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATank, OrderLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderLocation_MetaData), NewProp_OrderLocation_MetaData) };
void Z_Construct_UClass_ATank_Statics::NewProp_bSetTankHead_SetBit(void* Obj)
{
	((ATank*)Obj)->bSetTankHead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_bSetTankHead = { "bSetTankHead", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATank), &Z_Construct_UClass_ATank_Statics::NewProp_bSetTankHead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetTankHead_MetaData), NewProp_bSetTankHead_MetaData) };
void Z_Construct_UClass_ATank_Statics::NewProp_bTankAttack_SetBit(void* Obj)
{
	((ATank*)Obj)->bTankAttack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_bTankAttack = { "bTankAttack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATank), &Z_Construct_UClass_ATank_Statics::NewProp_bTankAttack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTankAttack_MetaData), NewProp_bTankAttack_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATank_Statics::NewProp_HeadLocation = { "HeadLocation", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATank, HeadLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadLocation_MetaData), NewProp_HeadLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_Wheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_Body,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_Head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_Muzzle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_TankMuzzleFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_OrderLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_bSetTankHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_bTankAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATank_Statics::NewProp_HeadLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATank_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATank_Statics::ClassParams = {
	&ATank::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATank_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATank_Statics::Class_MetaDataParams), Z_Construct_UClass_ATank_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATank()
{
	if (!Z_Registration_Info_UClass_ATank.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATank.OuterSingleton, Z_Construct_UClass_ATank_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATank.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<ATank>()
{
	return ATank::StaticClass();
}
void ATank::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_OrderLocation(TEXT("OrderLocation"));
	static const FName Name_HeadLocation(TEXT("HeadLocation"));
	const bool bIsValid = true
		&& Name_OrderLocation == ClassReps[(int32)ENetFields_Private::OrderLocation].Property->GetFName()
		&& Name_HeadLocation == ClassReps[(int32)ENetFields_Private::HeadLocation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATank"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
ATank::~ATank() {}
// End Class ATank

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATank, ATank::StaticClass, TEXT("ATank"), &Z_Registration_Info_UClass_ATank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATank), 566539430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_4014918480(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_Tank_Tank_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
