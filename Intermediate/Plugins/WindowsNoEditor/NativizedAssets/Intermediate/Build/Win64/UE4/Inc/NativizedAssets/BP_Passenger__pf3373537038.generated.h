// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
class AController;
#ifdef NATIVIZEDASSETS_BP_Passenger__pf3373537038_generated_h
#error "BP_Passenger__pf3373537038.generated.h already included, missing '#pragma once' in BP_Passenger__pf3373537038.h"
#endif
#define NATIVIZEDASSETS_BP_Passenger__pf3373537038_generated_h

#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_RPC_WRAPPERS \
	virtual void bpf__Server_ExitxVehicle__pfT_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__ExitxVehicle__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ExitxVehicle__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LookxAround__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__LookxAround__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf); \
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
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_ExitxVehicle__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_ExitxVehicle__pfT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceivePossessed__pf) \
	{ \
		P_GET_OBJECT(AController,Z_Param_bpp__NewController__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceivePossessed__pf(Z_Param_bpp__NewController__pf); \
		P_NATIVE_END; \
	}


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__Server_ExitxVehicle__pfT_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__ExitxVehicle__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ExitxVehicle__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LookxAround__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__LookxAround__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UserConstructionScript__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf); \
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
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_ExitxVehicle__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_ExitxVehicle__pfT_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceivePossessed__pf) \
	{ \
		P_GET_OBJECT(AController,Z_Param_bpp__NewController__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceivePossessed__pf(Z_Param_bpp__NewController__pf); \
		P_NATIVE_END; \
	}


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_EVENT_PARMS \
	struct BP_Passenger_C__pf3373537038_eventbpf__ReceivePossessed__pf_Parms \
	{ \
		AController* bpp__NewController__pf; \
	}; \
	struct BP_Passenger_C__pf3373537038_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_CALLBACK_WRAPPERS \
	void eventbpf__ReceivePossessed__pf(AController* bpp__NewController__pf); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_Passenger_C__pf3373537038(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Passenger_C__pf3373537038(); \
public: \
	DECLARE_CLASS(ABP_Passenger_C__pf3373537038, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Vehicles/00_Master_Vehicle/BP_Passenger"), NO_API) \
	DECLARE_SERIALIZER(ABP_Passenger_C__pf3373537038) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABP_Passenger_C__pf3373537038(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Passenger_C__pf3373537038(); \
public: \
	DECLARE_CLASS(ABP_Passenger_C__pf3373537038, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Vehicles/00_Master_Vehicle/BP_Passenger"), NO_API) \
	DECLARE_SERIALIZER(ABP_Passenger_C__pf3373537038) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_Passenger_C__pf3373537038(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Passenger_C__pf3373537038) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Passenger_C__pf3373537038); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Passenger_C__pf3373537038); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Passenger_C__pf3373537038(ABP_Passenger_C__pf3373537038&&); \
	NO_API ABP_Passenger_C__pf3373537038(const ABP_Passenger_C__pf3373537038&); \
public:


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Passenger_C__pf3373537038(ABP_Passenger_C__pf3373537038&&); \
	NO_API ABP_Passenger_C__pf3373537038(const ABP_Passenger_C__pf3373537038&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Passenger_C__pf3373537038); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Passenger_C__pf3373537038); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Passenger_C__pf3373537038)


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_PRIVATE_PROPERTY_OFFSET
#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_13_PROLOG \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_EVENT_PARMS


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_PRIVATE_PROPERTY_OFFSET \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_RPC_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_CALLBACK_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_INCLASS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_PRIVATE_PROPERTY_OFFSET \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_CALLBACK_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_INCLASS_NO_PURE_DECLS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Passenger__pf3373537038_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
