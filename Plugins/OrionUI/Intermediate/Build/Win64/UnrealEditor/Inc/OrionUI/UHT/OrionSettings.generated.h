// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OrionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ORIONUI_OrionSettings_generated_h
#error "OrionSettings.generated.h already included, missing '#pragma once' in OrionSettings.h"
#endif
#define ORIONUI_OrionSettings_generated_h

#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_SPARSE_DATA
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrionSettings(); \
	friend struct Z_Construct_UClass_UOrionSettings_Statics; \
public: \
	DECLARE_CLASS(UOrionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OrionUI"), NO_API) \
	DECLARE_SERIALIZER(UOrionSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOrionSettings(UOrionSettings&&); \
	NO_API UOrionSettings(const UOrionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrionSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrionSettings) \
	NO_API virtual ~UOrionSettings();


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_18_PROLOG
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_SPARSE_DATA \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ORIONUI_API UClass* StaticClass<class UOrionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_OrionSettings_h


#define FOREACH_ENUM_EVIEWTYPE(op) \
	op(PC) \
	op(PS5) \
	op(XBOXONE) \
	op(COUNT) 

enum EViewType : uint8;
template<> ORIONUI_API UEnum* StaticEnum<EViewType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
