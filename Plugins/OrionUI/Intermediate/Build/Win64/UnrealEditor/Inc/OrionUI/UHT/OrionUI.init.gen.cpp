// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionUI_init() {}
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature();
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature();
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature();
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OrionUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OrionUI()
	{
		if (!Z_Registration_Info_UPackage__Script_OrionUI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionUI_OnUserWidgetCreated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OrionUI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE7CF7150,
				0x29C1C235,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OrionUI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OrionUI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OrionUI(Z_Construct_UPackage__Script_OrionUI, TEXT("/Script/OrionUI"), Z_Registration_Info_UPackage__Script_OrionUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE7CF7150, 0x29C1C235));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
