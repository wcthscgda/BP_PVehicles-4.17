#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
class UPause_Menu_C__pf1863595755;
class UPlayer_HUD_C__pf1863595755;
class ABP_Physic_Pawn_C__pf4061722237;
#include "BP_Controller__pf4061722237.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Player/BP_Controller.BP_Controller_C", OverrideNativeName="BP_Controller_C"))
class ABP_Controller_C__pf4061722237 : public APlayerController
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player HUD", Category="Default", OverrideNativeName="Player HUD"))
	UPlayer_HUD_C__pf1863595755* bpv__PlayerxHUD__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pause Menu", Category="Default", OverrideNativeName="Pause Menu"))
	UPause_Menu_C__pf1863595755* bpv__PausexMenu__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Physic_Pawn"))
	ABP_Physic_Pawn_C__pf4061722237* b0l__K2Node_DynamicCast_AsBP_Physic_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakDateTime_Year"))
	int32 b0l__CallFunc_BreakDateTime_Year__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakDateTime_Month"))
	int32 b0l__CallFunc_BreakDateTime_Month__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakDateTime_Day"))
	int32 b0l__CallFunc_BreakDateTime_Day__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakDateTime_Hour"))
	int32 b0l__CallFunc_BreakDateTime_Hour__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakDateTime_Minute"))
	int32 b0l__CallFunc_BreakDateTime_Minute__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakDateTime_Second"))
	int32 b0l__CallFunc_BreakDateTime_Second__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakDateTime_Millisecond"))
	int32 b0l__CallFunc_BreakDateTime_Millisecond__pf;
	ABP_Controller_C__pf4061722237(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Controller__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Controller__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Hide_Pause Menu"))
	virtual void bpf__Hide_PausexMenu__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Show_Pause Menu"))
	virtual void bpf__Show_PausexMenu__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Hide_Player HUD"))
	virtual void bpf__Hide_PlayerxHUD__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Show_Player HUD"))
	virtual void bpf__Show_PlayerxHUD__pfT();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Escape_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
