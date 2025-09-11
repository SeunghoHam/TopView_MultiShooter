// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWASDL_init() {}
	WASDL_API UFunction* Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature();
	WASDL_API UFunction* Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature();
	WASDL_API UFunction* Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature();
	WASDL_API UFunction* Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature();
	WASDL_API UFunction* Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WASDL;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WASDL()
	{
		if (!Z_Registration_Info_UPackage__Script_WASDL.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WASDL_MontageBlendOutEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WASDL_MontageEndedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WASDL_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WASDL_OnPlayerStateAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_WASDL_OnPlayerStateRemoved__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WASDL",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF75AFBBA,
				0x3CBC7446,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WASDL.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WASDL.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WASDL(Z_Construct_UPackage__Script_WASDL, TEXT("/Script/WASDL"), Z_Registration_Info_UPackage__Script_WASDL, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF75AFBBA, 0x3CBC7446));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
