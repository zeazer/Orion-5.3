// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Interfaces/IUIOrionRichTextBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUIOrionRichTextBlock() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionRichTextBlock();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionRichTextBlock_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	void UUIOrionRichTextBlock::StaticRegisterNativesUUIOrionRichTextBlock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIOrionRichTextBlock);
	UClass* Z_Construct_UClass_UUIOrionRichTextBlock_NoRegister()
	{
		return UUIOrionRichTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UUIOrionRichTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIOrionRichTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionRichTextBlock_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIOrionRichTextBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionRichTextBlock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIOrionRichTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIOrionRichTextBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIOrionRichTextBlock_Statics::ClassParams = {
		&UUIOrionRichTextBlock::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionRichTextBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIOrionRichTextBlock_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUIOrionRichTextBlock()
	{
		if (!Z_Registration_Info_UClass_UUIOrionRichTextBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIOrionRichTextBlock.OuterSingleton, Z_Construct_UClass_UUIOrionRichTextBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIOrionRichTextBlock.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UUIOrionRichTextBlock>()
	{
		return UUIOrionRichTextBlock::StaticClass();
	}
	UUIOrionRichTextBlock::UUIOrionRichTextBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIOrionRichTextBlock);
	UUIOrionRichTextBlock::~UUIOrionRichTextBlock() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIOrionRichTextBlock, UUIOrionRichTextBlock::StaticClass, TEXT("UUIOrionRichTextBlock"), &Z_Registration_Info_UClass_UUIOrionRichTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIOrionRichTextBlock), 675070222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_2247448730(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionRichTextBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
