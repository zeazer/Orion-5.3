// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UOrionMenuWidget;
class APlayerController;
class UObject;
class UOrionMenuWidget;
class UOrionTooltipWidget;
class UOrionUIControllerBase;
class UUserWidget;
#ifdef ORIONUI_OrionBlueprintFunctionLibrary_generated_h
#error "OrionBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in OrionBlueprintFunctionLibrary.h"
#endif
#define ORIONUI_OrionBlueprintFunctionLibrary_generated_h

#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_12_DELEGATE \
ORIONUI_API void FOnUserWidgetCreated_DelegateWrapper(const FScriptDelegate& OnUserWidgetCreated, UUserWidget* UserWidgetCreated);


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_SPARSE_DATA
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateToolTipWidget); \
	DECLARE_FUNCTION(execBetterProjectWorldLocationToWidgetPosition); \
	DECLARE_FUNCTION(execGetUIController); \
	DECLARE_FUNCTION(execClearScreen); \
	DECLARE_FUNCTION(execHideScreen); \
	DECLARE_FUNCTION(execDisplayScreen); \
	DECLARE_FUNCTION(execGetMenuWidgets);


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOrionBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOrionBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), NO_API) \
	DECLARE_SERIALIZER(UOrionBlueprintFunctionLibrary)


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOrionBlueprintFunctionLibrary(UOrionBlueprintFunctionLibrary&&); \
	NO_API UOrionBlueprintFunctionLibrary(const UOrionBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionBlueprintFunctionLibrary) \
	NO_API virtual ~UOrionBlueprintFunctionLibrary();


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_14_PROLOG
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_SPARSE_DATA \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ORIONUI_API UClass* StaticClass<class UOrionBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
