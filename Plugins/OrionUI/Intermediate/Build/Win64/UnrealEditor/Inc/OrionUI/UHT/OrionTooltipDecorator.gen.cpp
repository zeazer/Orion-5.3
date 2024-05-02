// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Decorator/OrionTooltipDecorator.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionTooltipDecorator() {}
// Cross Module References
	ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipDecorator();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipDecorator_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHyperlinkStyle();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	DEFINE_FUNCTION(UOrionTooltipDecorator::execCascadeClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CascadeClicked_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UOrionTooltipDecorator_CascadeClicked = FName(TEXT("CascadeClicked"));
	void UOrionTooltipDecorator::CascadeClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOrionTooltipDecorator_CascadeClicked),NULL);
	}
	void UOrionTooltipDecorator::StaticRegisterNativesUOrionTooltipDecorator()
	{
		UClass* Class = UOrionTooltipDecorator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CascadeClicked", &UOrionTooltipDecorator::execCascadeClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Decorator/OrionTooltipDecorator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionTooltipDecorator, nullptr, "CascadeClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionTooltipDecorator);
	UClass* Z_Construct_UClass_UOrionTooltipDecorator_NoRegister()
	{
		return UOrionTooltipDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UOrionTooltipDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_style_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_style;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionTooltipDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipDecorator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOrionTooltipDecorator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionTooltipDecorator_CascadeClicked, "CascadeClicked" }, // 1858595393
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipDecorator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionTooltipDecorator_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "UI/Decorator/OrionTooltipDecorator.h" },
		{ "ModuleRelativePath", "Public/UI/Decorator/OrionTooltipDecorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionTooltipDecorator_Statics::NewProp_style_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Decorator/OrionTooltipDecorator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOrionTooltipDecorator_Statics::NewProp_style = { "style", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipDecorator, style), Z_Construct_UScriptStruct_FHyperlinkStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipDecorator_Statics::NewProp_style_MetaData), Z_Construct_UClass_UOrionTooltipDecorator_Statics::NewProp_style_MetaData) }; // 4058886374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionTooltipDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipDecorator_Statics::NewProp_style,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionTooltipDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionTooltipDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionTooltipDecorator_Statics::ClassParams = {
		&UOrionTooltipDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOrionTooltipDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipDecorator_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionTooltipDecorator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipDecorator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionTooltipDecorator()
	{
		if (!Z_Registration_Info_UClass_UOrionTooltipDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionTooltipDecorator.OuterSingleton, Z_Construct_UClass_UOrionTooltipDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionTooltipDecorator.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionTooltipDecorator>()
	{
		return UOrionTooltipDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionTooltipDecorator);
	UOrionTooltipDecorator::~UOrionTooltipDecorator() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Decorator_OrionTooltipDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Decorator_OrionTooltipDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionTooltipDecorator, UOrionTooltipDecorator::StaticClass, TEXT("UOrionTooltipDecorator"), &Z_Registration_Info_UClass_UOrionTooltipDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionTooltipDecorator), 3596726554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Decorator_OrionTooltipDecorator_h_3138507217(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Decorator_OrionTooltipDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Decorator_OrionTooltipDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
