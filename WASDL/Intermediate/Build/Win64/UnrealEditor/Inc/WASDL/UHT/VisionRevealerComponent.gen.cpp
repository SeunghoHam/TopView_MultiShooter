// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/System/FOW/VisionRevealerComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisionRevealerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_UVisionRevealerComponent();
WASDL_API UClass* Z_Construct_UClass_UVisionRevealerComponent_NoRegister();
// End Cross Module References

// Begin Class UVisionRevealerComponent Function OnEnter
struct Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics
{
	struct VisionRevealerComponent_eventOnEnter_Parms
	{
		UPrimitiveComponent* _pri;
		AActor* Other;
		UPrimitiveComponent* _pri2;
		int32 _int;
		bool _bool;
		FHitResult _hitR;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION() void OnEnter(UPrimitiveComponent*, AActor* Other, UPrimitiveComponent*, int32, bool, const FHitResult&);\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/VisionRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION() void OnEnter(UPrimitiveComponent*, AActor* Other, UPrimitiveComponent*, int32, bool, const FHitResult&);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pri_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pri2_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__hitR_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__pri;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__pri2;
	static const UECodeGen_Private::FIntPropertyParams NewProp__int;
	static void NewProp__bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__bool;
	static const UECodeGen_Private::FStructPropertyParams NewProp__hitR;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__pri = { "_pri", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisionRevealerComponent_eventOnEnter_Parms, _pri), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pri_MetaData), NewProp__pri_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisionRevealerComponent_eventOnEnter_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__pri2 = { "_pri2", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisionRevealerComponent_eventOnEnter_Parms, _pri2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pri2_MetaData), NewProp__pri2_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__int = { "_int", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisionRevealerComponent_eventOnEnter_Parms, _int), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__bool_SetBit(void* Obj)
{
	((VisionRevealerComponent_eventOnEnter_Parms*)Obj)->_bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__bool = { "_bool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisionRevealerComponent_eventOnEnter_Parms), &Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__bool_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__hitR = { "_hitR", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisionRevealerComponent_eventOnEnter_Parms, _hitR), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__hitR_MetaData), NewProp__hitR_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__pri,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__pri2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__int,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__bool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::NewProp__hitR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionRevealerComponent, nullptr, "OnEnter", nullptr, nullptr, Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::VisionRevealerComponent_eventOnEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::VisionRevealerComponent_eventOnEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisionRevealerComponent_OnEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisionRevealerComponent_OnEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisionRevealerComponent::execOnEnter)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param__pri);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param__pri2);
	P_GET_PROPERTY(FIntProperty,Z_Param__int);
	P_GET_UBOOL(Z_Param__bool);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out__hitR);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnter(Z_Param__pri,Z_Param_Other,Z_Param__pri2,Z_Param__int,Z_Param__bool,Z_Param_Out__hitR);
	P_NATIVE_END;
}
// End Class UVisionRevealerComponent Function OnEnter

// Begin Class UVisionRevealerComponent Function OnExit
struct Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics
{
	struct VisionRevealerComponent_eventOnExit_Parms
	{
		UPrimitiveComponent* _pri;
		AActor* Other;
		UPrimitiveComponent* _pri2;
		int32 _int;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/FOW/VisionRevealerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pri_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pri2_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__pri;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__pri2;
	static const UECodeGen_Private::FIntPropertyParams NewProp__int;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::NewProp__pri = { "_pri", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisionRevealerComponent_eventOnExit_Parms, _pri), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pri_MetaData), NewProp__pri_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisionRevealerComponent_eventOnExit_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::NewProp__pri2 = { "_pri2", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisionRevealerComponent_eventOnExit_Parms, _pri2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pri2_MetaData), NewProp__pri2_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::NewProp__int = { "_int", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisionRevealerComponent_eventOnExit_Parms, _int), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::NewProp__pri,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::NewProp__pri2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::NewProp__int,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionRevealerComponent, nullptr, "OnExit", nullptr, nullptr, Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::VisionRevealerComponent_eventOnExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::VisionRevealerComponent_eventOnExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisionRevealerComponent_OnExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisionRevealerComponent_OnExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisionRevealerComponent::execOnExit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param__pri);
	P_GET_OBJECT(AActor,Z_Param_Other);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param__pri2);
	P_GET_PROPERTY(FIntProperty,Z_Param__int);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExit(Z_Param__pri,Z_Param_Other,Z_Param__pri2,Z_Param__int);
	P_NATIVE_END;
}
// End Class UVisionRevealerComponent Function OnExit

// Begin Class UVisionRevealerComponent Function OnRep_CurrentTeam
struct Z_Construct_UFunction_UVisionRevealerComponent_OnRep_CurrentTeam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/FOW/VisionRevealerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionRevealerComponent_OnRep_CurrentTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionRevealerComponent, nullptr, "OnRep_CurrentTeam", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisionRevealerComponent_OnRep_CurrentTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisionRevealerComponent_OnRep_CurrentTeam_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVisionRevealerComponent_OnRep_CurrentTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisionRevealerComponent_OnRep_CurrentTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisionRevealerComponent::execOnRep_CurrentTeam)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentTeam();
	P_NATIVE_END;
}
// End Class UVisionRevealerComponent Function OnRep_CurrentTeam

// Begin Class UVisionRevealerComponent Function SetVisionRadius
struct Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics
{
	struct VisionRevealerComponent_eventSetVisionRadius_Parms
	{
		float NewRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FOW" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8b\x9c\xec\x95\xbc \xeb\xb0\x98\xea\xb2\xbd(\xea\xb2\x8c\xec\x9e\x84 \xeb\xb0\xb8\xeb\x9f\xb0\xec\x8b\xb1 \xed\x8c\x8c\xeb\x9d\xbc\xeb\xaf\xb8\xed\x84\xb0)\n" },
#endif
		{ "ModuleRelativePath", "System/FOW/VisionRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8b\x9c\xec\x95\xbc \xeb\xb0\x98\xea\xb2\xbd(\xea\xb2\x8c\xec\x9e\x84 \xeb\xb0\xb8\xeb\x9f\xb0\xec\x8b\xb1 \xed\x8c\x8c\xeb\x9d\xbc\xeb\xaf\xb8\xed\x84\xb0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisionRevealerComponent_eventSetVisionRadius_Parms, NewRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::NewProp_NewRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisionRevealerComponent, nullptr, "SetVisionRadius", nullptr, nullptr, Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::VisionRevealerComponent_eventSetVisionRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::VisionRevealerComponent_eventSetVisionRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisionRevealerComponent::execSetVisionRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVisionRadius(Z_Param_NewRadius);
	P_NATIVE_END;
}
// End Class UVisionRevealerComponent Function SetVisionRadius

// Begin Class UVisionRevealerComponent
void UVisionRevealerComponent::StaticRegisterNativesUVisionRevealerComponent()
{
	UClass* Class = UVisionRevealerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnter", &UVisionRevealerComponent::execOnEnter },
		{ "OnExit", &UVisionRevealerComponent::execOnExit },
		{ "OnRep_CurrentTeam", &UVisionRevealerComponent::execOnRep_CurrentTeam },
		{ "SetVisionRadius", &UVisionRevealerComponent::execSetVisionRadius },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisionRevealerComponent);
UClass* Z_Construct_UClass_UVisionRevealerComponent_NoRegister()
{
	return UVisionRevealerComponent::StaticClass();
}
struct Z_Construct_UClass_UVisionRevealerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "FOW" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "System/FOW/VisionRevealerComponent.h" },
		{ "ModuleRelativePath", "System/FOW/VisionRevealerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisionRadius_MetaData[] = {
		{ "Category", "FOW" },
		{ "ModuleRelativePath", "System/FOW/VisionRevealerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VisionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVisionRevealerComponent_OnEnter, "OnEnter" }, // 998087329
		{ &Z_Construct_UFunction_UVisionRevealerComponent_OnExit, "OnExit" }, // 1975381649
		{ &Z_Construct_UFunction_UVisionRevealerComponent_OnRep_CurrentTeam, "OnRep_CurrentTeam" }, // 2474555724
		{ &Z_Construct_UFunction_UVisionRevealerComponent_SetVisionRadius, "SetVisionRadius" }, // 1850899556
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisionRevealerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVisionRevealerComponent_Statics::NewProp_VisionRadius = { "VisionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVisionRevealerComponent, VisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisionRadius_MetaData), NewProp_VisionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVisionRevealerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVisionRevealerComponent_Statics::NewProp_VisionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVisionRevealerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVisionRevealerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USphereComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVisionRevealerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisionRevealerComponent_Statics::ClassParams = {
	&UVisionRevealerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVisionRevealerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVisionRevealerComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVisionRevealerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVisionRevealerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVisionRevealerComponent()
{
	if (!Z_Registration_Info_UClass_UVisionRevealerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisionRevealerComponent.OuterSingleton, Z_Construct_UClass_UVisionRevealerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVisionRevealerComponent.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UVisionRevealerComponent>()
{
	return UVisionRevealerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVisionRevealerComponent);
UVisionRevealerComponent::~UVisionRevealerComponent() {}
// End Class UVisionRevealerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVisionRevealerComponent, UVisionRevealerComponent::StaticClass, TEXT("UVisionRevealerComponent"), &Z_Registration_Info_UClass_UVisionRevealerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisionRevealerComponent), 3899889029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_1829787926(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_FOW_VisionRevealerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
