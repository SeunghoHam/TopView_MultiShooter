// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/System/FOW/FogOfWarManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFogOfWarManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_AFogOfWarManager();
WASDL_API UClass* Z_Construct_UClass_AFogOfWarManager_NoRegister();
WASDL_API UScriptStruct* Z_Construct_UScriptStruct_FFOW_Revealer();
// End Cross Module References

// Begin ScriptStruct FFOW_Revealer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOW_Revealer;
class UScriptStruct* FFOW_Revealer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOW_Revealer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOW_Revealer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFOW_Revealer, (UObject*)Z_Construct_UPackage__Script_WASDL(), TEXT("FOW_Revealer"));
	}
	return Z_Registration_Info_UScriptStruct_FOW_Revealer.OuterSingleton;
}
template<> WASDL_API UScriptStruct* StaticStruct<FFOW_Revealer>()
{
	return FFOW_Revealer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFOW_Revealer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFOW_Revealer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFOW_Revealer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
	nullptr,
	&NewStructOps,
	"FOW_Revealer",
	nullptr,
	0,
	sizeof(FFOW_Revealer),
	alignof(FFOW_Revealer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOW_Revealer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFOW_Revealer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFOW_Revealer()
{
	if (!Z_Registration_Info_UScriptStruct_FOW_Revealer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOW_Revealer.InnerSingleton, Z_Construct_UScriptStruct_FFOW_Revealer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOW_Revealer.InnerSingleton;
}
// End ScriptStruct FFOW_Revealer

// Begin Class AFogOfWarManager Function UVRadiusToWorld
struct Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics
{
	struct FogOfWarManager_eventUVRadiusToWorld_Parms
	{
		float RUV;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9b\x94\xeb\x93\x9c \xec\xa2\x8c\xed\x91\x9c\xeb\xa1\x9c \xeb\x90\x98\xeb\x8f\x8c\xeb\xa6\xac\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9b\x94\xeb\x93\x9c \xec\xa2\x8c\xed\x91\x9c\xeb\xa1\x9c \xeb\x90\x98\xeb\x8f\x8c\xeb\xa6\xac\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RUV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::NewProp_RUV = { "RUV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FogOfWarManager_eventUVRadiusToWorld_Parms, RUV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FogOfWarManager_eventUVRadiusToWorld_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::NewProp_RUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFogOfWarManager, nullptr, "UVRadiusToWorld", nullptr, nullptr, Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::FogOfWarManager_eventUVRadiusToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::FogOfWarManager_eventUVRadiusToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFogOfWarManager::execUVRadiusToWorld)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RUV);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->UVRadiusToWorld(Z_Param_RUV);
	P_NATIVE_END;
}
// End Class AFogOfWarManager Function UVRadiusToWorld

// Begin Class AFogOfWarManager Function UVToWorld
struct Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics
{
	struct FogOfWarManager_eventUVToWorld_Parms
	{
		FVector2D UV;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FogOfWarManager_eventUVToWorld_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV_MetaData), NewProp_UV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FogOfWarManager_eventUVToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::NewProp_UV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFogOfWarManager, nullptr, "UVToWorld", nullptr, nullptr, Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::FogOfWarManager_eventUVToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::FogOfWarManager_eventUVToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFogOfWarManager_UVToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFogOfWarManager_UVToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFogOfWarManager::execUVToWorld)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->UVToWorld(Z_Param_Out_UV);
	P_NATIVE_END;
}
// End Class AFogOfWarManager Function UVToWorld

// Begin Class AFogOfWarManager Function WorldToUV
struct Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics
{
	struct FogOfWarManager_eventWorldToUV_Parms
	{
		FVector W;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FOW" },
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_W;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FogOfWarManager_eventWorldToUV_Parms, W), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_W_MetaData), NewProp_W_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FogOfWarManager_eventWorldToUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::NewProp_W,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFogOfWarManager, nullptr, "WorldToUV", nullptr, nullptr, Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::FogOfWarManager_eventWorldToUV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::FogOfWarManager_eventWorldToUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFogOfWarManager_WorldToUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFogOfWarManager_WorldToUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFogOfWarManager::execWorldToUV)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_W);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->WorldToUV(Z_Param_Out_W);
	P_NATIVE_END;
}
// End Class AFogOfWarManager Function WorldToUV

// Begin Class AFogOfWarManager
void AFogOfWarManager::StaticRegisterNativesAFogOfWarManager()
{
	UClass* Class = AFogOfWarManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UVRadiusToWorld", &AFogOfWarManager::execUVRadiusToWorld },
		{ "UVToWorld", &AFogOfWarManager::execUVToWorld },
		{ "WorldToUV", &AFogOfWarManager::execWorldToUV },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFogOfWarManager);
UClass* Z_Construct_UClass_AFogOfWarManager_NoRegister()
{
	return AFogOfWarManager::StaticClass();
}
struct Z_Construct_UClass_AFogOfWarManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "System/FOW/FogOfWarManager.h" },
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMin_MetaData[] = {
		{ "Category", "FOW|World" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ====== [\xec\x9b\x94\xeb\x93\x9c \xec\x98\x81\xec\x97\xad] ======\n// \xec\x98\xa4\xeb\xb2\x84\xeb\xa0\x88\xec\x9d\xb4 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xea\xb3\xbc \xeb\x8f\x99\xec\x9d\xbc \xea\xb0\x92\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "====== [\xec\x9b\x94\xeb\x93\x9c \xec\x98\x81\xec\x97\xad] ======\n\xec\x98\xa4\xeb\xb2\x84\xeb\xa0\x88\xec\x9d\xb4 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\xea\xb3\xbc \xeb\x8f\x99\xec\x9d\xbc \xea\xb0\x92\xec\x9c\xbc\xeb\xa1\x9c \xec\x82\xac\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMax_MetaData[] = {
		{ "Category", "FOW|World" },
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogRTSize_MetaData[] = {
		{ "Category", "FOW|RT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, Category=\"FOW|RT\")\n//int32 RTSize = 1024;\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category=\"FOW|RT\")\nint32 RTSize = 1024;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWorldRadius_MetaData[] = {
		{ "Category", "FOW|Brush" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x86\x8c\xec\x8a\xa4\xea\xb0\x80 \xec\x9e\x90\xec\xb2\xb4 \xeb\xb0\x98\xea\xb2\xbd\xec\x9d\x84 \xec\x95\x88 \xec\xa3\xbc\xeb\x8a\x94 \xea\xb2\xbd\xec\x9a\xb0 \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xea\xb8\xb0\xeb\xb3\xb8 \xeb\xb0\x98\xea\xb2\xbd(\xec\x9b\x94\xeb\x93\x9c \xeb\x8b\xa8\xec\x9c\x84)\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x86\x8c\xec\x8a\xa4\xea\xb0\x80 \xec\x9e\x90\xec\xb2\xb4 \xeb\xb0\x98\xea\xb2\xbd\xec\x9d\x84 \xec\x95\x88 \xec\xa3\xbc\xeb\x8a\x94 \xea\xb2\xbd\xec\x9a\xb0 \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xea\xb8\xb0\xeb\xb3\xb8 \xeb\xb0\x98\xea\xb2\xbd(\xec\x9b\x94\xeb\x93\x9c \xeb\x8b\xa8\xec\x9c\x84)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeatherRatio_MetaData[] = {
		{ "Category", "FOW|Brush" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\xbd\xea\xb3\x84 \xeb\xb6\x80\xeb\x93\x9c\xeb\x9f\xac\xec\x9b\x80(\xec\x9b\x94\xeb\x93\x9c\xe2\x86\x92UV \xeb\xb3\x80\xed\x99\x98 \xed\x9b\x84 \xeb\xb9\x84\xec\x9c\xa8\xeb\xa1\x9c \xec\x93\xb0\xeb\xa9\xb4 \xec\x95\x88\xec\xa0\x84)\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\xbd\xea\xb3\x84 \xeb\xb6\x80\xeb\x93\x9c\xeb\x9f\xac\xec\x9b\x80(\xec\x9b\x94\xeb\x93\x9c\xe2\x86\x92UV \xeb\xb3\x80\xed\x99\x98 \xed\x9b\x84 \xeb\xb9\x84\xec\x9c\xa8\xeb\xa1\x9c \xec\x93\xb0\xeb\xa9\xb4 \xec\x95\x88\xec\xa0\x84)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogRT_MetaData[] = {
		{ "Category", "FOW|RT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RadiusUV * 0.2\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RadiusUV * 0.2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayActorClass_MetaData[] = {
		{ "Category", "FOW" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Materials\n// FogOfWarManager.h\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Materials\nFogOfWarManager.h" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushActorClass_MetaData[] = {
		{ "Category", "FOW" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, Category=\"FOW|Materials\")\n//UMaterialInterface* OverlayMaterial = nullptr; // BP_FogOverlay \xec\xb0\xb8\xec\xa1\xb0\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category=\"FOW|Materials\")\nUMaterialInterface* OverlayMaterial = nullptr;  BP_FogOverlay \xec\xb0\xb8\xec\xa1\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMID_MetaData[] = {
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushMaterial_MetaData[] = {
		{ "Category", "FOW|Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8b\x9c\xec\x95\xbc \xec\x9b\x90\xec\x9d\x84 \xec\xb0\x8d\xeb\x8a\x94 \xeb\xb8\x8c\xeb\x9f\xac\xec\x8b\x9c \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc(\xec\x86\x8c\xed\x94\x84\xed\x8a\xb8 \xec\x9b\x90)\n// \n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\x9c\xec\x95\xbc \xec\x9b\x90\xec\x9d\x84 \xec\xb0\x8d\xeb\x8a\x94 \xeb\xb8\x8c\xeb\x9f\xac\xec\x8b\x9c \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc(\xec\x86\x8c\xed\x94\x84\xed\x8a\xb8 \xec\x9b\x90)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushMID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9b\x94\xeb\x93\x9c\xec\x97\x90 \xeb\xb0\xb0\xec\xb9\x98\xeb\x90\x98\xeb\xa9\xb4 \xea\xb7\xb8\xeb\x8b\xa4\xec\x9d\x8c\xec\x97\x90 \xed\x95\xa0\xeb\x8b\xb9\xed\x95\xb4\xec\xa3\xbc\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9b\x94\xeb\x93\x9c\xec\x97\x90 \xeb\xb0\xb0\xec\xb9\x98\xeb\x90\x98\xeb\xa9\xb4 \xea\xb7\xb8\xeb\x8b\xa4\xec\x9d\x8c\xec\x97\x90 \xed\x95\xa0\xeb\x8b\xb9\xed\x95\xb4\xec\xa3\xbc\xea\xb8\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevealerSources_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Revealer\xeb\x93\xa4\xec\x9d\x84 \xec\x99\xb8\xeb\xb6\x80(Subsystem)\xec\x97\x90\xec\x84\x9c \xeb\x84\xa3\xec\x96\xb4\xec\xa4\x8c\n//UPROPERTY(BlueprintReadWrite, Category=\"FOW\")\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Revealer\xeb\x93\xa4\xec\x9d\x84 \xec\x99\xb8\xeb\xb6\x80(Subsystem)\xec\x97\x90\xec\x84\x9c \xeb\x84\xa3\xec\x96\xb4\xec\xa4\x8c\nUPROPERTY(BlueprintReadWrite, Category=\"FOW\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMargin_MetaData[] = {
		{ "Category", "FOW|World" },
		{ "ModuleRelativePath", "System/FOW/FogOfWarManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FogRTSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultWorldRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FeatherRatio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FogRT;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayActorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BrushActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushMID;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RevealerSources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RevealerSources;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundsMargin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFogOfWarManager_UVRadiusToWorld, "UVRadiusToWorld" }, // 1299892571
		{ &Z_Construct_UFunction_AFogOfWarManager_UVToWorld, "UVToWorld" }, // 2300934295
		{ &Z_Construct_UFunction_AFogOfWarManager_WorldToUV, "WorldToUV" }, // 3687002001
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFogOfWarManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_WorldMin = { "WorldMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, WorldMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMin_MetaData), NewProp_WorldMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_WorldMax = { "WorldMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, WorldMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMax_MetaData), NewProp_WorldMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FogRTSize = { "FogRTSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, FogRTSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogRTSize_MetaData), NewProp_FogRTSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_DefaultWorldRadius = { "DefaultWorldRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, DefaultWorldRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWorldRadius_MetaData), NewProp_DefaultWorldRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FeatherRatio = { "FeatherRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, FeatherRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeatherRatio_MetaData), NewProp_FeatherRatio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FogRT = { "FogRT", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, FogRT), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogRT_MetaData), NewProp_FogRT_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_OverlayActorClass = { "OverlayActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, OverlayActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayActorClass_MetaData), NewProp_OverlayActorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_BrushActorClass = { "BrushActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, BrushActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushActorClass_MetaData), NewProp_BrushActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_OverlayMID = { "OverlayMID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, OverlayMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMID_MetaData), NewProp_OverlayMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_BrushMaterial = { "BrushMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, BrushMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushMaterial_MetaData), NewProp_BrushMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_BrushMID = { "BrushMID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, BrushMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushMID_MetaData), NewProp_BrushMID_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_RevealerSources_Inner = { "RevealerSources", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_RevealerSources = { "RevealerSources", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, RevealerSources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevealerSources_MetaData), NewProp_RevealerSources_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_BoundsMargin = { "BoundsMargin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarManager, BoundsMargin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMargin_MetaData), NewProp_BoundsMargin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFogOfWarManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_WorldMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_WorldMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FogRTSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_DefaultWorldRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FeatherRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_FogRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_OverlayActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_BrushActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_OverlayMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_BrushMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_BrushMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_RevealerSources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_RevealerSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarManager_Statics::NewProp_BoundsMargin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFogOfWarManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFogOfWarManager_Statics::ClassParams = {
	&AFogOfWarManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFogOfWarManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFogOfWarManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFogOfWarManager()
{
	if (!Z_Registration_Info_UClass_AFogOfWarManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFogOfWarManager.OuterSingleton, Z_Construct_UClass_AFogOfWarManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFogOfWarManager.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<AFogOfWarManager>()
{
	return AFogOfWarManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFogOfWarManager);
AFogOfWarManager::~AFogOfWarManager() {}
// End Class AFogOfWarManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFOW_Revealer::StaticStruct, Z_Construct_UScriptStruct_FFOW_Revealer_Statics::NewStructOps, TEXT("FOW_Revealer"), &Z_Registration_Info_UScriptStruct_FOW_Revealer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFOW_Revealer), 425492509U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFogOfWarManager, AFogOfWarManager::StaticClass, TEXT("AFogOfWarManager"), &Z_Registration_Info_UClass_AFogOfWarManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFogOfWarManager), 1696231235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_658732032(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_FogOfWarManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
