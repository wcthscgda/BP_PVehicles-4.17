#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
#include "Loading_Screen__pf1863595755.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UMG/Loading_Screen.Loading_Screen_C", OverrideNativeName="Loading_Screen_C"))
class ULoading_Screen_C__pf1863595755 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_23", Category="Loading_Screen", OverrideNativeName="Image_23"))
	UImage* bpv__Image_23__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_64", Category="Loading_Screen", OverrideNativeName="Image_64"))
	UImage* bpv__Image_64__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_102", Category="Loading_Screen", OverrideNativeName="Image_102"))
	UImage* bpv__Image_102__pf;
	ULoading_Screen_C__pf1863595755(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
