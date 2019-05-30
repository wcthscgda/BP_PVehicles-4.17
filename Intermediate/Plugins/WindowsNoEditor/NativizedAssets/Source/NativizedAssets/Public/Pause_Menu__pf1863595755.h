#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UTextBlock;
class UOptions_Menu_C__pf1863595755;
class UCanvasPanel;
class ABP_Controller_C__pf4061722237;
#include "Pause_Menu__pf1863595755.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UMG/Pause_Menu.Pause_Menu_C", OverrideNativeName="Pause_Menu_C"))
class UPause_Menu_C__pf1863595755 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnButtonClickedEvent__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__OnButtonClickedEvent__DelegateSignature__SC_0);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Cancel_Button", Category="Pause_Menu", OverrideNativeName="Cancel_Button"))
	UButton* bpv__Cancel_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Confirm_Button", Category="Pause_Menu", OverrideNativeName="Confirm_Button"))
	UButton* bpv__Confirm_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Confirm_Panel", Category="Pause_Menu", OverrideNativeName="Confirm_Panel"))
	UCanvasPanel* bpv__Confirm_Panel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Forum_Button", Category="Pause_Menu", OverrideNativeName="Forum_Button"))
	UButton* bpv__Forum_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Links_Panel", Category="Pause_Menu", OverrideNativeName="Links_Panel"))
	UCanvasPanel* bpv__Links_Panel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Main_Panel", Category="Pause_Menu", OverrideNativeName="Main_Panel"))
	UCanvasPanel* bpv__Main_Panel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Options_Button", Category="Pause_Menu", OverrideNativeName="Options_Button"))
	UButton* bpv__Options_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Options_Panel", Category="Pause_Menu", OverrideNativeName="Options_Panel"))
	UOptions_Menu_C__pf1863595755* bpv__Options_Panel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Quit_Button", Category="Pause_Menu", OverrideNativeName="Quit_Button"))
	UButton* bpv__Quit_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Start_Button", Category="Pause_Menu", OverrideNativeName="Start_Button"))
	UButton* bpv__Start_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Time_Text", Category="Pause_Menu", OverrideNativeName="Time_Text"))
	UTextBlock* bpv__Time_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Youtube_Button", Category="Pause_Menu", OverrideNativeName="Youtube_Button"))
	UButton* bpv__Youtube_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Controller"))
	ABP_Controller_C__pf4061722237* b0l__K2Node_DynamicCast_AsBP_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OnButtonClickedEvent__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPause_Menu_C__pf1863595755(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Pause_Menu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_Menu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_Menu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_Menu__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_Menu__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_Menu__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_Menu__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_Menu__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnClicked_Cancel / Save"))
	virtual void bpf__OnClicked_CancelxxxSave__pfTET();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
