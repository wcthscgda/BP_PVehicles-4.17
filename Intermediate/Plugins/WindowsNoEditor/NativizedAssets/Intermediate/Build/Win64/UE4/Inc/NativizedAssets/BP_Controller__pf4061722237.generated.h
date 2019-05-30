// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef NATIVIZEDASSETS_BP_Controller__pf4061722237_generated_h
#error "BP_Controller__pf4061722237.generated.h already included, missing '#pragma once' in BP_Controller__pf4061722237.h"
#endif
#define NATIVIZEDASSETS_BP_Controller__pf4061722237_generated_h

#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Show_PlayerxHUD__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Show_PlayerxHUD__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Hide_PlayerxHUD__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Hide_PlayerxHUD__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Show_PausexMenu__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Show_PausexMenu__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Hide_PausexMenu__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Hide_PausexMenu__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	}


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Show_PlayerxHUD__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Show_PlayerxHUD__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Hide_PlayerxHUD__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Hide_PlayerxHUD__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Show_PausexMenu__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Show_PausexMenu__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Hide_PausexMenu__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Hide_PausexMenu__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	}


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_EVENT_PARMS \
	struct BP_Controller_C__pf4061722237_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_Controller_C__pf4061722237(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Controller_C__pf4061722237(); \
public: \
	DECLARE_CLASS(ABP_Controller_C__pf4061722237, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Game/Player/BP_Controller"), NO_API) \
	DECLARE_SERIALIZER(ABP_Controller_C__pf4061722237) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABP_Controller_C__pf4061722237(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Controller_C__pf4061722237(); \
public: \
	DECLARE_CLASS(ABP_Controller_C__pf4061722237, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Game/Player/BP_Controller"), NO_API) \
	DECLARE_SERIALIZER(ABP_Controller_C__pf4061722237) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_Controller_C__pf4061722237(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Controller_C__pf4061722237) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Controller_C__pf4061722237); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Controller_C__pf4061722237); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Controller_C__pf4061722237(ABP_Controller_C__pf4061722237&&); \
	NO_API ABP_Controller_C__pf4061722237(const ABP_Controller_C__pf4061722237&); \
public:


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Controller_C__pf4061722237(ABP_Controller_C__pf4061722237&&); \
	NO_API ABP_Controller_C__pf4061722237(const ABP_Controller_C__pf4061722237&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Controller_C__pf4061722237); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Controller_C__pf4061722237); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Controller_C__pf4061722237)


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_PRIVATE_PROPERTY_OFFSET
#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_9_PROLOG \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_EVENT_PARMS


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_PRIVATE_PROPERTY_OFFSET \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_RPC_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_CALLBACK_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_INCLASS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_PRIVATE_PROPERTY_OFFSET \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_CALLBACK_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_INCLASS_NO_PURE_DECLS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h_13_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Controller__pf4061722237_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
