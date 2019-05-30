#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
#include "BP_Vehicle_Waypoint__pf1689870207.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Vehicles/BP_Vehicle_Waypoint.BP_Vehicle_Waypoint_C", OverrideNativeName="BP_Vehicle_Waypoint_C"))
class ABP_Vehicle_Waypoint_C__pf1689870207 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cylinder"))
	UStaticMeshComponent* bpv__Cylinder__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Hidden in- Game", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Hidden In-Game"))
	bool bpv__HiddenxInxGame__pfTG;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Index", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Index"))
	int32 bpv__Index__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Acceptable Radius", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Acceptable Radius"))
	float bpv__AcceptablexRadius__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Desired Speed", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Desired Speed"))
	float bpv__DesiredxSpeed__pfT;
	ABP_Vehicle_Waypoint_C__pf1689870207(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
