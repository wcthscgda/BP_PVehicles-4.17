#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UEditableText;
class UBorder;
class UWidgetAnimation;
#include "Popxup__pfG1863595755.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UMG/Pop-up.Pop-up_C", OverrideNativeName="Pop-up_C"))
class UPopxup_C__pfG1863595755 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Export, meta=(Category="Animations", OverrideNativeName="Fade in"))
	UWidgetAnimation* bpv__Fadexin__pfT;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Border_86", Category="Pop-up", OverrideNativeName="Border_86"))
	UBorder* bpv__Border_86__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Popup_Text", Category="Pop-up", OverrideNativeName="Popup_Text"))
	UEditableText* bpv__Popup_Text__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Duration", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Duration"))
	float bpv__Duration__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Text", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Text"))
	FText bpv__Text__pf;
	UPopxup_C__pfG1863595755(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Pop-up_0"))
	void bpf__ExecuteUbergraph_Popxup__pfG_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
