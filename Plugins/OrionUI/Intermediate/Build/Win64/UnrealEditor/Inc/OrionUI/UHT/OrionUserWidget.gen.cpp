// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Widgets/OrionUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionUserWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	void UOrionUserWidget::StaticRegisterNativesUOrionUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionUserWidget);
	UClass* Z_Construct_UClass_UOrionUserWidget_NoRegister()
	{
		return UOrionUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOrionUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrionToolTipWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OrionToolTipWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrionToolTipWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionToolTipWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrionTooltipSettingStyle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionTooltipSettingStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/OrionUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidgetClass_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidgetClass = { "OrionToolTipWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUserWidget, OrionToolTipWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidgetClass_MetaData), Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidget = { "OrionToolTipWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUserWidget, OrionToolTipWidget), Z_Construct_UClass_UOrionTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidget_MetaData), Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionTooltipSettingStyle_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionTooltipSettingStyle = { "OrionTooltipSettingStyle", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionUserWidget, OrionTooltipSettingStyle), Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionTooltipSettingStyle_MetaData), Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionTooltipSettingStyle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionToolTipWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionUserWidget_Statics::NewProp_OrionTooltipSettingStyle,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOrionUserWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister, (int32)VTABLE_OFFSET(UOrionUserWidget, IUIOrionCascadingTooltip), false },  // 2549537434
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionUserWidget_Statics::ClassParams = {
		&UOrionUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrionUserWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionUserWidget()
	{
		if (!Z_Registration_Info_UClass_UOrionUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionUserWidget.OuterSingleton, Z_Construct_UClass_UOrionUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionUserWidget.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionUserWidget>()
	{
		return UOrionUserWidget::StaticClass();
	}
	UOrionUserWidget::UOrionUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionUserWidget);
	UOrionUserWidget::~UOrionUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionUserWidget, UOrionUserWidget::StaticClass, TEXT("UOrionUserWidget"), &Z_Registration_Info_UClass_UOrionUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionUserWidget), 4234556616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionUserWidget_h_2153255641(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
