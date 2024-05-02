// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Model/OrionUIModelComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionUIModelComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUIModelComponent();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUIModelComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	DEFINE_FUNCTION(UOrionUIModelComponent::execUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update();
		P_NATIVE_END;
	}
	void UOrionUIModelComponent::StaticRegisterNativesUOrionUIModelComponent()
	{
		UClass* Class = UOrionUIModelComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Update", &UOrionUIModelComponent::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOrionUIModelComponent_Update_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionUIModelComponent_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Model/OrionUIModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionUIModelComponent_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionUIModelComponent, nullptr, "Update", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionUIModelComponent_Update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionUIModelComponent_Update_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOrionUIModelComponent_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionUIModelComponent_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionUIModelComponent);
	UClass* Z_Construct_UClass_UOrionUIModelComponent_NoRegister()
	{
		return UOrionUIModelComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOrionUIModelComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionUIModelComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIModelComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOrionUIModelComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionUIModelComponent_Update, "Update" }, // 290664515
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIModelComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionUIModelComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UI/Model/OrionUIModelComponent.h" },
		{ "ModuleRelativePath", "Public/UI/Model/OrionUIModelComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionUIModelComponent_Statics::NewProp_UIController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Model/OrionUIModelComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionUIModelComponent_Statics::NewProp_UIController = { "UIController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUIModelComponent, UIController), Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIModelComponent_Statics::NewProp_UIController_MetaData), Z_Construct_UClass_UOrionUIModelComponent_Statics::NewProp_UIController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionUIModelComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionUIModelComponent_Statics::NewProp_UIController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionUIModelComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionUIModelComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionUIModelComponent_Statics::ClassParams = {
		&UOrionUIModelComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOrionUIModelComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIModelComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIModelComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionUIModelComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIModelComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionUIModelComponent()
	{
		if (!Z_Registration_Info_UClass_UOrionUIModelComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionUIModelComponent.OuterSingleton, Z_Construct_UClass_UOrionUIModelComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionUIModelComponent.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionUIModelComponent>()
	{
		return UOrionUIModelComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionUIModelComponent);
	UOrionUIModelComponent::~UOrionUIModelComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionUIModelComponent, UOrionUIModelComponent::StaticClass, TEXT("UOrionUIModelComponent"), &Z_Registration_Info_UClass_UOrionUIModelComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionUIModelComponent), 2651770521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_1610180467(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Model_OrionUIModelComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
