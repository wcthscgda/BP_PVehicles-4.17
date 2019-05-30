#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class UButton;
class USpinBox;
class UGameUserSettings;
class UWidget;
#include "Options_Menu__pf1863595755.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UMG/Options_Menu.Options_Menu_C", OverrideNativeName="Options_Menu_C"))
class UOptions_Menu_C__pf1863595755 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Anti-Aliasing_Left", Category="Options_Menu", OverrideNativeName="Anti-Aliasing_Left"))
	UButton* bpv__AntixAliasing_Left__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Anti-Aliasing_Right", Category="Options_Menu", OverrideNativeName="Anti-Aliasing_Right"))
	UButton* bpv__AntixAliasing_Right__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Anti-Aliasing_Text", Category="Options_Menu", OverrideNativeName="Anti-Aliasing_Text"))
	UTextBlock* bpv__AntixAliasing_Text__pfG;
	UPROPERTY(Export, meta=(DisplayName="AntiAliasing", OverrideNativeName="AntiAliasing"))
	UTextBlock* bpv__AntiAliasing__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Cancel_Button", Category="Options_Menu", OverrideNativeName="Cancel_Button"))
	UButton* bpv__Cancel_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Foliage_Left", Category="Options_Menu", OverrideNativeName="Foliage_Left"))
	UButton* bpv__Foliage_Left__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Foliage_Right", Category="Options_Menu", OverrideNativeName="Foliage_Right"))
	UButton* bpv__Foliage_Right__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Foliage_Text", Category="Options_Menu", OverrideNativeName="Foliage_Text"))
	UTextBlock* bpv__Foliage_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PP_Left", Category="Options_Menu", OverrideNativeName="PP_Left"))
	UButton* bpv__PP_Left__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PP_Right", Category="Options_Menu", OverrideNativeName="PP_Right"))
	UButton* bpv__PP_Right__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PP_Text", Category="Options_Menu", OverrideNativeName="PP_Text"))
	UTextBlock* bpv__PP_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Resolution_Left", Category="Options_Menu", OverrideNativeName="Resolution_Left"))
	UButton* bpv__Resolution_Left__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Resolution_Right", Category="Options_Menu", OverrideNativeName="Resolution_Right"))
	UButton* bpv__Resolution_Right__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Resolution_Text", Category="Options_Menu", OverrideNativeName="Resolution_Text"))
	UTextBlock* bpv__Resolution_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Save_Button", Category="Options_Menu", OverrideNativeName="Save_Button"))
	UButton* bpv__Save_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Shadows_Left", Category="Options_Menu", OverrideNativeName="Shadows_Left"))
	UButton* bpv__Shadows_Left__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Shadows_Right", Category="Options_Menu", OverrideNativeName="Shadows_Right"))
	UButton* bpv__Shadows_Right__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Shadows_Text", Category="Options_Menu", OverrideNativeName="Shadows_Text"))
	UTextBlock* bpv__Shadows_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpinBox_95", Category="Options_Menu", OverrideNativeName="SpinBox_95"))
	USpinBox* bpv__SpinBox_95__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Sync_Left", Category="Options_Menu", OverrideNativeName="Sync_Left"))
	UButton* bpv__Sync_Left__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Sync_Right", Category="Options_Menu", OverrideNativeName="Sync_Right"))
	UButton* bpv__Sync_Right__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Sync_Text", Category="Options_Menu", OverrideNativeName="Sync_Text"))
	UTextBlock* bpv__Sync_Text__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_99", OverrideNativeName="TextBlock_99"))
	UTextBlock* bpv__TextBlock_99__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_103", OverrideNativeName="TextBlock_103"))
	UTextBlock* bpv__TextBlock_103__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="VD_Left", Category="Options_Menu", OverrideNativeName="VD_Left"))
	UButton* bpv__VD_Left__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="VD_Right", Category="Options_Menu", OverrideNativeName="VD_Right"))
	UButton* bpv__VD_Right__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="VD_Text", Category="Options_Menu", OverrideNativeName="VD_Text"))
	UTextBlock* bpv__VD_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="VFX_Left", Category="Options_Menu", OverrideNativeName="VFX_Left"))
	UButton* bpv__VFX_Left__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="VFX_Right", Category="Options_Menu", OverrideNativeName="VFX_Right"))
	UButton* bpv__VFX_Right__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="VFX_Text", Category="Options_Menu", OverrideNativeName="VFX_Text"))
	UTextBlock* bpv__VFX_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Window_Left", Category="Options_Menu", OverrideNativeName="Window_Left"))
	UButton* bpv__Window_Left__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Window_Right", Category="Options_Menu", OverrideNativeName="Window_Right"))
	UButton* bpv__Window_Right__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Window_Text", Category="Options_Menu", OverrideNativeName="Window_Text"))
	UTextBlock* bpv__Window_Text__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Resolutions", Category="Default", OverrideNativeName="Resolutions"))
	TArray<FIntPoint> bpv__Resolutions__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Resolution Index", Category="Default", OverrideNativeName="Resolution Index"))
	int32 bpv__ResolutionxIndex__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Screen Mode Index", Category="Default", OverrideNativeName="Screen Mode Index"))
	uint8 bpv__ScreenxModexIndex__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Anti- Aliasing Index", Category="Default", OverrideNativeName="Anti-Aliasing Index"))
	int32 bpv__AntixAliasingxIndex__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Shadows Index", Category="Default", OverrideNativeName="Shadows Index"))
	int32 bpv__ShadowsxIndex__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Post- Process Index", Category="Default", OverrideNativeName="Post-Process Index"))
	int32 bpv__PostxProcessxIndex__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="View Distance Index", Category="Default", OverrideNativeName="View Distance Index"))
	int32 bpv__ViewxDistancexIndex__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Visual Effect Index", Category="Default", OverrideNativeName="Visual Effect Index"))
	int32 bpv__VisualxEffectxIndex__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Foliage Ammount", Category="Default", OverrideNativeName="Foliage Ammount"))
	int32 bpv__FoliagexAmmount__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Vsync", Category="Default", OverrideNativeName="Vsync"))
	bool bpv__Vsync__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Framerate Limit", Category="Default", OverrideNativeName="Framerate Limit"))
	float bpv__FrameratexLimit__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_InValue"))
	float b0l__K2Node_ComponentBoundEvent_InValue__pf;
	UOptions_Menu_C__pf1863595755(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Options_Menu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Options_Menu__pf_20(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SpinBox_95_K2Node_ComponentBoundEvent_2501_OnSpinBoxValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__SpinBox_95_K2Node_ComponentBoundEvent_2501_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Sync_Left_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Sync_Left_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Sync_Right_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Sync_Right_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Resolution_Left_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Resolution_Left_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Foliage_Right_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Foliage_Right_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Foliage_Left_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Foliage_Left_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Resolution_Right_K2Node_ComponentBoundEvent_127_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Resolution_Right_K2Node_ComponentBoundEvent_127_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__VFX_Right_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__VFX_Right_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__VFX_Left_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__VFX_Left_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize List"))
	virtual void bpf__InitializexList__pfT();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__VD_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__VD_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__VD_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__VD_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__PP_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__PP_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__PP_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__PP_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Shadows_Right_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Shadows_Right_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Shadows_Left_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Shadows_Left_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Save_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Save_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__AA_Right_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__AA_Right_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__AA_Left_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__AA_Left_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Window_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Window_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Window_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Window_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Resolution"))
	virtual void bpf__InitializexResolution__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Browse Resolution"))
	virtual void bpf__BrowsexResolution__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Apply Resolution"))
	virtual void bpf__ApplyxResolution__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Screen Mode"))
	virtual void bpf__InitializexScreenxMode__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Browse Screen Mode"))
	virtual void bpf__BrowsexScreenxMode__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Apply Screen Mode"))
	virtual void bpf__ApplyxScreenxMode__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Anti-Aliasing"))
	virtual void bpf__InitializexAntixAliasing__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Browse Anti-Aliasing"))
	virtual void bpf__BrowsexAntixAliasing__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Apply Anti-Aliasing"))
	virtual void bpf__ApplyxAntixAliasing__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Shadows"))
	virtual void bpf__InitializexShadows__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Browse Shadows"))
	virtual void bpf__BrowsexShadows__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Apply Shadows"))
	virtual void bpf__ApplyxShadows__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Post-Process"))
	virtual void bpf__InitializexPostxProcess__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Browse Post-Process"))
	virtual void bpf__BrowsexPostxProcess__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Apply Post-Process"))
	virtual void bpf__ApplyxPostxProcess__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize View Distance"))
	virtual void bpf__InitializexViewxDistance__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Browse View Distance"))
	virtual void bpf__BrowsexViewxDistance__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Apply View Distance"))
	virtual void bpf__ApplyxViewxDistance__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Visual Effect"))
	virtual void bpf__InitializexVisualxEffect__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Browse Visual Effect"))
	virtual void bpf__BrowsexVisualxEffect__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Apply Visual Effect"))
	virtual void bpf__ApplyxVisualxEffect__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Foliage"))
	virtual void bpf__InitializexFoliage__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Browse Foliage"))
	virtual void bpf__BrowsexFoliage__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Apply Foliage"))
	virtual void bpf__ApplyxFoliage__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Vsync"))
	virtual void bpf__InitializexVsync__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Browse Vsync"))
	virtual void bpf__BrowsexVsync__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Apply Vsync"))
	virtual void bpf__ApplyxVsync__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Vsync_ToolTipWidget"))
	virtual UWidget*  bpf__Vsync_ToolTipWidget__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="AntiAliasing_ToolTipWidget"))
	virtual UWidget*  bpf__AntiAliasing_ToolTipWidget__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Framerate Limit"))
	virtual void bpf__InitializexFrameratexLimit__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Apply Framerate Limit"))
	virtual void bpf__ApplyxFrameratexLimit__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Frame Rate Limit_ToolTipWidget"))
	virtual UWidget*  bpf__FramexRatexLimit_ToolTipWidget__pfTT();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
