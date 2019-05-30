#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class AController;
class USkeletalMeshComponent;
class UArrowComponent;
class UCameraComponent;
class USpringArmComponent;
class UBoxComponent;
#include "BP_Passenger__pf3373537038.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Vehicles/00_Master_Vehicle/BP_Passenger.BP_Passenger_C", OverrideNativeName="BP_Passenger_C"))
class ABP_Passenger_C__pf3373537038 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SkeletalMesh"))
	USkeletalMeshComponent* bpv__SkeletalMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Player Location"))
	UArrowComponent* bpv__PlayerxLocation__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpringArm"))
	USpringArmComponent* bpv__SpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Collision Offset", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Collision Offset"))
	FVector bpv__CollisionxOffset__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Collision Extent", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Collision Extent"))
	FVector bpv__CollisionxExtent__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewController"))
	AController* b0l__K2Node_Event_NewController__pf;
	ABP_Passenger_C__pf3373537038(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Passenger__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Passenger__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Passenger__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Passenger__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Possessed", ToolTip="Event called when the Pawn is possessed by a Controller (normally only occurs on the server/standalone).", CppFromBpEvent, OverrideNativeName="ReceivePossessed"))
	void bpf__ReceivePossessed__pf(AController* bpp__NewController__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Exit Vehicle"))
	virtual void bpf__Server_ExitxVehicle__pfT();
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Interact_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Look Around"))
	virtual void bpf__LookxAround__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Exit Vehicle"))
	virtual void bpf__ExitxVehicle__pfT();
public:
};
