// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef NATIVIZEDASSETS_BP_Master_Vehicle__pf3373537038_generated_h
#error "BP_Master_Vehicle__pf3373537038.generated.h already included, missing '#pragma once' in BP_Master_Vehicle__pf3373537038.h"
#endif
#define NATIVIZEDASSETS_BP_Master_Vehicle__pf3373537038_generated_h

#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_RPC_WRAPPERS \
	virtual void bpf__Server_ExitxVehicle__pfT_Implementation(); \
	virtual void bpf__Server_Steering__pf_Implementation(float bpp__AxisxValue__pfT); \
	virtual void bpf__Server_Throttle__pf_Implementation(float bpp__AxisxValue__pfT); \
	virtual void bpf__Server_Brake__pf_Implementation(float bpp__AxisxValue__pfT); \
	virtual void bpf__Server_Handbrake__pf_Implementation(bool bpp__ApplyxHandbrake__pfT); \
	virtual void bpf__Server_ReversexGear__pfT_Implementation(bool bpp__ReversexGear__pfT); \
	virtual void bpf__Server_HeadLights__pf_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__AirxDrag__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__AirxDrag__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DetectxinxAir__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__DetectxinxAir__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LoadxVariables__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__LoadxVariables__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SavexVariables__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SavexVariables__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CalculatexMilleage__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__CalculatexMilleage__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexSounds__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UpdatexSounds__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_IsxReversexGear__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_IsxReversexGear__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__TogglexHeadLights__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__TogglexHeadLights__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_IsxBraking__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_IsxBraking__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_HeadLightsxOn__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_HeadLightsxOn__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexLightxMaterial__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UpdatexLightxMaterial__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__StallxEngine__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__StallxEngine__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_HandBrakexOn__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_HandBrakexOn__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_RPM__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_RPM__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Initialize__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Initialize__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_SteeringxAngle__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_SteeringxAngle__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReversexGear__pfT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__ReversexGear__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReversexGear__pfT(Z_Param_bpp__ReversexGear__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UnPossesxVehicle__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UnPossesxVehicle__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DetectxDrifting__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__DetectxDrifting__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CalculatexSpeed__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__CalculatexSpeed__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__AdditionalxGravityxxxDriverxHelper__pfTTETT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__AdditionalxGravityxxxDriverxHelper__pfTTETT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__PossessxVehicle__pfT) \
	{ \
		P_GET_OBJECT(AController,Z_Param_bpp__NewxController__pfT); \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__IsxControlledxbyxPlayer__pfTTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__PossessxVehicle__pfT(Z_Param_bpp__NewxController__pfT,Z_Param_Out_bpp__IsxControlledxbyxPlayer__pfTTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexSuspension__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UpdatexSuspension__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DebugxWidget__pfT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__Show__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__DebugxWidget__pfT(Z_Param_bpp__Show__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxHandBrakexInput__pfTT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__ApplyxHandBrake__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SetxHandBrakexInput__pfTT(Z_Param_bpp__ApplyxHandBrake__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxBrakexInput__pfTT) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SetxBrakexInput__pfTT(Z_Param_bpp__AxisxValue__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CreatexPhysicxconstraints__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__CreatexPhysicxconstraints__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ChangexView__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ChangexView__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ActivatexCamera__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ActivatexCamera__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CameraxDistance__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__CameraxDistance__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LookAround__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__LookxUp__pfT); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__LookxRight__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__LookAround__pf(Z_Param_bpp__LookxUp__pfT,Z_Param_bpp__LookxRight__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxThrottlexInput__pfTT) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SetxThrottlexInput__pfTT(Z_Param_bpp__AxisxValue__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxSteeringxInput__pfTT) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__SteeringxAxisxValue__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SetxSteeringxInput__pfTT(Z_Param_bpp__SteeringxAxisxValue__pfTT); \
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
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GearxChange__pfT) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__TargetxGear__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__GearxChange__pfT(Z_Param_bpp__TargetxGear__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Tick__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Tick__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Timer__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Timer__pf(); \
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
	DECLARE_FUNCTION(execbpf__Server_Steering__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Steering__pf_Implementation(Z_Param_bpp__AxisxValue__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Throttle__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Throttle__pf_Implementation(Z_Param_bpp__AxisxValue__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Brake__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Brake__pf_Implementation(Z_Param_bpp__AxisxValue__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Handbrake__pf) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__ApplyxHandbrake__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Handbrake__pf_Implementation(Z_Param_bpp__ApplyxHandbrake__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_ReversexGear__pfT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__ReversexGear__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_ReversexGear__pfT_Implementation(Z_Param_bpp__ReversexGear__pfT); \
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
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_HeadLights__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_HeadLights__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DrowningxTimer__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__DrowningxTimer__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveEndPlay__pf) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__EndPlayReason__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveEndPlay__pf(EEndPlayReason::Type(Z_Param_bpp__EndPlayReason__pf)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GearxUp__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__GearxUp__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GearxDown__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__GearxDown__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Master_Vehicle__pf_3) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_3(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Master_Vehicle__pf_1) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_1(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Master_Vehicle__pf_0) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_0(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__Server_ExitxVehicle__pfT_Implementation(); \
	virtual void bpf__Server_Steering__pf_Implementation(float bpp__AxisxValue__pfT); \
	virtual void bpf__Server_Throttle__pf_Implementation(float bpp__AxisxValue__pfT); \
	virtual void bpf__Server_Brake__pf_Implementation(float bpp__AxisxValue__pfT); \
	virtual void bpf__Server_Handbrake__pf_Implementation(bool bpp__ApplyxHandbrake__pfT); \
	virtual void bpf__Server_ReversexGear__pfT_Implementation(bool bpp__ReversexGear__pfT); \
	virtual void bpf__Server_HeadLights__pf_Implementation(); \
 \
	DECLARE_FUNCTION(execbpf__AirxDrag__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__AirxDrag__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DetectxinxAir__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__DetectxinxAir__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LoadxVariables__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__LoadxVariables__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SavexVariables__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SavexVariables__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CalculatexMilleage__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__CalculatexMilleage__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexSounds__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UpdatexSounds__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_IsxReversexGear__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_IsxReversexGear__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__TogglexHeadLights__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__TogglexHeadLights__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_IsxBraking__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_IsxBraking__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_HeadLightsxOn__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_HeadLightsxOn__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexLightxMaterial__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UpdatexLightxMaterial__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__StallxEngine__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__StallxEngine__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_HandBrakexOn__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_HandBrakexOn__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_RPM__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_RPM__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Initialize__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Initialize__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_SteeringxAngle__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_SteeringxAngle__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReversexGear__pfT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__ReversexGear__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReversexGear__pfT(Z_Param_bpp__ReversexGear__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UnPossesxVehicle__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UnPossesxVehicle__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DetectxDrifting__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__DetectxDrifting__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CalculatexSpeed__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__CalculatexSpeed__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__AdditionalxGravityxxxDriverxHelper__pfTTETT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__AdditionalxGravityxxxDriverxHelper__pfTTETT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__PossessxVehicle__pfT) \
	{ \
		P_GET_OBJECT(AController,Z_Param_bpp__NewxController__pfT); \
		P_GET_UBOOL_REF(Z_Param_Out_bpp__IsxControlledxbyxPlayer__pfTTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__PossessxVehicle__pfT(Z_Param_bpp__NewxController__pfT,Z_Param_Out_bpp__IsxControlledxbyxPlayer__pfTTT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UpdatexSuspension__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UpdatexSuspension__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DebugxWidget__pfT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__Show__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__DebugxWidget__pfT(Z_Param_bpp__Show__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxHandBrakexInput__pfTT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__ApplyxHandBrake__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SetxHandBrakexInput__pfTT(Z_Param_bpp__ApplyxHandBrake__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxBrakexInput__pfTT) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SetxBrakexInput__pfTT(Z_Param_bpp__AxisxValue__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CreatexPhysicxconstraints__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__CreatexPhysicxconstraints__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ChangexView__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ChangexView__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ActivatexCamera__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ActivatexCamera__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__CameraxDistance__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__CameraxDistance__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__LookAround__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__LookxUp__pfT); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__LookxRight__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__LookAround__pf(Z_Param_bpp__LookxUp__pfT,Z_Param_bpp__LookxRight__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxThrottlexInput__pfTT) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SetxThrottlexInput__pfTT(Z_Param_bpp__AxisxValue__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SetxSteeringxInput__pfTT) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__SteeringxAxisxValue__pfTT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SetxSteeringxInput__pfTT(Z_Param_bpp__SteeringxAxisxValue__pfTT); \
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
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GearxChange__pfT) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__TargetxGear__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__GearxChange__pfT(Z_Param_bpp__TargetxGear__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Tick__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Tick__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Timer__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Timer__pf(); \
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
	DECLARE_FUNCTION(execbpf__Server_Steering__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Steering__pf_Implementation(Z_Param_bpp__AxisxValue__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Throttle__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Throttle__pf_Implementation(Z_Param_bpp__AxisxValue__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Brake__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Brake__pf_Implementation(Z_Param_bpp__AxisxValue__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Handbrake__pf) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__ApplyxHandbrake__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Handbrake__pf_Implementation(Z_Param_bpp__ApplyxHandbrake__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_ReversexGear__pfT) \
	{ \
		P_GET_UBOOL(Z_Param_bpp__ReversexGear__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_ReversexGear__pfT_Implementation(Z_Param_bpp__ReversexGear__pfT); \
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
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_HeadLights__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_HeadLights__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DrowningxTimer__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__DrowningxTimer__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveEndPlay__pf) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_bpp__EndPlayReason__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveEndPlay__pf(EEndPlayReason::Type(Z_Param_bpp__EndPlayReason__pf)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GearxUp__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__GearxUp__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__GearxDown__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__GearxDown__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Master_Vehicle__pf_3) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_3(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Master_Vehicle__pf_1) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_1(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Master_Vehicle__pf_0) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__EntryPoint__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_0(Z_Param_bpp__EntryPoint__pf); \
		P_NATIVE_END; \
	}


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_EVENT_PARMS \
	struct BP_Master_Vehicle_C__pf3373537038_eventbpf__ReceiveEndPlay__pf_Parms \
	{ \
		TEnumAsByte<EEndPlayReason::Type> bpp__EndPlayReason__pf; \
	}; \
	struct BP_Master_Vehicle_C__pf3373537038_eventbpf__ReceivePossessed__pf_Parms \
	{ \
		AController* bpp__NewController__pf; \
	}; \
	struct BP_Master_Vehicle_C__pf3373537038_eventbpf__Server_Brake__pf_Parms \
	{ \
		float bpp__AxisxValue__pfT; \
	}; \
	struct BP_Master_Vehicle_C__pf3373537038_eventbpf__Server_Handbrake__pf_Parms \
	{ \
		bool bpp__ApplyxHandbrake__pfT; \
	}; \
	struct BP_Master_Vehicle_C__pf3373537038_eventbpf__Server_ReversexGear__pfT_Parms \
	{ \
		bool bpp__ReversexGear__pfT; \
	}; \
	struct BP_Master_Vehicle_C__pf3373537038_eventbpf__Server_Steering__pf_Parms \
	{ \
		float bpp__AxisxValue__pfT; \
	}; \
	struct BP_Master_Vehicle_C__pf3373537038_eventbpf__Server_Throttle__pf_Parms \
	{ \
		float bpp__AxisxValue__pfT; \
	};


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf); \
 \
	void eventbpf__ReceivePossessed__pf(AController* bpp__NewController__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_Master_Vehicle_C__pf3373537038(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Master_Vehicle_C__pf3373537038(); \
public: \
	DECLARE_CLASS(ABP_Master_Vehicle_C__pf3373537038, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Vehicles/00_Master_Vehicle/BP_Master_Vehicle"), NO_API) \
	DECLARE_SERIALIZER(ABP_Master_Vehicle_C__pf3373537038) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_INCLASS \
private: \
	static void StaticRegisterNativesABP_Master_Vehicle_C__pf3373537038(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Master_Vehicle_C__pf3373537038(); \
public: \
	DECLARE_CLASS(ABP_Master_Vehicle_C__pf3373537038, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Vehicles/00_Master_Vehicle/BP_Master_Vehicle"), NO_API) \
	DECLARE_SERIALIZER(ABP_Master_Vehicle_C__pf3373537038) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_Master_Vehicle_C__pf3373537038(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Master_Vehicle_C__pf3373537038) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Master_Vehicle_C__pf3373537038); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Master_Vehicle_C__pf3373537038); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Master_Vehicle_C__pf3373537038(ABP_Master_Vehicle_C__pf3373537038&&); \
	NO_API ABP_Master_Vehicle_C__pf3373537038(const ABP_Master_Vehicle_C__pf3373537038&); \
public:


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Master_Vehicle_C__pf3373537038(ABP_Master_Vehicle_C__pf3373537038&&); \
	NO_API ABP_Master_Vehicle_C__pf3373537038(const ABP_Master_Vehicle_C__pf3373537038&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Master_Vehicle_C__pf3373537038); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Master_Vehicle_C__pf3373537038); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Master_Vehicle_C__pf3373537038)


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_PRIVATE_PROPERTY_OFFSET
#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_26_PROLOG \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_EVENT_PARMS


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_PRIVATE_PROPERTY_OFFSET \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_RPC_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_CALLBACK_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_INCLASS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_PRIVATE_PROPERTY_OFFSET \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_CALLBACK_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_INCLASS_NO_PURE_DECLS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h_30_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Master_Vehicle__pf3373537038_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
