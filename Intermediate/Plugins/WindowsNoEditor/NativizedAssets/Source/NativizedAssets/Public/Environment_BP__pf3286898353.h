#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UTimelineComponent;
class UMaterialInstanceDynamic;
class USceneComponent;
class UStaticMeshComponent;
class UDirectionalLightComponent;
class USkyLightComponent;
class UPostProcessComponent;
#include "Environment_BP__pf3286898353.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Environment/Environment_BP.Environment_BP_C", OverrideNativeName="Environment_BP_C"))
class AEnvironment_BP_C__pf3286898353 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PostProcess"))
	UPostProcessComponent* bpv__PostProcess__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sky_Light"))
	USkyLightComponent* bpv__Sky_Light__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sun_Light"))
	UDirectionalLightComponent* bpv__Sun_Light__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="BP_Skydome", OverrideNativeName="Sky Sphere mesh"))
	UStaticMeshComponent* bpv__SkyxSpherexmesh__pfTT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="BP_Skydome", OverrideNativeName="Base"))
	USceneComponent* bpv__Base__pf;
	UPROPERTY(meta=(OverrideNativeName="Time_Flow_Cloud_Color_C8ACAA514EF486185222D2B3D8685635"))
	FLinearColor bpv__Time_Flow_Cloud_Color_C8ACAA514EF486185222D2B3D8685635__pf;
	UPROPERTY(meta=(OverrideNativeName="Time_Flow_Zenith_Color_C8ACAA514EF486185222D2B3D8685635"))
	FLinearColor bpv__Time_Flow_Zenith_Color_C8ACAA514EF486185222D2B3D8685635__pf;
	UPROPERTY(meta=(OverrideNativeName="Time_Flow_Horizon_Color_C8ACAA514EF486185222D2B3D8685635"))
	FLinearColor bpv__Time_Flow_Horizon_Color_C8ACAA514EF486185222D2B3D8685635__pf;
	UPROPERTY(meta=(OverrideNativeName="Time_Flow_TimeofDay_C8ACAA514EF486185222D2B3D8685635"))
	float bpv__Time_Flow_TimeofDay_C8ACAA514EF486185222D2B3D8685635__pf;
	UPROPERTY(meta=(OverrideNativeName="Time_Flow_Horizon_Falloff_C8ACAA514EF486185222D2B3D8685635"))
	float bpv__Time_Flow_Horizon_Falloff_C8ACAA514EF486185222D2B3D8685635__pf;
	UPROPERTY(meta=(OverrideNativeName="Time_Flow_Cloud_Opacity_C8ACAA514EF486185222D2B3D8685635"))
	float bpv__Time_Flow_Cloud_Opacity_C8ACAA514EF486185222D2B3D8685635__pf;
	UPROPERTY(meta=(OverrideNativeName="Time_Flow_Sun_Light_Intensity_C8ACAA514EF486185222D2B3D8685635"))
	float bpv__Time_Flow_Sun_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf;
	UPROPERTY(meta=(OverrideNativeName="Time_Flow_Sky_Light_Intensity_C8ACAA514EF486185222D2B3D8685635"))
	float bpv__Time_Flow_Sky_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf;
	UPROPERTY(meta=(OverrideNativeName="Time_Flow_Sun_Light_Yaw_C8ACAA514EF486185222D2B3D8685635"))
	float bpv__Time_Flow_Sun_Light_Yaw_C8ACAA514EF486185222D2B3D8685635__pf;
	UPROPERTY(meta=(OverrideNativeName="Time_Flow_Sun_Light_Pitch_C8ACAA514EF486185222D2B3D8685635"))
	float bpv__Time_Flow_Sun_Light_Pitch_C8ACAA514EF486185222D2B3D8685635__pf;
	UPROPERTY(meta=(OverrideNativeName="Time_Flow__Direction_C8ACAA514EF486185222D2B3D8685635"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Time_Flow__Direction_C8ACAA514EF486185222D2B3D8685635__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="Environment_BP", OverrideNativeName="Time_Flow"))
	UTimelineComponent* bpv__Time_Flow__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sky Material", Category="Components", OverrideNativeName="Sky material"))
	UMaterialInstanceDynamic* bpv__Skyxmaterial__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sun Brightness", Category="Override Settings", Tooltip="Brightness multiplier for the sun disk", ExposeOnSpawn="true", OverrideNativeName="Sun brightness"))
	float bpv__Sunxbrightness__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Cloud Speed", Category="Override Settings", Tooltip="Panning speed for the clouds", ExposeOnSpawn="true", OverrideNativeName="Cloud speed"))
	float bpv__Cloudxspeed__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stars Brightness", Category="Override Settings", Tooltip="Multiplier for the brightness of the stars when the sun is below the horizon", ExposeOnSpawn="true", OverrideNativeName="Stars brightness"))
	float bpv__Starsxbrightness__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Start Time", Category="Override Settings", UIMin="0", UIMax="24", ClampMin="0", ClampMax="24", ExposeOnSpawn="true", OverrideNativeName="Start Time"))
	float bpv__StartxTime__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Time", meta=(DisplayName="Time", Category="Default", OverrideNativeName="Time"))
	float bpv__Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	AEnvironment_BP_C__pf3286898353(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Environment_BP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Environment_BP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Environment_BP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Environment_BP__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Time"))
	virtual void bpf__SetxTime__pfT();
	UFUNCTION(meta=(OverrideNativeName="Time_Flow__UpdateFunc"))
	virtual void bpf__Time_Flow__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Time_Flow__FinishedFunc"))
	virtual void bpf__Time_Flow__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Time"))
	virtual void bpf__OnRep_Time__pf();
public:
};
