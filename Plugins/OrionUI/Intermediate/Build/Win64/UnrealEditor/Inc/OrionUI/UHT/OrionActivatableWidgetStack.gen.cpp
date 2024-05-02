// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/OrionActivatableWidgetStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionActivatableWidgetStack() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetStack();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionActivatableWidgetStack();
	ORIONUI_API UClass* Z_Construct_UClass_UOrionActivatableWidgetStack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	DEFINE_FUNCTION(UOrionActivatableWidgetStack::execClearToBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearToBase();
		P_NATIVE_END;
	}
	void UOrionActivatableWidgetStack::StaticRegisterNativesUOrionActivatableWidgetStack()
	{
		UClass* Class = UOrionActivatableWidgetStack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearToBase", &UOrionActivatableWidgetStack::execClearToBase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/OrionActivatableWidgetStack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOrionActivatableWidgetStack, nullptr, "ClearToBase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOrionActivatableWidgetStack);
	UClass* Z_Construct_UClass_UOrionActivatableWidgetStack_NoRegister()
	{
		return UOrionActivatableWidgetStack::StaticClass();
	}
	struct Z_Construct_UClass_UOrionActivatableWidgetStack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidgetStack,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionActivatableWidgetStack_ClearToBase, "ClearToBase" }, // 2294408301
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/OrionActivatableWidgetStack.h" },
		{ "ModuleRelativePath", "Public/UI/OrionActivatableWidgetStack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionActivatableWidgetStack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::ClassParams = {
		&UOrionActivatableWidgetStack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UOrionActivatableWidgetStack()
	{
		if (!Z_Registration_Info_UClass_UOrionActivatableWidgetStack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionActivatableWidgetStack.OuterSingleton, Z_Construct_UClass_UOrionActivatableWidgetStack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOrionActivatableWidgetStack.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UOrionActivatableWidgetStack>()
	{
		return UOrionActivatableWidgetStack::StaticClass();
	}
	UOrionActivatableWidgetStack::UOrionActivatableWidgetStack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionActivatableWidgetStack);
	UOrionActivatableWidgetStack::~UOrionActivatableWidgetStack() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOrionActivatableWidgetStack, UOrionActivatableWidgetStack::StaticClass, TEXT("UOrionActivatableWidgetStack"), &Z_Registration_Info_UClass_UOrionActivatableWidgetStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionActivatableWidgetStack), 171927097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_3481540770(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_OrionActivatableWidgetStack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
