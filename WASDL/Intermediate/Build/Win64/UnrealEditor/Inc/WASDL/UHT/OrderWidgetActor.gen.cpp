// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Character/Actor/OrderWidgetActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrderWidgetActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_AOrderWidgetActor();
WASDL_API UClass* Z_Construct_UClass_AOrderWidgetActor_NoRegister();
WASDL_API UClass* Z_Construct_UClass_AUzuha_NoRegister();
WASDL_API UClass* Z_Construct_UClass_UOrderWidget_NoRegister();
// End Cross Module References

// Begin Class AOrderWidgetActor Function OnRep_Player
struct Z_Construct_UFunction_AOrderWidgetActor_OnRep_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Actor/OrderWidgetActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrderWidgetActor_OnRep_Player_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOrderWidgetActor, nullptr, "OnRep_Player", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrderWidgetActor_OnRep_Player_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrderWidgetActor_OnRep_Player_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOrderWidgetActor_OnRep_Player()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrderWidgetActor_OnRep_Player_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOrderWidgetActor::execOnRep_Player)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Player();
	P_NATIVE_END;
}
// End Class AOrderWidgetActor Function OnRep_Player

// Begin Class AOrderWidgetActor
void AOrderWidgetActor::StaticRegisterNativesAOrderWidgetActor()
{
	UClass* Class = AOrderWidgetActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Player", &AOrderWidgetActor::execOnRep_Player },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrderWidgetActor);
UClass* Z_Construct_UClass_AOrderWidgetActor_NoRegister()
{
	return AOrderWidgetActor::StaticClass();
}
struct Z_Construct_UClass_AOrderWidgetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Character/Actor/OrderWidgetActor.h" },
		{ "ModuleRelativePath", "Character/Actor/OrderWidgetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderWidgetClass_MetaData[] = {
		{ "Category", "OrderWidgetActor" },
		{ "ModuleRelativePath", "Character/Actor/OrderWidgetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderWidget_MetaData[] = {
		{ "Category", "OrderWidgetActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Actor/OrderWidgetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c \xec\x84\xb8\xed\x8c\x85 \xe2\x86\x92 \xea\xb0\x81 \xed\x81\xb4\xeb\x9d\xbc\xec\x97\x90 \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\xa8\n" },
#endif
		{ "ModuleRelativePath", "Character/Actor/OrderWidgetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c \xec\x84\xb8\xed\x8c\x85 \xe2\x86\x92 \xea\xb0\x81 \xed\x81\xb4\xeb\x9d\xbc\xec\x97\x90 \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OrderWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OrderWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOrderWidgetActor_OnRep_Player, "OnRep_Player" }, // 3283608646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrderWidgetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrderWidgetActor_Statics::NewProp_OrderWidgetClass = { "OrderWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrderWidgetActor, OrderWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrderWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderWidgetClass_MetaData), NewProp_OrderWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrderWidgetActor_Statics::NewProp_OrderWidget = { "OrderWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrderWidgetActor, OrderWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderWidget_MetaData), NewProp_OrderWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrderWidgetActor_Statics::NewProp_Player = { "Player", "OnRep_Player", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrderWidgetActor, Player), Z_Construct_UClass_AUzuha_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrderWidgetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrderWidgetActor_Statics::NewProp_OrderWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrderWidgetActor_Statics::NewProp_OrderWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrderWidgetActor_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrderWidgetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOrderWidgetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrderWidgetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrderWidgetActor_Statics::ClassParams = {
	&AOrderWidgetActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOrderWidgetActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOrderWidgetActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrderWidgetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOrderWidgetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOrderWidgetActor()
{
	if (!Z_Registration_Info_UClass_AOrderWidgetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrderWidgetActor.OuterSingleton, Z_Construct_UClass_AOrderWidgetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOrderWidgetActor.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<AOrderWidgetActor>()
{
	return AOrderWidgetActor::StaticClass();
}
void AOrderWidgetActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Player(TEXT("Player"));
	const bool bIsValid = true
		&& Name_Player == ClassReps[(int32)ENetFields_Private::Player].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOrderWidgetActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOrderWidgetActor);
AOrderWidgetActor::~AOrderWidgetActor() {}
// End Class AOrderWidgetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOrderWidgetActor, AOrderWidgetActor::StaticClass, TEXT("AOrderWidgetActor"), &Z_Registration_Info_UClass_AOrderWidgetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrderWidgetActor), 340808536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_222997748(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Actor_OrderWidgetActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
