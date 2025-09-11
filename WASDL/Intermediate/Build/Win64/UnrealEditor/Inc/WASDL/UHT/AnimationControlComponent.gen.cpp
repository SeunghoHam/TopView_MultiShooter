// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Character/Components/AnimationControlComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationControlComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_UAnimationControlComponent();
WASDL_API UClass* Z_Construct_UClass_UAnimationControlComponent_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UUzuhaAnimMontageMap_NoRegister();
WASDL_API UFunction* Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature();
WASDL_API UFunction* Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature();
// End Cross Module References

// Begin Delegate FMontageBlendOutEvent
struct Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics
{
	struct _Script_WASDL_eventMontageBlendOutEvent_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ----- Blueprint multicast events -----\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----- Blueprint multicast events -----" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WASDL_eventMontageBlendOutEvent_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((_Script_WASDL_eventMontageBlendOutEvent_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_WASDL_eventMontageBlendOutEvent_Parms), &Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WASDL, nullptr, "MontageBlendOutEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::_Script_WASDL_eventMontageBlendOutEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::_Script_WASDL_eventMontageBlendOutEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMontageBlendOutEvent_DelegateWrapper(const FMulticastScriptDelegate& MontageBlendOutEvent, UAnimMontage* Montage, bool bInterrupted)
{
	struct _Script_WASDL_eventMontageBlendOutEvent_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
	_Script_WASDL_eventMontageBlendOutEvent_Parms Parms;
	Parms.Montage=Montage;
	Parms.bInterrupted=bInterrupted ? true : false;
	MontageBlendOutEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMontageBlendOutEvent

// Begin Delegate FMontageEndedEvent
struct Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics
{
	struct _Script_WASDL_eventMontageEndedEvent_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WASDL_eventMontageEndedEvent_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((_Script_WASDL_eventMontageEndedEvent_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_WASDL_eventMontageEndedEvent_Parms), &Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WASDL, nullptr, "MontageEndedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::_Script_WASDL_eventMontageEndedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::_Script_WASDL_eventMontageEndedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMontageEndedEvent_DelegateWrapper(const FMulticastScriptDelegate& MontageEndedEvent, UAnimMontage* Montage, bool bInterrupted)
{
	struct _Script_WASDL_eventMontageEndedEvent_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
	_Script_WASDL_eventMontageEndedEvent_Parms Parms;
	Parms.Montage=Montage;
	Parms.bInterrupted=bInterrupted ? true : false;
	MontageEndedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMontageEndedEvent

// Begin Class UAnimationControlComponent Function GetLength
struct Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics
{
	struct AnimationControlComponent_eventGetLength_Parms
	{
		UAnimMontage* Montage;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim|Montage" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventGetLength_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "GetLength", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::AnimationControlComponent_eventGetLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::AnimationControlComponent_eventGetLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_GetLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_GetLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execGetLength)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLength(Z_Param_Montage);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function GetLength

// Begin Class UAnimationControlComponent Function GetPosition
struct Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics
{
	struct AnimationControlComponent_eventGetPosition_Parms
	{
		UAnimMontage* Montage;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim|Montage" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventGetPosition_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventGetPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::AnimationControlComponent_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::AnimationControlComponent_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execGetPosition)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPosition(Z_Param_Montage);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function GetPosition

// Begin Class UAnimationControlComponent Function HandleMontageBlendingOut
struct Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics
{
	struct AnimationControlComponent_eventHandleMontageBlendingOut_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate handlers (bound to AnimInstance)\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate handlers (bound to AnimInstance)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventHandleMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((AnimationControlComponent_eventHandleMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationControlComponent_eventHandleMontageBlendingOut_Parms), &Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "HandleMontageBlendingOut", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::AnimationControlComponent_eventHandleMontageBlendingOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::AnimationControlComponent_eventHandleMontageBlendingOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execHandleMontageBlendingOut)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function HandleMontageBlendingOut

// Begin Class UAnimationControlComponent Function HandleMontageEnded
struct Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics
{
	struct AnimationControlComponent_eventHandleMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventHandleMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((AnimationControlComponent_eventHandleMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationControlComponent_eventHandleMontageEnded_Parms), &Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "HandleMontageEnded", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::AnimationControlComponent_eventHandleMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::AnimationControlComponent_eventHandleMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execHandleMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function HandleMontageEnded

// Begin Class UAnimationControlComponent Function IsPlaying
struct Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics
{
	struct AnimationControlComponent_eventIsPlaying_Parms
	{
		UAnimMontage* Montage;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim|Montage" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventIsPlaying_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationControlComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationControlComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::AnimationControlComponent_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::AnimationControlComponent_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execIsPlaying)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying(Z_Param_Montage);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function IsPlaying

// Begin Class UAnimationControlComponent Function JumpToSection
struct Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics
{
	struct AnimationControlComponent_eventJumpToSection_Parms
	{
		UAnimMontage* Montage;
		FName SectionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim|Montage" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventJumpToSection_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventJumpToSection_Parms, SectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::NewProp_SectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "JumpToSection", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::AnimationControlComponent_eventJumpToSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::AnimationControlComponent_eventJumpToSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_JumpToSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_JumpToSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execJumpToSection)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpToSection(Z_Param_Montage,Z_Param_SectionName);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function JumpToSection

// Begin Class UAnimationControlComponent Function Multicast_JumpToSection
struct AnimationControlComponent_eventMulticast_JumpToSection_Parms
{
	UAnimMontage* Montage;
	FName SectionName;
};
static FName NAME_UAnimationControlComponent_Multicast_JumpToSection = FName(TEXT("Multicast_JumpToSection"));
void UAnimationControlComponent::Multicast_JumpToSection(UAnimMontage* Montage, FName SectionName)
{
	AnimationControlComponent_eventMulticast_JumpToSection_Parms Parms;
	Parms.Montage=Montage;
	Parms.SectionName=SectionName;
	ProcessEvent(FindFunctionChecked(NAME_UAnimationControlComponent_Multicast_JumpToSection),&Parms);
}
struct Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventMulticast_JumpToSection_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventMulticast_JumpToSection_Parms, SectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::NewProp_SectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "Multicast_JumpToSection", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::PropPointers), sizeof(AnimationControlComponent_eventMulticast_JumpToSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimationControlComponent_eventMulticast_JumpToSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execMulticast_JumpToSection)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_JumpToSection_Implementation(Z_Param_Montage,Z_Param_SectionName);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function Multicast_JumpToSection

// Begin Class UAnimationControlComponent Function Multicast_PauseMontage
struct AnimationControlComponent_eventMulticast_PauseMontage_Parms
{
	UAnimMontage* Montage;
};
static FName NAME_UAnimationControlComponent_Multicast_PauseMontage = FName(TEXT("Multicast_PauseMontage"));
void UAnimationControlComponent::Multicast_PauseMontage(UAnimMontage* Montage)
{
	AnimationControlComponent_eventMulticast_PauseMontage_Parms Parms;
	Parms.Montage=Montage;
	ProcessEvent(FindFunctionChecked(NAME_UAnimationControlComponent_Multicast_PauseMontage),&Parms);
}
struct Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventMulticast_PauseMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage_Statics::NewProp_Montage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "Multicast_PauseMontage", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage_Statics::PropPointers), sizeof(AnimationControlComponent_eventMulticast_PauseMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimationControlComponent_eventMulticast_PauseMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execMulticast_PauseMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PauseMontage_Implementation(Z_Param_Montage);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function Multicast_PauseMontage

// Begin Class UAnimationControlComponent Function Multicast_PlayMontage
struct AnimationControlComponent_eventMulticast_PlayMontage_Parms
{
	UAnimMontage* Montage;
	float PlayRate;
	FName StartSection;
};
static FName NAME_UAnimationControlComponent_Multicast_PlayMontage = FName(TEXT("Multicast_PlayMontage"));
void UAnimationControlComponent::Multicast_PlayMontage(UAnimMontage* Montage, float PlayRate, FName StartSection)
{
	AnimationControlComponent_eventMulticast_PlayMontage_Parms Parms;
	Parms.Montage=Montage;
	Parms.PlayRate=PlayRate;
	Parms.StartSection=StartSection;
	ProcessEvent(FindFunctionChecked(NAME_UAnimationControlComponent_Multicast_PlayMontage),&Parms);
}
struct Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventMulticast_PlayMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventMulticast_PlayMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventMulticast_PlayMontage_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::NewProp_StartSection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "Multicast_PlayMontage", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::PropPointers), sizeof(AnimationControlComponent_eventMulticast_PlayMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimationControlComponent_eventMulticast_PlayMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execMulticast_PlayMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PlayMontage_Implementation(Z_Param_Montage,Z_Param_PlayRate,Z_Param_StartSection);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function Multicast_PlayMontage

// Begin Class UAnimationControlComponent Function Multicast_ResumeMontage
struct AnimationControlComponent_eventMulticast_ResumeMontage_Parms
{
	UAnimMontage* Montage;
};
static FName NAME_UAnimationControlComponent_Multicast_ResumeMontage = FName(TEXT("Multicast_ResumeMontage"));
void UAnimationControlComponent::Multicast_ResumeMontage(UAnimMontage* Montage)
{
	AnimationControlComponent_eventMulticast_ResumeMontage_Parms Parms;
	Parms.Montage=Montage;
	ProcessEvent(FindFunctionChecked(NAME_UAnimationControlComponent_Multicast_ResumeMontage),&Parms);
}
struct Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventMulticast_ResumeMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage_Statics::NewProp_Montage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "Multicast_ResumeMontage", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage_Statics::PropPointers), sizeof(AnimationControlComponent_eventMulticast_ResumeMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimationControlComponent_eventMulticast_ResumeMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execMulticast_ResumeMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_ResumeMontage_Implementation(Z_Param_Montage);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function Multicast_ResumeMontage

// Begin Class UAnimationControlComponent Function Multicast_SetPlayRate
struct AnimationControlComponent_eventMulticast_SetPlayRate_Parms
{
	UAnimMontage* Montage;
	float NewRate;
};
static FName NAME_UAnimationControlComponent_Multicast_SetPlayRate = FName(TEXT("Multicast_SetPlayRate"));
void UAnimationControlComponent::Multicast_SetPlayRate(UAnimMontage* Montage, float NewRate)
{
	AnimationControlComponent_eventMulticast_SetPlayRate_Parms Parms;
	Parms.Montage=Montage;
	Parms.NewRate=NewRate;
	ProcessEvent(FindFunctionChecked(NAME_UAnimationControlComponent_Multicast_SetPlayRate),&Parms);
}
struct Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventMulticast_SetPlayRate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventMulticast_SetPlayRate_Parms, NewRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::NewProp_NewRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "Multicast_SetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::PropPointers), sizeof(AnimationControlComponent_eventMulticast_SetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimationControlComponent_eventMulticast_SetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execMulticast_SetPlayRate)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_SetPlayRate_Implementation(Z_Param_Montage,Z_Param_NewRate);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function Multicast_SetPlayRate

// Begin Class UAnimationControlComponent Function Multicast_SetPosition
struct AnimationControlComponent_eventMulticast_SetPosition_Parms
{
	UAnimMontage* Montage;
	float NewPositionSeconds;
	bool bFireNotifies;
};
static FName NAME_UAnimationControlComponent_Multicast_SetPosition = FName(TEXT("Multicast_SetPosition"));
void UAnimationControlComponent::Multicast_SetPosition(UAnimMontage* Montage, float NewPositionSeconds, bool bFireNotifies)
{
	AnimationControlComponent_eventMulticast_SetPosition_Parms Parms;
	Parms.Montage=Montage;
	Parms.NewPositionSeconds=NewPositionSeconds;
	Parms.bFireNotifies=bFireNotifies ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UAnimationControlComponent_Multicast_SetPosition),&Parms);
}
struct Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPositionSeconds;
	static void NewProp_bFireNotifies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireNotifies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventMulticast_SetPosition_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::NewProp_NewPositionSeconds = { "NewPositionSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventMulticast_SetPosition_Parms, NewPositionSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::NewProp_bFireNotifies_SetBit(void* Obj)
{
	((AnimationControlComponent_eventMulticast_SetPosition_Parms*)Obj)->bFireNotifies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::NewProp_bFireNotifies = { "bFireNotifies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationControlComponent_eventMulticast_SetPosition_Parms), &Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::NewProp_bFireNotifies_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::NewProp_NewPositionSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::NewProp_bFireNotifies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "Multicast_SetPosition", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::PropPointers), sizeof(AnimationControlComponent_eventMulticast_SetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimationControlComponent_eventMulticast_SetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execMulticast_SetPosition)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPositionSeconds);
	P_GET_UBOOL(Z_Param_bFireNotifies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_SetPosition_Implementation(Z_Param_Montage,Z_Param_NewPositionSeconds,Z_Param_bFireNotifies);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function Multicast_SetPosition

// Begin Class UAnimationControlComponent Function PauseMontage
struct Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics
{
	struct AnimationControlComponent_eventPauseMontage_Parms
	{
		UAnimMontage* Montage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim|Montage" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventPauseMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::NewProp_Montage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "PauseMontage", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::AnimationControlComponent_eventPauseMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::AnimationControlComponent_eventPauseMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_PauseMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_PauseMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execPauseMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseMontage(Z_Param_Montage);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function PauseMontage

// Begin Class UAnimationControlComponent Function PlayByName
struct Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics
{
	struct AnimationControlComponent_eventPlayByName_Parms
	{
		FName Key;
		float PlayRate;
		FName StartSection;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim|Montage" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventPlayByName_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventPlayByName_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventPlayByName_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventPlayByName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::NewProp_StartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "PlayByName", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::AnimationControlComponent_eventPlayByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::AnimationControlComponent_eventPlayByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_PlayByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_PlayByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execPlayByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->PlayByName(Z_Param_Key,Z_Param_PlayRate,Z_Param_StartSection);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function PlayByName

// Begin Class UAnimationControlComponent Function PlayMontage
struct Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics
{
	struct AnimationControlComponent_eventPlayMontage_Parms
	{
		UAnimMontage* Montage;
		float PlayRate;
		FName StartSection;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim|Montage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === High-level API (Blueprint-callable) ===\n" },
#endif
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== High-level API (Blueprint-callable) ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventPlayMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventPlayMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventPlayMontage_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventPlayMontage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::NewProp_StartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "PlayMontage", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::AnimationControlComponent_eventPlayMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::AnimationControlComponent_eventPlayMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_PlayMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_PlayMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execPlayMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->PlayMontage(Z_Param_Montage,Z_Param_PlayRate,Z_Param_StartSection);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function PlayMontage

// Begin Class UAnimationControlComponent Function ResumeMontage
struct Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics
{
	struct AnimationControlComponent_eventResumeMontage_Parms
	{
		UAnimMontage* Montage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim|Montage" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventResumeMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::NewProp_Montage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "ResumeMontage", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::AnimationControlComponent_eventResumeMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::AnimationControlComponent_eventResumeMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execResumeMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeMontage(Z_Param_Montage);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function ResumeMontage

// Begin Class UAnimationControlComponent Function Server_PlayMontage
struct AnimationControlComponent_eventServer_PlayMontage_Parms
{
	UAnimMontage* Montage;
	float PlayRate;
	FName StartSection;
};
static FName NAME_UAnimationControlComponent_Server_PlayMontage = FName(TEXT("Server_PlayMontage"));
void UAnimationControlComponent::Server_PlayMontage(UAnimMontage* Montage, float PlayRate, FName StartSection)
{
	AnimationControlComponent_eventServer_PlayMontage_Parms Parms;
	Parms.Montage=Montage;
	Parms.PlayRate=PlayRate;
	Parms.StartSection=StartSection;
	ProcessEvent(FindFunctionChecked(NAME_UAnimationControlComponent_Server_PlayMontage),&Parms);
}
struct Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === RPCs ===\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== RPCs ===" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventServer_PlayMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventServer_PlayMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventServer_PlayMontage_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::NewProp_StartSection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "Server_PlayMontage", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::PropPointers), sizeof(AnimationControlComponent_eventServer_PlayMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimationControlComponent_eventServer_PlayMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execServer_PlayMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_PlayMontage_Implementation(Z_Param_Montage,Z_Param_PlayRate,Z_Param_StartSection);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function Server_PlayMontage

// Begin Class UAnimationControlComponent Function Server_StopMontage
struct AnimationControlComponent_eventServer_StopMontage_Parms
{
	UAnimMontage* Montage;
	float BlendOutTime;
};
static FName NAME_UAnimationControlComponent_Server_StopMontage = FName(TEXT("Server_StopMontage"));
void UAnimationControlComponent::Server_StopMontage(UAnimMontage* Montage, float BlendOutTime)
{
	AnimationControlComponent_eventServer_StopMontage_Parms Parms;
	Parms.Montage=Montage;
	Parms.BlendOutTime=BlendOutTime;
	ProcessEvent(FindFunctionChecked(NAME_UAnimationControlComponent_Server_StopMontage),&Parms);
}
struct Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventServer_StopMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventServer_StopMontage_Parms, BlendOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::NewProp_BlendOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "Server_StopMontage", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::PropPointers), sizeof(AnimationControlComponent_eventServer_StopMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimationControlComponent_eventServer_StopMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execServer_StopMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_StopMontage_Implementation(Z_Param_Montage,Z_Param_BlendOutTime);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function Server_StopMontage

// Begin Class UAnimationControlComponent Function SetPlayRate
struct Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics
{
	struct AnimationControlComponent_eventSetPlayRate_Parms
	{
		UAnimMontage* Montage;
		float NewRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim|Montage" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventSetPlayRate_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventSetPlayRate_Parms, NewRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::NewProp_NewRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "SetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::AnimationControlComponent_eventSetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::AnimationControlComponent_eventSetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execSetPlayRate)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayRate(Z_Param_Montage,Z_Param_NewRate);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function SetPlayRate

// Begin Class UAnimationControlComponent Function SetPosition
struct Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics
{
	struct AnimationControlComponent_eventSetPosition_Parms
	{
		UAnimMontage* Montage;
		float NewPositionSeconds;
		bool bFireNotifies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim|Montage" },
		{ "CPP_Default_bFireNotifies", "true" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPositionSeconds;
	static void NewProp_bFireNotifies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireNotifies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventSetPosition_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::NewProp_NewPositionSeconds = { "NewPositionSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventSetPosition_Parms, NewPositionSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::NewProp_bFireNotifies_SetBit(void* Obj)
{
	((AnimationControlComponent_eventSetPosition_Parms*)Obj)->bFireNotifies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::NewProp_bFireNotifies = { "bFireNotifies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationControlComponent_eventSetPosition_Parms), &Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::NewProp_bFireNotifies_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::NewProp_NewPositionSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::NewProp_bFireNotifies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "SetPosition", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::AnimationControlComponent_eventSetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::AnimationControlComponent_eventSetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_SetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_SetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execSetPosition)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPositionSeconds);
	P_GET_UBOOL(Z_Param_bFireNotifies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPosition(Z_Param_Montage,Z_Param_NewPositionSeconds,Z_Param_bFireNotifies);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function SetPosition

// Begin Class UAnimationControlComponent Function StopMontage
struct Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics
{
	struct AnimationControlComponent_eventStopMontage_Parms
	{
		UAnimMontage* Montage;
		float BlendOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Anim|Montage" },
		{ "CPP_Default_BlendOutTime", "0.250000" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventStopMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationControlComponent_eventStopMontage_Parms, BlendOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::NewProp_BlendOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationControlComponent, nullptr, "StopMontage", nullptr, nullptr, Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::AnimationControlComponent_eventStopMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::AnimationControlComponent_eventStopMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationControlComponent_StopMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationControlComponent_StopMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationControlComponent::execStopMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMontage(Z_Param_Montage,Z_Param_BlendOutTime);
	P_NATIVE_END;
}
// End Class UAnimationControlComponent Function StopMontage

// Begin Class UAnimationControlComponent
void UAnimationControlComponent::StaticRegisterNativesUAnimationControlComponent()
{
	UClass* Class = UAnimationControlComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLength", &UAnimationControlComponent::execGetLength },
		{ "GetPosition", &UAnimationControlComponent::execGetPosition },
		{ "HandleMontageBlendingOut", &UAnimationControlComponent::execHandleMontageBlendingOut },
		{ "HandleMontageEnded", &UAnimationControlComponent::execHandleMontageEnded },
		{ "IsPlaying", &UAnimationControlComponent::execIsPlaying },
		{ "JumpToSection", &UAnimationControlComponent::execJumpToSection },
		{ "Multicast_JumpToSection", &UAnimationControlComponent::execMulticast_JumpToSection },
		{ "Multicast_PauseMontage", &UAnimationControlComponent::execMulticast_PauseMontage },
		{ "Multicast_PlayMontage", &UAnimationControlComponent::execMulticast_PlayMontage },
		{ "Multicast_ResumeMontage", &UAnimationControlComponent::execMulticast_ResumeMontage },
		{ "Multicast_SetPlayRate", &UAnimationControlComponent::execMulticast_SetPlayRate },
		{ "Multicast_SetPosition", &UAnimationControlComponent::execMulticast_SetPosition },
		{ "PauseMontage", &UAnimationControlComponent::execPauseMontage },
		{ "PlayByName", &UAnimationControlComponent::execPlayByName },
		{ "PlayMontage", &UAnimationControlComponent::execPlayMontage },
		{ "ResumeMontage", &UAnimationControlComponent::execResumeMontage },
		{ "Server_PlayMontage", &UAnimationControlComponent::execServer_PlayMontage },
		{ "Server_StopMontage", &UAnimationControlComponent::execServer_StopMontage },
		{ "SetPlayRate", &UAnimationControlComponent::execSetPlayRate },
		{ "SetPosition", &UAnimationControlComponent::execSetPosition },
		{ "StopMontage", &UAnimationControlComponent::execStopMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationControlComponent);
UClass* Z_Construct_UClass_UAnimationControlComponent_NoRegister()
{
	return UAnimationControlComponent::StaticClass();
}
struct Z_Construct_UClass_UAnimationControlComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/Components/AnimationControlComponent.h" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageMapData_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bServerAuthOnly_MetaData[] = {
		{ "Category", "Network" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, only the server may initiate authoritative actions (recommended for multiplayer).\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, only the server may initiate authoritative actions (recommended for multiplayer)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBindDelegates_MetaData[] = {
		{ "Category", "Anim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Auto-bind to the current AnimInstance delegates (blending-out/ended) on register.\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-bind to the current AnimInstance delegates (blending-out/ended) on register." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshOverride_MetaData[] = {
		{ "Category", "Anim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional: override the SkeletalMeshComponent if owner is not a Character or you want a sub-mesh.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: override the SkeletalMeshComponent if owner is not a Character or you want a sub-mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageBlendingOut_MetaData[] = {
		{ "Category", "Anim|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === Blueprint Events ===\n// Broadcasts when any montage on this component's AnimInstance starts blending out.\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== Blueprint Events ===\nBroadcasts when any montage on this component's AnimInstance starts blending out." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageEnded_MetaData[] = {
		{ "Category", "Anim|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcasts when any montage on this component's AnimInstance ends.\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcasts when any montage on this component's AnimInstance ends." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundAnimInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cache last bound AnimInstance to safely unbind\n" },
#endif
		{ "ModuleRelativePath", "Character/Components/AnimationControlComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache last bound AnimInstance to safely unbind" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageMapData;
	static void NewProp_bServerAuthOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerAuthOnly;
	static void NewProp_bAutoBindDelegates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBindDelegates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMeshOverride;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageBlendingOut;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageEnded;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_BoundAnimInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationControlComponent_GetLength, "GetLength" }, // 1048090809
		{ &Z_Construct_UFunction_UAnimationControlComponent_GetPosition, "GetPosition" }, // 3259468890
		{ &Z_Construct_UFunction_UAnimationControlComponent_HandleMontageBlendingOut, "HandleMontageBlendingOut" }, // 163624878
		{ &Z_Construct_UFunction_UAnimationControlComponent_HandleMontageEnded, "HandleMontageEnded" }, // 2285850574
		{ &Z_Construct_UFunction_UAnimationControlComponent_IsPlaying, "IsPlaying" }, // 3564570223
		{ &Z_Construct_UFunction_UAnimationControlComponent_JumpToSection, "JumpToSection" }, // 291951810
		{ &Z_Construct_UFunction_UAnimationControlComponent_Multicast_JumpToSection, "Multicast_JumpToSection" }, // 239564942
		{ &Z_Construct_UFunction_UAnimationControlComponent_Multicast_PauseMontage, "Multicast_PauseMontage" }, // 152700941
		{ &Z_Construct_UFunction_UAnimationControlComponent_Multicast_PlayMontage, "Multicast_PlayMontage" }, // 1360069592
		{ &Z_Construct_UFunction_UAnimationControlComponent_Multicast_ResumeMontage, "Multicast_ResumeMontage" }, // 3087954260
		{ &Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPlayRate, "Multicast_SetPlayRate" }, // 3418617662
		{ &Z_Construct_UFunction_UAnimationControlComponent_Multicast_SetPosition, "Multicast_SetPosition" }, // 1380495771
		{ &Z_Construct_UFunction_UAnimationControlComponent_PauseMontage, "PauseMontage" }, // 190375726
		{ &Z_Construct_UFunction_UAnimationControlComponent_PlayByName, "PlayByName" }, // 3967969147
		{ &Z_Construct_UFunction_UAnimationControlComponent_PlayMontage, "PlayMontage" }, // 2805722040
		{ &Z_Construct_UFunction_UAnimationControlComponent_ResumeMontage, "ResumeMontage" }, // 3467613296
		{ &Z_Construct_UFunction_UAnimationControlComponent_Server_PlayMontage, "Server_PlayMontage" }, // 2106748729
		{ &Z_Construct_UFunction_UAnimationControlComponent_Server_StopMontage, "Server_StopMontage" }, // 1121831747
		{ &Z_Construct_UFunction_UAnimationControlComponent_SetPlayRate, "SetPlayRate" }, // 53003140
		{ &Z_Construct_UFunction_UAnimationControlComponent_SetPosition, "SetPosition" }, // 736420018
		{ &Z_Construct_UFunction_UAnimationControlComponent_StopMontage, "StopMontage" }, // 2561778149
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationControlComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_MontageMapData = { "MontageMapData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationControlComponent, MontageMapData), Z_Construct_UClass_UUzuhaAnimMontageMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageMapData_MetaData), NewProp_MontageMapData_MetaData) };
void Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_bServerAuthOnly_SetBit(void* Obj)
{
	((UAnimationControlComponent*)Obj)->bServerAuthOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_bServerAuthOnly = { "bServerAuthOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationControlComponent), &Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_bServerAuthOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bServerAuthOnly_MetaData), NewProp_bServerAuthOnly_MetaData) };
void Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_bAutoBindDelegates_SetBit(void* Obj)
{
	((UAnimationControlComponent*)Obj)->bAutoBindDelegates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_bAutoBindDelegates = { "bAutoBindDelegates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationControlComponent), &Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_bAutoBindDelegates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoBindDelegates_MetaData), NewProp_bAutoBindDelegates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_TargetMeshOverride = { "TargetMeshOverride", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationControlComponent, TargetMeshOverride), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshOverride_MetaData), NewProp_TargetMeshOverride_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_OnMontageBlendingOut = { "OnMontageBlendingOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationControlComponent, OnMontageBlendingOut), Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMontageBlendingOut_MetaData), NewProp_OnMontageBlendingOut_MetaData) }; // 918717417
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_OnMontageEnded = { "OnMontageEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationControlComponent, OnMontageEnded), Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMontageEnded_MetaData), NewProp_OnMontageEnded_MetaData) }; // 1836944349
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_BoundAnimInstance = { "BoundAnimInstance", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationControlComponent, BoundAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundAnimInstance_MetaData), NewProp_BoundAnimInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationControlComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_MontageMapData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_bServerAuthOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_bAutoBindDelegates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_TargetMeshOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_OnMontageBlendingOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_OnMontageEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationControlComponent_Statics::NewProp_BoundAnimInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationControlComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationControlComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationControlComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationControlComponent_Statics::ClassParams = {
	&UAnimationControlComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimationControlComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationControlComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationControlComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationControlComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationControlComponent()
{
	if (!Z_Registration_Info_UClass_UAnimationControlComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationControlComponent.OuterSingleton, Z_Construct_UClass_UAnimationControlComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationControlComponent.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UAnimationControlComponent>()
{
	return UAnimationControlComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationControlComponent);
UAnimationControlComponent::~UAnimationControlComponent() {}
// End Class UAnimationControlComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationControlComponent, UAnimationControlComponent::StaticClass, TEXT("UAnimationControlComponent"), &Z_Registration_Info_UClass_UAnimationControlComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationControlComponent), 757662322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_2509071587(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_AnimationControlComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
