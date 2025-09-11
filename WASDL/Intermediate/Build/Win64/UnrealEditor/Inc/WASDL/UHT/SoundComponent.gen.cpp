// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WASDL/Character/Components/SoundComponent.h"
#include "WASDL/System/Audio/AudioManagerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WASDL();
WASDL_API UClass* Z_Construct_UClass_USoundComponent();
WASDL_API UClass* Z_Construct_UClass_USoundComponent_NoRegister();
WASDL_API UEnum* Z_Construct_UEnum_WASDL_ESoundName();
WASDL_API UScriptStruct* Z_Construct_UScriptStruct_FSoundHandle();
// End Cross Module References

// Begin Class USoundComponent Function Play2DHandle
struct Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics
{
	struct SoundComponent_eventPlay2DHandle_Parms
	{
		ESoundName Name;
		float Volume;
		float Pitch;
		bool bAutoDestroy;
		FSoundHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_Pitch", "1.000000" },
		{ "CPP_Default_Volume", "1.000000" },
		{ "ModuleRelativePath", "Character/Components/SoundComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static void NewProp_bAutoDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlay2DHandle_Parms, Name), Z_Construct_UEnum_WASDL_ESoundName, METADATA_PARAMS(0, nullptr) }; // 465179922
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlay2DHandle_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlay2DHandle_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
{
	((SoundComponent_eventPlay2DHandle_Parms*)Obj)->bAutoDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundComponent_eventPlay2DHandle_Parms), &Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlay2DHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoundHandle, METADATA_PARAMS(0, nullptr) }; // 173211920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_Name_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_bAutoDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "Play2DHandle", nullptr, nullptr, Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::SoundComponent_eventPlay2DHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::SoundComponent_eventPlay2DHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundComponent_Play2DHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_Play2DHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundComponent::execPlay2DHandle)
{
	P_GET_ENUM(ESoundName,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_GET_UBOOL(Z_Param_bAutoDestroy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSoundHandle*)Z_Param__Result=P_THIS->Play2DHandle(ESoundName(Z_Param_Name),Z_Param_Volume,Z_Param_Pitch,Z_Param_bAutoDestroy);
	P_NATIVE_END;
}
// End Class USoundComponent Function Play2DHandle

// Begin Class USoundComponent Function PlayAtLocation
struct Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics
{
	struct SoundComponent_eventPlayAtLocation_Parms
	{
		ESoundName Name;
		FVector Location;
		float Volume;
		float Pitch;
		FSoundHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9b\x94\xeb\x93\x9c \xec\x9c\x84\xec\xb9\x98\xec\x97\x90\xec\x84\x9c 3D \xec\x9e\xac\xec\x83\x9d(\xec\x9d\xbc\xed\x9a\x8c\xec\x84\xb1)\n" },
#endif
		{ "CPP_Default_Pitch", "1.000000" },
		{ "CPP_Default_Volume", "1.000000" },
		{ "ModuleRelativePath", "Character/Components/SoundComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9b\x94\xeb\x93\x9c \xec\x9c\x84\xec\xb9\x98\xec\x97\x90\xec\x84\x9c 3D \xec\x9e\xac\xec\x83\x9d(\xec\x9d\xbc\xed\x9a\x8c\xec\x84\xb1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayAtLocation_Parms, Name), Z_Construct_UEnum_WASDL_ESoundName, METADATA_PARAMS(0, nullptr) }; // 465179922
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayAtLocation_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayAtLocation_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoundHandle, METADATA_PARAMS(0, nullptr) }; // 173211920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_Name_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "PlayAtLocation", nullptr, nullptr, Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::SoundComponent_eventPlayAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::SoundComponent_eventPlayAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundComponent_PlayAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_PlayAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundComponent::execPlayAtLocation)
{
	P_GET_ENUM(ESoundName,Z_Param_Name);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSoundHandle*)Z_Param__Result=P_THIS->PlayAtLocation(ESoundName(Z_Param_Name),Z_Param_Out_Location,Z_Param_Volume,Z_Param_Pitch);
	P_NATIVE_END;
}
// End Class USoundComponent Function PlayAtLocation

// Begin Class USoundComponent Function PlayHandle
struct Z_Construct_UFunction_USoundComponent_PlayHandle_Statics
{
	struct SoundComponent_eventPlayHandle_Parms
	{
		ESoundName Name;
		AActor* Owner;
		USceneComponent* AttachTo;
		FName Socket;
		float Volume;
		float Pitch;
		bool bAutoDestroy;
		FSoundHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x86\x8c\xec\x9c\xa0 \xec\x95\xa1\xed\x84\xb0\xec\x9d\x98 \xeb\xa3\xa8\xed\x8a\xb8(\xeb\x98\x90\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x95 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8)\xec\x97\x90 \xeb\xb6\x80\xec\xb0\xa9 \xec\x9e\xac\xec\x83\x9d */" },
#endif
		{ "CPP_Default_AttachTo", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_Pitch", "1.000000" },
		{ "CPP_Default_Socket", "None" },
		{ "CPP_Default_Volume", "1.000000" },
		{ "ModuleRelativePath", "Character/Components/SoundComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x86\x8c\xec\x9c\xa0 \xec\x95\xa1\xed\x84\xb0\xec\x9d\x98 \xeb\xa3\xa8\xed\x8a\xb8(\xeb\x98\x90\xeb\x8a\x94 \xec\xa7\x80\xec\xa0\x95 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8)\xec\x97\x90 \xeb\xb6\x80\xec\xb0\xa9 \xec\x9e\xac\xec\x83\x9d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachTo;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static void NewProp_bAutoDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayHandle_Parms, Name), Z_Construct_UEnum_WASDL_ESoundName, METADATA_PARAMS(0, nullptr) }; // 465179922
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayHandle_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_AttachTo = { "AttachTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayHandle_Parms, AttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachTo_MetaData), NewProp_AttachTo_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayHandle_Parms, Socket), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayHandle_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayHandle_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
{
	((SoundComponent_eventPlayHandle_Parms*)Obj)->bAutoDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundComponent_eventPlayHandle_Parms), &Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoundHandle, METADATA_PARAMS(0, nullptr) }; // 173211920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Name_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_AttachTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Socket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_Pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_bAutoDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "PlayHandle", nullptr, nullptr, Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::SoundComponent_eventPlayHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::SoundComponent_eventPlayHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundComponent_PlayHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_PlayHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundComponent::execPlayHandle)
{
	P_GET_ENUM(ESoundName,Z_Param_Name);
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(USceneComponent,Z_Param_AttachTo);
	P_GET_PROPERTY(FNameProperty,Z_Param_Socket);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_GET_UBOOL(Z_Param_bAutoDestroy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSoundHandle*)Z_Param__Result=P_THIS->PlayHandle(ESoundName(Z_Param_Name),Z_Param_Owner,Z_Param_AttachTo,Z_Param_Socket,Z_Param_Volume,Z_Param_Pitch,Z_Param_bAutoDestroy);
	P_NATIVE_END;
}
// End Class USoundComponent Function PlayHandle

// Begin Class USoundComponent Function PlayRandomHandle
struct Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics
{
	struct SoundComponent_eventPlayRandomHandle_Parms
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
		{ "CPP_Default_AttachTo", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_PitchRange", "(X=0.950,Y=1.050)" },
		{ "CPP_Default_SocketName", "None" },
		{ "CPP_Default_Volume", "1.000000" },
		{ "ModuleRelativePath", "Character/Components/SoundComponent.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_Candidates_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_Candidates_Inner = { "Candidates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_WASDL_ESoundName, METADATA_PARAMS(0, nullptr) }; // 465179922
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_Candidates = { "Candidates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayRandomHandle_Parms, Candidates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Candidates_MetaData), NewProp_Candidates_MetaData) }; // 465179922
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayRandomHandle_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_AttachTo = { "AttachTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayRandomHandle_Parms, AttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachTo_MetaData), NewProp_AttachTo_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayRandomHandle_Parms, SocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayRandomHandle_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayRandomHandle_Parms, PitchRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
{
	((SoundComponent_eventPlayRandomHandle_Parms*)Obj)->bAutoDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SoundComponent_eventPlayRandomHandle_Parms), &Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventPlayRandomHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoundHandle, METADATA_PARAMS(0, nullptr) }; // 173211920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_Candidates_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_Candidates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_Candidates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_AttachTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_PitchRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_bAutoDestroy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "PlayRandomHandle", nullptr, nullptr, Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::SoundComponent_eventPlayRandomHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::SoundComponent_eventPlayRandomHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundComponent_PlayRandomHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_PlayRandomHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundComponent::execPlayRandomHandle)
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
	*(FSoundHandle*)Z_Param__Result=P_THIS->PlayRandomHandle(Z_Param_Out_Candidates,Z_Param_Owner,Z_Param_AttachTo,Z_Param_SocketName,Z_Param_Volume,Z_Param_PitchRange,Z_Param_bAutoDestroy);
	P_NATIVE_END;
}
// End Class USoundComponent Function PlayRandomHandle

// Begin Class USoundComponent Function StopAll
struct Z_Construct_UFunction_USoundComponent_StopAll_Statics
{
	struct SoundComponent_eventStopAll_Parms
	{
		float FadeOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_FadeOutTime", "0.000000" },
		{ "ModuleRelativePath", "Character/Components/SoundComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundComponent_StopAll_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventStopAll_Parms, FadeOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundComponent_StopAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_StopAll_Statics::NewProp_FadeOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_StopAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_StopAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "StopAll", nullptr, nullptr, Z_Construct_UFunction_USoundComponent_StopAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_StopAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundComponent_StopAll_Statics::SoundComponent_eventStopAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_StopAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundComponent_StopAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundComponent_StopAll_Statics::SoundComponent_eventStopAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundComponent_StopAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_StopAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundComponent::execStopAll)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAll(Z_Param_FadeOutTime);
	P_NATIVE_END;
}
// End Class USoundComponent Function StopAll

// Begin Class USoundComponent Function StopByHandle
struct Z_Construct_UFunction_USoundComponent_StopByHandle_Statics
{
	struct SoundComponent_eventStopByHandle_Parms
	{
		FSoundHandle Handle;
		float FadeOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_FadeOutTime", "0.000000" },
		{ "ModuleRelativePath", "Character/Components/SoundComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventStopByHandle_Parms, Handle), Z_Construct_UScriptStruct_FSoundHandle, METADATA_PARAMS(0, nullptr) }; // 173211920
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventStopByHandle_Parms, FadeOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::NewProp_FadeOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "StopByHandle", nullptr, nullptr, Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::SoundComponent_eventStopByHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::SoundComponent_eventStopByHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundComponent_StopByHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_StopByHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundComponent::execStopByHandle)
{
	P_GET_STRUCT(FSoundHandle,Z_Param_Handle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopByHandle(Z_Param_Handle,Z_Param_FadeOutTime);
	P_NATIVE_END;
}
// End Class USoundComponent Function StopByHandle

// Begin Class USoundComponent Function StopByName
struct Z_Construct_UFunction_USoundComponent_StopByName_Statics
{
	struct SoundComponent_eventStopByName_Parms
	{
		ESoundName Name;
		float FadeOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_FadeOutTime", "0.000000" },
		{ "ModuleRelativePath", "Character/Components/SoundComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundComponent_StopByName_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundComponent_StopByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventStopByName_Parms, Name), Z_Construct_UEnum_WASDL_ESoundName, METADATA_PARAMS(0, nullptr) }; // 465179922
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundComponent_StopByName_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundComponent_eventStopByName_Parms, FadeOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundComponent_StopByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_StopByName_Statics::NewProp_Name_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_StopByName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_StopByName_Statics::NewProp_FadeOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_StopByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_StopByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "StopByName", nullptr, nullptr, Z_Construct_UFunction_USoundComponent_StopByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_StopByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USoundComponent_StopByName_Statics::SoundComponent_eventStopByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_StopByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USoundComponent_StopByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USoundComponent_StopByName_Statics::SoundComponent_eventStopByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USoundComponent_StopByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_StopByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USoundComponent::execStopByName)
{
	P_GET_ENUM(ESoundName,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopByName(ESoundName(Z_Param_Name),Z_Param_FadeOutTime);
	P_NATIVE_END;
}
// End Class USoundComponent Function StopByName

// Begin Class USoundComponent
void USoundComponent::StaticRegisterNativesUSoundComponent()
{
	UClass* Class = USoundComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Play2DHandle", &USoundComponent::execPlay2DHandle },
		{ "PlayAtLocation", &USoundComponent::execPlayAtLocation },
		{ "PlayHandle", &USoundComponent::execPlayHandle },
		{ "PlayRandomHandle", &USoundComponent::execPlayRandomHandle },
		{ "StopAll", &USoundComponent::execStopAll },
		{ "StopByHandle", &USoundComponent::execStopByHandle },
		{ "StopByName", &USoundComponent::execStopByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundComponent);
UClass* Z_Construct_UClass_USoundComponent_NoRegister()
{
	return USoundComponent::StaticClass();
}
struct Z_Construct_UClass_USoundComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "IncludePath", "Character/Components/SoundComponent.h" },
		{ "ModuleRelativePath", "Character/Components/SoundComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundComponent_Play2DHandle, "Play2DHandle" }, // 1695179809
		{ &Z_Construct_UFunction_USoundComponent_PlayAtLocation, "PlayAtLocation" }, // 1695801037
		{ &Z_Construct_UFunction_USoundComponent_PlayHandle, "PlayHandle" }, // 1720367937
		{ &Z_Construct_UFunction_USoundComponent_PlayRandomHandle, "PlayRandomHandle" }, // 2664807034
		{ &Z_Construct_UFunction_USoundComponent_StopAll, "StopAll" }, // 776503491
		{ &Z_Construct_UFunction_USoundComponent_StopByHandle, "StopByHandle" }, // 1402824748
		{ &Z_Construct_UFunction_USoundComponent_StopByName, "StopByName" }, // 206301162
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USoundComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WASDL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundComponent_Statics::ClassParams = {
	&USoundComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundComponent()
{
	if (!Z_Registration_Info_UClass_USoundComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundComponent.OuterSingleton, Z_Construct_UClass_USoundComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundComponent.OuterSingleton;
}
template<> WASDL_API UClass* StaticClass<USoundComponent>()
{
	return USoundComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundComponent);
USoundComponent::~USoundComponent() {}
// End Class USoundComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundComponent, USoundComponent::StaticClass, TEXT("USoundComponent"), &Z_Registration_Info_UClass_USoundComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundComponent), 1555897044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_3721770742(TEXT("/Script/WASDL"),
	Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineProject_Project_TSC_WASDL_Source_WASDL_Character_Components_SoundComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
