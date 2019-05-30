#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ModifyBone.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RefPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeSpaceConversions.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Camaro_AnimBlueprint__pf2913349635.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Vehicles/Camaro/Anims/Camaro_AnimBlueprint.Camaro_AnimBlueprint_C", OverrideNativeName="Camaro_AnimBlueprint_C"))
class UCamaro_AnimBlueprint_C__pf2913349635 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root_690850E6494A7F6FC7E3FA9F9B9CDA27"))
	FAnimNode_Root bpv__AnimGraphNode_Root_690850E6494A7F6FC7E3FA9F9B9CDA27__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyBone_367EC7F142F738CF3F264DA2CD9D2636"))
	FAnimNode_ModifyBone bpv__AnimGraphNode_ModifyBone_367EC7F142F738CF3F264DA2CD9D2636__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ComponentToLocalSpace_C06E08B04611F05B6EDF08BF8D4B1D60"))
	FAnimNode_ConvertComponentToLocalSpace bpv__AnimGraphNode_ComponentToLocalSpace_C06E08B04611F05B6EDF08BF8D4B1D60__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_MeshRefPose_F509CD374A0DB2C5688188A1D6669F52"))
	FAnimNode_MeshSpaceRefPose bpv__AnimGraphNode_MeshRefPose_F509CD374A0DB2C5688188A1D6669F52__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyBone_E286AA9442CB1C140C351AA13CE44108"))
	FAnimNode_ModifyBone bpv__AnimGraphNode_ModifyBone_E286AA9442CB1C140C351AA13CE44108__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_ModifyBone_1EFF63A34804167801BFFF9B51B4AF35"))
	FAnimNode_ModifyBone bpv__AnimGraphNode_ModifyBone_1EFF63A34804167801BFFF9B51B4AF35__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Steering Angle", Category="Default", OverrideNativeName="Steering Angle"))
	float bpv__SteeringxAngle__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="RPM Angle", Category="Default", OverrideNativeName="RPM Angle"))
	float bpv__RPMxAngle__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed Angle", Category="Default", OverrideNativeName="Speed Angle"))
	float bpv__SpeedxAngle__pfT;
	UCamaro_AnimBlueprint_C__pf2913349635(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Camaro_AnimBlueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Camaro_AnimBlueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Camaro_AnimBlueprint__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_AnimBlueprint_AnimGraphNode_ModifyBone_367EC7F142F738CF3F264DA2CD9D2636"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_AnimBlueprint_AnimGraphNode_ModifyBone_367EC7F142F738CF3F264DA2CD9D2636__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_AnimBlueprint_AnimGraphNode_ModifyBone_E286AA9442CB1C140C351AA13CE44108"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_AnimBlueprint_AnimGraphNode_ModifyBone_E286AA9442CB1C140C351AA13CE44108__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_AnimBlueprint_AnimGraphNode_ModifyBone_1EFF63A34804167801BFFF9B51B4AF35"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_AnimBlueprint_AnimGraphNode_ModifyBone_1EFF63A34804167801BFFF9B51B4AF35__pf();
public:
};
