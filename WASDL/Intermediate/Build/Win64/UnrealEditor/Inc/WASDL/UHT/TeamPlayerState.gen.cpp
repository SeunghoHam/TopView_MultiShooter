// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/System/TeamPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_ATeamPlayerState();
WASDL_API UClass* Z_Construct_UClass_ATeamPlayerState_NoRegister();
WASDL_API UFunction* Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnHealthChanged
struct Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics
{
	struct _Script_WASDL_eventOnHealthChanged_Parms
	{
		float ChangeHealth;
		float MaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */// \xec\xb2\xb4\xeb\xa0\xa5 \xeb\xb3\x80\xea\xb2\xbd \xeb\xb8\x8c\xeb\xa1\x9c\xeb\x93\x9c\xec\xba\x90\xec\x8a\xa4\xed\x8a\xb8(\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c\xeb\x8f\x84 \xeb\xb0\x94\xec\x9d\xb8\xeb\x94\xa9 \xea\xb0\x80\xeb\x8a\xa5)\n" },
#endif
		{ "ModuleRelativePath", "System/TeamPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// \xec\xb2\xb4\xeb\xa0\xa5 \xeb\xb3\x80\xea\xb2\xbd \xeb\xb8\x8c\xeb\xa1\x9c\xeb\x93\x9c\xec\xba\x90\xec\x8a\xa4\xed\x8a\xb8(\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c\xeb\x8f\x84 \xeb\xb0\x94\xec\x9d\xb8\xeb\x94\xa9 \xea\xb0\x80\xeb\x8a\xa5)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChangeHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::NewProp_ChangeHealth = { "ChangeHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WASDL_eventOnHealthChanged_Parms, ChangeHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WASDL_eventOnHealthChanged_Parms, MaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::NewProp_ChangeHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WASDL, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::_Script_WASDL_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::_Script_WASDL_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float ChangeHealth, float MaxHealth)
{
	struct _Script_WASDL_eventOnHealthChanged_Parms
	{
		float ChangeHealth;
		float MaxHealth;
	};
	_Script_WASDL_eventOnHealthChanged_Parms Parms;
	Parms.ChangeHealth=ChangeHealth;
	Parms.MaxHealth=MaxHealth;
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthChanged

// Begin Class ATeamPlayerState Function GetHealth
struct Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics
{
	struct TeamPlayerState_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "System/TeamPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamPlayerState_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeamPlayerState, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::TeamPlayerState_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::TeamPlayerState_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATeamPlayerState_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeamPlayerState_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeamPlayerState::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class ATeamPlayerState Function GetHealth

// Begin Class ATeamPlayerState Function GetMaxHealth
struct Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics
{
	struct TeamPlayerState_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/TeamPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamPlayerState_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeamPlayerState, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::TeamPlayerState_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::TeamPlayerState_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeamPlayerState::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class ATeamPlayerState Function GetMaxHealth

// Begin Class ATeamPlayerState Function OnRep_Health
struct Z_Construct_UFunction_ATeamPlayerState_OnRep_Health_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/TeamPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeamPlayerState_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeamPlayerState, nullptr, "OnRep_Health", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeamPlayerState_OnRep_Health_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATeamPlayerState_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeamPlayerState_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeamPlayerState::execOnRep_Health)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health();
	P_NATIVE_END;
}
// End Class ATeamPlayerState Function OnRep_Health

// Begin Class ATeamPlayerState Function OnRep_TeamId
struct Z_Construct_UFunction_ATeamPlayerState_OnRep_TeamId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0=\xec\x95\x84\xea\xb5\xb0, 1=\xec\xa0\x81 (\xec\x9b\x90\xed\x95\x98\xeb\xa9\xb4 enum \xec\x82\xac\xec\x9a\xa9)\n" },
#endif
		{ "ModuleRelativePath", "System/TeamPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0=\xec\x95\x84\xea\xb5\xb0, 1=\xec\xa0\x81 (\xec\x9b\x90\xed\x95\x98\xeb\xa9\xb4 enum \xec\x82\xac\xec\x9a\xa9)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeamPlayerState_OnRep_TeamId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeamPlayerState, nullptr, "OnRep_TeamId", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_OnRep_TeamId_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeamPlayerState_OnRep_TeamId_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATeamPlayerState_OnRep_TeamId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeamPlayerState_OnRep_TeamId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeamPlayerState::execOnRep_TeamId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_TeamId();
	P_NATIVE_END;
}
// End Class ATeamPlayerState Function OnRep_TeamId

// Begin Class ATeamPlayerState Function SetHealth
struct Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics
{
	struct TeamPlayerState_eventSetHealth_Parms
	{
		float current;
		float max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xed\x98\xb8\xec\xb6\x9c: \xea\xb6\x8c\xed\x95\x9c \xec\xb2\xb4\xed\x81\xac \xed\x8f\xac\xed\x95\xa8\n" },
#endif
		{ "ModuleRelativePath", "System/TeamPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xed\x98\xb8\xec\xb6\x9c: \xea\xb6\x8c\xed\x95\x9c \xec\xb2\xb4\xed\x81\xac \xed\x8f\xac\xed\x95\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::NewProp_current = { "current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamPlayerState_eventSetHealth_Parms, current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamPlayerState_eventSetHealth_Parms, max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::NewProp_current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::NewProp_max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeamPlayerState, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::TeamPlayerState_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::TeamPlayerState_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATeamPlayerState_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeamPlayerState_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeamPlayerState::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_current);
	P_GET_PROPERTY(FFloatProperty,Z_Param_max);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_current,Z_Param_max);
	P_NATIVE_END;
}
// End Class ATeamPlayerState Function SetHealth

// Begin Class ATeamPlayerState Function SetTeamId
struct Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics
{
	struct TeamPlayerState_eventSetTeamId_Parms
	{
		uint8 InId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x97\xac\xed\x8d\xbc\n" },
#endif
		{ "ModuleRelativePath", "System/TeamPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x97\xac\xed\x8d\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::NewProp_InId = { "InId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamPlayerState_eventSetTeamId_Parms, InId), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::NewProp_InId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeamPlayerState, nullptr, "SetTeamId", nullptr, nullptr, Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::TeamPlayerState_eventSetTeamId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::TeamPlayerState_eventSetTeamId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATeamPlayerState_SetTeamId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeamPlayerState_SetTeamId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeamPlayerState::execSetTeamId)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamId(Z_Param_InId);
	P_NATIVE_END;
}
// End Class ATeamPlayerState Function SetTeamId

// Begin Class ATeamPlayerState
void ATeamPlayerState::StaticRegisterNativesATeamPlayerState()
{
	UClass* Class = ATeamPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHealth", &ATeamPlayerState::execGetHealth },
		{ "GetMaxHealth", &ATeamPlayerState::execGetMaxHealth },
		{ "OnRep_Health", &ATeamPlayerState::execOnRep_Health },
		{ "OnRep_TeamId", &ATeamPlayerState::execOnRep_TeamId },
		{ "SetHealth", &ATeamPlayerState::execSetHealth },
		{ "SetTeamId", &ATeamPlayerState::execSetTeamId },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeamPlayerState);
UClass* Z_Construct_UClass_ATeamPlayerState_NoRegister()
{
	return ATeamPlayerState::StaticClass();
}
struct Z_Construct_UClass_ATeamPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "System/TeamPlayerState.h" },
		{ "ModuleRelativePath", "System/TeamPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "Category", "Team" },
		{ "ModuleRelativePath", "System/TeamPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "System/TeamPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "System/TeamPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeamPlayerState_GetHealth, "GetHealth" }, // 2455888455
		{ &Z_Construct_UFunction_ATeamPlayerState_GetMaxHealth, "GetMaxHealth" }, // 2228258370
		{ &Z_Construct_UFunction_ATeamPlayerState_OnRep_Health, "OnRep_Health" }, // 2984798082
		{ &Z_Construct_UFunction_ATeamPlayerState_OnRep_TeamId, "OnRep_TeamId" }, // 3510759722
		{ &Z_Construct_UFunction_ATeamPlayerState_SetHealth, "SetHealth" }, // 2886366376
		{ &Z_Construct_UFunction_ATeamPlayerState_SetTeamId, "SetTeamId" }, // 694063039
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATeamPlayerState_Statics::NewProp_TeamId = { "TeamId", "OnRep_TeamId", (EPropertyFlags)0x0010000100000035, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeamPlayerState, TeamId), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATeamPlayerState_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeamPlayerState, OnHealthChanged), Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 2400132925
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATeamPlayerState_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeamPlayerState, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeamPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamPlayerState_Statics::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamPlayerState_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamPlayerState_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATeamPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeamPlayerState_Statics::ClassParams = {
	&ATeamPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATeamPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeamPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATeamPlayerState()
{
	if (!Z_Registration_Info_UClass_ATeamPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeamPlayerState.OuterSingleton, Z_Construct_UClass_ATeamPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATeamPlayerState.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<ATeamPlayerState>()
{
	return ATeamPlayerState::StaticClass();
}
void ATeamPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_TeamId(TEXT("TeamId"));
	static const FName Name_Health(TEXT("Health"));
	const bool bIsValid = true
		&& Name_TeamId == ClassReps[(int32)ENetFields_Private::TeamId].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATeamPlayerState"));
}
ATeamPlayerState::ATeamPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamPlayerState);
ATeamPlayerState::~ATeamPlayerState() {}
// End Class ATeamPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATeamPlayerState, ATeamPlayerState::StaticClass, TEXT("ATeamPlayerState"), &Z_Registration_Info_UClass_ATeamPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeamPlayerState), 3033268791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_2499116620(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
