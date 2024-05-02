// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Async/PoolAsyncAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolAsyncAction() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncAction();
	ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncAction_NoRegister();
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics
	{
		struct _Script_OrionUI_eventPoolOutputPin_Parms
		{
			UCommonUserWidget* OrionUserWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrionUserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionUserWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget = { "OrionUserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionUI_eventPoolOutputPin_Parms, OrionUserWidget), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget_MetaData), Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OrionUI, nullptr, "PoolOutputPin__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::_Script_OrionUI_eventPoolOutputPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::_Script_OrionUI_eventPoolOutputPin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPoolOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PoolOutputPin, UCommonUserWidget* OrionUserWidget)
{
	struct _Script_OrionUI_eventPoolOutputPin_Parms
	{
		UCommonUserWidget* OrionUserWidget;
	};
	_Script_OrionUI_eventPoolOutputPin_Parms Parms;
	Parms.OrionUserWidget=OrionUserWidget;
	PoolOutputPin.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPoolAsyncAction::execInternalCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InternalCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoolAsyncAction::execInternalTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InternalTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoolAsyncAction::execPoolAsyncNode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_SOFTCLASS(TSoftClassPtr<UCommonUserWidget> ,Z_Param_PoolWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPoolAsyncAction**)Z_Param__Result=UPoolAsyncAction::PoolAsyncNode(Z_Param_WorldContextObject,Z_Param_PoolWidget);
		P_NATIVE_END;
	}
	void UPoolAsyncAction::StaticRegisterNativesUPoolAsyncAction()
	{
		UClass* Class = UPoolAsyncAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InternalCompleted", &UPoolAsyncAction::execInternalCompleted },
			{ "InternalTick", &UPoolAsyncAction::execInternalTick },
			{ "PoolAsyncNode", &UPoolAsyncAction::execPoolAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolAsyncAction, nullptr, "InternalCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoolAsyncAction_InternalTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolAsyncAction_InternalTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncAction_InternalTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolAsyncAction, nullptr, "InternalTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncAction_InternalTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncAction_InternalTick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPoolAsyncAction_InternalTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncAction_InternalTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics
	{
		struct PoolAsyncAction_eventPoolAsyncNode_Parms
		{
			const UObject* WorldContextObject;
			TSoftClassPtr<UCommonUserWidget>  PoolWidget;
			UPoolAsyncAction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PoolWidget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncAction_eventPoolAsyncNode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_PoolWidget = { "PoolWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncAction_eventPoolAsyncNode_Parms, PoolWidget), Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncAction_eventPoolAsyncNode_Parms, ReturnValue), Z_Construct_UClass_UPoolAsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_PoolWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionUIAsynch" },
		{ "MetaClass", "/Script/UMG.UCommonUserWidget" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolAsyncAction, nullptr, "PoolAsyncNode", nullptr, nullptr, Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PoolAsyncAction_eventPoolAsyncNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::PoolAsyncAction_eventPoolAsyncNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoolAsyncAction);
	UClass* Z_Construct_UClass_UPoolAsyncAction_NoRegister()
	{
		return UPoolAsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_UPoolAsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultingWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ResultingWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoolAsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPoolAsyncAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolAsyncAction_InternalCompleted, "InternalCompleted" }, // 2607505161
		{ &Z_Construct_UFunction_UPoolAsyncAction_InternalTick, "InternalTick" }, // 523900692
		{ &Z_Construct_UFunction_UPoolAsyncAction_PoolAsyncNode, "PoolAsyncNode" }, // 3924002943
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolAsyncAction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Async/PoolAsyncAction.h" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_Completed_MetaData[] = {
		{ "Category", "OrionUIAsynch" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncAction, Completed), Z_Construct_UDelegateFunction_OrionUI_PoolOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_Completed_MetaData), Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_Completed_MetaData) }; // 2904767201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_ResultingWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_ResultingWidgetClass = { "ResultingWidgetClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncAction, ResultingWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_ResultingWidgetClass_MetaData), Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_ResultingWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncAction.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncAction, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoolAsyncAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_ResultingWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncAction_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoolAsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolAsyncAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolAsyncAction_Statics::ClassParams = {
		&UPoolAsyncAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPoolAsyncAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolAsyncAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoolAsyncAction()
	{
		if (!Z_Registration_Info_UClass_UPoolAsyncAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolAsyncAction.OuterSingleton, Z_Construct_UClass_UPoolAsyncAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoolAsyncAction.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UPoolAsyncAction>()
	{
		return UPoolAsyncAction::StaticClass();
	}
	UPoolAsyncAction::UPoolAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolAsyncAction);
	UPoolAsyncAction::~UPoolAsyncAction() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoolAsyncAction, UPoolAsyncAction::StaticClass, TEXT("UPoolAsyncAction"), &Z_Registration_Info_UClass_UPoolAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolAsyncAction), 1162440972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_2066490777(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
