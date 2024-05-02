// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Async/PoolAsyncActionLoop.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOrionUserWidget;
class UPoolAsyncActionLoop;
#ifdef ORIONUI_PoolAsyncActionLoop_generated_h
#error "PoolAsyncActionLoop.generated.h already included, missing '#pragma once' in PoolAsyncActionLoop.h"
#endif
#define ORIONUI_PoolAsyncActionLoop_generated_h

#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_10_DELEGATE \
ORIONUI_API void FPoolLoopOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PoolLoopOutputPin, UOrionUserWidget* OrionUserWidget, int32 IndexCount);


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_SPARSE_DATA
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInternalCompleted); \
	DECLARE_FUNCTION(execInternalTick); \
	DECLARE_FUNCTION(execPoolLoopAsyncNode);


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_ACCESSORS
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoolAsyncActionLoop(); \
	friend struct Z_Construct_UClass_UPoolAsyncActionLoop_Statics; \
public: \
	DECLARE_CLASS(UPoolAsyncActionLoop, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OrionUI"), NO_API) \
	DECLARE_SERIALIZER(UPoolAsyncActionLoop)


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolAsyncActionLoop(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoolAsyncActionLoop(UPoolAsyncActionLoop&&); \
	NO_API UPoolAsyncActionLoop(const UPoolAsyncActionLoop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolAsyncActionLoop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolAsyncActionLoop); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolAsyncActionLoop) \
	NO_API virtual ~UPoolAsyncActionLoop();


#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_14_PROLOG
#define FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_SPARSE_DATA \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_ACCESSORS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ORIONUI_API UClass* StaticClass<class UPoolAsyncActionLoop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Dennis_Documents_Games_Orion_5_3_Plugins_OrionUI_Source_OrionUI_Public_UI_Async_PoolAsyncActionLoop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
