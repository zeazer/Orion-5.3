// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Interfaces/IUIOrionController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUIOrionController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionController();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionController_NoRegister();
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OrionUI, nullptr, "OnPostPlayerTravel__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionUI_OnPostPlayerTravel__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPostPlayerTravel_DelegateWrapper(const FScriptDelegate& OnPostPlayerTravel)
{
	OnPostPlayerTravel.ProcessDelegate<UObject>(NULL);
}
	void UUIOrionController::StaticRegisterNativesUUIOrionController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIOrionController);
	UClass* Z_Construct_UClass_UUIOrionController_NoRegister()
	{
		return UUIOrionController::StaticClass();
	}
	struct Z_Construct_UClass_UUIOrionController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIOrionController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIOrionController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIOrionController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIOrionController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIOrionController_Statics::ClassParams = {
		&UUIOrionController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionController_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIOrionController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUIOrionController()
	{
		if (!Z_Registration_Info_UClass_UUIOrionController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIOrionController.OuterSingleton, Z_Construct_UClass_UUIOrionController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIOrionController.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UUIOrionController>()
	{
		return UUIOrionController::StaticClass();
	}
	UUIOrionController::UUIOrionController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIOrionController);
	UUIOrionController::~UUIOrionController() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIOrionController, UUIOrionController::StaticClass, TEXT("UUIOrionController"), &Z_Registration_Info_UClass_UUIOrionController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIOrionController), 52217449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_2741607141(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
