#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_SequenceEvaluator.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Camaro_Driver_AnimBlueprint__pf2913349635.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Vehicles/Camaro/Anims/Camaro_Driver_AnimBlueprint.Camaro_Driver_AnimBlueprint_C", OverrideNativeName="Camaro_Driver_AnimBlueprint_C"))
class UCamaro_Driver_AnimBlueprint_C__pf2913349635 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root_5C5B4B924CF3F36170D230A78953D2E4"))
	FAnimNode_Root bpv__AnimGraphNode_Root_5C5B4B924CF3F36170D230A78953D2E4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4"))
	FAnimNode_SequenceEvaluator bpv__AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Steering Angle", Category="Default", OverrideNativeName="Steering Angle"))
	float bpv__SteeringxAngle__pfT;
	UCamaro_Driver_AnimBlueprint_C__pf2913349635(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Camaro_Driver_AnimBlueprint__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4__pf();
public:
};
