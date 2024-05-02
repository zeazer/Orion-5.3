// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Structs/OrionTooltipSettingStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionTooltipSettingStyle() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister();
	ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EToolTipMode();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolTipMode;
	static UEnum* EToolTipMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EToolTipMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EToolTipMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionUI_EToolTipMode, (UObject*)Z_Construct_UPackage__Script_OrionUI(), TEXT("EToolTipMode"));
		}
		return Z_Registration_Info_UEnum_EToolTipMode.OuterSingleton;
	}
	template<> ORIONUI_API UEnum* StaticEnum<EToolTipMode>()
	{
		return EToolTipMode_StaticEnum();
	}
	struct Z_Construct_UEnum_OrionUI_EToolTipMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::Enumerators[] = {
		{ "EToolTipMode::Hover", (int64)EToolTipMode::Hover },
		{ "EToolTipMode::LeftClick", (int64)EToolTipMode::LeftClick },
		{ "EToolTipMode::RightClick", (int64)EToolTipMode::RightClick },
		{ "EToolTipMode::MiddleClick", (int64)EToolTipMode::MiddleClick },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hover.Name", "EToolTipMode::Hover" },
		{ "LeftClick.Name", "EToolTipMode::LeftClick" },
		{ "MiddleClick.Name", "EToolTipMode::MiddleClick" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipSettingStyle.h" },
		{ "RightClick.Name", "EToolTipMode::RightClick" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OrionUI,
		nullptr,
		"EToolTipMode",
		"EToolTipMode",
		Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OrionUI_EToolTipMode()
	{
		if (!Z_Registration_Info_UEnum_EToolTipMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolTipMode.InnerSingleton, Z_Construct_UEnum_OrionUI_EToolTipMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EToolTipMode.InnerSingleton;
	}
	void UOrionTooltipSettingStyle::StaticRegisterNativesUOrionTooltipSettingStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionTooltipSettingStyle);
	UClass* Z_Construct_UClass_UOrionTooltipSettingStyle_NoRegister()
	{
		return UOrionTooltipSettingStyle::StaticClass();
	}
	struct Z_Construct_UClass_UOrionTooltipSettingStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TooltipDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TooltipDelay;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ToolTipMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTipMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ToolTipMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Structs/OrionTooltipSettingStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipSettingStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_TooltipDelay_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipSettingStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_TooltipDelay = { "TooltipDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipSettingStyle, TooltipDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_TooltipDelay_MetaData), Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_TooltipDelay_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_ToolTipMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_ToolTipMode_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionTooltipSettingStyle.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_ToolTipMode = { "ToolTipMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionTooltipSettingStyle, ToolTipMode), Z_Construct_UEnum_OrionUI_EToolTipMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_ToolTipMode_MetaData), Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_ToolTipMode_MetaData) }; // 2881755770
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_TooltipDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_ToolTipMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::NewProp_ToolTipMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionTooltipSettingStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::ClassParams = {
		&UOrionTooltipSettingStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionTooltipSettingStyle()
	{
		if (!Z_Registration_Info_UClass_UOrionTooltipSettingStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionTooltipSettingStyle.OuterSingleton, Z_Construct_UClass_UOrionTooltipSettingStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionTooltipSettingStyle.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionTooltipSettingStyle>()
	{
		return UOrionTooltipSettingStyle::StaticClass();
	}
	UOrionTooltipSettingStyle::UOrionTooltipSettingStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionTooltipSettingStyle);
	UOrionTooltipSettingStyle::~UOrionTooltipSettingStyle() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_Statics::EnumInfo[] = {
		{ EToolTipMode_StaticEnum, TEXT("EToolTipMode"), &Z_Registration_Info_UEnum_EToolTipMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2881755770U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionTooltipSettingStyle, UOrionTooltipSettingStyle::StaticClass, TEXT("UOrionTooltipSettingStyle"), &Z_Registration_Info_UClass_UOrionTooltipSettingStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionTooltipSettingStyle), 279923122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_197626566(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionTooltipSettingStyle_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
