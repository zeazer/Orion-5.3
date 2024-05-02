// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Widgets/OrionViewControllerWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef ORIONUI_OrionViewControllerWidget_generated_h
#error "OrionViewControllerWidget.generated.h already included, missing '#pragma once' in OrionViewControllerWidget.h"
#endif
#define ORIONUI_OrionViewControllerWidget_generated_h

#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_SPARSE_DATA
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLoadComplete); \
	DECLARE_FUNCTION(execGetActiveView); \
	DECLARE_FUNCTION(execForceUpdate);


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionViewControllerWidget(); \
	friend struct Z_Construct_UClass_UOrionViewControllerWidget_Statics; \
public: \
	DECLARE_CLASS(UOrionViewControllerWidget, UOrionUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), NO_API) \
	DECLARE_SERIALIZER(UOrionViewControllerWidget)


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrionViewControllerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOrionViewControllerWidget(UOrionViewControllerWidget&&); \
	NO_API UOrionViewControllerWidget(const UOrionViewControllerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionViewControllerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionViewControllerWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrionViewControllerWidget) \
	NO_API virtual ~UOrionViewControllerWidget();


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_20_PROLOG
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_SPARSE_DATA \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ORIONUI_API UClass* StaticClass<class UOrionViewControllerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Widgets_OrionViewControllerWidget_h


#define FOREACH_ENUM_EVIEWDATAMODE(op) \
	op(EViewDataMode::ViewData) \
	op(EViewDataMode::DataTable) 

enum class EViewDataMode;
template<> struct TIsUEnumClass<EViewDataMode> { enum { Value = true }; };
template<> ORIONUI_API UEnum* StaticEnum<EViewDataMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
