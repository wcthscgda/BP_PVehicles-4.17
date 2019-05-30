#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Vehicle_Save__pf1010915279.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Vehicle_Save.Vehicle_Save_C", OverrideNativeName="Vehicle_Save_C"))
class UVehicle_Save_C__pf1010915279 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mileage", Category="Default", OverrideNativeName="Mileage"))
	float bpv__Mileage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fuel Ammount", Category="Default", OverrideNativeName="Fuel Ammount"))
	float bpv__FuelxAmmount__pfT;
	UVehicle_Save_C__pf1010915279(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
