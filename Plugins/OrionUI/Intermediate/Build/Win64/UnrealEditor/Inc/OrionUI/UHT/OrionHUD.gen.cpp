// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/OrionHUD.h"
#include "Blueprint/UserWidgetPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_AOrionHUD();
	ORIONUI_API UClass* Z_Construct_UClass_AOrionHUD_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionCascadingTooltipSystem_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionMasterCanvas_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionMenuWidget_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	DEFINE_FUNCTION(AOrionHUD::execOpenStartMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenStartMenu();
		P_NATIVE_END;
	}
	void AOrionHUD::StaticRegisterNativesAOrionHUD()
	{
		UClass* Class = AOrionHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenStartMenu", &AOrionHUD::execOpenStartMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOrionHUD, nullptr, "OpenStartMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AOrionHUD_OpenStartMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOrionHUD_OpenStartMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrionHUD);
	UClass* Z_Construct_UClass_AOrionHUD_NoRegister()
	{
		return AOrionHUD::StaticClass();
	}
	struct Z_Construct_UClass_AOrionHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterHUDWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MasterHUDWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TooltipSystemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TooltipSystemClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MenuIdConvertList_ValueProp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MenuIdConvertList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuIdConvertList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MenuIdConvertList;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartMenus_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartMenus_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartMenus_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StartMenus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterHUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterHUDWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TooltipSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TooltipSystem;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OrionMenuWidgets_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OrionMenuWidgets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrionMenuWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OrionMenuWidgets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserWidgetPool_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserWidgetPool;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIControllers_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_UIControllers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIControllers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UIControllers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrionHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AOrionHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOrionHUD_OpenStartMenu, "OpenStartMenu" }, // 2793525677
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrionHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/OrionHUD.h" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidgetClass_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidgetClass = { "MasterHUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, MasterHUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionMasterCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidgetClass_MetaData), Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystemClass_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystemClass = { "TooltipSystemClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, TooltipSystemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionCascadingTooltipSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystemClass_MetaData), Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystemClass_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList_ValueProp = { "MenuIdConvertList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList_Key_KeyProp = { "MenuIdConvertList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList = { "MenuIdConvertList", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, MenuIdConvertList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList_MetaData), Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus_ValueProp = { "StartMenus", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus_Key_KeyProp = { "StartMenus_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus = { "StartMenus", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, StartMenus), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus_MetaData), Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidget = { "MasterHUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, MasterHUDWidget), Z_Construct_UClass_UOrionMasterCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidget_MetaData), Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystem_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystem = { "TooltipSystem", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, TooltipSystem), Z_Construct_UClass_UOrionCascadingTooltipSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystem_MetaData), Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystem_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets_ValueProp = { "OrionMenuWidgets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionMenuWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets_Key_KeyProp = { "OrionMenuWidgets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets = { "OrionMenuWidgets", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, OrionMenuWidgets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets_MetaData), Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrionHUD_Statics::NewProp_UserWidgetPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_UserWidgetPool = { "UserWidgetPool", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, UserWidgetPool), Z_Construct_UScriptStruct_FUserWidgetPool, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::NewProp_UserWidgetPool_MetaData), Z_Construct_UClass_AOrionHUD_Statics::NewProp_UserWidgetPool_MetaData) }; // 706882787
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers_ValueProp = { "UIControllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers_Key_KeyProp = { "UIControllers_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/OrionHUD.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers = { "UIControllers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrionHUD, UIControllers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers_MetaData), Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrionHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_MenuIdConvertList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_StartMenus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_MasterHUDWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_TooltipSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_OrionMenuWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_UserWidgetPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrionHUD_Statics::NewProp_UIControllers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrionHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrionHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrionHUD_Statics::ClassParams = {
		&AOrionHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOrionHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AOrionHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AOrionHUD()
	{
		if (!Z_Registration_Info_UClass_AOrionHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrionHUD.OuterSingleton, Z_Construct_UClass_AOrionHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOrionHUD.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<AOrionHUD>()
	{
		return AOrionHUD::StaticClass();
	}
	AOrionHUD::AOrionHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrionHUD);
	AOrionHUD::~AOrionHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOrionHUD, AOrionHUD::StaticClass, TEXT("AOrionHUD"), &Z_Registration_Info_UClass_AOrionHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrionHUD), 643308794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_3296153507(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
