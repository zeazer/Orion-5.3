// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Async/PoolAsyncActionLoop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolAsyncActionLoop() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionUserWidget_NoRegister();
	ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncActionLoop();
	ORIONUI_API UClass* Z_Construct_UClass_UPoolAsyncActionLoop_NoRegister();
	ORIONUI_API UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics
	{
		struct _Script_OrionUI_eventPoolLoopOutputPin_Parms
		{
			UOrionUserWidget* OrionUserWidget;
			int32 IndexCount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrionUserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OrionUserWidget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget = { "OrionUserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionUI_eventPoolLoopOutputPin_Parms, OrionUserWidget), Z_Construct_UClass_UOrionUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget_MetaData), Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::NewProp_IndexCount = { "IndexCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OrionUI_eventPoolLoopOutputPin_Parms, IndexCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::NewProp_OrionUserWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::NewProp_IndexCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OrionUI, nullptr, "PoolLoopOutputPin__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::_Script_OrionUI_eventPoolLoopOutputPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::_Script_OrionUI_eventPoolLoopOutputPin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPoolLoopOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PoolLoopOutputPin, UOrionUserWidget* OrionUserWidget, int32 IndexCount)
{
	struct _Script_OrionUI_eventPoolLoopOutputPin_Parms
	{
		UOrionUserWidget* OrionUserWidget;
		int32 IndexCount;
	};
	_Script_OrionUI_eventPoolLoopOutputPin_Parms Parms;
	Parms.OrionUserWidget=OrionUserWidget;
	Parms.IndexCount=IndexCount;
	PoolLoopOutputPin.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPoolAsyncActionLoop::execInternalCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InternalCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoolAsyncActionLoop::execInternalTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InternalTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoolAsyncActionLoop::execPoolLoopAsyncNode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_SOFTCLASS(TSoftClassPtr<UOrionUserWidget> ,Z_Param_PoolWidget);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPoolAsyncActionLoop**)Z_Param__Result=UPoolAsyncActionLoop::PoolLoopAsyncNode(Z_Param_WorldContextObject,Z_Param_PoolWidget,Z_Param_Count);
		P_NATIVE_END;
	}
	void UPoolAsyncActionLoop::StaticRegisterNativesUPoolAsyncActionLoop()
	{
		UClass* Class = UPoolAsyncActionLoop::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InternalCompleted", &UPoolAsyncActionLoop::execInternalCompleted },
			{ "InternalTick", &UPoolAsyncActionLoop::execInternalTick },
			{ "PoolLoopAsyncNode", &UPoolAsyncActionLoop::execPoolLoopAsyncNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolAsyncActionLoop, nullptr, "InternalCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolAsyncActionLoop, nullptr, "InternalTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics
	{
		struct PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms
		{
			const UObject* WorldContextObject;
			TSoftClassPtr<UOrionUserWidget>  PoolWidget;
			int32 Count;
			UPoolAsyncActionLoop* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PoolWidget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_PoolWidget = { "PoolWidget", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, PoolWidget), Z_Construct_UClass_UOrionUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, Count), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms, ReturnValue), Z_Construct_UClass_UPoolAsyncActionLoop_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_PoolWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionUIAsynch" },
		{ "CPP_Default_Count", "1" },
		{ "MetaClass", "/Script/UMG.UserWidget" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolAsyncActionLoop, nullptr, "PoolLoopAsyncNode", nullptr, nullptr, Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::PoolAsyncActionLoop_eventPoolLoopAsyncNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoolAsyncActionLoop);
	UClass* Z_Construct_UClass_UPoolAsyncActionLoop_NoRegister()
	{
		return UPoolAsyncActionLoop::StaticClass();
	}
	struct Z_Construct_UClass_UPoolAsyncActionLoop_Statics
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
	UObject* (*const Z_Construct_UClass_UPoolAsyncActionLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPoolAsyncActionLoop_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolAsyncActionLoop_InternalCompleted, "InternalCompleted" }, // 301827410
		{ &Z_Construct_UFunction_UPoolAsyncActionLoop_InternalTick, "InternalTick" }, // 3392137300
		{ &Z_Construct_UFunction_UPoolAsyncActionLoop_PoolLoopAsyncNode, "PoolLoopAsyncNode" }, // 2183627265
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolAsyncActionLoop_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Async/PoolAsyncActionLoop.h" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_Completed_MetaData[] = {
		{ "Category", "OrionUIAsynch" },
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncActionLoop, Completed), Z_Construct_UDelegateFunction_OrionUI_PoolLoopOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_Completed_MetaData), Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_Completed_MetaData) }; // 3431379058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_ResultingWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_ResultingWidgetClass = { "ResultingWidgetClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncActionLoop, ResultingWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOrionUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_ResultingWidgetClass_MetaData), Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_ResultingWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/Async/PoolAsyncActionLoop.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolAsyncActionLoop, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoolAsyncActionLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_ResultingWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolAsyncActionLoop_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoolAsyncActionLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolAsyncActionLoop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolAsyncActionLoop_Statics::ClassParams = {
		&UPoolAsyncActionLoop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPoolAsyncActionLoop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolAsyncActionLoop_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolAsyncActionLoop_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoolAsyncActionLoop()
	{
		if (!Z_Registration_Info_UClass_UPoolAsyncActionLoop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolAsyncActionLoop.OuterSingleton, Z_Construct_UClass_UPoolAsyncActionLoop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoolAsyncActionLoop.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UPoolAsyncActionLoop>()
	{
		return UPoolAsyncActionLoop::StaticClass();
	}
	UPoolAsyncActionLoop::UPoolAsyncActionLoop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolAsyncActionLoop);
	UPoolAsyncActionLoop::~UPoolAsyncActionLoop() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoolAsyncActionLoop, UPoolAsyncActionLoop::StaticClass, TEXT("UPoolAsyncActionLoop"), &Z_Registration_Info_UClass_UPoolAsyncActionLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolAsyncActionLoop), 3949489726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_2032123326(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
