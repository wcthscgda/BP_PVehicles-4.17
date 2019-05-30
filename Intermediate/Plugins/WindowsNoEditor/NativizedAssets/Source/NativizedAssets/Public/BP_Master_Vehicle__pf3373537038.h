#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Gear_Structure__pf863842189.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Wheel_Structure__pf863842189.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class ABP_Water_Volume_C__pf3286898353;
class UPrimitiveComponent;
class AActor;
class AController;
class UAudioComponent;
class UPointLightComponent;
class USpotLightComponent;
class USkeletalMeshComponent;
class UArrowComponent;
class UBoxComponent;
class UCameraComponent;
class USpringArmComponent;
class UCurveFloat;
class UPhysicsConstraintComponent;
class UVehicle_Debug_C__pf1863595755;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USoundBase;
#include "BP_Master_Vehicle__pf3373537038.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Vehicles/00_Master_Vehicle/BP_Master_Vehicle.BP_Master_Vehicle_C", OverrideNativeName="BP_Master_Vehicle_C"))
class ABP_Master_Vehicle_C__pf3373537038 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Engine_Sound"))
	UAudioComponent* bpv__Engine_Sound__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Tire_sound"))
	UAudioComponent* bpv__Tire_sound__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BreakLight_02"))
	UPointLightComponent* bpv__BreakLight_02__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BreakLight_01"))
	UPointLightComponent* bpv__BreakLight_01__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HeadLight_02"))
	USpotLightComponent* bpv__HeadLight_02__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HeadLight_01"))
	USpotLightComponent* bpv__HeadLight_01__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Driver"))
	USkeletalMeshComponent* bpv__Driver__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Player Location"))
	UArrowComponent* bpv__PlayerxLocation__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Driver TriggerBox"))
	UBoxComponent* bpv__DriverxTriggerBox__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FP_Camera"))
	UCameraComponent* bpv__FP_Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FP_SpringArm"))
	USpringArmComponent* bpv__FP_SpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TP_Camera"))
	UCameraComponent* bpv__TP_Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TP_SpringArm"))
	USpringArmComponent* bpv__TP_SpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Mesh"))
	USkeletalMeshComponent* bpv__Mesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Engine Acceleration Curve", Category="Setup", OverrideNativeName="Engine Acceleration Curve"))
	UCurveFloat* bpv__EnginexAccelerationxCurve__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Steering Speed Curve", Category="Setup", OverrideNativeName="Steering Speed Curve"))
	UCurveFloat* bpv__SteeringxSpeedxCurve__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Gears", Category="Setup", OverrideNativeName="Gears"))
	TArray<FGear_Structure__pf863842189> bpv__Gears__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wheels", Category="Setup", OverrideNativeName="Wheels"))
	TArray<FWheel_Structure__pf863842189> bpv__Wheels__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Suspension Strength", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Suspension Strength"))
	float bpv__SuspensionxStrength__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Suspension Damping", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Suspension Damping"))
	float bpv__SuspensionxDamping__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Suspension Length", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Suspension Length"))
	float bpv__SuspensionxLength__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wheel Constraints", Category="Default", OverrideNativeName="Wheel Constraints"))
	TArray<UPhysicsConstraintComponent*> bpv__WheelxConstraints__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Steering Fall Speed", Category="Setup", OverrideNativeName="Steering Fall Speed"))
	float bpv__SteeringxFallxSpeed__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Brake Strength", Category="Setup", OverrideNativeName="Brake Strength"))
	float bpv__BrakexStrength__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="RPM Idle", Category="Setup", OverrideNativeName="RPM Idle"))
	float bpv__RPMxIdle__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="RPM Limit", Category="Setup", OverrideNativeName="RPM Limit"))
	float bpv__RPMxLimit__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="RPM Fall", Category="Setup", OverrideNativeName="RPM Fall"))
	float bpv__RPMxFall__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="RPM Rise", Category="Setup", OverrideNativeName="RPM Rise"))
	float bpv__RPMxRise__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Gear Change Delay", Category="Setup", OverrideNativeName="Gear Change Delay"))
	float bpv__GearxChangexDelay__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Differential Ratio", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Differential Ratio"))
	float bpv__DifferentialxRatio__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Drag Coefficient", Category="Setup", OverrideNativeName="Drag Coefficient"))
	float bpv__DragxCoefficient__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Air Density", Category="Setup", OverrideNativeName="Air Density"))
	float bpv__AirxDensity__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Auto Rotate Camera", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Auto Rotate Camera"))
	bool bpv__AutoxRotatexCamera__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Steering Constraints", Category="Default", BlueprintPrivate="true", OverrideNativeName="Steering Constraints"))
	TArray<UPhysicsConstraintComponent*> bpv__SteeringxConstraints__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Change View", Category="Setup", OverrideNativeName="Can Change View"))
	bool bpv__CanxChangexView__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Third Person View", Category="Setup", OverrideNativeName="Is ThirdPerson View"))
	bool bpv__IsxThirdPersonxView__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Engine Started", Category="Setup", OverrideNativeName="Engine Started"))
	bool bpv__EnginexStarted__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Automatic Transmision", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Automatic Transmision"))
	bool bpv__AutomaticxTransmision__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wheel Meshes", Category="Default", OverrideNativeName="Wheel Meshes"))
	TArray<USkeletalMeshComponent*> bpv__WheelxMeshes__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Steering Angle", meta=(DisplayName="Steering Angle", Category="Default", OverrideNativeName="Steering Angle"))
	float bpv__SteeringxAngle__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_RPM", meta=(DisplayName="RPM", Category="Default", OverrideNativeName="RPM"))
	float bpv__RPM__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Speed", Category="Default", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Gear", Category="Default", OverrideNativeName="Gear"))
	int32 bpv__Gear__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Player Controlled", Category="Default", OverrideNativeName="Is Player Controlled"))
	bool bpv__IsxPlayerxControlled__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Accelerating", Category="Default", OverrideNativeName="Is Accelerating"))
	bool bpv__IsxAccelerating__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Is Changing Gear", Category="Default", OverrideNativeName="Is Changing Gear"))
	bool bpv__IsxChangingxGear__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Is Braking", meta=(DisplayName="Is Braking", Category="Default", OverrideNativeName="Is Braking"))
	bool bpv__IsxBraking__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Is Reverse Gear", meta=(DisplayName="Is Reverse Gear", Category="Default", OverrideNativeName="Is Reverse Gear"))
	bool bpv__IsxReversexGear__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_HandBrake On", meta=(DisplayName="Hand Brake On", Category="Default", OverrideNativeName="HandBrake On"))
	bool bpv__HandBrakexOn__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_HeadLights On", meta=(DisplayName="Head Lights On", Category="Default", OverrideNativeName="HeadLights On"))
	bool bpv__HeadLightsxOn__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Change Gear", Category="Default", OverrideNativeName="Can Change Gear"))
	bool bpv__CanxChangexGear__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Look Back", Category="Default", OverrideNativeName="Look Back"))
	bool bpv__LookxBack__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Debug Widget", Category="Default", OverrideNativeName="Debug_Widget"))
	UVehicle_Debug_C__pf1863595755* bpv__Debug_Widget__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Brake As Reverse", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Brake as Reverse"))
	bool bpv__BrakexasxReverse__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Smart Throttle", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Smart Throttle"))
	bool bpv__SmartxThrottle__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Infinite Fuel", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Infinite Fuel"))
	bool bpv__InfinitexFuel__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Enable Air Control", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Enable Air Control"))
	bool bpv__EnablexAirxControl__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fuel Burning Rate", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Fuel Burning Rate"))
	float bpv__FuelxBurningxRate__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Anti- Roll Multiplier", Category="Setup", ClampMin="0", UIMin="0", UIMax="1", ClampMax="1", ExposeOnSpawn="true", OverrideNativeName="Anti-Roll Multiplier"))
	float bpv__AntixRollxMultiplier__pfGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Anti- Drift Multiplier", Category="Setup", UIMin="0", UIMax="1", ClampMin="0", ClampMax="1", ExposeOnSpawn="true", OverrideNativeName="Anti-Drift Multiplier"))
	float bpv__AntixDriftxMultiplier__pfGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Additional Gravity Factor", Category="Setup", OverrideNativeName="Additional Gravity Factor"))
	float bpv__AdditionalxGravityxFactor__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Brake Light Material Slot", Category="Setup", OverrideNativeName="BrakeLight Material Slot"))
	FName bpv__BrakeLightxMaterialxSlot__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Reverse Light Material Slot", Category="Setup", OverrideNativeName="ReverseLight Material Slot"))
	FName bpv__ReverseLightxMaterialxSlot__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M Brake Light", Category="Default", OverrideNativeName="M_BrakeLight"))
	UMaterialInstanceDynamic* bpv__M_BrakeLight__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Head Light Material Slot", Category="Setup", OverrideNativeName="HeadLight Material Slot"))
	FName bpv__HeadLightxMaterialxSlot__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Paint Material", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Paint Material"))
	UMaterialInterface* bpv__PaintxMaterial__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Engine Drowned?", Category="Default", OverrideNativeName="Engine Drowned?"))
	bool bpv__EnginexDrownedx__pfTzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fuel Ammount", Category="Default", OverrideNativeName="Fuel Ammount"))
	float bpv__FuelxAmmount__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mileage", Category="Default", OverrideNativeName="Mileage"))
	float bpv__Mileage__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Engine Sound", Category="Setup", ExposeOnSpawn="true", OverrideNativeName="Engine Sound"))
	USoundBase* bpv__EnginexSound__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is In Air", Category="Default", OverrideNativeName="Is in Air"))
	bool bpv__IsxinxAir__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"))
	bool b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Target_Gear"))
	int32 b0l__K2Node_CustomEvent_Target_Gear__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Axis_Value3"))
	float b0l__K2Node_CustomEvent_Axis_Value3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Axis_Value2"))
	float b0l__K2Node_CustomEvent_Axis_Value2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Axis_Value"))
	float b0l__K2Node_CustomEvent_Axis_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Apply_Handbrake"))
	bool b0l__K2Node_CustomEvent_Apply_Handbrake__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Reverse_Gear"))
	bool b0l__K2Node_CustomEvent_Reverse_Gear__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewController"))
	AController* b0l__K2Node_Event_NewController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Possess_Vehicle_Is_Controlled_by_Player"))
	bool b0l__CallFunc_Possess_Vehicle_Is_Controlled_by_Player__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor2"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex2"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Water_Volume"))
	ABP_Water_Volume_C__pf3286898353* b0l__K2Node_DynamicCast_AsBP_Water_Volume__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Water_Volume2"))
	ABP_Water_Volume_C__pf3286898353* b0l__K2Node_DynamicCast_AsBP_Water_Volume2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_EndPlayReason"))
	TEnumAsByte<EEndPlayReason::Type> b0l__K2Node_Event_EndPlayReason__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FGear_Structure__pf863842189 b0l__CallFunc_Array_Get_Item__pf;
	ABP_Master_Vehicle_C__pf3373537038(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Master_Vehicle_0"))
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Master_Vehicle_1"))
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Master_Vehicle_3"))
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_13(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Gear Down"))
	virtual void bpf__GearxDown__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Gear Up"))
	virtual void bpf__GearxUp__pfT();
	UFUNCTION(meta=(DisplayName="End Play", Keywords="delete", ToolTip="Event to notify blueprints this actor is about to be deleted.", CppFromBpEvent, OverrideNativeName="ReceiveEndPlay"))
	void bpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Drowning Timer"))
	virtual void bpf__DrowningxTimer__pfT();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_HeadLights"))
	virtual void bpf__Server_HeadLights__pf();
	UFUNCTION(meta=(DisplayName="Possessed", ToolTip="Event called when the Pawn is possessed by a Controller (normally only occurs on the server/standalone).", CppFromBpEvent, OverrideNativeName="ReceivePossessed"))
	void bpf__ReceivePossessed__pf(AController* bpp__NewController__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Reverse Gear"))
	virtual void bpf__Server_ReversexGear__pfT(bool bpp__ReversexGear__pfT);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Handbrake"))
	virtual void bpf__Server_Handbrake__pf(bool bpp__ApplyxHandbrake__pfT);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Brake"))
	virtual void bpf__Server_Brake__pf(float bpp__AxisxValue__pfT);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Throttle"))
	virtual void bpf__Server_Throttle__pf(float bpp__AxisxValue__pfT);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Steering"))
	virtual void bpf__Server_Steering__pf(float bpp__AxisxValue__pfT);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Exit Vehicle"))
	virtual void bpf__Server_ExitxVehicle__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Timer"))
	virtual void bpf__Timer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Server_Tick"))
	virtual void bpf__Server_Tick__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Gear Change"))
	virtual void bpf__GearxChange__pfT(int32 bpp__TargetxGear__pfT);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Steering Input"))
	virtual void bpf__SetxSteeringxInput__pfTT(float bpp__SteeringxAxisxValue__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Throttle Input"))
	virtual void bpf__SetxThrottlexInput__pfTT(float bpp__AxisxValue__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LookAround"))
	virtual void bpf__LookAround__pf(float bpp__LookxUp__pfT, float bpp__LookxRight__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Camera Distance"))
	virtual void bpf__CameraxDistance__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Activate Camera"))
	virtual void bpf__ActivatexCamera__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Change View"))
	virtual void bpf__ChangexView__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Create Physic constraints"))
	virtual void bpf__CreatexPhysicxconstraints__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Brake Input"))
	virtual void bpf__SetxBrakexInput__pfTT(float bpp__AxisxValue__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set HandBrake Input"))
	virtual void bpf__SetxHandBrakexInput__pfTT(bool bpp__ApplyxHandBrake__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Debug Widget"))
	virtual void bpf__DebugxWidget__pfT(bool bpp__Show__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Update Suspension"))
	virtual void bpf__UpdatexSuspension__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Possess Vehicle"))
	virtual void bpf__PossessxVehicle__pfT(AController* bpp__NewxController__pfT, /*out*/ bool& bpp__IsxControlledxbyxPlayer__pfTTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Additional Gravity / Driver Helper"))
	virtual void bpf__AdditionalxGravityxxxDriverxHelper__pfTTETT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Calculate Speed"))
	virtual void bpf__CalculatexSpeed__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Detect Drifting"))
	virtual void bpf__DetectxDrifting__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UnPosses Vehicle"))
	virtual void bpf__UnPossesxVehicle__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Reverse Gear"))
	virtual void bpf__ReversexGear__pfT(bool bpp__ReversexGear__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Steering Angle"))
	virtual void bpf__OnRep_SteeringxAngle__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize"))
	virtual void bpf__Initialize__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_RPM"))
	virtual void bpf__OnRep_RPM__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_HandBrake On"))
	virtual void bpf__OnRep_HandBrakexOn__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Stall Engine"))
	virtual void bpf__StallxEngine__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Update Light Material"))
	virtual void bpf__UpdatexLightxMaterial__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_HeadLights On"))
	virtual void bpf__OnRep_HeadLightsxOn__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Is Braking"))
	virtual void bpf__OnRep_IsxBraking__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Toggle HeadLights"))
	virtual void bpf__TogglexHeadLights__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Is Reverse Gear"))
	virtual void bpf__OnRep_IsxReversexGear__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Update Sounds"))
	virtual void bpf__UpdatexSounds__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Calculate Milleage"))
	virtual void bpf__CalculatexMilleage__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Save Variables"))
	virtual void bpf__SavexVariables__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Load Variables"))
	virtual void bpf__LoadxVariables__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Detect in Air"))
	virtual void bpf__DetectxinxAir__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Air Drag"))
	virtual void bpf__AirxDrag__pfT();
public:
};
