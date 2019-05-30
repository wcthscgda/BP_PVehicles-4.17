#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Gear_Structure__pf863842189.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class ABP_Master_Vehicle_C__pf3373537038;
class UTextBlock;
class UButton;
class USpinBox;
class UCheckBox;
#include "Vehicle_Debug__pf1863595755.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UMG/Vehicle_Debug.Vehicle_Debug_C", OverrideNativeName="Vehicle_Debug_C"))
class UVehicle_Debug_C__pf1863595755 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_Air Control", Category="Vehicle_Debug", OverrideNativeName="CheckBox_AirControl"))
	UCheckBox* bpv__CheckBox_AirControl__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_Auto Gears", Category="Vehicle_Debug", OverrideNativeName="CheckBox_AutoGears"))
	UCheckBox* bpv__CheckBox_AutoGears__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_autorotcam", Category="Vehicle_Debug", OverrideNativeName="CheckBox_autorotcam"))
	UCheckBox* bpv__CheckBox_autorotcam__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_Brake as Reverse", Category="Vehicle_Debug", OverrideNativeName="CheckBox_BrakeasReverse"))
	UCheckBox* bpv__CheckBox_BrakeasReverse__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_Infinite Fuel", Category="Vehicle_Debug", OverrideNativeName="CheckBox_InfiniteFuel"))
	UCheckBox* bpv__CheckBox_InfiniteFuel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_Show Collisions", Category="Vehicle_Debug", OverrideNativeName="CheckBox_ShowCollisions"))
	UCheckBox* bpv__CheckBox_ShowCollisions__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CheckBox_Smart Throttle", Category="Vehicle_Debug", OverrideNativeName="CheckBox_SmartThrottle"))
	UCheckBox* bpv__CheckBox_SmartThrottle__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Drift_Value", Category="Vehicle_Debug", OverrideNativeName="Drift_Value"))
	USpinBox* bpv__Drift_Value__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FPS_Text", Category="Vehicle_Debug", OverrideNativeName="FPS_Text"))
	UTextBlock* bpv__FPS_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Fuel _Text", Category="Vehicle_Debug", OverrideNativeName="Fuel_Text"))
	UTextBlock* bpv__Fuel_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Fuel Burning Value", Category="Vehicle_Debug", OverrideNativeName="FuelBurningValue"))
	USpinBox* bpv__FuelBurningValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Gear _Text", Category="Vehicle_Debug", OverrideNativeName="Gear_Text"))
	UTextBlock* bpv__Gear_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="GSpeed_Text", Category="Vehicle_Debug", OverrideNativeName="GSpeed_Text"))
	UTextBlock* bpv__GSpeed_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Mileage _Text", Category="Vehicle_Debug", OverrideNativeName="Mileage_Text"))
	UTextBlock* bpv__Mileage_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Respawn_Button", Category="Vehicle_Debug", OverrideNativeName="Respawn_Button"))
	UButton* bpv__Respawn_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Roll_Value", Category="Vehicle_Debug", OverrideNativeName="Roll_Value"))
	USpinBox* bpv__Roll_Value__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="RPM_Text", Category="Vehicle_Debug", OverrideNativeName="RPM_Text"))
	UTextBlock* bpv__RPM_Text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Save_Button", Category="Vehicle_Debug", OverrideNativeName="Save_Button"))
	UButton* bpv__Save_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Suspension Damping Value", Category="Vehicle_Debug", OverrideNativeName="SuspensionDampingValue"))
	USpinBox* bpv__SuspensionDampingValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Suspension Length Value", Category="Vehicle_Debug", OverrideNativeName="SuspensionLengthValue"))
	USpinBox* bpv__SuspensionLengthValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Suspension Strength Value", Category="Vehicle_Debug", OverrideNativeName="SuspensionStrengthValue"))
	USpinBox* bpv__SuspensionStrengthValue__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Un-Roll_Button", Category="Vehicle_Debug", OverrideNativeName="Un-Roll_Button"))
	UButton* bpv__UnxRoll_Button__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="VSpeed_Text", Category="Vehicle_Debug", OverrideNativeName="VSpeed_Text"))
	UTextBlock* bpv__VSpeed_Text__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Vehicle", Category="Default", OverrideNativeName="Vehicle"))
	ABP_Master_Vehicle_C__pf3373537038* bpv__Vehicle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ready!", Category="Default", OverrideNativeName="Ready!"))
	bool bpv__Readyx__pfS;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Saved Transform", Category="Default", OverrideNativeName="Saved Transform"))
	FTransform bpv__SavedxTransform__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_LinearColor"))
	FLinearColor b0l__K2Node_MakeStruct_LinearColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked7"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked6"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_InValue6"))
	float b0l__K2Node_ComponentBoundEvent_InValue6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_InValue5"))
	float b0l__K2Node_ComponentBoundEvent_InValue5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_InValue4"))
	float b0l__K2Node_ComponentBoundEvent_InValue4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Location"))
	FVector b0l__CallFunc_BreakTransform_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Rotation"))
	FRotator b0l__CallFunc_BreakTransform_Rotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Scale"))
	FVector b0l__CallFunc_BreakTransform_Scale__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Location2"))
	FVector b0l__CallFunc_BreakTransform_Location2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Rotation2"))
	FRotator b0l__CallFunc_BreakTransform_Rotation2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Scale2"))
	FVector b0l__CallFunc_BreakTransform_Scale2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable2"))
	bool b0l__Temp_bool_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_InValue3"))
	float b0l__K2Node_ComponentBoundEvent_InValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_InValue2"))
	float b0l__K2Node_ComponentBoundEvent_InValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked5"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked4"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked3"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked2"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable3"))
	bool b0l__Temp_bool_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_InValue"))
	float b0l__K2Node_ComponentBoundEvent_InValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_LinearColor2"))
	FLinearColor b0l__K2Node_MakeStruct_LinearColor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor2"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_LinearColor3"))
	FLinearColor b0l__K2Node_MakeStruct_LinearColor3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor3"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	FSlateColor b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FGear_Structure__pf863842189 b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_LinearColor4"))
	FLinearColor b0l__K2Node_MakeStruct_LinearColor4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor4"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_LinearColor5"))
	FLinearColor b0l__K2Node_MakeStruct_LinearColor5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor5"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_LinearColor6"))
	FLinearColor b0l__K2Node_MakeStruct_LinearColor6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select2_Default"))
	FSlateColor b0l__K2Node_Select2_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor6"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select3_Default"))
	FSlateColor b0l__K2Node_Select3_Default__pf;
	UVehicle_Debug_C__pf1863595755(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Vehicle_Debug__pf_20(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CheckBox_AirControl_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CheckBox_AirControl_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__FuelBurningValue_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__FuelBurningValue_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CheckBox_InfiniteFuel_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CheckBox_InfiniteFuel_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CheckBox_SmartThrottle_K2Node_ComponentBoundEvent_249_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CheckBox_SmartThrottle_K2Node_ComponentBoundEvent_249_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CheckBox_BrakeasReverse_K2Node_ComponentBoundEvent_139_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CheckBox_BrakeasReverse_K2Node_ComponentBoundEvent_139_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CheckBox_AutoGears_K2Node_ComponentBoundEvent_301_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CheckBox_AutoGears_K2Node_ComponentBoundEvent_301_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__DriftValue_K2Node_ComponentBoundEvent_1013_OnSpinBoxValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__DriftValue_K2Node_ComponentBoundEvent_1013_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Roll_Value_K2Node_ComponentBoundEvent_987_OnSpinBoxValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Roll_Value_K2Node_ComponentBoundEvent_987_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_42_K2Node_ComponentBoundEvent_1633_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_42_K2Node_ComponentBoundEvent_1633_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_41_K2Node_ComponentBoundEvent_1536_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_41_K2Node_ComponentBoundEvent_1536_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Un-Roll"))
	virtual void bpf__UnxRoll__pfG();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Un-Roll_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__UnxRoll_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature__pfG();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_40_K2Node_ComponentBoundEvent_1165_OnButtonPressedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_40_K2Node_ComponentBoundEvent_1165_OnButtonPressedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SuspensionDampingValue_K2Node_ComponentBoundEvent_1051_OnSpinBoxValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__SuspensionDampingValue_K2Node_ComponentBoundEvent_1051_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="End Play, Destroy", ToolTip="Called when a widget is no longer referenced causing the slate resource to destroyed.  Just likeConstruct this event can be called multiple times.", CppFromBpEvent, OverrideNativeName="Destruct"))
	void bpf__Destruct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SuspensionLengthValue_K2Node_ComponentBoundEvent_629_OnSpinBoxValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__SuspensionLengthValue_K2Node_ComponentBoundEvent_629_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SuspensionStrengthValue_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__SuspensionStrengthValue_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CheckBox_ShowCollisions_K2Node_ComponentBoundEvent_528_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CheckBox_ShowCollisions_K2Node_ComponentBoundEvent_528_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CheckBox_autorotcam_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__CheckBox_autorotcam_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Timer"))
	virtual void bpf__Timer__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
