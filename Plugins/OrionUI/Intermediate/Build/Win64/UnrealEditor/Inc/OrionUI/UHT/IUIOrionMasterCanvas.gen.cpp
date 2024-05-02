// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionUI/Public/UI/Interfaces/IUIOrionMasterCanvas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUIOrionMasterCanvas() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionMasterCanvas();
	ORIONUI_API UClass* Z_Construct_UClass_UUIOrionMasterCanvas_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OrionUI();
// End Cross Module References
	void UUIOrionMasterCanvas::StaticRegisterNativesUUIOrionMasterCanvas()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIOrionMasterCanvas);
	UClass* Z_Construct_UClass_UUIOrionMasterCanvas_NoRegister()
	{
		return UUIOrionMasterCanvas::StaticClass();
	}
	struct Z_Construct_UClass_UUIOrionMasterCanvas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIOrionMasterCanvas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OrionUI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionMasterCanvas_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIOrionMasterCanvas_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Interfaces/IUIOrionMasterCanvas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIOrionMasterCanvas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUIOrionMasterCanvas>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIOrionMasterCanvas_Statics::ClassParams = {
		&UUIOrionMasterCanvas::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIOrionMasterCanvas_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIOrionMasterCanvas_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUIOrionMasterCanvas()
	{
		if (!Z_Registration_Info_UClass_UUIOrionMasterCanvas.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIOrionMasterCanvas.OuterSingleton, Z_Construct_UClass_UUIOrionMasterCanvas_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIOrionMasterCanvas.OuterSingleton;
	}
	template<> ORIONUI_API UClass* StaticClass<UUIOrionMasterCanvas>()
	{
		return UUIOrionMasterCanvas::StaticClass();
	}
	UUIOrionMasterCanvas::UUIOrionMasterCanvas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIOrionMasterCanvas);
	UUIOrionMasterCanvas::~UUIOrionMasterCanvas() {}
	struct Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionMasterCanvas_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionMasterCanvas_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIOrionMasterCanvas, UUIOrionMasterCanvas::StaticClass, TEXT("UUIOrionMasterCanvas"), &Z_Registration_Info_UClass_UUIOrionMasterCanvas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIOrionMasterCanvas), 1989462224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionMasterCanvas_h_805089512(TEXT("/Script/OrionUI"),
		Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionMasterCanvas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionMasterCanvas_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
