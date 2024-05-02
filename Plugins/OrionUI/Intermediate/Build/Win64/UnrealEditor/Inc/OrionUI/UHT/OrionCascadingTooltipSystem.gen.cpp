// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Widgets/OrionCascadingTooltipSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionCascadingTooltipSystem() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionCascadingTooltipSystem();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionCascadingTooltipSystem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	void UOrionCascadingTooltipSystem::StaticRegisterNativesUOrionCascadingTooltipSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionCascadingTooltipSystem);
	UClass* Z_Construct_UClass_UOrionCascadingTooltipSystem_NoRegister()
	{
		return UOrionCascadingTooltipSystem::StaticClass();
	}
	struct Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TooltipCanvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TooltipCanvas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/OrionCascadingTooltipSystem.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionCascadingTooltipSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::NewProp_TooltipCanvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionCascadingTooltipSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::NewProp_TooltipCanvas = { "TooltipCanvas", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionCascadingTooltipSystem, TooltipCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::NewProp_TooltipCanvas_MetaData), Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::NewProp_TooltipCanvas_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::NewProp_TooltipCanvas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionCascadingTooltipSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::ClassParams = {
		&UOrionCascadingTooltipSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionCascadingTooltipSystem()
	{
		if (!Z_Registration_Info_UClass_UOrionCascadingTooltipSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionCascadingTooltipSystem.OuterSingleton, Z_Construct_UClass_UOrionCascadingTooltipSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionCascadingTooltipSystem.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionCascadingTooltipSystem>()
	{
		return UOrionCascadingTooltipSystem::StaticClass();
	}
	UOrionCascadingTooltipSystem::UOrionCascadingTooltipSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionCascadingTooltipSystem);
	UOrionCascadingTooltipSystem::~UOrionCascadingTooltipSystem() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionCascadingTooltipSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionCascadingTooltipSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionCascadingTooltipSystem, UOrionCascadingTooltipSystem::StaticClass, TEXT("UOrionCascadingTooltipSystem"), &Z_Registration_Info_UClass_UOrionCascadingTooltipSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionCascadingTooltipSystem), 522378773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionCascadingTooltipSystem_h_3098121044(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionCascadingTooltipSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionCascadingTooltipSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
