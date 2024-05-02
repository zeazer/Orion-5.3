// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/OrionRichTextBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionRichTextBlock() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionRichTextBlock();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionRichTextBlock_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionRichTextBlock_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	void UOrionRichTextBlock::StaticRegisterNativesUOrionRichTextBlock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionRichTextBlock);
	UClass* Z_Construct_UClass_UOrionRichTextBlock_NoRegister()
	{
		return UOrionRichTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UOrionRichTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CascadeTooltipWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CascadeTooltipWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionRichTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonRichTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionRichTextBlock_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionRichTextBlock_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/OrionRichTextBlock.h" },
		{ "ModuleRelativePath", "Public/UI/OrionRichTextBlock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionRichTextBlock_Statics::NewProp_CascadeTooltipWidget_MetaData[] = {
		{ "Category", "OrionRichTextBlock" },
		{ "ModuleRelativePath", "Public/UI/OrionRichTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionRichTextBlock_Statics::NewProp_CascadeTooltipWidget = { "CascadeTooltipWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionRichTextBlock, CascadeTooltipWidget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionRichTextBlock_Statics::NewProp_CascadeTooltipWidget_MetaData), Z_Construct_UClass_UOrionRichTextBlock_Statics::NewProp_CascadeTooltipWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionRichTextBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionRichTextBlock_Statics::NewProp_CascadeTooltipWidget,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOrionRichTextBlock_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUIOrionRichTextBlock_NoRegister, (int32)VTABLE_OFFSET(UOrionRichTextBlock, IUIOrionRichTextBlock), false },  // 675070222
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionRichTextBlock_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionRichTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionRichTextBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionRichTextBlock_Statics::ClassParams = {
		&UOrionRichTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrionRichTextBlock_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionRichTextBlock_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionRichTextBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionRichTextBlock_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionRichTextBlock_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionRichTextBlock()
	{
		if (!Z_Registration_Info_UClass_UOrionRichTextBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionRichTextBlock.OuterSingleton, Z_Construct_UClass_UOrionRichTextBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionRichTextBlock.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionRichTextBlock>()
	{
		return UOrionRichTextBlock::StaticClass();
	}
	UOrionRichTextBlock::UOrionRichTextBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionRichTextBlock);
	UOrionRichTextBlock::~UOrionRichTextBlock() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionRichTextBlock, UOrionRichTextBlock::StaticClass, TEXT("UOrionRichTextBlock"), &Z_Registration_Info_UClass_UOrionRichTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionRichTextBlock), 2803403955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h_2396199570(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionRichTextBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
