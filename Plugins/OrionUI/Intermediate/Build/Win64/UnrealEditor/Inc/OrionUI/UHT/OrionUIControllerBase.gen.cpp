// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Controllers/OrionUIControllerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionUIControllerBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionViewControllerWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	DEFINE_FUNCTION(UOrionUIControllerBase::execGetActiveView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetActiveView();
		P_NATIVE_END;
	}
	struct OrionUIControllerBase_eventUpdate_Parms
	{
		UObject* Model;
	};
	static FName NAME_UOrionUIControllerBase_Update = FName(TEXT("Update"));
	void UOrionUIControllerBase::Update(UObject* Model)
	{
		OrionUIControllerBase_eventUpdate_Parms Parms;
		Parms.Model=Model;
		ProcessEvent(FindFunctionChecked(NAME_UOrionUIControllerBase_Update),&Parms);
	}
	void UOrionUIControllerBase::StaticRegisterNativesUOrionUIControllerBase()
	{
		UClass* Class = UOrionUIControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveView", &UOrionUIControllerBase::execGetActiveView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics
	{
		struct OrionUIControllerBase_eventGetActiveView_Parms
		{
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionUIControllerBase_eventGetActiveView_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Controllers/OrionUIControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionUIControllerBase, nullptr, "GetActiveView", nullptr, nullptr, Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::OrionUIControllerBase_eventGetActiveView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::OrionUIControllerBase_eventGetActiveView_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionUIControllerBase_eventUpdate_Parms, Model), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics::NewProp_Model,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Controllers/OrionUIControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionUIControllerBase, nullptr, "Update", nullptr, nullptr, Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics::PropPointers), sizeof(OrionUIControllerBase_eventUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics::PropPointers) < 2048);
	static_assert(sizeof(OrionUIControllerBase_eventUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOrionUIControllerBase_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionUIControllerBase_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionUIControllerBase);
	UClass* Z_Construct_UClass_UOrionUIControllerBase_NoRegister()
	{
		return UOrionUIControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_UOrionUIControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrionViewController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionViewController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionUIControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIControllerBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOrionUIControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionUIControllerBase_GetActiveView, "GetActiveView" }, // 1389556066
		{ &Z_Construct_UFunction_UOrionUIControllerBase_Update, "Update" }, // 3492557375
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIControllerBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionUIControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Controllers/OrionUIControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Controllers/OrionUIControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionUIControllerBase_Statics::NewProp_OrionViewController_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Controllers/OrionUIControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionUIControllerBase_Statics::NewProp_OrionViewController = { "OrionViewController", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUIControllerBase, OrionViewController), Z_Construct_UClass_UOrionViewControllerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIControllerBase_Statics::NewProp_OrionViewController_MetaData), Z_Construct_UClass_UOrionUIControllerBase_Statics::NewProp_OrionViewController_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionUIControllerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionUIControllerBase_Statics::NewProp_OrionViewController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionUIControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionUIControllerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionUIControllerBase_Statics::ClassParams = {
		&UOrionUIControllerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOrionUIControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIControllerBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionUIControllerBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUIControllerBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionUIControllerBase()
	{
		if (!Z_Registration_Info_UClass_UOrionUIControllerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionUIControllerBase.OuterSingleton, Z_Construct_UClass_UOrionUIControllerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionUIControllerBase.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionUIControllerBase>()
	{
		return UOrionUIControllerBase::StaticClass();
	}
	UOrionUIControllerBase::UOrionUIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionUIControllerBase);
	UOrionUIControllerBase::~UOrionUIControllerBase() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionUIControllerBase, UOrionUIControllerBase::StaticClass, TEXT("UOrionUIControllerBase"), &Z_Registration_Info_UClass_UOrionUIControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionUIControllerBase), 2939556491U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_2668927845(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Controllers_OrionUIControllerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
