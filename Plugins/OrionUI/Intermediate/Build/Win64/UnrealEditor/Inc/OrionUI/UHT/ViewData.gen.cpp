// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Structs/ViewData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ORIONUI_API UClass* Z_Construct_UClass_UViewData();
	ORIONUI_API UClass* Z_Construct_UClass_UViewData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	void UViewData::StaticRegisterNativesUViewData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewData);
	UClass* Z_Construct_UClass_UViewData_NoRegister()
	{
		return UViewData::StaticClass();
	}
	struct Z_Construct_UClass_UViewData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/Structs/ViewData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Structs/ViewData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewData_Statics::ClassParams = {
		&UViewData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewData_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewData_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UViewData()
	{
		if (!Z_Registration_Info_UClass_UViewData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewData.OuterSingleton, Z_Construct_UClass_UViewData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewData.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UViewData>()
	{
		return UViewData::StaticClass();
	}
	UViewData::UViewData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewData);
	UViewData::~UViewData() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewData, UViewData::StaticClass, TEXT("UViewData"), &Z_Registration_Info_UClass_UViewData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewData), 720892642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h_3220890557(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Structs_ViewData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
