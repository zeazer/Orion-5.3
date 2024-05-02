// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Interfaces/IUIOrionAnimUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOrionAnimMode : int32;
#ifdef ORIONUI_IUIOrionAnimUserWidget_generated_h
#error "IUIOrionAnimUserWidget.generated.h already included, missing '#pragma once' in IUIOrionAnimUserWidget.h"
#endif
#define ORIONUI_IUIOrionAnimUserWidget_generated_h

#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_SPARSE_DATA
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AnimFunction_Implementation(EOrionAnimMode AnimMode) {}; \
 \
	DECLARE_FUNCTION(execAnimFunction);


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_CALLBACK_WRAPPERS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ORIONUI_API UUIOrionAnimUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ORIONUI_API UUIOrionAnimUserWidget(UUIOrionAnimUserWidget&&); \
	ORIONUI_API UUIOrionAnimUserWidget(const UUIOrionAnimUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ORIONUI_API, UUIOrionAnimUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIOrionAnimUserWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIOrionAnimUserWidget) \
	ORIONUI_API virtual ~UUIOrionAnimUserWidget();


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUIOrionAnimUserWidget(); \
	friend struct Z_Construct_UClass_UUIOrionAnimUserWidget_Statics; \
public: \
	DECLARE_CLASS(UUIOrionAnimUserWidget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OrionUI"), ORIONUI_API) \
	DECLARE_SERIALIZER(UUIOrionAnimUserWidget)


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUIOrionAnimUserWidget() {} \
public: \
	typedef UUIOrionAnimUserWidget UClassType; \
	typedef IUIOrionAnimUserWidget ThisClass; \
	static void Execute_AnimFunction(UObject* O, EOrionAnimMode AnimMode); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_15_PROLOG
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_SPARSE_DATA \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_CALLBACK_WRAPPERS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ORIONUI_API UClass* StaticClass<class UUIOrionAnimUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Interfaces_IUIOrionAnimUserWidget_h


#define FOREACH_ENUM_EORIONANIMMODE(op) \
	op(EOrionAnimMode::InAnim) \
	op(EOrionAnimMode::OutAnim) 

enum class EOrionAnimMode;
template<> struct TIsUEnumClass<EOrionAnimMode> { enum { Value = true }; };
template<> ORIONUI_API UEnum* StaticEnum<EOrionAnimMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
