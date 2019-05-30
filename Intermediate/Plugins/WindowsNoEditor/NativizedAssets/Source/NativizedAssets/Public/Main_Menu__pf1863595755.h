#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class ACameraActor;
class UButton;
class UTextBlock;
class UOptions_Menu_C__pf1863595755;
class UCanvasPanel;
class UAbout_Menu_C__pf1863595755;
#include "Main_Menu__pf1863595755.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UMG/Main_Menu.Main_Menu_C", OverrideNativeName="Main_Menu_C"))
class UMain_Menu_C__pf1863595755 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnButtonClickedEvent__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__OnButtonClickedEvent__DelegateSignature__SC_0);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="About_Button", Category="Main_Menu", OverrideNativeName="About_Button"))
	UButton* bpv__About_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="About_Menu", Category="Main_Menu", OverrideNativeName="About_Menu"))
	UAbout_Menu_C__pf1863595755* bpv__About_Menu__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Cancel_Button", Category="Main_Menu", OverrideNativeName="Cancel_Button"))
	UButton* bpv__Cancel_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Confirm_Button", Category="Main_Menu", OverrideNativeName="Confirm_Button"))
	UButton* bpv__Confirm_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Confirm_Panel", Category="Main_Menu", OverrideNativeName="Confirm_Panel"))
	UCanvasPanel* bpv__Confirm_Panel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Forum_Button", Category="Main_Menu", OverrideNativeName="Forum_Button"))
	UButton* bpv__Forum_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Links_Panel", Category="Main_Menu", OverrideNativeName="Links_Panel"))
	UCanvasPanel* bpv__Links_Panel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Main_Panel", Category="Main_Menu", OverrideNativeName="Main_Panel"))
	UCanvasPanel* bpv__Main_Panel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Options_Button", Category="Main_Menu", OverrideNativeName="Options_Button"))
	UButton* bpv__Options_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Options_Panel", Category="Main_Menu", OverrideNativeName="Options_Panel"))
	UOptions_Menu_C__pf1863595755* bpv__Options_Panel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Quit_Button", Category="Main_Menu", OverrideNativeName="Quit_Button"))
	UButton* bpv__Quit_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Start_Button", Category="Main_Menu", OverrideNativeName="Start_Button"))
	UButton* bpv__Start_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Thank You", Category="Main_Menu", OverrideNativeName="ThankYou"))
	UTextBlock* bpv__ThankYou__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Youtube_Button", Category="Main_Menu", OverrideNativeName="Youtube_Button"))
	UButton* bpv__Youtube_Button__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cameras", Category="Default", OverrideNativeName="Cameras"))
	TArray<ACameraActor*> bpv__Cameras__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OnButtonClickedEvent__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ACameraActor* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	ACameraActor* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	ACameraActor* b0l__CallFunc_Array_Get_Item3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item4"))
	ACameraActor* b0l__CallFunc_Array_Get_Item4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate2"))
	F__OnButtonClickedEvent__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item5"))
	ACameraActor* b0l__CallFunc_Array_Get_Item5__pf;
	UMain_Menu_C__pf1863595755(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Main_Menu_0"))
	void bpf__ExecuteUbergraph_Main_Menu__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Main_Menu_1"))
	void bpf__ExecuteUbergraph_Main_Menu__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Main_Menu_2"))
	void bpf__ExecuteUbergraph_Main_Menu__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Main_Menu_3"))
	void bpf__ExecuteUbergraph_Main_Menu__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Main_Menu_4"))
	void bpf__ExecuteUbergraph_Main_Menu__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Main_Menu__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Main_Menu__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Main_Menu__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Main_Menu__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Main_Menu__pf_9(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Close \"About\""))
	virtual void bpf__ClosexxAboutx__pfTRR();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature__pf();
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
