// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/System/TeamGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameState();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_ATeamGameState();
WASDL_API UClass* Z_Construct_UClass_ATeamGameState_NoRegister();
WASDL_API UClass* Z_Construct_UClass_ATeamPlayerState_NoRegister();
WASDL_API UFunction* Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature();
WASDL_API UFunction* Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature();
// End Cross Module References

// Begin Delegate FOnPlayerStateAdded
struct Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics
{
	struct _Script_WASDL_eventOnPlayerStateAdded_Parms
	{
		ATeamPlayerState* PlayerState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */// \xec\xa0\x91\xec\x86\x8d\xec\x9e\x90 \xec\xb6\x94\xea\xb0\x80/\xec\xa0\x9c\xea\xb1\xb0 \xec\x95\x8c\xeb\xa6\xbc (UI \xea\xb0\xb1\xec\x8b\xa0\xec\x9a\xa9)\n" },
#endif
		{ "ModuleRelativePath", "System/TeamGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// \xec\xa0\x91\xec\x86\x8d\xec\x9e\x90 \xec\xb6\x94\xea\xb0\x80/\xec\xa0\x9c\xea\xb1\xb0 \xec\x95\x8c\xeb\xa6\xbc (UI \xea\xb0\xb1\xec\x8b\xa0\xec\x9a\xa9)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WASDL_eventOnPlayerStateAdded_Parms, PlayerState), Z_Construct_UClass_ATeamPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::NewProp_PlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WASDL, nullptr, "OnPlayerStateAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::_Script_WASDL_eventOnPlayerStateAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::_Script_WASDL_eventOnPlayerStateAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerStateAdded_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStateAdded, ATeamPlayerState* PlayerState)
{
	struct _Script_WASDL_eventOnPlayerStateAdded_Parms
	{
		ATeamPlayerState* PlayerState;
	};
	_Script_WASDL_eventOnPlayerStateAdded_Parms Parms;
	Parms.PlayerState=PlayerState;
	OnPlayerStateAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerStateAdded

// Begin Delegate FOnPlayerStateRemoved
struct Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics
{
	struct _Script_WASDL_eventOnPlayerStateRemoved_Parms
	{
		ATeamPlayerState* PlayerState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/TeamGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WASDL_eventOnPlayerStateRemoved_Parms, PlayerState), Z_Construct_UClass_ATeamPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::NewProp_PlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WASDL, nullptr, "OnPlayerStateRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::_Script_WASDL_eventOnPlayerStateRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::_Script_WASDL_eventOnPlayerStateRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerStateRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStateRemoved, ATeamPlayerState* PlayerState)
{
	struct _Script_WASDL_eventOnPlayerStateRemoved_Parms
	{
		ATeamPlayerState* PlayerState;
	};
	_Script_WASDL_eventOnPlayerStateRemoved_Parms Parms;
	Parms.PlayerState=PlayerState;
	OnPlayerStateRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerStateRemoved

// Begin Class ATeamGameState Function GetConnectedPlayers
struct Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics
{
	struct TeamGameState_eventGetConnectedPlayers_Parms
	{
		TArray<ATeamPlayerState*> OutPlayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Players" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xec\xa0\x91\xec\x86\x8d \xec\xa4\x91\xec\x9d\xb8 \xeb\xaa\xa8\xeb\x93\xa0 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\x83\x81\xed\x83\x9c \xeb\xb0\x98\xed\x99\x98\n" },
#endif
		{ "ModuleRelativePath", "System/TeamGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\xa0\x91\xec\x86\x8d \xec\xa4\x91\xec\x9d\xb8 \xeb\xaa\xa8\xeb\x93\xa0 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\x83\x81\xed\x83\x9c \xeb\xb0\x98\xed\x99\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::NewProp_OutPlayers_Inner = { "OutPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATeamPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::NewProp_OutPlayers = { "OutPlayers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TeamGameState_eventGetConnectedPlayers_Parms, OutPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::NewProp_OutPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::NewProp_OutPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeamGameState, nullptr, "GetConnectedPlayers", nullptr, nullptr, Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::TeamGameState_eventGetConnectedPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::TeamGameState_eventGetConnectedPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATeamGameState::execGetConnectedPlayers)
{
	P_GET_TARRAY_REF(ATeamPlayerState*,Z_Param_Out_OutPlayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetConnectedPlayers(Z_Param_Out_OutPlayers);
	P_NATIVE_END;
}
// End Class ATeamGameState Function GetConnectedPlayers

// Begin Class ATeamGameState
void ATeamGameState::StaticRegisterNativesATeamGameState()
{
	UClass* Class = ATeamGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetConnectedPlayers", &ATeamGameState::execGetConnectedPlayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeamGameState);
UClass* Z_Construct_UClass_ATeamGameState_NoRegister()
{
	return ATeamGameState::StaticClass();
}
struct Z_Construct_UClass_ATeamGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "System/TeamGameState.h" },
		{ "ModuleRelativePath", "System/TeamGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerStateAdded_MetaData[] = {
		{ "Category", "Players" },
		{ "ModuleRelativePath", "System/TeamGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerStateRemoved_MetaData[] = {
		{ "Category", "Players" },
		{ "ModuleRelativePath", "System/TeamGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerStateAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerStateRemoved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeamGameState_GetConnectedPlayers, "GetConnectedPlayers" }, // 369038866
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeamGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATeamGameState_Statics::NewProp_OnPlayerStateAdded = { "OnPlayerStateAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeamGameState, OnPlayerStateAdded), Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerStateAdded_MetaData), NewProp_OnPlayerStateAdded_MetaData) }; // 2358355868
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATeamGameState_Statics::NewProp_OnPlayerStateRemoved = { "OnPlayerStateRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeamGameState, OnPlayerStateRemoved), Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerStateRemoved_MetaData), NewProp_OnPlayerStateRemoved_MetaData) }; // 4173289320
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeamGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamGameState_Statics::NewProp_OnPlayerStateAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeamGameState_Statics::NewProp_OnPlayerStateRemoved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATeamGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeamGameState_Statics::ClassParams = {
	&ATeamGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATeamGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATeamGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeamGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeamGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATeamGameState()
{
	if (!Z_Registration_Info_UClass_ATeamGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeamGameState.OuterSingleton, Z_Construct_UClass_ATeamGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATeamGameState.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<ATeamGameState>()
{
	return ATeamGameState::StaticClass();
}
ATeamGameState::ATeamGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATeamGameState);
ATeamGameState::~ATeamGameState() {}
// End Class ATeamGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATeamGameState, ATeamGameState::StaticClass, TEXT("ATeamGameState"), &Z_Registration_Info_UClass_ATeamGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeamGameState), 3489061751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_2567809111(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_TeamGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
