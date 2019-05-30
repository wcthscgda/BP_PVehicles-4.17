#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class UPrimitiveComponent;
class AActor;
class UCapsuleComponent;
class UCameraComponent;
class USpringArmComponent;
class UAudioComponent;
class USkeletalMeshComponent;
class ABP_Controller_C__pf4061722237;
class UObject;
class AController;
#include "BP_Physic_Pawn__pf4061722237.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Player/BP_Physic_Pawn.BP_Physic_Pawn_C", OverrideNativeName="BP_Physic_Pawn_C"))
class ABP_Physic_Pawn_C__pf4061722237 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Swim Capsule"))
	UCapsuleComponent* bpv__SwimxCapsule__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TP_Camera"))
	UCameraComponent* bpv__TP_Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TP_SpringArm"))
	USpringArmComponent* bpv__TP_SpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TP_Camera_Root"))
	USpringArmComponent* bpv__TP_Camera_Root__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FP_Camera_Root"))
	USpringArmComponent* bpv__FP_Camera_Root__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FP_Camera"))
	UCameraComponent* bpv__FP_Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FP_SpringArm"))
	USpringArmComponent* bpv__FP_SpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Audio"))
	UAudioComponent* bpv__Audio__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SkeletalMesh"))
	USkeletalMeshComponent* bpv__SkeletalMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Capsule"))
	UCapsuleComponent* bpv__Capsule__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="BP Controller", Category="Default", OverrideNativeName="BP_Controller"))
	ABP_Controller_C__pf4061722237* bpv__BP_Controller__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Is Alive", Category="Default", OverrideNativeName="Is Alive"))
	bool bpv__IsxAlive__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Is on Ground", meta=(DisplayName="Is On Ground", Category="Default", OverrideNativeName="Is on Ground"))
	bool bpv__IsxonxGround__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Is Ragdoll", Category="Default", OverrideNativeName="Is Ragdoll"))
	bool bpv__IsxRagdoll__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Is Ragdoll Stable", Category="Default", OverrideNativeName="Is Ragdoll Stable"))
	bool bpv__IsxRagdollxStable__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Third Person", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Is ThirdPerson"))
	bool bpv__IsxThirdPerson__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Health", meta=(DisplayName="Health", Category="Default", OverrideNativeName="Health"))
	float bpv__Health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Camera Rot", Category="Default", OverrideNativeName="Camera Rot"))
	FRotator bpv__CameraxRot__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Is Swimming", meta=(DisplayName="Is Swimming", Category="Default", OverrideNativeName="Is Swimming"))
	bool bpv__IsxSwimming__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Water Volume", Category="Default", OverrideNativeName="Water Volume"))
	UPrimitiveComponent* bpv__WaterxVolume__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HitComponent2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_HitComponent2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor4"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NormalImpulse2"))
	FVector b0l__K2Node_ComponentBoundEvent_NormalImpulse2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Hit2"))
	FHitResult b0l__K2Node_ComponentBoundEvent_Hit2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue4"))
	float b0l__K2Node_InputAxisEvent_AxisValue4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue3"))
	float b0l__K2Node_InputAxisEvent_AxisValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HitComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor3"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NormalImpulse"))
	FVector b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Hit"))
	FHitResult b0l__K2Node_ComponentBoundEvent_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b0l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Forward_Axis"))
	float b0l__K2Node_CustomEvent_Forward_Axis__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Right_Axis"))
	float b0l__K2Node_CustomEvent_Right_Axis__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue2"))
	float b0l__K2Node_InputAxisEvent_AxisValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key3"))
	FKey b0l__K2Node_InputActionEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewParam"))
	FRotator b0l__K2Node_CustomEvent_NewParam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll2"))
	float b0l__CallFunc_BreakRotator_Roll2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch2"))
	float b0l__CallFunc_BreakRotator_Pitch2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw2"))
	float b0l__CallFunc_BreakRotator_Yaw2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X2"))
	float b0l__CallFunc_BreakVector_X2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y2"))
	float b0l__CallFunc_BreakVector_Y2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z2"))
	float b0l__CallFunc_BreakVector_Z2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Object2"))
	UObject* b0l__K2Node_CustomEvent_Object2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Object"))
	UObject* b0l__K2Node_CustomEvent_Object__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewController"))
	AController* b0l__K2Node_Event_NewController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Controller"))
	ABP_Controller_C__pf4061722237* b0l__K2Node_DynamicCast_AsBP_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OldController"))
	AController* b0l__K2Node_Event_OldController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b0l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor2"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex2"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable2"))
	FName b0l__Temp_name_Variable2__pf;
	ABP_Physic_Pawn_C__pf4061722237(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_21(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Torso Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pfT(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Torso Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pfT(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(DisplayName="Unpossessed", ToolTip="Event called when the Pawn is no longer possessed by a Controller.", CppFromBpEvent, OverrideNativeName="ReceiveUnpossessed"))
	void bpf__ReceiveUnpossessed__pf(AController* bpp__OldController__pf);
	UFUNCTION(meta=(DisplayName="Possessed", ToolTip="Event called when the Pawn is possessed by a Controller (normally only occurs on the server/standalone).", CppFromBpEvent, OverrideNativeName="ReceivePossessed"))
	void bpf__ReceivePossessed__pf(AController* bpp__NewController__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Possess Passenger"))
	virtual void bpf__Server_PossessxPassenger__pfT(UObject* bpp__Object__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Drive Vehicle"))
	virtual void bpf__Server_DrivexVehicle__pfT(UObject* bpp__Object__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_UnRagdoll"))
	virtual void bpf__Server_UnRagdoll__pf();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Jump"))
	virtual void bpf__Server_Jump__pf();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Camera Rotation"))
	virtual void bpf__Server_CameraxRotation__pfT(FRotator bpp__NewParam__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_130"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_130__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_129"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_129__pf(float bpp__AxisValue__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Move"))
	virtual void bpf__Server_Move__pf(float bpp__ForwardxAxis__pfT, float bpp__RightxAxis__pfT);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Tick"))
	virtual void bpf__Server_Tick__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature"))
	virtual void bpf__BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookRight_K2Node_InputAxisEvent_60"))
	virtual void bpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_60__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUp_K2Node_InputAxisEvent_40"))
	virtual void bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ChangeView_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_ChangeView_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Interact_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_Interact_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Drive Vehicle"))
	virtual void bpf__DrivexVehicle__pfT(UObject* bpp__Object__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Possess Passenger"))
	virtual void bpf__PossessxPassenger__pfT(UObject* bpp__Object__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Trigger Ragdoll"))
	virtual void bpf__TriggerxRagdoll__pfT(FVector bpp__Velocity__pf, FName bpp__BoneName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Interact"))
	virtual void bpf__Interact__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Un Ragdoll"))
	virtual void bpf__UnxRagdoll__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Jump"))
	virtual void bpf__Jump__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Move"))
	virtual void bpf__Move__pf(float bpp__AxisxValue__pfT, FVector bpp__DirectionxVector__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Is on Ground"))
	virtual void bpf__OnRep_IsxonxGround__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Is on Ground?"))
	virtual void bpf__IsxonxGroundx__pfTTzy();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Health"))
	virtual void bpf__OnRep_Health__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Pop-up"))
	virtual void bpf__Popxup__pfG(float bpp__Duration__pf, const FText& bpp__Text__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Switch View Mode"))
	virtual void bpf__SwitchxViewxMode__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Is Swimming"))
	virtual void bpf__OnRep_IsxSwimming__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Float in water"))
	virtual void bpf__Floatxinxwater__pfTT();
public:
};
