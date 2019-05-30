// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_BP_Test__pf2481680385_generated_h
#error "BP_Test__pf2481680385.generated.h already included, missing '#pragma once' in BP_Test__pf2481680385.h"
#endif
#define NATIVIZEDASSETS_BP_Test__pf2481680385_generated_h

#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
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


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
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


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_EVENT_PARMS \
	struct BP_Test_C__pf2481680385_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_Test_C__pf2481680385(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Test_C__pf2481680385(); \
public: \
	DECLARE_CLASS(ABP_Test_C__pf2481680385, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Vehicles/Test/BP_Test"), NO_API) \
	DECLARE_SERIALIZER(ABP_Test_C__pf2481680385) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABP_Test_C__pf2481680385(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Test_C__pf2481680385(); \
public: \
	DECLARE_CLASS(ABP_Test_C__pf2481680385, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Vehicles/Test/BP_Test"), NO_API) \
	DECLARE_SERIALIZER(ABP_Test_C__pf2481680385) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_Test_C__pf2481680385(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Test_C__pf2481680385) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Test_C__pf2481680385); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Test_C__pf2481680385); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Test_C__pf2481680385(ABP_Test_C__pf2481680385&&); \
	NO_API ABP_Test_C__pf2481680385(const ABP_Test_C__pf2481680385&); \
public:


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Test_C__pf2481680385(ABP_Test_C__pf2481680385&&); \
	NO_API ABP_Test_C__pf2481680385(const ABP_Test_C__pf2481680385&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Test_C__pf2481680385); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Test_C__pf2481680385); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Test_C__pf2481680385)


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_PRIVATE_PROPERTY_OFFSET
#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_13_PROLOG \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_EVENT_PARMS


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_PRIVATE_PROPERTY_OFFSET \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_RPC_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_CALLBACK_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_INCLASS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_PRIVATE_PROPERTY_OFFSET \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_CALLBACK_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_INCLASS_NO_PURE_DECLS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Test__pf2481680385_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
