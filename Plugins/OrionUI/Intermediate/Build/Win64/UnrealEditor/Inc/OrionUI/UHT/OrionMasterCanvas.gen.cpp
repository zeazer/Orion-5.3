// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/OrionMasterCanvas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionMasterCanvas() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionActivatableWidgetStack_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionMasterCanvas();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionMasterCanvas_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionMasterCanvas_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	DEFINE_FUNCTION(UOrionMasterCanvas::execOnBackgroundImageLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackgroundImageLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOrionMasterCanvas::execHideBackgroundIamge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideBackgroundIamge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOrionMasterCanvas::execDisplayBackgroundIamge)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_BackgroundTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayBackgroundIamge(Z_Param_BackgroundTexture);
		P_NATIVE_END;
	}
	void UOrionMasterCanvas::StaticRegisterNativesUOrionMasterCanvas()
	{
		UClass* Class = UOrionMasterCanvas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayBackgroundIamge", &UOrionMasterCanvas::execDisplayBackgroundIamge },
			{ "HideBackgroundIamge", &UOrionMasterCanvas::execHideBackgroundIamge },
			{ "OnBackgroundImageLoaded", &UOrionMasterCanvas::execOnBackgroundImageLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics
	{
		struct OrionMasterCanvas_eventDisplayBackgroundIamge_Parms
		{
			TSoftObjectPtr<UTexture2D> BackgroundTexture;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionMasterCanvas_eventDisplayBackgroundIamge_Parms, BackgroundTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::NewProp_BackgroundTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionMasterCanvas, nullptr, "DisplayBackgroundIamge", nullptr, nullptr, Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::OrionMasterCanvas_eventDisplayBackgroundIamge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::OrionMasterCanvas_eventDisplayBackgroundIamge_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionMasterCanvas, nullptr, "HideBackgroundIamge", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionMasterCanvas, nullptr, "OnBackgroundImageLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionMasterCanvas);
	UClass* Z_Construct_UClass_UOrionMasterCanvas_NoRegister()
	{
		return UOrionMasterCanvas::StaticClass();
	}
	struct Z_Construct_UClass_UOrionMasterCanvas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterCanvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterCanvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionMasterCanvas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOrionMasterCanvas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionMasterCanvas_DisplayBackgroundIamge, "DisplayBackgroundIamge" }, // 2480923882
		{ &Z_Construct_UFunction_UOrionMasterCanvas_HideBackgroundIamge, "HideBackgroundIamge" }, // 3470970385
		{ &Z_Construct_UFunction_UOrionMasterCanvas_OnBackgroundImageLoaded, "OnBackgroundImageLoaded" }, // 3272598404
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMasterCanvas_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/OrionMasterCanvas.h" },
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_MasterCanvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_MasterCanvas = { "MasterCanvas", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMasterCanvas, MasterCanvas), Z_Construct_UClass_UOrionActivatableWidgetStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_MasterCanvas_MetaData), Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_MasterCanvas_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/OrionMasterCanvas.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMasterCanvas, BackgroundImage), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_BackgroundImage_MetaData), Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_BackgroundImage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionMasterCanvas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_MasterCanvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMasterCanvas_Statics::NewProp_BackgroundImage,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOrionMasterCanvas_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUIOrionMasterCanvas_NoRegister, (int32)VTABLE_OFFSET(UOrionMasterCanvas, IUIOrionMasterCanvas), false },  // 1989462224
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionMasterCanvas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionMasterCanvas>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionMasterCanvas_Statics::ClassParams = {
		&UOrionMasterCanvas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOrionMasterCanvas_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionMasterCanvas_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMasterCanvas_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionMasterCanvas()
	{
		if (!Z_Registration_Info_UClass_UOrionMasterCanvas.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionMasterCanvas.OuterSingleton, Z_Construct_UClass_UOrionMasterCanvas_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionMasterCanvas.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionMasterCanvas>()
	{
		return UOrionMasterCanvas::StaticClass();
	}
	UOrionMasterCanvas::UOrionMasterCanvas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionMasterCanvas);
	UOrionMasterCanvas::~UOrionMasterCanvas() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionMasterCanvas, UOrionMasterCanvas::StaticClass, TEXT("UOrionMasterCanvas"), &Z_Registration_Info_UClass_UOrionMasterCanvas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionMasterCanvas), 447410125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_2039178392(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionMasterCanvas_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
