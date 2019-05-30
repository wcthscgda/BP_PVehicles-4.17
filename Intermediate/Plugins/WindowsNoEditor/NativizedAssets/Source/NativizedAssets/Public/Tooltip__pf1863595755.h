#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class UImage;
#include "Tooltip__pf1863595755.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UMG/Tooltip.Tooltip_C", OverrideNativeName="Tooltip_C"))
class UTooltip_C__pf1863595755 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_66", Category="Tooltip", OverrideNativeName="Image_66"))
	UImage* bpv__Image_66__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextZonne", Category="Tooltip", OverrideNativeName="TextZonne"))
	UTextBlock* bpv__TextZonne__pf;
	UTooltip_C__pf1863595755(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
