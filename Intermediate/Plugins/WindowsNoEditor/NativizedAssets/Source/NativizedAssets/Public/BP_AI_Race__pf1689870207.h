#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/AIController.h"
class ABP_Vehicle_Waypoint_C__pf1689870207;
class ABP_Master_Vehicle_C__pf3373537038;
#include "BP_AI_Race__pf1689870207.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Vehicles/BP_AI_Race.BP_AI_Race_C", OverrideNativeName="BP_AI_Race_C"))
class ABP_AI_Race_C__pf1689870207 : public AAIController
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Vehicle", Category="Default", OverrideNativeName="Vehicle"))
	ABP_Master_Vehicle_C__pf3373537038* bpv__Vehicle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Waypoint List", Category="Default", OverrideNativeName="Waypoint List"))
	TArray<ABP_Vehicle_Waypoint_C__pf1689870207*> bpv__WaypointxList__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Previous Waypoint", Category="Default", OverrideNativeName="Previous Waypoint"))
	ABP_Vehicle_Waypoint_C__pf1689870207* bpv__PreviousxWaypoint__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Waypoint", Category="Default", OverrideNativeName="Target Waypoint"))
	ABP_Vehicle_Waypoint_C__pf1689870207* bpv__TargetxWaypoint__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Waypoint Target Index", Category="Default", OverrideNativeName="Waypoint Target Index"))
	int32 bpv__WaypointxTargetxIndex__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Maximum Steering", Category="Default", OverrideNativeName="Maximum Steering"))
	float bpv__MaximumxSteering__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Steering Angle", Category="Default", OverrideNativeName="Steering Angle"))
	float bpv__SteeringxAngle__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Desired Speed", Category="Default", OverrideNativeName="Desired Speed"))
	float bpv__DesiredxSpeed__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Accelerating", Category="Default", OverrideNativeName="Is Accelerating"))
	bool bpv__IsxAccelerating__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Braking", Category="Default", OverrideNativeName="Is Braking"))
	bool bpv__IsxBraking__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Drifting", Category="Default", OverrideNativeName="Is Drifting"))
	bool bpv__IsxDrifting__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	ABP_AI_Race_C__pf1689870207(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_AI_Race__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_AI_Race_1"))
	void bpf__ExecuteUbergraph_BP_AI_Race__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Handle Target Waypoint"))
	virtual void bpf__HandlexTargetxWaypoint__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Begin"))
	virtual void bpf__Begin__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Print Debug Variables"))
	virtual void bpf__PrintxDebugxVariables__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Handle Steering Angle"))
	virtual void bpf__HandlexSteeringxAngle__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Handle Speed"))
	virtual void bpf__HandlexSpeed__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Detect Drifting"))
	virtual void bpf__DetectxDrifting__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Calculate Desired Speed"))
	virtual void bpf__CalculatexDesiredxSpeed__pfTT();
public:
};
