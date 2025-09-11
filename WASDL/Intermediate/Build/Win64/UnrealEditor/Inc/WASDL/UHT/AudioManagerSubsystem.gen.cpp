// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/System/Audio/AudioManagerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioManagerSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_UAudioManagerSubsystem();
WASDL_API UClass* Z_Construct_UClass_UAudioManagerSubsystem_NoRegister();
WASDL_API UEnum* Z_Construct_UEnum_WASDL_ESoundName();
WASDL_API UEnum* Z_Construct_UEnum_WASDL_ESoundType();
WASDL_API UScriptStruct* Z_Construct_UScriptStruct_FSoundHandle();
// End Cross Module References

// Begin ScriptStruct FSoundHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundHandle;
class UScriptStruct* FSoundHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundHandle, (UObject*)Z_Construct_UPackage__Script_WASDL(), TEXT("SoundHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SoundHandle.OuterSingleton;
}
template<> WASDL_API UScriptStruct* StaticStruct<FSoundHandle>()
{
	return FSoundHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoundHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xec\x8b\x9d\xeb\xb3\x84\xec\x9a\xa9 \xed\x95\xb8\xeb\x93\xa4 (\xec\x97\xac\xeb\x9f\xac \xec\x86\x8c\xeb\xa6\xac\xeb\xa5\xbc \xeb\x8f\x99\xec\x8b\x9c\xec\x97\x90 \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xeb\x95\x8c \xea\xb5\xac\xeb\xb6\x84\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xec\x82\xac\xec\x9a\xa9)\n" },
#endif
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xec\x8b\x9d\xeb\xb3\x84\xec\x9a\xa9 \xed\x95\xb8\xeb\x93\xa4 (\xec\x97\xac\xeb\x9f\xac \xec\x86\x8c\xeb\xa6\xac\xeb\xa5\xbc \xeb\x8f\x99\xec\x8b\x9c\xec\x97\x90 \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xeb\x95\x8c \xea\xb5\xac\xeb\xb6\x84\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\xb4 \xec\x82\xac\xec\x9a\xa9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "SoundHandle" },
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundHandle_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoundHandle, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundHandle_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
	nullptr,
	&NewStructOps,
	"SoundHandle",
	Z_Construct_UScriptStruct_FSoundHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundHandle_Statics::PropPointers),
	sizeof(FSoundHandle),
	alignof(FSoundHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoundHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoundHandle()
{
	if (!Z_Registration_Info_UScriptStruct_SoundHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundHandle.InnerSingleton, Z_Construct_UScriptStruct_FSoundHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoundHandle.InnerSingleton;
}
// End ScriptStruct FSoundHandle

// Begin Enum ESoundType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundType;
static UEnum* ESoundType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESoundType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESoundType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WASDL_ESoundType, (UObject*)Z_Construct_UPackage__Script_WASDL(), TEXT("ESoundType"));
	}
	return Z_Registration_Info_UEnum_ESoundType.OuterSingleton;
}
template<> WASDL_API UEnum* StaticEnum<ESoundType>()
{
	return ESoundType_StaticEnum();
}
struct Z_Construct_UEnum_WASDL_ESoundType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Effect.Name", "ESoundType::Effect" },
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
		{ "Vocal.Name", "ESoundType::Vocal" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESoundType::Effect", (int64)ESoundType::Effect },
		{ "ESoundType::Vocal", (int64)ESoundType::Vocal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WASDL_ESoundType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WASDL,
	nullptr,
	"ESoundType",
	"ESoundType",
	Z_Construct_UEnum_WASDL_ESoundType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_ESoundType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_ESoundType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WASDL_ESoundType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WASDL_ESoundType()
{
	if (!Z_Registration_Info_UEnum_ESoundType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundType.InnerSingleton, Z_Construct_UEnum_WASDL_ESoundType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESoundType.InnerSingleton;
}
// End Enum ESoundType

// Begin Enum ESoundName
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundName;
static UEnum* ESoundName_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESoundName.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESoundName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WASDL_ESoundName, (UObject*)Z_Construct_UPackage__Script_WASDL(), TEXT("ESoundName"));
	}
	return Z_Registration_Info_UEnum_ESoundName.OuterSingleton;
}
template<> WASDL_API UEnum* StaticEnum<ESoundName>()
{
	return ESoundName_StaticEnum();
}
struct Z_Construct_UEnum_WASDL_ESoundName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xec\x9d\xb4\xeb\xa6\x84(\xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac/\xed\x81\xb4\xeb\xa6\xbd) */" },
#endif
		{ "effect_Shoot.DisplayName", "DefaultShoot" },
		{ "effect_Shoot.Name", "ESoundName::effect_Shoot" },
		{ "effect_TankDestroy.DisplayName", "TankDestroy" },
		{ "effect_TankDestroy.Name", "ESoundName::effect_TankDestroy" },
		{ "effect_ZugglingAttack.DisplayName", "Z_Attack" },
		{ "effect_ZugglingAttack.Name", "ESoundName::effect_ZugglingAttack" },
		{ "effect_ZugglingDead.DisplayName", "Z_Dead" },
		{ "effect_ZugglingDead.Name", "ESoundName::effect_ZugglingDead" },
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c \xec\x9d\xb4\xeb\xa6\x84(\xec\xb9\xb4\xed\x85\x8c\xea\xb3\xa0\xeb\xa6\xac/\xed\x81\xb4\xeb\xa6\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESoundName::effect_Shoot", (int64)ESoundName::effect_Shoot },
		{ "ESoundName::effect_ZugglingAttack", (int64)ESoundName::effect_ZugglingAttack },
		{ "ESoundName::effect_ZugglingDead", (int64)ESoundName::effect_ZugglingDead },
		{ "ESoundName::effect_TankDestroy", (int64)ESoundName::effect_TankDestroy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WASDL_ESoundName_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WASDL,
	nullptr,
	"ESoundName",
	"ESoundName",
	Z_Construct_UEnum_WASDL_ESoundName_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_ESoundName_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WASDL_ESoundName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WASDL_ESoundName_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WASDL_ESoundName()
{
	if (!Z_Registration_Info_UEnum_ESoundName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundName.InnerSingleton, Z_Construct_UEnum_WASDL_ESoundName_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESoundName.InnerSingleton;
}
// End Enum ESoundName

// Begin Class UAudioManagerSubsystem Function OnAudioFinished
struct Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics
{
	struct AudioManagerSubsystem_eventOnAudioFinished_Parms
	{
		UAudioComponent* FinishedComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FinishedComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::NewProp_FinishedComp = { "FinishedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventOnAudioFinished_Parms, FinishedComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishedComp_MetaData), NewProp_FinishedComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::NewProp_FinishedComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerSubsystem, nullptr, "OnAudioFinished", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::AudioManagerSubsystem_eventOnAudioFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::AudioManagerSubsystem_eventOnAudioFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerSubsystem::execOnAudioFinished)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_FinishedComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAudioFinished(Z_Param_FinishedComp);
	P_NATIVE_END;
}
// End Class UAudioManagerSubsystem Function OnAudioFinished

// Begin Class UAudioManagerSubsystem Function PlayRandom
struct Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics
{
	struct AudioManagerSubsystem_eventPlayRandom_Parms
	{
		TArray<ESoundName> Candidates;
		AActor* Owner;
		USceneComponent* AttachTo;
		FName SocketName;
		float Volume;
		FVector2D PitchRange;
		bool bAutoDestroy;
		FSoundHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x97\xac\xeb\x9f\xac \xed\x9b\x84\xeb\xb3\xb4 \xec\xa4\x91 \xeb\x9e\x9c\xeb\x8d\xa4 \xec\x9e\xac\xec\x83\x9d(\xec\xa7\x81\xec\xa0\x84 \xeb\xb0\x98\xeb\xb3\xb5 \xed\x9a\x8c\xed\x94\xbc) */" },
#endif
		{ "CPP_Default_AttachTo", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_PitchRange", "(X=0.950,Y=1.050)" },
		{ "CPP_Default_SocketName", "None" },
		{ "CPP_Default_Volume", "1.000000" },
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x97\xac\xeb\x9f\xac \xed\x9b\x84\xeb\xb3\xb4 \xec\xa4\x91 \xeb\x9e\x9c\xeb\x8d\xa4 \xec\x9e\xac\xec\x83\x9d(\xec\xa7\x81\xec\xa0\x84 \xeb\xb0\x98\xeb\xb3\xb5 \xed\x9a\x8c\xed\x94\xbc)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Candidates_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Candidates_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Candidates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Candidates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachTo;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchRange;
	static void NewProp_bAutoDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_Candidates_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_Candidates_Inner = { "Candidates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_WASDL_ESoundName, METADATA_PARAMS(0, nullptr) }; // 465179922
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_Candidates = { "Candidates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventPlayRandom_Parms, Candidates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Candidates_MetaData), NewProp_Candidates_MetaData) }; // 465179922
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventPlayRandom_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_AttachTo = { "AttachTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventPlayRandom_Parms, AttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachTo_MetaData), NewProp_AttachTo_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventPlayRandom_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventPlayRandom_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventPlayRandom_Parms, PitchRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
{
	((AudioManagerSubsystem_eventPlayRandom_Parms*)Obj)->bAutoDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioManagerSubsystem_eventPlayRandom_Parms), &Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventPlayRandom_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoundHandle, METADATA_PARAMS(0, nullptr) }; // 173211920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_Candidates_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_Candidates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_Candidates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_AttachTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_PitchRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_bAutoDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerSubsystem, nullptr, "PlayRandom", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::AudioManagerSubsystem_eventPlayRandom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::AudioManagerSubsystem_eventPlayRandom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerSubsystem::execPlayRandom)
{
	P_GET_TARRAY_REF(ESoundName,Z_Param_Out_Candidates);
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(USceneComponent,Z_Param_AttachTo);
	P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_GET_STRUCT(FVector2D,Z_Param_PitchRange);
	P_GET_UBOOL(Z_Param_bAutoDestroy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSoundHandle*)Z_Param__Result=P_THIS->PlayRandom(Z_Param_Out_Candidates,Z_Param_Owner,Z_Param_AttachTo,Z_Param_SocketName,Z_Param_Volume,Z_Param_PitchRange,Z_Param_bAutoDestroy);
	P_NATIVE_END;
}
// End Class UAudioManagerSubsystem Function PlayRandom

// Begin Class UAudioManagerSubsystem Function StopAll
struct Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics
{
	struct AudioManagerSubsystem_eventStopAll_Parms
	{
		float FadeOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xa0\x84\xeb\xb6\x80 \xec\xa0\x95\xec\xa7\x80 */" },
#endif
		{ "CPP_Default_FadeOutTime", "0.000000" },
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x84\xeb\xb6\x80 \xec\xa0\x95\xec\xa7\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventStopAll_Parms, FadeOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::NewProp_FadeOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerSubsystem, nullptr, "StopAll", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::AudioManagerSubsystem_eventStopAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::AudioManagerSubsystem_eventStopAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerSubsystem_StopAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerSubsystem_StopAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerSubsystem::execStopAll)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAll(Z_Param_FadeOutTime);
	P_NATIVE_END;
}
// End Class UAudioManagerSubsystem Function StopAll

// Begin Class UAudioManagerSubsystem Function StopByHandle
struct Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics
{
	struct AudioManagerSubsystem_eventStopByHandle_Parms
	{
		FSoundHandle Handle;
		float FadeOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x95\xb8\xeb\x93\xa4\xeb\xa1\x9c \xec\xa0\x95\xec\xa7\x80 */" },
#endif
		{ "CPP_Default_FadeOutTime", "0.000000" },
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\xb8\xeb\x93\xa4\xeb\xa1\x9c \xec\xa0\x95\xec\xa7\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventStopByHandle_Parms, Handle), Z_Construct_UScriptStruct_FSoundHandle, METADATA_PARAMS(0, nullptr) }; // 173211920
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventStopByHandle_Parms, FadeOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::NewProp_FadeOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerSubsystem, nullptr, "StopByHandle", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::AudioManagerSubsystem_eventStopByHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::AudioManagerSubsystem_eventStopByHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerSubsystem::execStopByHandle)
{
	P_GET_STRUCT(FSoundHandle,Z_Param_Handle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopByHandle(Z_Param_Handle,Z_Param_FadeOutTime);
	P_NATIVE_END;
}
// End Class UAudioManagerSubsystem Function StopByHandle

// Begin Class UAudioManagerSubsystem Function StopByName
struct Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics
{
	struct AudioManagerSubsystem_eventStopByName_Parms
	{
		ESoundName Name;
		float FadeOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9d\xb4\xeb\xa6\x84\xec\x9c\xbc\xeb\xa1\x9c \xec\x9e\xac\xec\x83\x9d \xec\xa4\x91\xec\x9d\xb8 \xeb\xaa\xa8\xeb\x93\xa0 \xec\x86\x8c\xeb\xa6\xac \xec\xa0\x95\xec\xa7\x80 */" },
#endif
		{ "CPP_Default_FadeOutTime", "0.000000" },
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xeb\xa6\x84\xec\x9c\xbc\xeb\xa1\x9c \xec\x9e\xac\xec\x83\x9d \xec\xa4\x91\xec\x9d\xb8 \xeb\xaa\xa8\xeb\x93\xa0 \xec\x86\x8c\xeb\xa6\xac \xec\xa0\x95\xec\xa7\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventStopByName_Parms, Name), Z_Construct_UEnum_WASDL_ESoundName, METADATA_PARAMS(0, nullptr) }; // 465179922
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioManagerSubsystem_eventStopByName_Parms, FadeOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::NewProp_Name_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::NewProp_FadeOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManagerSubsystem, nullptr, "StopByName", nullptr, nullptr, Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::AudioManagerSubsystem_eventStopByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::AudioManagerSubsystem_eventStopByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioManagerSubsystem_StopByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManagerSubsystem_StopByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioManagerSubsystem::execStopByName)
{
	P_GET_ENUM(ESoundName,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopByName(ESoundName(Z_Param_Name),Z_Param_FadeOutTime);
	P_NATIVE_END;
}
// End Class UAudioManagerSubsystem Function StopByName

// Begin Class UAudioManagerSubsystem
void UAudioManagerSubsystem::StaticRegisterNativesUAudioManagerSubsystem()
{
	UClass* Class = UAudioManagerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAudioFinished", &UAudioManagerSubsystem::execOnAudioFinished },
		{ "PlayRandom", &UAudioManagerSubsystem::execPlayRandom },
		{ "StopAll", &UAudioManagerSubsystem::execStopAll },
		{ "StopByHandle", &UAudioManagerSubsystem::execStopByHandle },
		{ "StopByName", &UAudioManagerSubsystem::execStopByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioManagerSubsystem);
UClass* Z_Construct_UClass_UAudioManagerSubsystem_NoRegister()
{
	return UAudioManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAudioManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "System/Audio/AudioManagerSubsystem.h" },
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttenuation_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xea\xb8\xb0\xeb\xb3\xb8 \xea\xb0\x90\xec\x87\xa0/\xeb\x8f\x99\xec\x8b\x9c\xec\x84\xb1 \xec\x98\xb5\xec\x85\x98 (\xec\x9b\x90\xed\x95\x98\xeb\xa9\xb4 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xec\xa7\x80\xec\xa0\x95) */" },
#endif
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb8\xb0\xeb\xb3\xb8 \xea\xb0\x90\xec\x87\xa0/\xeb\x8f\x99\xec\x8b\x9c\xec\x84\xb1 \xec\x98\xb5\xec\x85\x98 (\xec\x9b\x90\xed\x95\x98\xeb\xa9\xb4 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xec\xa7\x80\xec\xa0\x95)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConcurrency_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9d\xb4\xeb\xa6\x84 \xe2\x86\x92 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c */// CDO(Class Default Object)\xec\x97\x90\xec\x84\x9c \xed\x95\x9c\xeb\xb2\x88\xeb\xa7\x8c \xeb\x8f\x8c\xec\x95\x84\xea\xb0\x80\xeb\x8f\x84\xeb\xa1\x9d - \xec\x83\x9d\xec\x84\xb1\xec\x9e\x90\xec\x97\x90\xec\x84\x9c \xed\x95\x9c\xeb\xb2\x88\xeb\xa7\x8c \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xea\xb2\x8c\n" },
#endif
		{ "ModuleRelativePath", "System/Audio/AudioManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xeb\xa6\x84 \xe2\x86\x92 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c // CDO(Class Default Object)\xec\x97\x90\xec\x84\x9c \xed\x95\x9c\xeb\xb2\x88\xeb\xa7\x8c \xeb\x8f\x8c\xec\x95\x84\xea\xb0\x80\xeb\x8f\x84\xeb\xa1\x9d - \xec\x83\x9d\xec\x84\xb1\xec\x9e\x90\xec\x97\x90\xec\x84\x9c \xed\x95\x9c\xeb\xb2\x88\xeb\xa7\x8c \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xea\xb2\x8c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAttenuation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultConcurrency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SoundMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SoundMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SoundMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioManagerSubsystem_OnAudioFinished, "OnAudioFinished" }, // 3331403743
		{ &Z_Construct_UFunction_UAudioManagerSubsystem_PlayRandom, "PlayRandom" }, // 3226904340
		{ &Z_Construct_UFunction_UAudioManagerSubsystem_StopAll, "StopAll" }, // 3500091352
		{ &Z_Construct_UFunction_UAudioManagerSubsystem_StopByHandle, "StopByHandle" }, // 3844124909
		{ &Z_Construct_UFunction_UAudioManagerSubsystem_StopByName, "StopByName" }, // 841839291
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_DefaultAttenuation = { "DefaultAttenuation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioManagerSubsystem, DefaultAttenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttenuation_MetaData), NewProp_DefaultAttenuation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_DefaultConcurrency = { "DefaultConcurrency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioManagerSubsystem, DefaultConcurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultConcurrency_MetaData), NewProp_DefaultConcurrency_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_SoundMap_ValueProp = { "SoundMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_SoundMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_SoundMap_Key_KeyProp = { "SoundMap_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_WASDL_ESoundName, METADATA_PARAMS(0, nullptr) }; // 465179922
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_SoundMap = { "SoundMap", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioManagerSubsystem, SoundMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundMap_MetaData), NewProp_SoundMap_MetaData) }; // 465179922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioManagerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_DefaultAttenuation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_DefaultConcurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_SoundMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_SoundMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_SoundMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManagerSubsystem_Statics::NewProp_SoundMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManagerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAudioManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioManagerSubsystem_Statics::ClassParams = {
	&UAudioManagerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAudioManagerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManagerSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UAudioManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioManagerSubsystem.OuterSingleton, Z_Construct_UClass_UAudioManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioManagerSubsystem.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<UAudioManagerSubsystem>()
{
	return UAudioManagerSubsystem::StaticClass();
}
UAudioManagerSubsystem::UAudioManagerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioManagerSubsystem);
UAudioManagerSubsystem::~UAudioManagerSubsystem() {}
// End Class UAudioManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESoundType_StaticEnum, TEXT("ESoundType"), &Z_Registration_Info_UEnum_ESoundType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1929089105U) },
		{ ESoundName_StaticEnum, TEXT("ESoundName"), &Z_Registration_Info_UEnum_ESoundName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 465179922U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSoundHandle::StaticStruct, Z_Construct_UScriptStruct_FSoundHandle_Statics::NewStructOps, TEXT("SoundHandle"), &Z_Registration_Info_UScriptStruct_SoundHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundHandle), 173211920U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioManagerSubsystem, UAudioManagerSubsystem::StaticClass, TEXT("UAudioManagerSubsystem"), &Z_Registration_Info_UClass_UAudioManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioManagerSubsystem), 544098778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_4157472186(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_System_Audio_AudioManagerSubsystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
