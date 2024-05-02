// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Widgets/OrionViewControllerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionViewControllerWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUIControllerBase_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionViewControllerWidget();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionViewControllerWidget_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UViewData_NoRegister();
	ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EViewDataMode();
	ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EViewType();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewDataMode;
	static UEnum* EViewDataMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EViewDataMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EViewDataMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionUI_EViewDataMode, (UObject*)Z_Construct_UPackage__Script_OrionUI(), TEXT("EViewDataMode"));
		}
		return Z_Registration_Info_UEnum_EViewDataMode.OuterSingleton;
	}
	template<> ORIONUI_API UEnum* StaticEnum<EViewDataMode>()
	{
		return EViewDataMode_StaticEnum();
	}
	struct Z_Construct_UEnum_OrionUI_EViewDataMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::Enumerators[] = {
		{ "EViewDataMode::ViewData", (int64)EViewDataMode::ViewData },
		{ "EViewDataMode::DataTable", (int64)EViewDataMode::DataTable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DataTable.Name", "EViewDataMode::DataTable" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
		{ "ViewData.Name", "EViewDataMode::ViewData" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OrionUI,
		nullptr,
		"EViewDataMode",
		"EViewDataMode",
		Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OrionUI_EViewDataMode()
	{
		if (!Z_Registration_Info_UEnum_EViewDataMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewDataMode.InnerSingleton, Z_Construct_UEnum_OrionUI_EViewDataMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EViewDataMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UOrionViewControllerWidget::execOnLoadComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoadComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOrionViewControllerWidget::execGetActiveView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=P_THIS->GetActiveView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOrionViewControllerWidget::execForceUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceUpdate();
		P_NATIVE_END;
	}
	void UOrionViewControllerWidget::StaticRegisterNativesUOrionViewControllerWidget()
	{
		UClass* Class = UOrionViewControllerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceUpdate", &UOrionViewControllerWidget::execForceUpdate },
			{ "GetActiveView", &UOrionViewControllerWidget::execGetActiveView },
			{ "OnLoadComplete", &UOrionViewControllerWidget::execOnLoadComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionViewControllerWidget, nullptr, "ForceUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics
	{
		struct OrionViewControllerWidget_eventGetActiveView_Parms
		{
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionViewControllerWidget_eventGetActiveView_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionViewControllerWidget, nullptr, "GetActiveView", nullptr, nullptr, Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::OrionViewControllerWidget_eventGetActiveView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::OrionViewControllerWidget_eventGetActiveView_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionViewControllerWidget, nullptr, "OnLoadComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionViewControllerWidget);
	UClass* Z_Construct_UClass_UOrionViewControllerWidget_NoRegister()
	{
		return UOrionViewControllerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOrionViewControllerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UIControllerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIControllerInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIControllerInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PlatformViewClasses_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlatformViewClasses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformViewClasses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PlatformViewClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugViewClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DebugViewClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ViewDataMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewDataMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewDataMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionViewControllerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOrionUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOrionViewControllerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionViewControllerWidget_ForceUpdate, "ForceUpdate" }, // 472001201
		{ &Z_Construct_UFunction_UOrionViewControllerWidget_GetActiveView, "GetActiveView" }, // 329351585
		{ &Z_Construct_UFunction_UOrionViewControllerWidget_OnLoadComplete, "OnLoadComplete" }, // 3339273316
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionViewControllerWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widgets/OrionViewControllerWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerClass_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerClass = { "UIControllerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, UIControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerClass_MetaData), Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerInstance = { "UIControllerInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, UIControllerInstance), Z_Construct_UClass_UOrionUIControllerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerInstance_MetaData), Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_Canvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "OrionUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_Canvas_MetaData), Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_Canvas_MetaData) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses_ValueProp = { "PlatformViewClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses_Key_KeyProp = { "PlatformViewClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OrionUI_EViewType, METADATA_PARAMS(0, nullptr) }; // 472128426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses = { "PlatformViewClasses", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, PlatformViewClasses), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses_MetaData), Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses_MetaData) }; // 472128426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewInstance_MetaData[] = {
		{ "Category", "OrionViewControllerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewInstance = { "ViewInstance", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewInstance), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewInstance_MetaData), Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_DebugViewClass_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_DebugViewClass = { "DebugViewClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, DebugViewClass), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_DebugViewClass_MetaData), Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_DebugViewClass_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataMode_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataMode = { "ViewDataMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewDataMode), Z_Construct_UEnum_OrionUI_EViewDataMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataMode_MetaData), Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataMode_MetaData) }; // 2567121524
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewData_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "EditCondition", "ViewDataMode == EViewDataMode::ViewData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewData = { "ViewData", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewData), Z_Construct_UClass_UViewData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewData_MetaData), Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataTable_MetaData[] = {
		{ "Category", "OrionUI" },
		{ "EditCondition", "ViewDataMode == EViewDataMode::DataTable" },
		{ "ModuleRelativePath", "Public/UI/Widgets/OrionViewControllerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataTable = { "ViewDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionViewControllerWidget, ViewDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataTable_MetaData), Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionViewControllerWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_UIControllerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_PlatformViewClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_DebugViewClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionViewControllerWidget_Statics::NewProp_ViewDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionViewControllerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionViewControllerWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionViewControllerWidget_Statics::ClassParams = {
		&UOrionViewControllerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOrionViewControllerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionViewControllerWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionViewControllerWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOrionViewControllerWidget()
	{
		if (!Z_Registration_Info_UClass_UOrionViewControllerWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionViewControllerWidget.OuterSingleton, Z_Construct_UClass_UOrionViewControllerWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionViewControllerWidget.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionViewControllerWidget>()
	{
		return UOrionViewControllerWidget::StaticClass();
	}
	UOrionViewControllerWidget::UOrionViewControllerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionViewControllerWidget);
	UOrionViewControllerWidget::~UOrionViewControllerWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_Statics::EnumInfo[] = {
		{ EViewDataMode_StaticEnum, TEXT("EViewDataMode"), &Z_Registration_Info_UEnum_EViewDataMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2567121524U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionViewControllerWidget, UOrionViewControllerWidget::StaticClass, TEXT("UOrionViewControllerWidget"), &Z_Registration_Info_UClass_UOrionViewControllerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionViewControllerWidget), 4206268189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_2878853891(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
