// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Structs/OrionMenuStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionMenuStyle() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuStyle();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuStyle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	void UOrionMenuStyle::StaticRegisterNativesUOrionMenuStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionMenuStyle);
	UClass* Z_Construct_UClass_UOrionMenuStyle_NoRegister()
	{
		return UOrionMenuStyle::StaticClass();
	}
	struct Z_Construct_UClass_UOrionMenuStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePlayerInput_MetaData[];
#endif
		static void NewProp_bDisablePlayerInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePlayerInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideAll_MetaData[];
#endif
		static void NewProp_bHideAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideAll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeHiddenByOtherWidgets_MetaData[];
#endif
		static void NewProp_bCanBeHiddenByOtherWidgets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeHiddenByOtherWidgets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowGenericClosing_MetaData[];
#endif
		static void NewProp_bAllowGenericClosing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowGenericClosing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayOpenSound_MetaData[];
#endif
		static void NewProp_bPlayOpenSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayOpenSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCursor_MetaData[];
#endif
		static void NewProp_bShowCursor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPauseGame_MetaData[];
#endif
		static void NewProp_bPauseGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BackgroundImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionMenuStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMenuStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Structs/OrionMenuStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bDisablePlayerInput_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
#endif
	void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bDisablePlayerInput_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bDisablePlayerInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bDisablePlayerInput = { "bDisablePlayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bDisablePlayerInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bDisablePlayerInput_MetaData), Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bDisablePlayerInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bHideAll_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
#endif
	void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bHideAll_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bHideAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bHideAll = { "bHideAll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bHideAll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bHideAll_MetaData), Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bHideAll_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bCanBeHiddenByOtherWidgets_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "If false this widget will not be hidden by other widgets using 'bHideAll'" },
#endif
	};
#endif
	void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bCanBeHiddenByOtherWidgets_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bCanBeHiddenByOtherWidgets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bCanBeHiddenByOtherWidgets = { "bCanBeHiddenByOtherWidgets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bCanBeHiddenByOtherWidgets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bCanBeHiddenByOtherWidgets_MetaData), Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bCanBeHiddenByOtherWidgets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bAllowGenericClosing_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
#endif
	void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bAllowGenericClosing_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bAllowGenericClosing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bAllowGenericClosing = { "bAllowGenericClosing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bAllowGenericClosing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bAllowGenericClosing_MetaData), Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bAllowGenericClosing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPlayOpenSound_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
#endif
	void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPlayOpenSound_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bPlayOpenSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPlayOpenSound = { "bPlayOpenSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPlayOpenSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPlayOpenSound_MetaData), Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPlayOpenSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bShowCursor_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
#endif
	void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bShowCursor_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bShowCursor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bShowCursor = { "bShowCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bShowCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bShowCursor_MetaData), Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bShowCursor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPauseGame_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
#endif
	void Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPauseGame_SetBit(void* Obj)
	{
		((UOrionMenuStyle*)Obj)->bPauseGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPauseGame = { "bPauseGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionMenuStyle), &Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPauseGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPauseGame_MetaData), Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPauseGame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Structs/OrionMenuStyle.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionMenuStyle, BackgroundImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_BackgroundImage_MetaData), Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_BackgroundImage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionMenuStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bDisablePlayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bHideAll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bCanBeHiddenByOtherWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bAllowGenericClosing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPlayOpenSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bShowCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_bPauseGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionMenuStyle_Statics::NewProp_BackgroundImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionMenuStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionMenuStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionMenuStyle_Statics::ClassParams = {
		&UOrionMenuStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOrionMenuStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionMenuStyle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionMenuStyle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionMenuStyle()
	{
		if (!Z_Registration_Info_UClass_UOrionMenuStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionMenuStyle.OuterSingleton, Z_Construct_UClass_UOrionMenuStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionMenuStyle.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionMenuStyle>()
	{
		return UOrionMenuStyle::StaticClass();
	}
	UOrionMenuStyle::UOrionMenuStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionMenuStyle);
	UOrionMenuStyle::~UOrionMenuStyle() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionMenuStyle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionMenuStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionMenuStyle, UOrionMenuStyle::StaticClass, TEXT("UOrionMenuStyle"), &Z_Registration_Info_UClass_UOrionMenuStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionMenuStyle), 436987607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionMenuStyle_h_3607181461(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionMenuStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_OrionMenuStyle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
