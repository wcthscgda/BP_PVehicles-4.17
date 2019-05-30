// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UObject;
struct FKey;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FRotator;
class AController;
#ifdef NATIVIZEDASSETS_BP_Physic_Pawn__pf4061722237_generated_h
#error "BP_Physic_Pawn__pf4061722237.generated.h already included, missing '#pragma once' in BP_Physic_Pawn__pf4061722237.h"
#endif
#define NATIVIZEDASSETS_BP_Physic_Pawn__pf4061722237_generated_h

#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_RPC_WRAPPERS \
	virtual void bpf__Server_Tick__pf_Implementation(); \
	virtual void bpf__Server_Move__pf_Implementation(float bpp__ForwardxAxis__pfT, float bpp__RightxAxis__pfT); \
	virtual void bpf__Server_CameraxRotation__pfT_Implementation(FRotator bpp__NewParam__pf); \
	virtual void bpf__Server_Jump__pf_Implementation(); \
	virtual void bpf__Server_UnRagdoll__pf_Implementation(); \
	virtual void bpf__Server_DrivexVehicle__pfT_Implementation(UObject* bpp__Object__pf); \
	virtual void bpf__Server_PossessxPassenger__pfT_Implementation(UObject* bpp__Object__pf); \
 \
	DECLARE_FUNCTION(execbpf__Floatxinxwater__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Floatxinxwater__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_IsxSwimming__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_IsxSwimming__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SwitchxViewxMode__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SwitchxViewxMode__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Popxup__pfG) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__Duration__pf); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_bpp__Text__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Popxup__pfG(Z_Param_bpp__Duration__pf,Z_Param_Out_bpp__Text__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_Health__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_Health__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__IsxonxGroundx__pfTTzy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__IsxonxGroundx__pfTTzy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_IsxonxGround__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_IsxonxGround__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Move__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_GET_STRUCT(FVector,Z_Param_bpp__DirectionxVector__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Move__pf(Z_Param_bpp__AxisxValue__pfT,Z_Param_bpp__DirectionxVector__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Jump__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Jump__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UnxRagdoll__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UnxRagdoll__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Interact__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Interact__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__TriggerxRagdoll__pfT) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_bpp__Velocity__pf); \
		P_GET_PROPERTY(UNameProperty,Z_Param_bpp__BoneName__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__TriggerxRagdoll__pfT(Z_Param_bpp__Velocity__pf,Z_Param_bpp__BoneName__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__PossessxPassenger__pfT) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_bpp__Object__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__PossessxPassenger__pfT(Z_Param_bpp__Object__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DrivexVehicle__pfT) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_bpp__Object__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__DrivexVehicle__pfT(Z_Param_bpp__Object__pf); \
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
	DECLARE_FUNCTION(execbpf__InpActEvt_Interact_K2Node_InputActionEvent_5__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpActEvt_Interact_K2Node_InputActionEvent_5__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Jump_K2Node_InputActionEvent_4__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpActEvt_Jump_K2Node_InputActionEvent_4__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_ChangeView_K2Node_InputActionEvent_3__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpActEvt_ChangeView_K2Node_InputActionEvent_3__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__HitComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature__pf(Z_Param_bpp__HitComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf(Z_Param_bpp__AxisValue__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_60__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_60__pf(Z_Param_bpp__AxisValue__pf); \
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
	DECLARE_FUNCTION(execbpf__BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__HitComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature__pf(Z_Param_bpp__HitComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const); \
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
	DECLARE_FUNCTION(execbpf__Server_Tick__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Tick__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Move__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__ForwardxAxis__pfT); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__RightxAxis__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Move__pf_Implementation(Z_Param_bpp__ForwardxAxis__pfT,Z_Param_bpp__RightxAxis__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_129__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_129__pf(Z_Param_bpp__AxisValue__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_130__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_130__pf(Z_Param_bpp__AxisValue__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_CameraxRotation__pfT) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_bpp__NewParam__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_CameraxRotation__pfT_Implementation(Z_Param_bpp__NewParam__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Jump__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Jump__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_UnRagdoll__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_UnRagdoll__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_DrivexVehicle__pfT) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_bpp__Object__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_DrivexVehicle__pfT_Implementation(Z_Param_bpp__Object__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_PossessxPassenger__pfT) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_bpp__Object__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_PossessxPassenger__pfT_Implementation(Z_Param_bpp__Object__pf); \
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
	DECLARE_FUNCTION(execbpf__ReceiveUnpossessed__pf) \
	{ \
		P_GET_OBJECT(AController,Z_Param_bpp__OldController__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveUnpossessed__pf(Z_Param_bpp__OldController__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pfT) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pfT(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pfT) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pfT(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf); \
		P_NATIVE_END; \
	}


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void bpf__Server_Tick__pf_Implementation(); \
	virtual void bpf__Server_Move__pf_Implementation(float bpp__ForwardxAxis__pfT, float bpp__RightxAxis__pfT); \
	virtual void bpf__Server_CameraxRotation__pfT_Implementation(FRotator bpp__NewParam__pf); \
	virtual void bpf__Server_Jump__pf_Implementation(); \
	virtual void bpf__Server_UnRagdoll__pf_Implementation(); \
	virtual void bpf__Server_DrivexVehicle__pfT_Implementation(UObject* bpp__Object__pf); \
	virtual void bpf__Server_PossessxPassenger__pfT_Implementation(UObject* bpp__Object__pf); \
 \
	DECLARE_FUNCTION(execbpf__Floatxinxwater__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Floatxinxwater__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_IsxSwimming__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_IsxSwimming__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__SwitchxViewxMode__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__SwitchxViewxMode__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Popxup__pfG) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__Duration__pf); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_bpp__Text__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Popxup__pfG(Z_Param_bpp__Duration__pf,Z_Param_Out_bpp__Text__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_Health__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_Health__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__IsxonxGroundx__pfTTzy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__IsxonxGroundx__pfTTzy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__OnRep_IsxonxGround__pfTT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__OnRep_IsxonxGround__pfTT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Move__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisxValue__pfT); \
		P_GET_STRUCT(FVector,Z_Param_bpp__DirectionxVector__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Move__pf(Z_Param_bpp__AxisxValue__pfT,Z_Param_bpp__DirectionxVector__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Jump__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Jump__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__UnxRagdoll__pfT) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__UnxRagdoll__pfT(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Interact__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Interact__pf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__TriggerxRagdoll__pfT) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_bpp__Velocity__pf); \
		P_GET_PROPERTY(UNameProperty,Z_Param_bpp__BoneName__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__TriggerxRagdoll__pfT(Z_Param_bpp__Velocity__pf,Z_Param_bpp__BoneName__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__PossessxPassenger__pfT) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_bpp__Object__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__PossessxPassenger__pfT(Z_Param_bpp__Object__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__DrivexVehicle__pfT) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_bpp__Object__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__DrivexVehicle__pfT(Z_Param_bpp__Object__pf); \
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
	DECLARE_FUNCTION(execbpf__InpActEvt_Interact_K2Node_InputActionEvent_5__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpActEvt_Interact_K2Node_InputActionEvent_5__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_Jump_K2Node_InputActionEvent_4__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpActEvt_Jump_K2Node_InputActionEvent_4__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_ChangeView_K2Node_InputActionEvent_3__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpActEvt_ChangeView_K2Node_InputActionEvent_3__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__HitComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature__pf(Z_Param_bpp__HitComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf(Z_Param_bpp__AxisValue__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_60__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_60__pf(Z_Param_bpp__AxisValue__pf); \
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
	DECLARE_FUNCTION(execbpf__BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature__pf) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__HitComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature__pf(Z_Param_bpp__HitComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const); \
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
	DECLARE_FUNCTION(execbpf__Server_Tick__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Tick__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Move__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__ForwardxAxis__pfT); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__RightxAxis__pfT); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Move__pf_Implementation(Z_Param_bpp__ForwardxAxis__pfT,Z_Param_bpp__RightxAxis__pfT); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_129__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_129__pf(Z_Param_bpp__AxisValue__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_130__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__AxisValue__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_130__pf(Z_Param_bpp__AxisValue__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_CameraxRotation__pfT) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_bpp__NewParam__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_CameraxRotation__pfT_Implementation(Z_Param_bpp__NewParam__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_Jump__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_Jump__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_UnRagdoll__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_UnRagdoll__pf_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_DrivexVehicle__pfT) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_bpp__Object__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_DrivexVehicle__pfT_Implementation(Z_Param_bpp__Object__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__Server_PossessxPassenger__pfT) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_bpp__Object__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__Server_PossessxPassenger__pfT_Implementation(Z_Param_bpp__Object__pf); \
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
	DECLARE_FUNCTION(execbpf__ReceiveUnpossessed__pf) \
	{ \
		P_GET_OBJECT(AController,Z_Param_bpp__OldController__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__ReceiveUnpossessed__pf(Z_Param_bpp__OldController__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pfT) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pfT(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pfT) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf); \
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bpp__OtherBodyIndex__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->bpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pfT(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf); \
		P_NATIVE_END; \
	}


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_EVENT_PARMS \
	struct BP_Physic_Pawn_C__pf4061722237_eventbpf__ReceivePossessed__pf_Parms \
	{ \
		AController* bpp__NewController__pf; \
	}; \
	struct BP_Physic_Pawn_C__pf4061722237_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	}; \
	struct BP_Physic_Pawn_C__pf4061722237_eventbpf__ReceiveUnpossessed__pf_Parms \
	{ \
		AController* bpp__OldController__pf; \
	}; \
	struct BP_Physic_Pawn_C__pf4061722237_eventbpf__Server_CameraxRotation__pfT_Parms \
	{ \
		FRotator bpp__NewParam__pf; \
	}; \
	struct BP_Physic_Pawn_C__pf4061722237_eventbpf__Server_DrivexVehicle__pfT_Parms \
	{ \
		UObject* bpp__Object__pf; \
	}; \
	struct BP_Physic_Pawn_C__pf4061722237_eventbpf__Server_Move__pf_Parms \
	{ \
		float bpp__ForwardxAxis__pfT; \
		float bpp__RightxAxis__pfT; \
	}; \
	struct BP_Physic_Pawn_C__pf4061722237_eventbpf__Server_PossessxPassenger__pfT_Parms \
	{ \
		UObject* bpp__Object__pf; \
	};


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceivePossessed__pf(AController* bpp__NewController__pf); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__ReceiveUnpossessed__pf(AController* bpp__OldController__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_Physic_Pawn_C__pf4061722237(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Physic_Pawn_C__pf4061722237(); \
public: \
	DECLARE_CLASS(ABP_Physic_Pawn_C__pf4061722237, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Player/BP_Physic_Pawn"), NO_API) \
	DECLARE_SERIALIZER(ABP_Physic_Pawn_C__pf4061722237) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABP_Physic_Pawn_C__pf4061722237(); \
	friend NATIVIZEDASSETS_API class UClass* Z_Construct_UClass_ABP_Physic_Pawn_C__pf4061722237(); \
public: \
	DECLARE_CLASS(ABP_Physic_Pawn_C__pf4061722237, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Game/Player/BP_Physic_Pawn"), NO_API) \
	DECLARE_SERIALIZER(ABP_Physic_Pawn_C__pf4061722237) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_Physic_Pawn_C__pf4061722237(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Physic_Pawn_C__pf4061722237) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Physic_Pawn_C__pf4061722237); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Physic_Pawn_C__pf4061722237); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Physic_Pawn_C__pf4061722237(ABP_Physic_Pawn_C__pf4061722237&&); \
	NO_API ABP_Physic_Pawn_C__pf4061722237(const ABP_Physic_Pawn_C__pf4061722237&); \
public:


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Physic_Pawn_C__pf4061722237(ABP_Physic_Pawn_C__pf4061722237&&); \
	NO_API ABP_Physic_Pawn_C__pf4061722237(const ABP_Physic_Pawn_C__pf4061722237&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Physic_Pawn_C__pf4061722237); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Physic_Pawn_C__pf4061722237); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Physic_Pawn_C__pf4061722237)


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_PRIVATE_PROPERTY_OFFSET
#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_18_PROLOG \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_EVENT_PARMS


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_PRIVATE_PROPERTY_OFFSET \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_RPC_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_CALLBACK_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_INCLASS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_PRIVATE_PROPERTY_OFFSET \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_CALLBACK_WRAPPERS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_INCLASS_NO_PURE_DECLS \
	BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BP_PVehicles_4_17_Intermediate_Plugins_WindowsNoEditor_NativizedAssets_Source_NativizedAssets_Public_BP_Physic_Pawn__pf4061722237_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
