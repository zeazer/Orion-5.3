// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Widgets/OrionAnimUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionAnimUserWidget() {}
// Cross Module References
	ORIONUI_API UClass* Z_Construct_UClass_UOrionAnimUserWidget();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionAnimUserWidget_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionAnimUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	void UOrionAnimUserWidget::StaticRegisterNativesUOrionAnimUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionAnimUserWidget);
	UClass* Z_Construct_UClass_UOrionAnimUserWidget_NoRegister()
	{
		return UOrionAnimUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOrionAnimUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimateIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimateIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimateOut_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimateOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionAnimUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOrionUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAnimUserWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionAnimUserWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Widgets/OrionAnimUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionAnimUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateIn_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionAnimUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateIn = { "AnimateIn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionAnimUserWidget, AnimateIn), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateIn_MetaData), Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateIn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateOut_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionAnimUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateOut = { "AnimateOut", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionAnimUserWidget, AnimateOut), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateOut_MetaData), Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateOut_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionAnimUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionAnimUserWidget_Statics::NewProp_AnimateOut,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOrionAnimUserWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUIOrionAnimUserWidget_NoRegister, (int32)VTABLE_OFFSET(UOrionAnimUserWidget, IUIOrionAnimUserWidget), false },  // 1836849730
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAnimUserWidget_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionAnimUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionAnimUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionAnimUserWidget_Statics::ClassParams = {
		&UOrionAnimUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrionAnimUserWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAnimUserWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAnimUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionAnimUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionAnimUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionAnimUserWidget()
	{
		if (!Z_Registration_Info_UClass_UOrionAnimUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionAnimUserWidget.OuterSingleton, Z_Construct_UClass_UOrionAnimUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionAnimUserWidget.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionAnimUserWidget>()
	{
		return UOrionAnimUserWidget::StaticClass();
	}
	UOrionAnimUserWidget::UOrionAnimUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionAnimUserWidget);
	UOrionAnimUserWidget::~UOrionAnimUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionAnimUserWidget, UOrionAnimUserWidget::StaticClass, TEXT("UOrionAnimUserWidget"), &Z_Registration_Info_UClass_UOrionAnimUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionAnimUserWidget), 3176401549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h_2772140086(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionAnimUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
