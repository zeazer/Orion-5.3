// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Structs/OrionCascadeStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionCascadeStyle() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionCascadeStyle();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionCascadeStyle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	void UOrionCascadeStyle::StaticRegisterNativesUOrionCascadeStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionCascadeStyle);
	UClass* Z_Construct_UClass_UOrionCascadeStyle_NoRegister()
	{
		return UOrionCascadeStyle::StaticClass();
	}
	struct Z_Construct_UClass_UOrionCascadeStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CascadeFont_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CascadeFont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionCascadeStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadeStyle_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionCascadeStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Structs/OrionCascadeStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionCascadeStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionCascadeStyle_Statics::NewProp_CascadeFont_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionCascadeStyle.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOrionCascadeStyle_Statics::NewProp_CascadeFont = { "CascadeFont", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionCascadeStyle, CascadeFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadeStyle_Statics::NewProp_CascadeFont_MetaData), Z_Construct_UClass_UOrionCascadeStyle_Statics::NewProp_CascadeFont_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionCascadeStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionCascadeStyle_Statics::NewProp_CascadeFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionCascadeStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionCascadeStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionCascadeStyle_Statics::ClassParams = {
		&UOrionCascadeStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrionCascadeStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadeStyle_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadeStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionCascadeStyle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadeStyle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionCascadeStyle()
	{
		if (!Z_Registration_Info_UClass_UOrionCascadeStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionCascadeStyle.OuterSingleton, Z_Construct_UClass_UOrionCascadeStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionCascadeStyle.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionCascadeStyle>()
	{
		return UOrionCascadeStyle::StaticClass();
	}
	UOrionCascadeStyle::UOrionCascadeStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionCascadeStyle);
	UOrionCascadeStyle::~UOrionCascadeStyle() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionCascadeStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionCascadeStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionCascadeStyle, UOrionCascadeStyle::StaticClass, TEXT("UOrionCascadeStyle"), &Z_Registration_Info_UClass_UOrionCascadeStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionCascadeStyle), 297946613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionCascadeStyle_h_2462825314(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionCascadeStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionCascadeStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
