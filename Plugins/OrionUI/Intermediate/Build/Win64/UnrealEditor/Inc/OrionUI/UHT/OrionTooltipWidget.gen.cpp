// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Widgets/OrionTooltipWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionTooltipWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipStyle_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipWidget_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	static FName NAME_UOrionTooltipWidget_ApplyStyle = FName(TEXT("ApplyStyle"));
	void UOrionTooltipWidget::ApplyStyle()
	{
		ProcessEvent(FindFunctionChecked(NAME_UOrionTooltipWidget_ApplyStyle),NULL);
	}
	void UOrionTooltipWidget::StaticRegisterNativesUOrionTooltipWidget()
	{
	}
	struct Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionTooltipWidget, nullptr, "ApplyStyle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionTooltipWidget);
	UClass* Z_Construct_UClass_UOrionTooltipWidget_NoRegister()
	{
		return UOrionTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOrionTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrionTooltipStyle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionTooltipStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrionTooltipSettingStyle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionTooltipSettingStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrionCascadedToolTipWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionCascadedToolTipWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOrionTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionTooltipWidget_ApplyStyle, "ApplyStyle" }, // 3362277678
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Widgets/OrionTooltipWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipStyle_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipStyle = { "OrionTooltipStyle", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipWidget, OrionTooltipStyle), Z_Construct_UClass_UOrionTooltipStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipStyle_MetaData), Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipStyle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipSettingStyle_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipSettingStyle = { "OrionTooltipSettingStyle", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipWidget, OrionTooltipSettingStyle), Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipSettingStyle_MetaData), Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipSettingStyle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionCascadedToolTipWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionTooltipWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionCascadedToolTipWidget = { "OrionCascadedToolTipWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipWidget, OrionCascadedToolTipWidget), Z_Construct_UClass_UOrionTooltipWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionCascadedToolTipWidget_MetaData), Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionCascadedToolTipWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionTooltipWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionTooltipSettingStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipWidget_Statics::NewProp_OrionCascadedToolTipWidget,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOrionTooltipWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUIOrionCascadingTooltip_NoRegister, (int32)VTABLE_OFFSET(UOrionTooltipWidget, IUIOrionCascadingTooltip), false },  // 2549537434
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionTooltipWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionTooltipWidget_Statics::ClassParams = {
		&UOrionTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOrionTooltipWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionTooltipWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionTooltipWidget()
	{
		if (!Z_Registration_Info_UClass_UOrionTooltipWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionTooltipWidget.OuterSingleton, Z_Construct_UClass_UOrionTooltipWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionTooltipWidget.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionTooltipWidget>()
	{
		return UOrionTooltipWidget::StaticClass();
	}
	UOrionTooltipWidget::UOrionTooltipWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionTooltipWidget);
	UOrionTooltipWidget::~UOrionTooltipWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionTooltipWidget, UOrionTooltipWidget::StaticClass, TEXT("UOrionTooltipWidget"), &Z_Registration_Info_UClass_UOrionTooltipWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionTooltipWidget), 3725682744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_1075616650(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionTooltipWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
