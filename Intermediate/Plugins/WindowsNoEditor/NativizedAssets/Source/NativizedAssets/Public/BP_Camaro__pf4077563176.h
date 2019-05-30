#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "BP_Master_Vehicle__pf3373537038.h"
class UPrimitiveComponent;
class AActor;
class UBoxComponent;
class UChildActorComponent;
class UCamaro_AnimBlueprint_C__pf2913349635;
class UCamaro_Driver_AnimBlueprint_C__pf2913349635;
class UMaterialInstanceDynamic;
#include "BP_Camaro__pf4077563176.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Vehicles/Camaro/BP_Camaro.BP_Camaro_C", OverrideNativeName="BP_Camaro_C"))
class ABP_Camaro_C__pf4077563176 : public ABP_Master_Vehicle_C__pf3373537038
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Passenger_FR"))
	UChildActorComponent* bpv__Passenger_FR__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Vehicle Anim BP", Category="Default", OverrideNativeName="Vehicle_AnimBP"))
	UCamaro_AnimBlueprint_C__pf2913349635* bpv__Vehicle_AnimBP__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Driver Anim BP", Category="Default", OverrideNativeName="Driver_AnimBP"))
	UCamaro_Driver_AnimBlueprint_C__pf2913349635* bpv__Driver_AnimBP__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Brake Light Mat", Category="Default", OverrideNativeName="Brake Light Mat"))
	UMaterialInstanceDynamic* bpv__BrakexLightxMat__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Reverse Light Mat", Category="Default", OverrideNativeName="Reverse Light Mat"))
	UMaterialInstanceDynamic* bpv__ReversexLightxMat__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key7"))
	FKey b1l__K2Node_InputActionEvent_Key7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b1l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b1l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b1l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key5"))
	FKey b1l__K2Node_InputActionEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key2"))
	FKey b1l__K2Node_InputKeyEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key3"))
	FKey b1l__K2Node_InputKeyEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable2"))
	FKey b1l__Temp_struct_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key4"))
	FKey b1l__K2Node_InputKeyEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HitComponent"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b1l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NormalImpulse"))
	FVector b1l__K2Node_ComponentBoundEvent_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Hit"))
	FHitResult b1l__K2Node_ComponentBoundEvent_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key5"))
	FKey b1l__K2Node_InputKeyEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue3"))
	float b1l__K2Node_InputAxisEvent_AxisValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue2"))
	float b1l__K2Node_InputAxisEvent_AxisValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b1l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b1l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamaro_Driver_Anim_Blueprint"))
	UCamaro_Driver_AnimBlueprint_C__pf2913349635* b1l__K2Node_DynamicCast_AsCamaro_Driver_Anim_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamaro_Anim_Blueprint"))
	UCamaro_AnimBlueprint_C__pf2913349635* b1l__K2Node_DynamicCast_AsCamaro_Anim_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b1l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b1l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key3"))
	FKey b1l__K2Node_InputActionEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable3"))
	FKey b1l__Temp_struct_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key4"))
	FKey b1l__K2Node_InputActionEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key6"))
	FKey b1l__K2Node_InputActionEvent_Key6__pf;
	ABP_Camaro_C__pf4077563176(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Camaro__pf_17(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Vehicle_Steering_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_Vehicle_Steering_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Vehicle_Throttle_K2Node_InputAxisEvent_101"))
	virtual void bpf__InpAxisEvt_Vehicle_Throttle_K2Node_InputAxisEvent_101__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Vehicle_Brake_K2Node_InputAxisEvent_148"))
	virtual void bpf__InpAxisEvt_Vehicle_Brake_K2Node_InputAxisEvent_148__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Vehicle_Handbrake_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_Vehicle_Handbrake_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Vehicle_Handbrake_K2Node_InputActionEvent_8"))
	virtual void bpf__InpActEvt_Vehicle_Handbrake_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Tab_K2Node_InputKeyEvent_5"))
	virtual void bpf__InpActEvt_Tab_K2Node_InputKeyEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Vehicle_Lights_K2Node_InputActionEvent_9"))
	virtual void bpf__InpActEvt_Vehicle_Lights_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Vehicle_LookBack_K2Node_InputActionEvent_10"))
	virtual void bpf__InpActEvt_Vehicle_LookBack_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Vehicle_LookBack_K2Node_InputActionEvent_11"))
	virtual void bpf__InpActEvt_Vehicle_LookBack_K2Node_InputActionEvent_11__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_E_K2Node_InputKeyEvent_6"))
	virtual void bpf__InpActEvt_E_K2Node_InputKeyEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Q_K2Node_InputKeyEvent_7"))
	virtual void bpf__InpActEvt_Q_K2Node_InputKeyEvent_7__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8"))
	virtual void bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RightMouseButton_K2Node_InputKeyEvent_9"))
	virtual void bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_9__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ChangeView_K2Node_InputActionEvent_12"))
	virtual void bpf__InpActEvt_ChangeView_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Interact_K2Node_InputActionEvent_13"))
	virtual void bpf__InpActEvt_Interact_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
