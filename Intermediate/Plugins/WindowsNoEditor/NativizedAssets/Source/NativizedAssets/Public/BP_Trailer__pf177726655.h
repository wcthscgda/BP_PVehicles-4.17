#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Interactable_Master__pf1010915279.h"
class UPhysicsConstraintComponent;
class UBoxComponent;
class USkeletalMeshComponent;
class UPrimitiveComponent;
class UActorComponent;
class ABP_Master_Vehicle_C__pf3373537038;
class AActor;
#include "BP_Trailer__pf177726655.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Vehicles/Trailer/BP_Trailer.BP_Trailer_C", OverrideNativeName="BP_Trailer_C"))
class ABP_Trailer_C__pf177726655 : public AInteractable_Master_C__pf1010915279
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PhysicsConstraint1"))
	UPhysicsConstraintComponent* bpv__PhysicsConstraint1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cargo"))
	UBoxComponent* bpv__Cargo__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PhysicsConstraint"))
	UPhysicsConstraintComponent* bpv__PhysicsConstraint__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Mesh"))
	USkeletalMeshComponent* bpv__Mesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Is Attached", Category="Default", OverrideNativeName="Is Attached"))
	bool bpv__IsxAttached__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Component", Category="Default", OverrideNativeName="Target Component"))
	UPrimitiveComponent* bpv__TargetxComponent__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Is Cargo Secured", Category="Default", OverrideNativeName="Is Cargo Secured"))
	bool bpv__IsxCargoxSecured__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable"))
	bool b1l__Temp_bool_True_if_break_was_hit_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Component"))
	UActorComponent* b1l__K2Node_Event_Component__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOverlappingComponents_InOverlappingComponents"))
	TArray<UPrimitiveComponent*> b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UPrimitiveComponent* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Master_Vehicle"))
	ABP_Master_Vehicle_C__pf3373537038* b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldTransform_SweepHitResult"))
	FHitResult b1l__CallFunc_K2_SetWorldTransform_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOverlappingActors_OverlappingActors"))
	TArray<AActor*> b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	AActor* b1l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Master_Vehicle2"))
	ABP_Master_Vehicle_C__pf3373537038* b1l__K2Node_DynamicCast_AsBP_Master_Vehicle2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b1l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b1l__Temp_name_Variable__pf;
	ABP_Trailer_C__pf177726655(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Trailer__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Trailer__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Trailer__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Trailer__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Trailer__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Release Cargo"))
	virtual void bpf__ReleasexCargo__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Secure_Cargo"))
	virtual void bpf__Secure_Cargo__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Attach"))
	virtual void bpf__Attach__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Detach"))
	virtual void bpf__Detach__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Use"))
	virtual void bpf__Use__pf(UActorComponent* bpp__Component__pf) override;
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Pop-up"))
	virtual void bpf__Popxup__pfG(float bpp__Duration__pf, const FText& bpp__Text__pf__const);
public:
};
