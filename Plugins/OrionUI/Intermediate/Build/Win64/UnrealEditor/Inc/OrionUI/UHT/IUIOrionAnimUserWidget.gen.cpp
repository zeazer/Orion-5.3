// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Interfaces/IUIOrionAnimUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUIOrionAnimUserWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionAnimUserWidget();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionAnimUserWidget_NoRegister();
	ORIONUI_API UEnum* Z_Construct_UEnum_OrionUI_EOrionAnimMode();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrionAnimMode;
	static UEnum* EOrionAnimMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOrionAnimMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOrionAnimMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OrionUI_EOrionAnimMode, (UObject*)Z_Construct_UPackage__Script_OrionUI(), TEXT("EOrionAnimMode"));
		}
		return Z_Registration_Info_UEnum_EOrionAnimMode.OuterSingleton;
	}
	template<> ORIONUI_API UEnum* StaticEnum<EOrionAnimMode>()
	{
		return EOrionAnimMode_StaticEnum();
	}
	struct Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::Enumerators[] = {
		{ "EOrionAnimMode::InAnim", (int64)EOrionAnimMode::InAnim },
		{ "EOrionAnimMode::OutAnim", (int64)EOrionAnimMode::OutAnim },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InAnim.Name", "EOrionAnimMode::InAnim" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionAnimUserWidget.h" },
		{ "OutAnim.Name", "EOrionAnimMode::OutAnim" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OrionUI,
		nullptr,
		"EOrionAnimMode",
		"EOrionAnimMode",
		Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OrionUI_EOrionAnimMode()
	{
		if (!Z_Registration_Info_UEnum_EOrionAnimMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrionAnimMode.InnerSingleton, Z_Construct_UEnum_OrionUI_EOrionAnimMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOrionAnimMode.InnerSingleton;
	}
	DEFINE_FUNCTION(IUIOrionAnimUserWidget::execAnimFunction)
	{
		P_GET_ENUM(EOrionAnimMode,Z_Param_AnimMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimFunction_Implementation(EOrionAnimMode(Z_Param_AnimMode));
		P_NATIVE_END;
	}
	struct UIOrionAnimUserWidget_eventAnimFunction_Parms
	{
		EOrionAnimMode AnimMode;
	};
	void IUIOrionAnimUserWidget::AnimFunction(EOrionAnimMode AnimMode)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AnimFunction instead.");
	}
	void UUIOrionAnimUserWidget::StaticRegisterNativesUUIOrionAnimUserWidget()
	{
		UClass* Class = UUIOrionAnimUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimFunction", &IUIOrionAnimUserWidget::execAnimFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::NewProp_AnimMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::NewProp_AnimMode = { "AnimMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOrionAnimUserWidget_eventAnimFunction_Parms, AnimMode), Z_Construct_UEnum_OrionUI_EOrionAnimMode, METADATA_PARAMS(0, nullptr) }; // 510510321
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::NewProp_AnimMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::NewProp_AnimMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "OrionUI" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionAnimUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIOrionAnimUserWidget, nullptr, "AnimFunction", nullptr, nullptr, Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::PropPointers), sizeof(UIOrionAnimUserWidget_eventAnimFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::PropPointers) < 2048);
	static_assert(sizeof(UIOrionAnimUserWidget_eventAnimFunction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIOrionAnimUserWidget);
	UClass* Z_Construct_UClass_UUIOrionAnimUserWidget_NoRegister()
	{
		return UUIOrionAnimUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUIOrionAnimUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIOrionAnimUserWidget_AnimFunction, "AnimFunction" }, // 2494411814
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionAnimUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIOrionAnimUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::ClassParams = {
		&UUIOrionAnimUserWidget::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUIOrionAnimUserWidget()
	{
		if (!Z_Registration_Info_UClass_UUIOrionAnimUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIOrionAnimUserWidget.OuterSingleton, Z_Construct_UClass_UUIOrionAnimUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIOrionAnimUserWidget.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UUIOrionAnimUserWidget>()
	{
		return UUIOrionAnimUserWidget::StaticClass();
	}
	UUIOrionAnimUserWidget::UUIOrionAnimUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIOrionAnimUserWidget);
	UUIOrionAnimUserWidget::~UUIOrionAnimUserWidget() {}
	static FName NAME_UUIOrionAnimUserWidget_AnimFunction = FName(TEXT("AnimFunction"));
	void IUIOrionAnimUserWidget::Execute_AnimFunction(UObject* O, EOrionAnimMode AnimMode)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUIOrionAnimUserWidget::StaticClass()));
		UIOrionAnimUserWidget_eventAnimFunction_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUIOrionAnimUserWidget_AnimFunction);
		if (Func)
		{
			Parms.AnimMode=AnimMode;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUIOrionAnimUserWidget*)(O->GetNativeInterfaceAddress(UUIOrionAnimUserWidget::StaticClass())))
		{
			I->AnimFunction_Implementation(AnimMode);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_Statics::EnumInfo[] = {
		{ EOrionAnimMode_StaticEnum, TEXT("EOrionAnimMode"), &Z_Registration_Info_UEnum_EOrionAnimMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 510510321U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIOrionAnimUserWidget, UUIOrionAnimUserWidget::StaticClass, TEXT("UUIOrionAnimUserWidget"), &Z_Registration_Info_UClass_UUIOrionAnimUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIOrionAnimUserWidget), 1836849730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_2036532442(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
