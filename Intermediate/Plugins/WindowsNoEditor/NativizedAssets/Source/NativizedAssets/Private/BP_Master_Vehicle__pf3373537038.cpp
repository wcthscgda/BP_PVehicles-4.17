#include "NativizedAssets.h"
#include "BP_Master_Vehicle__pf3373537038.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/ClothingSystemRuntime/Public/ClothingSimulationFactory.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/AI/Navigation/CrowdManagerBase.h"
#include "Runtime/AIModule/Classes/Navigation/CrowdManager.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Camaro_AnimBlueprint__pf2913349635.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Camaro_Driver_AnimBlueprint__pf2913349635.h"
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Vehicle_Debug__pf1863595755.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "BP_Water_Volume__pf3286898353.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/UMG/Public/Components/SpinBox.h"
#include "Runtime/UMG/Public/Components/CheckBox.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "BP_Physic_Pawn__pf4061722237.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Vehicle_Save__pf1010915279.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ABP_Master_Vehicle_C__pf3373537038::ABP_Master_Vehicle_C__pf3373537038(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_Master_Vehicle_C__pf3373537038::StaticClass() == GetClass()))
	{
		ABP_Master_Vehicle_C__pf3373537038::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Mesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	bpv__TP_SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("TP_SpringArm"));
	bpv__TP_Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("TP_Camera"));
	bpv__FP_SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("FP_SpringArm"));
	bpv__FP_Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("FP_Camera"));
	bpv__DriverxTriggerBox__pfT = CreateDefaultSubobject<UBoxComponent>(TEXT("Driver TriggerBox"));
	bpv__PlayerxLocation__pfT = CreateDefaultSubobject<UArrowComponent>(TEXT("Player Location"));
	bpv__Driver__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Driver"));
	bpv__HeadLight_01__pf = CreateDefaultSubobject<USpotLightComponent>(TEXT("HeadLight_01"));
	bpv__HeadLight_02__pf = CreateDefaultSubobject<USpotLightComponent>(TEXT("HeadLight_02"));
	bpv__BreakLight_01__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("BreakLight_01"));
	bpv__BreakLight_02__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("BreakLight_02"));
	bpv__Tire_sound__pf = CreateDefaultSubobject<UAudioComponent>(TEXT("Tire_sound"));
	bpv__Engine_Sound__pf = CreateDefaultSubobject<UAudioComponent>(TEXT("Engine_Sound"));
	RootComponent = bpv__Mesh__pf;
	bpv__Mesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Mesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Vehicle")));
	bpv__Mesh__pf->BodyInstance.bUseCCD = true;
	bpv__Mesh__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	bpv__Mesh__pf->BodyInstance.bSimulatePhysics = true;
	bpv__Mesh__pf->BodyInstance.AngularDamping = 0.100000f;
	bpv__Mesh__pf->BodyInstance.COMNudge = FVector(25.000000, 0.000000, -25.000000);
	bpv__Mesh__pf->BodyInstance.MaxAngularVelocity = 72000.000000f;
	bpv__Mesh__pf->BodyInstance.PositionSolverIterationCount = 80;
	bpv__Mesh__pf->BodyInstance.VelocitySolverIterationCount = 11;
	bpv__Mesh__pf->BodyInstance.SleepFamily = ESleepFamily::Sensitive;
	bpv__Mesh__pf->AnimClass = UCamaro_AnimBlueprint_C__pf2913349635::StaticClass();
	bpv__Mesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Mesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Mesh__pf->PhysicsAssetOverride = CastChecked<UPhysicsAsset>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__Mesh__pf->bAlwaysCreatePhysicsState = true;
	bpv__Mesh__pf->bGenerateOverlapEvents = true;
	bpv__Mesh__pf->bMultiBodyOverlap = true;
	bpv__Mesh__pf->bShouldUpdatePhysicsVolume = true;
	static TWeakObjectPtr<UProperty> __Local__1{};
	const UProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Mesh__pf), true, 0));
	if(!bpv__Mesh__pf->IsTemplate())
	{
		bpv__Mesh__pf->BodyInstance.FixupData(bpv__Mesh__pf);
	}
	bpv__TP_SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TP_SpringArm__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TP_SpringArm__pf->TargetArmLength = 450.000000f;
	bpv__TP_SpringArm__pf->bEnableCameraRotationLag = true;
	bpv__TP_SpringArm__pf->CameraRotationLagSpeed = 4.000000f;
	bpv__TP_SpringArm__pf->RelativeLocation = FVector(-32.007843, 0.000031, 115.815285);
	bpv__TP_Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TP_Camera__pf->AttachToComponent(bpv__TP_SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TP_Camera__pf->bLockToHmd = false;
	bpv__TP_Camera__pf->bAutoActivate = false;
	bpv__FP_SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FP_SpringArm__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FP_SpringArm__pf->TargetArmLength = -10.000000f;
	bpv__FP_SpringArm__pf->bDoCollisionTest = false;
	bpv__FP_SpringArm__pf->bEnableCameraRotationLag = true;
	bpv__FP_SpringArm__pf->CameraRotationLagSpeed = 30.000000f;
	bpv__FP_SpringArm__pf->RelativeLocation = FVector(-27.401482, -41.347755, 121.226761);
	bpv__FP_Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FP_Camera__pf->AttachToComponent(bpv__FP_SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FP_Camera__pf->FieldOfView = 80.000000f;
	bpv__FP_Camera__pf->bConstrainAspectRatio = true;
	bpv__FP_Camera__pf->bAutoActivate = false;
	bpv__DriverxTriggerBox__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__DriverxTriggerBox__pfT->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__DriverxTriggerBox__pfT->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__2 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__DriverxTriggerBox__pfT->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__3 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__2), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__3 = TArray<FResponseChannel> ();
	__Local__3.AddUninitialized(7);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__3.GetData(), 7);
	auto& __Local__4 = __Local__3[0];
	__Local__4.Channel = FName(TEXT("WorldStatic"));
	__Local__4.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__5 = __Local__3[1];
	__Local__5.Channel = FName(TEXT("WorldDynamic"));
	__Local__5.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__6 = __Local__3[2];
	__Local__6.Channel = FName(TEXT("Pawn"));
	__Local__6.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__7 = __Local__3[3];
	__Local__7.Channel = FName(TEXT("Camera"));
	__Local__7.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__8 = __Local__3[4];
	__Local__8.Channel = FName(TEXT("PhysicsBody"));
	__Local__8.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__9 = __Local__3[5];
	__Local__9.Channel = FName(TEXT("Vehicle"));
	__Local__9.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__10 = __Local__3[6];
	__Local__10.Channel = FName(TEXT("Destructible"));
	__Local__10.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__11 = (*(AccessPrivateProperty<FVector >((bpv__DriverxTriggerBox__pfT), UBoxComponent::__PPO__BoxExtent() )));
	__Local__11 = FVector(50.000000, 15.000000, 32.000000);
	bpv__DriverxTriggerBox__pfT->RelativeLocation = FVector(-44.093246, -100.774857, 93.528923);
	bpv__DriverxTriggerBox__pfT->ComponentTags = TArray<FName> ();
	bpv__DriverxTriggerBox__pfT->ComponentTags.Reserve(1);
	bpv__DriverxTriggerBox__pfT->ComponentTags.Add(FName(TEXT("Usable")));
	static TWeakObjectPtr<UProperty> __Local__13{};
	const UProperty* __Local__12 = __Local__13.Get();
	if (nullptr == __Local__12)
	{
		__Local__12 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bReplicates")));
		check(__Local__12);
		__Local__13 = __Local__12;
	}
	(((UBoolProperty*)__Local__12)->SetPropertyValue_InContainer((bpv__DriverxTriggerBox__pfT), true, 0));
	if(!bpv__DriverxTriggerBox__pfT->IsTemplate())
	{
		bpv__DriverxTriggerBox__pfT->BodyInstance.FixupData(bpv__DriverxTriggerBox__pfT);
	}
	bpv__PlayerxLocation__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__PlayerxLocation__pfT->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PlayerxLocation__pfT->RelativeLocation = FVector(-84.630409, -193.729065, 53.235176);
	bpv__PlayerxLocation__pfT->RelativeRotation = FRotator(0.000000, 40.000118, 0.000000);
	(((UBoolProperty*)__Local__12)->SetPropertyValue_InContainer((bpv__PlayerxLocation__pfT), true, 0));
	if(!bpv__PlayerxLocation__pfT->IsTemplate())
	{
		bpv__PlayerxLocation__pfT->BodyInstance.FixupData(bpv__PlayerxLocation__pfT);
	}
	bpv__Driver__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Driver__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Driver__pf->AnimClass = UCamaro_Driver_AnimBlueprint_C__pf2913349635::StaticClass();
	bpv__Driver__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Driver__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Driver__pf->PhysicsAssetOverride = CastChecked<UPhysicsAsset>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Driver__pf->BodyInstance.MassScale = 0.200000f;
	bpv__Driver__pf->bVisible = false;
	bpv__Driver__pf->RelativeLocation = FVector(15.128340, -6.344874, 25.762390);
	bpv__Driver__pf->RelativeScale3D = FVector(0.820000, 0.820000, 0.820000);
	(((UBoolProperty*)__Local__12)->SetPropertyValue_InContainer((bpv__Driver__pf), true, 0));
	if(!bpv__Driver__pf->IsTemplate())
	{
		bpv__Driver__pf->BodyInstance.FixupData(bpv__Driver__pf);
	}
	bpv__HeadLight_01__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HeadLight_01__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__HeadLight_01__pf->InnerConeAngle = 30.000000f;
	bpv__HeadLight_01__pf->AttenuationRadius = 7500.000000f;
	bpv__HeadLight_01__pf->bUseInverseSquaredFalloff = false;
	bpv__HeadLight_01__pf->LightGuid = FGuid(0x916B4AB3, 0x457D84F1, 0xCDB9A58E, 0xC668A7BC);
	bpv__HeadLight_01__pf->Intensity = 50.000000f;
	bpv__HeadLight_01__pf->bVisible = false;
	bpv__HeadLight_01__pf->RelativeLocation = FVector(212.623215, 62.054016, 75.528740);
	bpv__HeadLight_01__pf->RelativeRotation = FRotator(0.000000, 5.000000, 0.000000);
	bpv__HeadLight_02__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HeadLight_02__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__HeadLight_02__pf->InnerConeAngle = 30.000000f;
	bpv__HeadLight_02__pf->AttenuationRadius = 7500.000000f;
	bpv__HeadLight_02__pf->bUseInverseSquaredFalloff = false;
	bpv__HeadLight_02__pf->LightGuid = FGuid(0x4DCB582D, 0x40BA5AC3, 0x864AE88C, 0xA70EF4B5);
	bpv__HeadLight_02__pf->Intensity = 50.000000f;
	bpv__HeadLight_02__pf->bVisible = false;
	bpv__HeadLight_02__pf->RelativeLocation = FVector(212.623199, -66.318359, 75.528740);
	bpv__HeadLight_02__pf->RelativeRotation = FRotator(0.000000, -5.000000, 0.000000);
	bpv__BreakLight_01__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__BreakLight_01__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__BreakLight_01__pf->AttenuationRadius = 550.000000f;
	bpv__BreakLight_01__pf->SourceRadius = 100.000000f;
	bpv__BreakLight_01__pf->LightGuid = FGuid(0x93BE829E, 0x4102F90F, 0x6A97228A, 0x6F940060);
	bpv__BreakLight_01__pf->Intensity = 50.000000f;
	bpv__BreakLight_01__pf->LightColor = FColor(83, 0, 0, 255);
	bpv__BreakLight_01__pf->RelativeLocation = FVector(-241.151596, -52.000000, 81.483414);
	bpv__BreakLight_02__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__BreakLight_02__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__BreakLight_02__pf->AttenuationRadius = 550.000000f;
	bpv__BreakLight_02__pf->SourceRadius = 100.000000f;
	bpv__BreakLight_02__pf->LightGuid = FGuid(0x3B372D48, 0x43DBE44F, 0x0150108F, 0x18B3D3E0);
	bpv__BreakLight_02__pf->Intensity = 50.000000f;
	bpv__BreakLight_02__pf->LightColor = FColor(83, 0, 0, 255);
	bpv__BreakLight_02__pf->RelativeLocation = FVector(-241.151596, 52.000000, 81.483452);
	bpv__Tire_sound__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Tire_sound__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Tire_sound__pf->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__Tire_sound__pf->bOverrideAttenuation = true;
	bpv__Tire_sound__pf->RelativeLocation = FVector(0.000000, 0.000000, 20.000000);
	bpv__Engine_Sound__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Engine_Sound__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Engine_Sound__pf->bOverrideAttenuation = true;
	bpv__Engine_Sound__pf->RelativeLocation = FVector(-280.000000, 0.000000, 60.000000);
	bpv__EnginexAccelerationxCurve__pfTT = CastChecked<UCurveFloat>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__SteeringxSpeedxCurve__pfTT = CastChecked<UCurveFloat>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__Gears__pf = TArray<FGear_Structure__pf863842189> ();
	bpv__Gears__pf.Reserve(6);
	bpv__Gears__pf.Add(FGear_Structure__pf863842189{});
	bpv__Gears__pf[0].bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf = FString(TEXT("Reverse"));
	bpv__Gears__pf[0].bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf = 2.850000f;
	bpv__Gears__pf.Add(FGear_Structure__pf863842189{});
	bpv__Gears__pf[1].bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf = FString(TEXT("Neutral"));
	bpv__Gears__pf.Add(FGear_Structure__pf863842189{});
	bpv__Gears__pf[2].bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf = FString(TEXT("1"));
	bpv__Gears__pf[2].bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf = 0.500000f;
	bpv__Gears__pf[2].bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf = 0.005000f;
	bpv__Gears__pf[2].bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf = 2.850000f;
	bpv__Gears__pf.Add(FGear_Structure__pf863842189{});
	bpv__Gears__pf[3].bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf = FString(TEXT("2"));
	bpv__Gears__pf[3].bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf = 0.600000f;
	bpv__Gears__pf[3].bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf = 0.200000f;
	bpv__Gears__pf[3].bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf = 2.020000f;
	bpv__Gears__pf.Add(FGear_Structure__pf863842189{});
	bpv__Gears__pf[4].bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf = FString(TEXT("3"));
	bpv__Gears__pf[4].bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf = 0.600000f;
	bpv__Gears__pf[4].bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf = 0.200000f;
	bpv__Gears__pf[4].bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf = 1.350000f;
	bpv__Gears__pf.Add(FGear_Structure__pf863842189{});
	bpv__Gears__pf[5].bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf = FString(TEXT("4"));
	bpv__Gears__pf[5].bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf = 1.000000f;
	bpv__Gears__pf[5].bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf = 0.200000f;
	bpv__Gears__pf[5].bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf = 1.000000f;
	bpv__Wheels__pf = TArray<FWheel_Structure__pf863842189> ();
	bpv__Wheels__pf.Reserve(4);
	bpv__Wheels__pf.Add(FWheel_Structure__pf863842189{});
	bpv__Wheels__pf[0].bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf = FName(TEXT("Wheel_RR"));
	bpv__Wheels__pf[0].bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf = 33.500000f;
	bpv__Wheels__pf[0].bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf = true;
	bpv__Wheels__pf[0].bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf = 0.050000f;
	bpv__Wheels__pf[0].bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf = true;
	bpv__Wheels__pf.Add(FWheel_Structure__pf863842189{});
	bpv__Wheels__pf[1].bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf = FName(TEXT("Wheel_RL"));
	bpv__Wheels__pf[1].bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf = 33.500000f;
	bpv__Wheels__pf[1].bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf = true;
	bpv__Wheels__pf[1].bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf = 0.050000f;
	bpv__Wheels__pf[1].bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf = true;
	bpv__Wheels__pf.Add(FWheel_Structure__pf863842189{});
	bpv__Wheels__pf[2].bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf = FName(TEXT("Wheel_FL"));
	bpv__Wheels__pf[2].bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf = 33.500000f;
	bpv__Wheels__pf[2].bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf = 45.000000f;
	bpv__Wheels__pf[2].bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf = 0.800000f;
	bpv__Wheels__pf.Add(FWheel_Structure__pf863842189{});
	bpv__Wheels__pf[3].bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf = FName(TEXT("Wheel_FR"));
	bpv__Wheels__pf[3].bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf = 33.500000f;
	bpv__Wheels__pf[3].bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf = 45.000000f;
	bpv__Wheels__pf[3].bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf = 0.800000f;
	bpv__SuspensionxStrength__pfT = 6500.000000f;
	bpv__SuspensionxDamping__pfT = 25.000000f;
	bpv__SuspensionxLength__pfT = 12.000000f;
	bpv__WheelxConstraints__pfT = TArray<UPhysicsConstraintComponent*> ();
	bpv__SteeringxFallxSpeed__pfTT = 30.000000f;
	bpv__BrakexStrength__pfT = 1500.000000f;
	bpv__RPMxIdle__pfT = 900.000000f;
	bpv__RPMxLimit__pfT = 7500.000000f;
	bpv__RPMxFall__pfT = 2000.000000f;
	bpv__RPMxRise__pfT = 3000.000000f;
	bpv__GearxChangexDelay__pfTT = 0.700000f;
	bpv__DifferentialxRatio__pfT = 3.070000f;
	bpv__DragxCoefficient__pfT = 0.320000f;
	bpv__AirxDensity__pfT = 1.200000f;
	bpv__AutoxRotatexCamera__pfTT = false;
	bpv__SteeringxConstraints__pfT = TArray<UPhysicsConstraintComponent*> ();
	bpv__CanxChangexView__pfTT = true;
	bpv__IsxThirdPersonxView__pfTT = true;
	bpv__EnginexStarted__pfT = false;
	bpv__AutomaticxTransmision__pfT = true;
	bpv__WheelxMeshes__pfT = TArray<USkeletalMeshComponent*> ();
	bpv__SteeringxAngle__pfT = 0.000000f;
	bpv__RPM__pf = 0.000000f;
	bpv__Speed__pf = 0.000000f;
	bpv__Gear__pf = 2;
	bpv__IsxPlayerxControlled__pfTT = true;
	bpv__IsxAccelerating__pfT = false;
	bpv__IsxChangingxGear__pfTT = false;
	bpv__IsxBraking__pfT = false;
	bpv__IsxReversexGear__pfTT = false;
	bpv__HandBrakexOn__pfT = false;
	bpv__HeadLightsxOn__pfT = false;
	bpv__CanxChangexGear__pfTT = true;
	bpv__LookxBack__pfT = false;
	bpv__Debug_Widget__pf = nullptr;
	bpv__BrakexasxReverse__pfTT = true;
	bpv__SmartxThrottle__pfT = true;
	bpv__InfinitexFuel__pfT = false;
	bpv__EnablexAirxControl__pfTT = false;
	bpv__FuelxBurningxRate__pfTT = 1.000000f;
	bpv__AntixRollxMultiplier__pfGT = 0.500000f;
	bpv__AntixDriftxMultiplier__pfGT = 0.000000f;
	bpv__AdditionalxGravityxFactor__pfTT = 700.000000f;
	bpv__BrakeLightxMaterialxSlot__pfTT = FName();
	bpv__ReverseLightxMaterialxSlot__pfTT = FName();
	bpv__M_BrakeLight__pf = nullptr;
	bpv__HeadLightxMaterialxSlot__pfTT = FName(TEXT("HeadLight"));
	bpv__PaintxMaterial__pfT = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__EnginexDrownedx__pfTzy = false;
	bpv__FuelxAmmount__pfT = 100.000000f;
	bpv__Mileage__pf = 0.000000f;
	bpv__EnginexSound__pfT = CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__IsxinxAir__pfTT = false;
	AutoPossessAI = EAutoPossessAI::Disabled;
	AIControllerClass = nullptr;
	Tags = TArray<FName> ();
	Tags.Reserve(2);
	Tags.Add(FName(TEXT("Vehicle")));
	Tags.Add(FName(TEXT("Name_of_Vehicle")));
}
void ABP_Master_Vehicle_C__pf3373537038::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Mesh__pf)
	{
		bpv__Mesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TP_SpringArm__pf)
	{
		bpv__TP_SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TP_Camera__pf)
	{
		bpv__TP_Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FP_SpringArm__pf)
	{
		bpv__FP_SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FP_Camera__pf)
	{
		bpv__FP_Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__DriverxTriggerBox__pfT)
	{
		bpv__DriverxTriggerBox__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PlayerxLocation__pfT)
	{
		bpv__PlayerxLocation__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Driver__pf)
	{
		bpv__Driver__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__HeadLight_01__pf)
	{
		bpv__HeadLight_01__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__HeadLight_02__pf)
	{
		bpv__HeadLight_02__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__BreakLight_01__pf)
	{
		bpv__BreakLight_01__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__BreakLight_02__pf)
	{
		bpv__BreakLight_02__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Tire_sound__pf)
	{
		bpv__Tire_sound__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Engine_Sound__pf)
	{
		bpv__Engine_Sound__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_Master_Vehicle_C__pf3373537038::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UCamaro_AnimBlueprint_C__pf2913349635::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UCamaro_Driver_AnimBlueprint_C__pf2913349635::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UVehicle_Debug_C__pf1863595755::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Water_Volume_C__pf3286898353::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Physic_Pawn_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UVehicle_Save_C__pf1010915279::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FWheel_Structure__pf863842189();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FWheel_Structure__pf863842189());
	extern UScriptStruct* Z_Construct_UScriptStruct_FGear_Structure__pf863842189();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FGear_Structure__pf863842189());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__14 = NewObject<UPhysicsConstraintComponent>(InDynamicClass, UPhysicsConstraintComponent::StaticClass(), TEXT("NODE_AddPhysicsConstraintComponent-1"));
	InDynamicClass->ComponentTemplates.Add(__Local__14);
	auto __Local__15 = NewObject<UStaticMeshComponent>(InDynamicClass, UStaticMeshComponent::StaticClass(), TEXT("NODE_AddStaticMeshComponent-1"));
	InDynamicClass->ComponentTemplates.Add(__Local__15);
	auto __Local__16 = NewObject<UPhysicsConstraintComponent>(InDynamicClass, UPhysicsConstraintComponent::StaticClass(), TEXT("NODE_AddPhysicsConstraintComponent-2"));
	InDynamicClass->ComponentTemplates.Add(__Local__16);
	auto __Local__17 = NewObject<USkeletalMeshComponent>(InDynamicClass, USkeletalMeshComponent::StaticClass(), TEXT("NODE_AddSkeletalMeshComponent-0"));
	InDynamicClass->ComponentTemplates.Add(__Local__17);
	auto __Local__18 = NewObject<USkeletalMeshComponent>(InDynamicClass, USkeletalMeshComponent::StaticClass(), TEXT("NODE_AddSkeletalMeshComponent-1"));
	InDynamicClass->ComponentTemplates.Add(__Local__18);
	auto __Local__19 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__19);
	auto __Local__20 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__20);
	__Local__14->ConstraintInstance.ProfileInstance.ProjectionLinearTolerance = 0.100000f;
	__Local__14->ConstraintInstance.ProfileInstance.ProjectionAngularTolerance = 1.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.LinearBreakThreshold = 8000.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.LinearLimit.Limit = 10.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.LinearLimit.ZMotion = ELinearConstraintMotion::LCM_Limited;
	__Local__14->ConstraintInstance.ProfileInstance.ConeLimit.Swing1Motion = EAngularConstraintMotion::ACM_Locked;
	__Local__14->ConstraintInstance.ProfileInstance.TwistLimit.TwistMotion = EAngularConstraintMotion::ACM_Locked;
	__Local__14->ConstraintInstance.ProfileInstance.LinearDrive.XDrive.Damping = 100.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.LinearDrive.YDrive.Damping = 100.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.LinearDrive.ZDrive.Damping = 100.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.LinearDrive.ZDrive.bEnablePositionDrive = true;
	__Local__14->ConstraintInstance.ProfileInstance.LinearDrive.ZDrive.bEnableVelocityDrive = true;
	__Local__14->ConstraintInstance.ProfileInstance.AngularDrive.TwistDrive.Stiffness = 5000000.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.AngularDrive.TwistDrive.Damping = 0.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.AngularDrive.TwistDrive.bEnableVelocityDrive = true;
	__Local__14->ConstraintInstance.ProfileInstance.AngularDrive.SwingDrive.Stiffness = 5000000.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.AngularDrive.SwingDrive.Damping = 0.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.AngularDrive.SwingDrive.bEnableVelocityDrive = true;
	__Local__14->ConstraintInstance.ProfileInstance.AngularDrive.SlerpDrive.Stiffness = 5000000.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.AngularDrive.SlerpDrive.Damping = 0.000000f;
	__Local__14->ConstraintInstance.ProfileInstance.AngularDrive.AngularDriveMode = EAngularDriveMode::Type::TwistAndSwing;
	__Local__14->ConstraintInstance.ProfileInstance.bDisableCollision = true;
	__Local__15->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	__Local__15->bAlwaysCreatePhysicsState = true;
	__Local__15->bMultiBodyOverlap = true;
	auto& __Local__21 = (*(AccessPrivateProperty<FName >(&(__Local__15->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__21 = FName(TEXT("Custom"));
	auto& __Local__22 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__15->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__22), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__23 = TArray<FResponseChannel> ();
	__Local__23.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__23.GetData(), 8);
	auto& __Local__24 = __Local__23[0];
	__Local__24.Channel = FName(TEXT("WorldStatic"));
	__Local__24.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__25 = __Local__23[1];
	__Local__25.Channel = FName(TEXT("WorldDynamic"));
	__Local__25.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__26 = __Local__23[2];
	__Local__26.Channel = FName(TEXT("Pawn"));
	__Local__26.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__27 = __Local__23[3];
	__Local__27.Channel = FName(TEXT("Visibility"));
	__Local__27.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__28 = __Local__23[4];
	__Local__28.Channel = FName(TEXT("Camera"));
	__Local__28.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__29 = __Local__23[5];
	__Local__29.Channel = FName(TEXT("PhysicsBody"));
	__Local__29.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__30 = __Local__23[6];
	__Local__30.Channel = FName(TEXT("Vehicle"));
	__Local__30.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__31 = __Local__23[7];
	__Local__31.Channel = FName(TEXT("Destructible"));
	__Local__31.Response = ECollisionResponse::ECR_Ignore;
	__Local__15->BodyInstance.bUseCCD = true;
	__Local__15->BodyInstance.bNotifyRigidBodyCollision = true;
	__Local__15->BodyInstance.bSimulatePhysics = true;
	auto& __Local__32 = (*(AccessPrivateProperty<float >(&(__Local__15->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	__Local__32 = 1.000000f;
	__Local__15->BodyInstance.PositionSolverIterationCount = 80;
	__Local__15->BodyInstance.VelocitySolverIterationCount = 11;
	auto& __Local__33 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__15->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__33 = ECollisionChannel::ECC_PhysicsBody;
	__Local__15->bVisible = false;
	__Local__15->bShouldUpdatePhysicsVolume = true;
	__Local__15->RelativeScale3D = FVector(3.000000, 3.000000, 3.000000);
	static TWeakObjectPtr<UProperty> __Local__35{};
	const UProperty* __Local__34 = __Local__35.Get();
	if (nullptr == __Local__34)
	{
		__Local__34 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__34);
		__Local__35 = __Local__34;
	}
	(((UBoolProperty*)__Local__34)->SetPropertyValue_InContainer((__Local__15), false, 0));
	__Local__16->ConstraintInstance.ProfileInstance.ProjectionLinearTolerance = 0.100000f;
	__Local__16->ConstraintInstance.ProfileInstance.ProjectionAngularTolerance = 1.000000f;
	__Local__16->ConstraintInstance.ProfileInstance.LinearLimit.Limit = 10.000000f;
	__Local__16->ConstraintInstance.ProfileInstance.ConeLimit.Swing1Motion = EAngularConstraintMotion::ACM_Limited;
	__Local__16->ConstraintInstance.ProfileInstance.ConeLimit.Swing2Motion = EAngularConstraintMotion::ACM_Locked;
	__Local__16->ConstraintInstance.ProfileInstance.ConeLimit.bSoftConstraint = false;
	__Local__16->ConstraintInstance.ProfileInstance.TwistLimit.TwistMotion = EAngularConstraintMotion::ACM_Locked;
	__Local__16->ConstraintInstance.ProfileInstance.AngularDrive.TwistDrive.Stiffness = 100000000.000000f;
	__Local__16->ConstraintInstance.ProfileInstance.AngularDrive.TwistDrive.Damping = 100.000000f;
	__Local__16->ConstraintInstance.ProfileInstance.AngularDrive.SwingDrive.Stiffness = 100000000.000000f;
	__Local__16->ConstraintInstance.ProfileInstance.AngularDrive.SwingDrive.Damping = 100.000000f;
	__Local__16->ConstraintInstance.ProfileInstance.AngularDrive.SwingDrive.bEnablePositionDrive = true;
	__Local__16->ConstraintInstance.ProfileInstance.AngularDrive.SlerpDrive.Stiffness = 100000000.000000f;
	__Local__16->ConstraintInstance.ProfileInstance.AngularDrive.SlerpDrive.Damping = 100.000000f;
	__Local__16->ConstraintInstance.ProfileInstance.AngularDrive.AngularDriveMode = EAngularDriveMode::Type::TwistAndSwing;
	__Local__16->ConstraintInstance.ProfileInstance.bDisableCollision = true;
	__Local__16->bUseAttachParentBound = true;
	__Local__17->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	__Local__17->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__17->PhysicsAssetOverride = CastChecked<UPhysicsAsset>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	auto& __Local__36 = (*(AccessPrivateProperty<FName >(&(__Local__17->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__36 = FName(TEXT("Custom"));
	auto& __Local__37 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__17->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__38 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__37), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__38 = TArray<FResponseChannel> ();
	__Local__38.AddUninitialized(1);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__38.GetData(), 1);
	auto& __Local__39 = __Local__38[0];
	__Local__39.Channel = FName(TEXT("Vehicle"));
	__Local__39.Response = ECollisionResponse::ECR_Ignore;
	__Local__17->BodyInstance.bUseCCD = true;
	__Local__17->BodyInstance.bSimulatePhysics = true;
	auto& __Local__40 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__17->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__40 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__41 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__17->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__41 = ECollisionChannel::ECC_Vehicle;
	__Local__18->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	__Local__18->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	__Local__18->PhysicsAssetOverride = CastChecked<UPhysicsAsset>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	auto& __Local__42 = (*(AccessPrivateProperty<FName >(&(__Local__18->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__42 = FName(TEXT("Custom"));
	auto& __Local__43 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__18->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__43), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__44 = TArray<FResponseChannel> ();
	__Local__44.AddUninitialized(1);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__44.GetData(), 1);
	auto& __Local__45 = __Local__44[0];
	__Local__45.Channel = FName(TEXT("Vehicle"));
	__Local__45.Response = ECollisionResponse::ECR_Ignore;
	__Local__18->BodyInstance.bUseCCD = true;
	__Local__18->BodyInstance.bSimulatePhysics = true;
	auto& __Local__46 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__18->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__46 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__47 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(__Local__18->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__47 = ECollisionChannel::ECC_Vehicle;
	__Local__20->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__20->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__20->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__48 = __Local__20->ComponentDelegateBindings[0];
	__Local__48.ComponentPropertyName = FName(TEXT("Mesh"));
	__Local__48.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__48.FunctionNameToBind = FName(TEXT("BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__49 = __Local__20->ComponentDelegateBindings[1];
	__Local__49.ComponentPropertyName = FName(TEXT("Mesh"));
	__Local__49.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__49.FunctionNameToBind = FName(TEXT("BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 26:
			{
				__CurrentState = 27;
				break;
			}
		case 27:
			{
				bpv__CanxChangexGear__pfTT = true;
				__CurrentState = -1;
				break;
			}
		case 28:
			{
				AActor::FlushNetDormancy();
			}
		case 29:
			{
				bpv__IsxChangingxGear__pfTT = false;
			}
		case 30:
			{
				bpv__CanxChangexGear__pfTT = false;
			}
		case 31:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(26, 2147483647, TEXT("ExecuteUbergraph_BP_Master_Vehicle_0"), this));
				__CurrentState = -1;
				break;
			}
		case 32:
			{
				AActor::FlushNetDormancy();
			}
		case 33:
			{
				bpv__IsxChangingxGear__pfTT = true;
			}
		case 34:
			{
				UKismetSystemLibrary::Delay(this, bpv__GearxChangexDelay__pfTT, FLatentActionInfo(35, -924206304, TEXT("ExecuteUbergraph_BP_Master_Vehicle_0"), this));
				__CurrentState = -1;
				break;
			}
		case 35:
			{
				__CurrentState = 36;
				break;
			}
		case 36:
			{
				if (!bpv__CanxChangexGear__pfTT)
				{
					__CurrentState = 28;
					break;
				}
			}
		case 37:
			{
				AActor::FlushNetDormancy();
			}
		case 38:
			{
				bpv__Gear__pf = b0l__K2Node_CustomEvent_Target_Gear__pf;
				__CurrentState = 28;
				break;
			}
		case 48:
			{
				__CurrentState = 32;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_1(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				if (!b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				bpf__StallxEngine__pfT();
			}
		case 14:
			{
				bpv__EnginexDrownedx__pfTzy = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				b0l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				__CurrentState = 17;
				break;
			}
		case 17:
			{
				__StateStack.Push(12);
			}
		case 18:
			{
				__StateStack.Push(20);
			}
		case 19:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 23;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 21;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 22:
			{
				if (!true)
				{
					__CurrentState = 9;
					break;
				}
				__CurrentState = 15;
				break;
			}
		case 23:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 24:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 25:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				__StateStack.Push(11);
				__CurrentState = 18;
				break;
			}
		case 40:
			{
				__StateStack.Push(10);
				__CurrentState = 18;
				break;
			}
		case 83:
			{
				__CurrentState = 84;
				break;
			}
		case 84:
			{
				b0l__K2Node_DynamicCast_AsBP_Water_Volume__pf = Cast<ABP_Water_Volume_C__pf3286898353>(b0l__K2Node_ComponentBoundEvent_OtherActor2__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBP_Water_Volume__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 85:
			{
				bpf__DrowningxTimer__pfT();
				__CurrentState = 39;
				break;
			}
		case 86:
			{
				__CurrentState = 87;
				break;
			}
		case 87:
			{
				UKismetSystemLibrary::Delay(this, 3.000000, FLatentActionInfo(16, 1681619850, TEXT("ExecuteUbergraph_BP_Master_Vehicle_1"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 88:
			{
				__CurrentState = 89;
				break;
			}
		case 89:
			{
				b0l__K2Node_DynamicCast_AsBP_Water_Volume2__pf = Cast<ABP_Water_Volume_C__pf3286898353>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsBP_Water_Volume2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 40;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue3__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue4__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 54:
			{
				__CurrentState = 55;
				break;
			}
		case 55:
			{
				bpf__DetectxDrifting__pfT();
			}
		case 56:
			{
				bpf__UpdatexSounds__pfT();
			}
		case 57:
			{
				bpf__DetectxinxAir__pfTT();
			}
		case 58:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__Gear__pf, 0);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__CanxChangexGear__pfTT);
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(bpv__AutomaticxTransmision__pfT);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__IsxChangingxGear__pfTT, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue2__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanOR_ReturnValue__pf, bpfv__CallFunc_Not_PreBool_ReturnValue2__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue3__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanOR_ReturnValue2__pf, bpv__HandBrakexOn__pfT);
				bpfv__CallFunc_BooleanOR_ReturnValue4__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanOR_ReturnValue3__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue4__pf)
				{
					__CurrentState = 59;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 59:
			{
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpv__RPM__pf, 0.000000, bpv__RPMxLimit__pfT, 0.000000, 1.000000);
				FCustomThunkTemplates::Array_Get(bpv__Gears__pf, bpv__Gear__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_MapRangeClamped_ReturnValue__pf, b0l__CallFunc_Array_Get_Item__pf.bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 62;
					break;
				}
			}
		case 60:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__Gear__pf, 1);
				if (!bpfv__CallFunc_Greater_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 61:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__Gear__pf, 1);
				bpf__GearxChange__pfT(bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		case 62:
			{
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpv__RPM__pf, 0.000000, bpv__RPMxLimit__pfT, 0.000000, 1.000000);
				FCustomThunkTemplates::Array_Get(bpv__Gears__pf, bpv__Gear__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_MapRangeClamped_ReturnValue__pf, b0l__CallFunc_Array_Get_Item__pf.bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 63:
			{
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpv__Gears__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpv__Gear__pf, bpfv__CallFunc_Array_LastIndex_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 64:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__Gear__pf, 1);
				bpf__GearxChange__pfT(bpfv__CallFunc_Add_IntInt_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		case 92:
			{
				__CurrentState = 63;
				break;
			}
		case 93:
			{
				__CurrentState = 60;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_SelectInt_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				AActor::FlushNetDormancy();
			}
		case 3:
			{
				bpv__EnginexStarted__pfT = true;
			}
		case 4:
			{
				AActor::FlushNetDormancy();
			}
		case 5:
			{
				bpv__RPM__pf = bpv__RPMxIdle__pfT;
			}
		case 6:
			{
				bpf__OnRep_RPM__pf();
			}
		case 7:
			{
				AActor::FlushNetDormancy();
			}
		case 8:
			{
				bpfv__CallFunc_SelectInt_ReturnValue__pf = UKismetMathLibrary::SelectInt(1, 0, bpv__AutomaticxTransmision__pfT);
				bpv__Gear__pf = bpfv__CallFunc_SelectInt_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 77:
			{
				__CurrentState = 78;
				break;
			}
		case 78:
			{
				bpf__PossessxVehicle__pfT(b0l__K2Node_Event_NewController__pf, /*out*/ b0l__CallFunc_Possess_Vehicle_Is_Controlled_by_Player__pf);
			}
		case 79:
			{
				if (!bpv__EnginexDrownedx__pfTzy)
				{
					__CurrentState = 80;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 80:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(1, 1329962945, TEXT("ExecuteUbergraph_BP_Master_Vehicle_3"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 49);
	// optimized KCST_UnconditionalGoto
	bpf__AdditionalxGravityxxxDriverxHelper__pfTTETT();
	bpf__CalculatexMilleage__pfT();
	bpf__CalculatexSpeed__pfT();
	bpf__AirxDrag__pfT();
	return; //KCST_EndOfThread
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 90);
	// optimized KCST_UnconditionalGoto
	bpf__SavexVariables__pfT();
	return; //KCST_EndOfThread
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_6(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 41);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
	bpf__ActivatexCamera__pfT();
	bpf__CreatexPhysicxconstraints__pfTT();
	bpf__Initialize__pf();
	bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("Timer")), 0.100000, true);
	bpf__LoadxVariables__pfT();
	return; //KCST_EndOfThread
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 81);
	// optimized KCST_UnconditionalGoto
	bpf__TogglexHeadLights__pfT();
	return; //KCST_EndOfThread
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 75);
	// optimized KCST_UnconditionalGoto
	bpf__ReversexGear__pfT(b0l__K2Node_CustomEvent_Reverse_Gear__pf);
	return; //KCST_EndOfThread
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 73);
	// optimized KCST_UnconditionalGoto
	bpf__SetxHandBrakexInput__pfTT(b0l__K2Node_CustomEvent_Apply_Handbrake__pf);
	return; //KCST_EndOfThread
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 71);
	// optimized KCST_UnconditionalGoto
	bpf__SetxBrakexInput__pfTT(b0l__K2Node_CustomEvent_Axis_Value__pf);
	return; //KCST_EndOfThread
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 69);
	// optimized KCST_UnconditionalGoto
	bpf__SetxThrottlexInput__pfTT(b0l__K2Node_CustomEvent_Axis_Value2__pf);
	return; //KCST_EndOfThread
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 67);
	// optimized KCST_UnconditionalGoto
	bpf__SetxSteeringxInput__pfTT(b0l__K2Node_CustomEvent_Axis_Value3__pf);
	return; //KCST_EndOfThread
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 66);
	// optimized KCST_UnconditionalGoto
	bpf__UnPossesxVehicle__pfT();
	return; //KCST_EndOfThread
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__GearxDown__pfT()
{
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_2(93);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__GearxUp__pfT()
{
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_2(92);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf)
{
	b0l__K2Node_Event_EndPlayReason__pf = bpp__EndPlayReason__pf;
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_5(90);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_1(88);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__DrowningxTimer__pfT()
{
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_1(86);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__54;
	T__Local__54& bpp__SweepResult__pf = *const_cast<T__Local__54 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_1(83);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__Server_HeadLights__pf_Implementation()
{
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_7(81);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ReceivePossessed__pf(AController* bpp__NewController__pf)
{
	b0l__K2Node_Event_NewController__pf = bpp__NewController__pf;
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_3(77);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__Server_ReversexGear__pfT_Implementation(bool bpp__ReversexGear__pfT)
{
	b0l__K2Node_CustomEvent_Reverse_Gear__pf = bpp__ReversexGear__pfT;
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_8(75);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__Server_Handbrake__pf_Implementation(bool bpp__ApplyxHandbrake__pfT)
{
	b0l__K2Node_CustomEvent_Apply_Handbrake__pf = bpp__ApplyxHandbrake__pfT;
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_9(73);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__Server_Brake__pf_Implementation(float bpp__AxisxValue__pfT)
{
	b0l__K2Node_CustomEvent_Axis_Value__pf = bpp__AxisxValue__pfT;
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_10(71);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__Server_Throttle__pf_Implementation(float bpp__AxisxValue__pfT)
{
	b0l__K2Node_CustomEvent_Axis_Value2__pf = bpp__AxisxValue__pfT;
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_11(69);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__Server_Steering__pf_Implementation(float bpp__AxisxValue__pfT)
{
	b0l__K2Node_CustomEvent_Axis_Value3__pf = bpp__AxisxValue__pfT;
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_12(67);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__Server_ExitxVehicle__pfT_Implementation()
{
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_13(66);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__Timer__pf()
{
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_2(54);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__Server_Tick__pf()
{
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_4(49);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__GearxChange__pfT(int32 bpp__TargetxGear__pfT)
{
	b0l__K2Node_CustomEvent_Target_Gear__pf = bpp__TargetxGear__pfT;
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_0(48);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_Master_Vehicle__pf_6(41);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__UserConstructionScript__pf()
{
	if(IsValid(bpv__Mesh__pf))
	{
		bpv__Mesh__pf->SetMaterialByName(FName(TEXT("Paint")), bpv__PaintxMaterial__pfT);
	}
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__SetxSteeringxInput__pfTT(float bpp__SteeringxAxisxValue__pfTT)
{
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	float bpfv__CallFunc_GetFloatValue_ReturnValue__pf{};
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable2__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf{};
	float bpfv__CallFunc_FInterpTo_Constant_ReturnValue__pf{};
	UPhysicsConstraintComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable2__pf{};
	UPhysicsConstraintComponent* bpfv__CallFunc_Array_Get_Item2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item3__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item4__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_FInterpTo_Constant_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpp__SteeringxAxisxValue__pfTT, 0.000000);
				if (!bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = bpfv__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 7:
			{
				__StateStack.Push(25);
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Array_Get_Item3__pf.bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
				bpfv__CallFunc_FInterpTo_Constant_ReturnValue__pf = UKismetMathLibrary::FInterpTo_Constant(bpv__SteeringxAngle__pfT, 0.000000, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf, bpv__SteeringxFallxSpeed__pfTT);
				FCustomThunkTemplates::Array_Get(bpv__SteeringxConstraints__pfT, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(1.000000, -1.000000, bpfv__CallFunc_Array_Get_Item3__pf.bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_FInterpTo_Constant_ReturnValue__pf, bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UPhysicsConstraintComponent::SetAngularOrientationTarget(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
				}
			}
		case 10:
			{
				AActor::FlushNetDormancy();
			}
		case 11:
			{
				bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
				bpfv__CallFunc_FInterpTo_Constant_ReturnValue__pf = UKismetMathLibrary::FInterpTo_Constant(bpv__SteeringxAngle__pfT, 0.000000, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf, bpv__SteeringxFallxSpeed__pfTT);
				bpv__SteeringxAngle__pfT = bpfv__CallFunc_FInterpTo_Constant_ReturnValue__pf;
			}
		case 12:
			{
				bpf__OnRep_SteeringxAngle__pfT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 14:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 15:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
			}
		case 16:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 17:
			{
				__StateStack.Push(26);
			}
		case 18:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item4__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Array_Get_Item4__pf.bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpp__SteeringxAxisxValue__pfTT);
				if(IsValid(bpv__SteeringxSpeedxCurve__pfTT))
				{
					bpfv__CallFunc_GetFloatValue_ReturnValue__pf = bpv__SteeringxSpeedxCurve__pfTT->UCurveFloat::GetFloatValue(bpv__Speed__pf);
				}
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, bpfv__CallFunc_GetFloatValue_ReturnValue__pf);
				bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
				FCustomThunkTemplates::Array_Get(bpv__SteeringxConstraints__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item4__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue2__pf = UKismetMathLibrary::SelectFloat(1.000000, -1.000000, bpfv__CallFunc_Array_Get_Item4__pf.bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Array_Get_Item4__pf.bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, bpp__SteeringxAxisxValue__pfTT);
				bpfv__CallFunc_FInterpTo_Constant_ReturnValue2__pf = UKismetMathLibrary::FInterpTo_Constant(bpv__SteeringxAngle__pfT, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_FInterpTo_Constant_ReturnValue2__pf, bpfv__CallFunc_SelectFloat_ReturnValue2__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue2__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_Array_Get_Item2__pf->UPhysicsConstraintComponent::SetAngularOrientationTarget(bpfv__CallFunc_MakeRotator_ReturnValue2__pf);
				}
			}
		case 20:
			{
				AActor::FlushNetDormancy();
			}
		case 21:
			{
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpp__SteeringxAxisxValue__pfTT);
				if(IsValid(bpv__SteeringxSpeedxCurve__pfTT))
				{
					bpfv__CallFunc_GetFloatValue_ReturnValue__pf = bpv__SteeringxSpeedxCurve__pfTT->UCurveFloat::GetFloatValue(bpv__Speed__pf);
				}
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, bpfv__CallFunc_GetFloatValue_ReturnValue__pf);
				bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item4__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Array_Get_Item4__pf.bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, bpp__SteeringxAxisxValue__pfTT);
				bpfv__CallFunc_FInterpTo_Constant_ReturnValue2__pf = UKismetMathLibrary::FInterpTo_Constant(bpv__SteeringxAngle__pfT, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpv__SteeringxAngle__pfT = bpfv__CallFunc_FInterpTo_Constant_ReturnValue2__pf;
			}
		case 22:
			{
				bpf__OnRep_SteeringxAngle__pfT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__EnablexAirxControl__pfTT, bpv__IsxinxAir__pfTT);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 24:
			{
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__Mesh__pf->USceneComponent::GetForwardVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, -0.100000);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpp__SteeringxAxisxValue__pfTT);
				if(IsValid(bpv__Mesh__pf))
				{
					bpv__Mesh__pf->AddAngularImpulse(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf, FName(TEXT("None")), true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 5;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 15;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__SetxThrottlexInput__pfTT(float bpp__AxisxValue__pfT)
{
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	USkeletalMeshComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	FVector bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_GetValueRange_MinValue__pf{};
	float bpfv__CallFunc_GetValueRange_MaxValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__Temp_float_Variable__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf{};
	USkeletalMeshComponent* bpfv__CallFunc_Array_Get_Item2__pf{};
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetRightVector_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue4__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue3__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue2__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue3__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue3__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue4__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue4__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf{};
	float bpfv__CallFunc_GetFloatValue_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue3__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue6__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue7__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue8__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue9__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue3__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue10__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item3__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue5__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue5__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue6__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue6__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue4__pf{};
	float bpfv__CallFunc_RadiansToDegrees_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(6);
			}
		case 2:
			{
				if (!bpv__EnginexStarted__pfT)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpp__AxisxValue__pfT, 0.000000);
				bpfv__CallFunc_Not_PreBool_ReturnValue4__pf = UKismetMathLibrary::Not_PreBool(bpv__IsxChangingxGear__pfTT);
				bpfv__CallFunc_BooleanAND_ReturnValue4__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Not_PreBool_ReturnValue4__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue4__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpv__RPM__pf, 0.000000, bpv__RPMxLimit__pfT, 0.000000, 1.000000);
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(bpv__AutomaticxTransmision__pfT);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpv__Gear__pf, 2);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_MapRangeClamped_ReturnValue__pf, bpv__Gears__pf[bpv__Gear__pf].bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Greater_IntInt_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue3__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanAND_ReturnValue2__pf, bpfv__CallFunc_Not_PreBool_ReturnValue2__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue3__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 5:
			{
				bpf__StallxEngine__pfT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__EnablexAirxControl__pfTT, bpv__IsxinxAir__pfTT);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetRightVector_ReturnValue2__pf = bpv__Mesh__pf->USceneComponent::GetRightVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetRightVector_ReturnValue2__pf, 0.100000);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue3__pf, bpp__AxisxValue__pfT);
				if(IsValid(bpv__Mesh__pf))
				{
					bpv__Mesh__pf->AddAngularImpulse(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue4__pf, FName(TEXT("None")), true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__Temp_float_Variable__pf = 0.000000;
				bpfv__Temp_bool_Variable__pf = bpv__EnginexStarted__pfT;
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpv__RPM__pf, TSwitchValue<bool , float >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , float >(false, bpfv__Temp_float_Variable__pf), TSwitchPair<bool , float >(true, bpv__RPMxIdle__pfT)));
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpv__IsxAccelerating__pfT = false;
			}
		case 10:
			{
				AActor::FlushNetDormancy();
			}
		case 11:
			{
				bpfv__CallFunc_SelectFloat_ReturnValue3__pf = UKismetMathLibrary::SelectFloat(1.200000, 1.000000, bpv__IsxChangingxGear__pfTT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue8__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__RPMxFall__pfT, bpfv__CallFunc_SelectFloat_ReturnValue3__pf);
				bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue9__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue8__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__RPM__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue9__pf);
				bpv__RPM__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue3__pf;
			}
		case 12:
			{
				bpf__OnRep_RPM__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__RPM__pf, bpv__RPMxLimit__pfT);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf)
				{
					__CurrentState = 33;
					break;
				}
			}
		case 14:
			{
				bpv__IsxAccelerating__pfT = true;
			}
		case 15:
			{
				AActor::FlushNetDormancy();
			}
		case 16:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__Gear__pf, 1);
				if(IsValid(bpv__EnginexAccelerationxCurve__pfTT))
				{
					bpv__EnginexAccelerationxCurve__pfTT->UCurveBase::GetValueRange(/*out*/ bpfv__CallFunc_GetValueRange_MinValue__pf, /*out*/ bpfv__CallFunc_GetValueRange_MaxValue__pf);
				}
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(2.000000, bpv__Gears__pf[bpv__Gear__pf].bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf);
				bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf = UKismetMathLibrary::MapRangeClamped(bpv__RPM__pf, 0.000000, bpv__RPMxLimit__pfT, 0.000000, 1.000000);
				if(IsValid(bpv__EnginexAccelerationxCurve__pfTT))
				{
					bpfv__CallFunc_GetFloatValue_ReturnValue__pf = bpv__EnginexAccelerationxCurve__pfTT->UCurveFloat::GetFloatValue(bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf);
				}
				bpfv__CallFunc_MapRangeClamped_ReturnValue3__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_GetFloatValue_ReturnValue__pf, bpfv__CallFunc_GetValueRange_MinValue__pf, bpfv__CallFunc_GetValueRange_MaxValue__pf, 0.000000, 1.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue6__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_MapRangeClamped_ReturnValue3__pf, bpv__RPMxRise__pfT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue7__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue6__pf, bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue10__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue7__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__RPM__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue10__pf);
				bpv__RPM__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
			}
		case 17:
			{
				bpf__OnRep_RPM__pf();
			}
		case 18:
			{
				if (!bpv__InfinitexFuel__pfT)
				{
					__CurrentState = 30;
					break;
				}
			}
		case 19:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 20:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 21:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 23:
			{
				__StateStack.Push(29);
			}
		case 24:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue3__pf = UKismetMathLibrary::Not_PreBool(bpv__HandBrakexOn__pfT);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue6__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_Array_Get_Item3__pf.bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue2__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Not_PreBool_ReturnValue6__pf, bpfv__CallFunc_Not_PreBool_ReturnValue3__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue6__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Array_Get_Item3__pf.bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf, bpfv__CallFunc_BooleanOR_ReturnValue2__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue6__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 25:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__SmartxThrottle__pfT);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue5__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_Array_Get_Item3__pf.bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue5__pf = UKismetMathLibrary::BooleanAND(bpv__SmartxThrottle__pfT, bpfv__CallFunc_Not_PreBool_ReturnValue5__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanAND_ReturnValue5__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__Gears__pf[bpv__Gear__pf].bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf, bpv__DifferentialxRatio__pfT);
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__RPMxLimit__pfT, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf, 0.360000);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue4__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf, bpfv__CallFunc_Array_Get_Item3__pf.bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf);
				bpfv__CallFunc_RadiansToDegrees_ReturnValue__pf = UKismetMathLibrary::RadiansToDegrees(bpfv__CallFunc_Divide_FloatFloat_ReturnValue4__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_Array_Get_Item2__pf->UPrimitiveComponent::SetPhysicsMaxAngularVelocity(bpfv__CallFunc_RadiansToDegrees_ReturnValue__pf, false, FName(TEXT("None")));
				}
			}
		case 27:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__Gear__pf, 0);
				bpfv__CallFunc_SelectFloat_ReturnValue2__pf = UKismetMathLibrary::SelectFloat(-1.000000, 1.000000, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__Gears__pf[bpv__Gear__pf].bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf, bpv__DifferentialxRatio__pfT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(1500.000000, bpv__RPM__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_GetRightVector_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item2__pf->USceneComponent::GetRightVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetRightVector_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpfv__CallFunc_SelectFloat_ReturnValue2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_Array_Get_Item2__pf->UPrimitiveComponent::AddTorque(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf, FName(TEXT("None")), true);
				}
			}
		case 28:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->UPrimitiveComponent::GetPhysicsAngularVelocity(FName(TEXT("None")));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 21;
				break;
			}
		case 30:
			{
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__RPM__pf, 5000000.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, bpv__FuelxBurningxRate__pfTT);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__FuelxAmmount__pfT, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf);
				bpv__FuelxAmmount__pfT = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 31:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__FuelxAmmount__pfT, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 19;
					break;
				}
			}
		case 32:
			{
				bpf__StallxEngine__pfT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				AActor::FlushNetDormancy();
			}
		case 34:
			{
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__RPMxLimit__pfT, 1500.000000);
				bpv__RPM__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf;
			}
		case 35:
			{
				bpf__OnRep_RPM__pf();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__LookAround__pf(float bpp__LookxUp__pfT, float bpp__LookxRight__pfT)
{
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue2__pf{};
	bool bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_AddRelativeRotation_SweepHitResult__pf{};
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll2__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch2__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw2__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	FRotator bpfv__CallFunc_SelectRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue2__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue3__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue3__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanAND_ReturnValue2__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf{};
	FRotator bpfv__CallFunc_SelectRotator_ReturnValue2__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult2__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__LookxUp__pfT, 1.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf, bpp__LookxRight__pfT);
				if(IsValid(bpv__TP_SpringArm__pf))
				{
					bpv__TP_SpringArm__pf->USceneComponent::K2_AddRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_AddRelativeRotation_SweepHitResult__pf, false);
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetVelocity_ReturnValue__pf = GetVelocity();
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 0.036000);
				bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NearlyEqual_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, 0.000000, 3.000000);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf);
				FRotator  __Local__55 = FRotator(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakRotator(((IsValid(bpv__TP_SpringArm__pf)) ? (bpv__TP_SpringArm__pf->RelativeRotation) : (__Local__55)), /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_BreakRotator_Pitch__pf, -50.000000, 10.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue2__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_FClamp_ReturnValue__pf, bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_SelectRotator_ReturnValue__pf = UKismetMathLibrary::SelectRotator(FRotator(-15.000000,180.000000,0.000000), FRotator(-15.000000,0.000000,0.000000), bpv__LookxBack__pfT);
				bpfv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpv__AutoxRotatexCamera__pfTT, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				bpfv__CallFunc_SelectRotator_ReturnValue2__pf = UKismetMathLibrary::SelectRotator(bpfv__CallFunc_SelectRotator_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue2__pf, bpfv__CallFunc_BooleanAND_ReturnValue2__pf);
				if(IsValid(bpv__TP_SpringArm__pf))
				{
					bpv__TP_SpringArm__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_SelectRotator_ReturnValue2__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult2__pf, false);
				}
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpp__LookxRight__pfT, 0.000000);
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpp__LookxUp__pfT, 0.000000);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__LookxRight__pfT, 1.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__LookxUp__pfT, 1.000000);
				FRotator  __Local__56 = FRotator(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakRotator(((IsValid(bpv__FP_SpringArm__pf)) ? (bpv__FP_SpringArm__pf->RelativeRotation) : (__Local__56)), /*out*/ bpfv__CallFunc_BreakRotator_Roll2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw2__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakRotator_Yaw2__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakRotator_Pitch2__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf);
				bpfv__CallFunc_FClamp_ReturnValue2__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, -110.000000, 160.000000);
				bpfv__CallFunc_FClamp_ReturnValue3__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf, -40.000000, 10.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue3__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_FClamp_ReturnValue3__pf, bpfv__CallFunc_FClamp_ReturnValue2__pf);
				if(IsValid(bpv__FP_SpringArm__pf))
				{
					bpv__FP_SpringArm__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue3__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
			}
		case 5:
			{
				FRotator  __Local__57 = FRotator(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakRotator(((IsValid(bpv__FP_SpringArm__pf)) ? (bpv__FP_SpringArm__pf->RelativeRotation) : (__Local__57)), /*out*/ bpfv__CallFunc_BreakRotator_Roll2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw2__pf);
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_BreakRotator_Yaw2__pf, 70.000000, 160.000000, 0.000000, -25.000000);
				FVector  __Local__58 = FVector(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakVector(((IsValid(bpv__FP_Camera__pf)) ? (bpv__FP_Camera__pf->RelativeLocation) : (__Local__58)), /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_MapRangeClamped_ReturnValue__pf, bpfv__CallFunc_BreakVector_Z__pf);
				if(IsValid(bpv__FP_Camera__pf))
				{
					bpv__FP_Camera__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__CameraxDistance__pfT()
{
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetVelocity_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakVector_X2__pf{};
	float bpfv__CallFunc_BreakVector_Y2__pf{};
	float bpfv__CallFunc_BreakVector_Z2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult2__pf{};
	bpfv__CallFunc_GetVelocity_ReturnValue2__pf = GetVelocity();
	bpfv__CallFunc_VSize_ReturnValue2__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue2__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_VSize_ReturnValue2__pf, 0.036000);
	bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, -90.000000, 90.000000, 150.000000, -150.000000);
	FVector  __Local__59 = FVector(0.000000,0.000000,0.000000);
	UKismetMathLibrary::BreakVector(((IsValid(bpv__TP_SpringArm__pf)) ? (bpv__TP_SpringArm__pf->RelativeLocation) : (__Local__59)), /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
	bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf, bpfv__CallFunc_BreakVector_Y2__pf, bpfv__CallFunc_BreakVector_Z2__pf);
	if(IsValid(bpv__TP_SpringArm__pf))
	{
		bpv__TP_SpringArm__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue2__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult2__pf, false);
	}
	bpfv__CallFunc_GetVelocity_ReturnValue__pf = GetVelocity();
	bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 0.036000);
	bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, -20.000000, 20.000000, 10.000000, -10.000000);
	FVector  __Local__60 = FVector(0.000000,0.000000,0.000000);
	UKismetMathLibrary::BreakVector(((IsValid(bpv__FP_Camera__pf)) ? (bpv__FP_Camera__pf->RelativeLocation) : (__Local__60)), /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_MapRangeClamped_ReturnValue__pf, bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_BreakVector_Z__pf);
	if(IsValid(bpv__FP_Camera__pf))
	{
		bpv__FP_Camera__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
	}
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ActivatexCamera__pfT()
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	if(IsValid(bpv__TP_Camera__pf))
	{
		bpv__TP_Camera__pf->SetActive(bpv__IsxThirdPersonxView__pfTT, false);
	}
	bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsxThirdPersonxView__pfTT);
	if(IsValid(bpv__FP_Camera__pf))
	{
		bpv__FP_Camera__pf->SetActive(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, false);
	}
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ChangexView__pfT()
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__CanxChangexView__pfTT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(bpv__IsxThirdPersonxView__pfTT);
				bpv__IsxThirdPersonxView__pfTT = bpfv__CallFunc_Not_PreBool_ReturnValue2__pf;
			}
		case 3:
			{
				if(IsValid(bpv__TP_Camera__pf))
				{
					bpv__TP_Camera__pf->SetActive(bpv__IsxThirdPersonxView__pfTT, false);
				}
			}
		case 4:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsxThirdPersonxView__pfTT);
				if(IsValid(bpv__FP_Camera__pf))
				{
					bpv__FP_Camera__pf->SetActive(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__CreatexPhysicxconstraints__pfTT()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	UPhysicsConstraintComponent* bpfv__Temp_object_Variable__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	float bpfv__Temp_float_Variable__pf{};
	float bpfv__Temp_float_Variable2__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	TArray<FName> bpfv__CallFunc_GetAllSocketNames_ReturnValue__pf{};
	float bpfv__Temp_float_Variable3__pf{};
	FName bpfv__CallFunc_Array_Get_Item__pf{};
	float bpfv__Temp_float_Variable4__pf{};
	TArray<FName> bpfv__CallFunc_GetAllSocketNames_ReturnValue2__pf{};
	FName bpfv__CallFunc_Array_Get_Item2__pf{};
	bool bpfv__Temp_bool_Variable2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item3__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetSocketTransform_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_GetSocketTransform_ReturnValue2__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_BreakVector_X2__pf{};
	float bpfv__CallFunc_BreakVector_Y2__pf{};
	float bpfv__CallFunc_BreakVector_Z2__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue3__pf{};
	float bpfv__K2Node_Select_Default__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue3__pf(EForceInit::ForceInit);
	float bpfv__K2Node_Select2_Default__pf{};
	FTransform bpfv__CallFunc_GetSocketTransform_ReturnValue3__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue4__pf(EForceInit::ForceInit);
	UPhysicsConstraintComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location3__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale3__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue2__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue2__pf{};
	USkeletalMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue2__pf{};
	UStaticMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue3__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location4__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation4__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale4__pf(EForceInit::ForceInit);
	UPhysicsConstraintComponent* bpfv__CallFunc_AddComponent_ReturnValue4__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue3__pf{};
	USkeletalMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue5__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue4__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue5__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(21);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetSocketTransform_ReturnValue3__pf = bpv__Mesh__pf->GetSocketTransform(bpfv__CallFunc_Array_Get_Item3__pf.bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, ERelativeTransformSpace::RTS_Component);
				}
				bpfv__CallFunc_AddComponent_ReturnValue4__pf = CastChecked<UPhysicsConstraintComponent>(AActor::AddComponent(FName(TEXT("NODE_AddPhysicsConstraintComponent-1")), false, bpfv__CallFunc_GetSocketTransform_ReturnValue3__pf, this), ECastCheckedType::NullAllowed);
			}
		case 7:
			{
				bpfv__CallFunc_Array_Add_ReturnValue5__pf = FCustomThunkTemplates::Array_Add(bpv__WheelxConstraints__pfT, bpfv__CallFunc_AddComponent_ReturnValue4__pf);
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Array_Get_Item3__pf.bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, 1.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetSocketTransform_ReturnValue3__pf = bpv__Mesh__pf->GetSocketTransform(bpfv__CallFunc_Array_Get_Item3__pf.bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, ERelativeTransformSpace::RTS_Component);
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetSocketTransform_ReturnValue3__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location3__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation3__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale3__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue2__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_BreakTransform_Location3__pf, bpfv__CallFunc_BreakTransform_Rotation3__pf, FVector(0.300000,0.300000,0.300000));
				bpfv__CallFunc_AddComponent_ReturnValue3__pf = CastChecked<UStaticMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddStaticMeshComponent-1")), false, bpfv__CallFunc_MakeTransform_ReturnValue2__pf, this), ECastCheckedType::NullAllowed);
			}
		case 10:
			{
				bpfv__Temp_float_Variable__pf = 1.000000;
				bpfv__Temp_float_Variable2__pf = -1.000000;
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetSocketTransform_ReturnValue2__pf = bpv__Mesh__pf->GetSocketTransform(bpfv__CallFunc_Array_Get_Item3__pf.bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, ERelativeTransformSpace::RTS_Component);
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetSocketTransform_ReturnValue2__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location2__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation2__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale2__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Location2__pf, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_BreakVector_Y2__pf, 0.000000);
				bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_Greater_FloatFloat_ReturnValue3__pf;
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetSocketTransform_ReturnValue3__pf = bpv__Mesh__pf->GetSocketTransform(bpfv__CallFunc_Array_Get_Item3__pf.bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, ERelativeTransformSpace::RTS_Component);
				}
				bpfv__CallFunc_MakeVector_ReturnValue4__pf = UKismetMathLibrary::MakeVector(1.000000, TSwitchValue<bool , float >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select2_Default__pf, 2, TSwitchPair<bool , float >(false, bpfv__Temp_float_Variable__pf), TSwitchPair<bool , float >(true, bpfv__Temp_float_Variable2__pf)), 1.000000);
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetSocketTransform_ReturnValue3__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location3__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation3__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale3__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_BreakTransform_Location3__pf, bpfv__CallFunc_BreakTransform_Rotation3__pf, bpfv__CallFunc_MakeVector_ReturnValue4__pf);
				bpfv__CallFunc_AddComponent_ReturnValue2__pf = CastChecked<USkeletalMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSkeletalMeshComponent-0")), false, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
			}
		case 11:
			{
				bpfv__CallFunc_Array_Add_ReturnValue3__pf = FCustomThunkTemplates::Array_Add(bpv__WheelxMeshes__pfT, bpfv__CallFunc_AddComponent_ReturnValue2__pf);
			}
		case 12:
			{
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue4__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue4__pf->UPhysicsConstraintComponent::SetConstrainedComponents(bpfv__CallFunc_AddComponent_ReturnValue2__pf, FName(TEXT("None")), bpfv__CallFunc_AddComponent_ReturnValue3__pf, FName(TEXT("None")));
				}
			}
		case 13:
			{
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue4__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue4__pf->UPhysicsConstraintComponent::SetLinearZLimit(ELinearConstraintMotion::LCM_Limited, bpv__SuspensionxLength__pfT);
				}
			}
		case 14:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__SuspensionxStrength__pfT, 2.000000);
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue4__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue4__pf->UPhysicsConstraintComponent::SetLinearDriveParams(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf, bpv__SuspensionxDamping__pfT, 0.000000);
				}
			}
		case 15:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__SuspensionxLength__pfT, -0.500000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue4__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue4__pf->UPhysicsConstraintComponent::SetLinearPositionTarget(bpfv__CallFunc_MakeVector_ReturnValue__pf);
				}
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetSocketTransform_ReturnValue3__pf = bpv__Mesh__pf->GetSocketTransform(bpfv__CallFunc_Array_Get_Item3__pf.bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, ERelativeTransformSpace::RTS_Component);
				}
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<UPhysicsConstraintComponent>(AActor::AddComponent(FName(TEXT("NODE_AddPhysicsConstraintComponent-2")), false, bpfv__CallFunc_GetSocketTransform_ReturnValue3__pf, this), ECastCheckedType::NullAllowed);
			}
		case 17:
			{
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetAllSocketNames_ReturnValue__pf = bpv__Mesh__pf->USceneComponent::GetAllSocketNames();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllSocketNames_ReturnValue__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->UPhysicsConstraintComponent::SetConstrainedComponents(bpv__Mesh__pf, bpfv__CallFunc_Array_Get_Item__pf, bpfv__CallFunc_AddComponent_ReturnValue3__pf, FName(TEXT("None")));
				}
			}
		case 18:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->UPhysicsConstraintComponent::SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Limited, bpfv__CallFunc_Array_Get_Item3__pf.bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf);
				}
			}
		case 19:
			{
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->UPhysicsConstraintComponent::SetOrientationDriveTwistAndSwing(false, true);
				}
			}
		case 20:
			{
				bpfv__CallFunc_Array_Add_ReturnValue2__pf = FCustomThunkTemplates::Array_Add(bpv__SteeringxConstraints__pfT, bpfv__CallFunc_AddComponent_ReturnValue__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		case 22:
			{
				bpfv__Temp_float_Variable3__pf = 1.000000;
				bpfv__Temp_float_Variable4__pf = -1.000000;
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetSocketTransform_ReturnValue__pf = bpv__Mesh__pf->GetSocketTransform(bpfv__CallFunc_Array_Get_Item3__pf.bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, ERelativeTransformSpace::RTS_Component);
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetSocketTransform_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
				bpfv__Temp_bool_Variable2__pf = bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf;
				bpfv__CallFunc_MakeVector_ReturnValue3__pf = UKismetMathLibrary::MakeVector(1.000000, TSwitchValue<bool , float >(bpfv__Temp_bool_Variable2__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , float >(false, bpfv__Temp_float_Variable3__pf), TSwitchPair<bool , float >(true, bpfv__Temp_float_Variable4__pf)), 1.000000);
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetSocketTransform_ReturnValue3__pf = bpv__Mesh__pf->GetSocketTransform(bpfv__CallFunc_Array_Get_Item3__pf.bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, ERelativeTransformSpace::RTS_Component);
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetSocketTransform_ReturnValue3__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location4__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation4__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale4__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue3__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_BreakTransform_Location4__pf, bpfv__CallFunc_BreakTransform_Rotation4__pf, bpfv__CallFunc_MakeVector_ReturnValue3__pf);
				bpfv__CallFunc_AddComponent_ReturnValue5__pf = CastChecked<USkeletalMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSkeletalMeshComponent-1")), false, bpfv__CallFunc_MakeTransform_ReturnValue3__pf, this), ECastCheckedType::NullAllowed);
			}
		case 23:
			{
				bpfv__CallFunc_Array_Add_ReturnValue4__pf = FCustomThunkTemplates::Array_Add(bpv__WheelxMeshes__pfT, bpfv__CallFunc_AddComponent_ReturnValue5__pf);
			}
		case 24:
			{
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetAllSocketNames_ReturnValue2__pf = bpv__Mesh__pf->USceneComponent::GetAllSocketNames();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllSocketNames_ReturnValue2__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue4__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue4__pf->UPhysicsConstraintComponent::SetConstrainedComponents(bpfv__CallFunc_AddComponent_ReturnValue5__pf, FName(TEXT("None")), bpv__Mesh__pf, bpfv__CallFunc_Array_Get_Item2__pf);
				}
			}
		case 25:
			{
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue4__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue4__pf->UPhysicsConstraintComponent::SetLinearZLimit(ELinearConstraintMotion::LCM_Limited, bpv__SuspensionxLength__pfT);
				}
			}
		case 26:
			{
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue4__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue4__pf->UPhysicsConstraintComponent::SetLinearDriveParams(bpv__SuspensionxStrength__pfT, bpv__SuspensionxDamping__pfT, 0.000000);
				}
			}
		case 27:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__SuspensionxLength__pfT, -0.500000);
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf);
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue4__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue4__pf->UPhysicsConstraintComponent::SetLinearPositionTarget(bpfv__CallFunc_MakeVector_ReturnValue2__pf);
				}
			}
		case 28:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__SteeringxConstraints__pfT, bpfv__Temp_object_Variable__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__SetxBrakexInput__pfTT(float bpp__AxisxValue__pfT)
{
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable2__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable2__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item__pf{};
	UPhysicsConstraintComponent* bpfv__CallFunc_Array_Get_Item2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue4__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	UPhysicsConstraintComponent* bpfv__CallFunc_Array_Get_Item3__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item4__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue5__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(6);
			}
		case 2:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Greater_FloatFloat(bpp__AxisxValue__pfT, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__Speed__pf, 1.000000);
				bpfv__CallFunc_BooleanAND_ReturnValue3__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf, bpv__BrakexasxReverse__pfTT);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue3__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 4:
			{
				if (!bpv__IsxReversexGear__pfTT)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 5:
			{
				bpf__Server_Throttle__pf(bpp__AxisxValue__pfT);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__EnablexAirxControl__pfTT, bpv__IsxinxAir__pfTT);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetRightVector_ReturnValue__pf = bpv__Mesh__pf->USceneComponent::GetRightVector();
				}
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetRightVector_ReturnValue__pf, -0.250000);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpp__AxisxValue__pfT);
				if(IsValid(bpv__Mesh__pf))
				{
					bpv__Mesh__pf->AddAngularImpulse(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf, FName(TEXT("None")), true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				__StateStack.Push(16);
			}
		case 9:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 10:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 11:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 13:
			{
				__StateStack.Push(15);
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item4__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue5__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Array_Get_Item4__pf.bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf, bpv__HandBrakexOn__pfT);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue5__pf)
				{
					__CurrentState = 31;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 11;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpv__IsxReversexGear__pfTT, bpv__BrakexasxReverse__pfTT);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				bpf__Server_ReversexGear__pfT(false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpf__Server_ReversexGear__pfT(true);
			}
		case 19:
			{
				if (!bpv__IsxBraking__pfT)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 20:
			{
				AActor::FlushNetDormancy();
			}
		case 21:
			{
				bpv__IsxBraking__pfT = false;
			}
		case 22:
			{
				bpf__OnRep_IsxBraking__pfT();
			}
		case 23:
			{
				bpfv__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 24:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 25:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 26:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = bpfv__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 27:
			{
				__StateStack.Push(30);
			}
		case 28:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue4__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Array_Get_Item__pf.bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf, bpv__HandBrakexOn__pfT);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue4__pf)
				{
					__CurrentState = 29;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxConstraints__pfT, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_Array_Get_Item2__pf->UPhysicsConstraintComponent::SetAngularDriveParams(0.000000, 0.000000, 0.000000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 25;
				break;
			}
		case 31:
			{
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpv__Speed__pf, 0.000000, 15.000000, 5.000000, 1.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__BrakexStrength__pfT, bpfv__CallFunc_MapRangeClamped_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__WheelxConstraints__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item4__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Array_Get_Item4__pf.bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, bpp__AxisxValue__pfT);
				if(IsValid(bpfv__CallFunc_Array_Get_Item3__pf))
				{
					bpfv__CallFunc_Array_Get_Item3__pf->UPhysicsConstraintComponent::SetAngularDriveParams(0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf, 0.000000);
				}
			}
		case 32:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpp__AxisxValue__pfT, 0.000000);
				bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf = UKismetMathLibrary::EqualEqual_BoolBool(bpv__IsxBraking__pfT, bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_BoolBool_ReturnValue__pf)
				{
					__CurrentState = 33;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				AActor::FlushNetDormancy();
			}
		case 34:
			{
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpp__AxisxValue__pfT, 0.000000);
				bpv__IsxBraking__pfT = bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf;
			}
		case 35:
			{
				bpf__OnRep_IsxBraking__pfT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__SetxHandBrakexInput__pfTT(bool bpp__ApplyxHandBrake__pfT)
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
	UPhysicsConstraintComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				AActor::FlushNetDormancy();
			}
		case 3:
			{
				bpv__HandBrakexOn__pfT = bpp__ApplyxHandBrake__pfT;
			}
		case 4:
			{
				bpf__OnRep_HandBrakexOn__pfT();
			}
		case 5:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 7:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 9:
			{
				__StateStack.Push(12);
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if (!bpfv__CallFunc_Array_Get_Item2__pf.bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(50000000.000000, 0.000000, bpv__HandBrakexOn__pfT);
				FCustomThunkTemplates::Array_Get(bpv__WheelxConstraints__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UPhysicsConstraintComponent::SetAngularDriveParams(0.000000, bpfv__CallFunc_SelectFloat_ReturnValue__pf, 0.000000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 7;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__DebugxWidget__pfT(bool bpp__Show__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UVehicle_Debug_C__pf1863595755* bpfv__CallFunc_Create_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__Show__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(bpv__Debug_Widget__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue2__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 3:
			{
				if(IsValid(bpv__Debug_Widget__pf))
				{
					bpv__Debug_Widget__pf->UUserWidget::AddToViewport(1);
				}
			}
		case 4:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue2__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue2__pf->bShowMouseCursor = true;
				}
			}
		case 5:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(bpfv__CallFunc_GetPlayerController_ReturnValue2__pf, bpv__Debug_Widget__pf, EMouseLockMode::DoNotLock, true);
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__Debug_Widget__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				if(IsValid(bpv__Debug_Widget__pf))
				{
					bpv__Debug_Widget__pf->RemoveFromParent();
				}
			}
		case 8:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = false;
				}
			}
		case 9:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				UWidgetBlueprintLibrary::SetInputMode_GameOnly(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UVehicle_Debug_C__pf1863595755>(UWidgetBlueprintLibrary::Create(this, UVehicle_Debug_C__pf1863595755::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 11:
			{
				bpv__Debug_Widget__pf = bpfv__CallFunc_Create_ReturnValue__pf;
			}
		case 12:
			{
				if(IsValid(bpv__Debug_Widget__pf))
				{
					bpv__Debug_Widget__pf->bpv__Vehicle__pf = this;
				}
				__CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__UpdatexSuspension__pfT()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	UPhysicsConstraintComponent* bpfv__CallFunc_Array_Get_Item2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__WheelxConstraints__pfT);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(9);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxConstraints__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_Array_Get_Item2__pf->UPhysicsConstraintComponent::SetLinearZLimit(ELinearConstraintMotion::LCM_Limited, bpv__SuspensionxLength__pfT);
				}
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Array_Get_Item__pf.bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, 1.000000);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(2.000000, 1.000000, bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__SuspensionxStrength__pfT, bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__WheelxConstraints__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_Array_Get_Item2__pf->UPhysicsConstraintComponent::SetLinearDriveParams(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, bpv__SuspensionxDamping__pfT, 0.000000);
				}
			}
		case 8:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__SuspensionxLength__pfT, -0.500000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__WheelxConstraints__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_Array_Get_Item2__pf->UPhysicsConstraintComponent::SetLinearPositionTarget(bpfv__CallFunc_MakeVector_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__PossessxVehicle__pfT(AController* bpp__NewxController__pfT, /*out*/ bool& bpp__IsxControlledxbyxPlayer__pfTTT)
{
	bool bpfv__CallFunc_IsPlayerController_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__WheelxConstraints__pfT);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__FuelxAmmount__pfT, 0.000000);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__EnginexDrownedx__pfTzy, bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpf__Server_Handbrake__pf(false);
			}
		case 4:
			{
				if(IsValid(bpv__Driver__pf))
				{
					bpv__Driver__pf->USceneComponent::SetVisibility(true, true);
				}
				__CurrentState = 2;
				break;
			}
		case 5:
			{
				if(IsValid(bpv__Engine_Sound__pf))
				{
					bpv__Engine_Sound__pf->UAudioComponent::SetSound(bpv__EnginexSound__pfT);
				}
			}
		case 6:
			{
				if(IsValid(bpv__Engine_Sound__pf))
				{
					bpv__Engine_Sound__pf->Play(0.000000);
				}
			}
		case 7:
			{
				if(IsValid(bpp__NewxController__pfT))
				{
					bpfv__CallFunc_IsPlayerController_ReturnValue__pf = bpp__NewxController__pfT->AController::IsPlayerController();
				}
				bpp__IsxControlledxbyxPlayer__pfTTT = bpfv__CallFunc_IsPlayerController_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__AdditionalxGravityxxxDriverxHelper__pfTTETT()
{
	bool bpfv__CallFunc_IsControlled_ReturnValue__pf{};
	TArray<AActor*> bpfv__K2Node_MakeArray_Array__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	USkeletalMeshComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetUpVector_ReturnValue__pf(EForceInit::ForceInit);
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FWheel_Structure__pf863842189 bpfv__K2Node_SetFieldsInStruct_StructOut__pf{};
	FWheel_Structure__pf863842189 bpfv__K2Node_SetFieldsInStruct_StructOut2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_LineTraceSingle_OutHit__pf{};
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf{};
	FVector bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	FVector bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_TransformDirection_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue3__pf{};
	TArray<FName> bpfv__CallFunc_GetAllSocketNames_ReturnValue__pf{};
	FName bpfv__CallFunc_Array_Get_Item3__pf{};
	FVector bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_InverseTransformDirection_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X2__pf{};
	float bpfv__CallFunc_BreakVector_Y2__pf{};
	float bpfv__CallFunc_BreakVector_Z2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue6__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_TransformDirection_ReturnValue2__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpv__AdditionalxGravityxFactor__pfTT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpv__Mesh__pf->AddForce(bpfv__CallFunc_MakeVector_ReturnValue__pf, FName(TEXT("None")), true);
				}
			}
		case 2:
			{
				bpfv__CallFunc_IsControlled_ReturnValue__pf = APawn::IsControlled();
				if (!bpfv__CallFunc_IsControlled_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(16);
			}
		case 8:
			{
				bpfv__K2Node_MakeArray_Array__pf.SetNum(1, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = this;
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentToWorld();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetUpVector_ReturnValue__pf = bpv__Mesh__pf->USceneComponent::GetUpVector();
				}
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Array_Get_Item2__pf.bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf, 1.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetUpVector_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_BreakTransform_Location__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_BreakTransform_Location__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery1, false, bpfv__K2Node_MakeArray_Array__pf, EDrawDebugTrace::None, /*out*/ bpfv__CallFunc_LineTraceSingle_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 0.500000);
			}
		case 9:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Array_Get_Item2__pf.bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf = true;
				bpfv__K2Node_SetFieldsInStruct_StructOut2__pf = bpfv__CallFunc_Array_Get_Item2__pf;
			}
		case 11:
			{
				FCustomThunkTemplates::Array_Set(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, bpfv__K2Node_SetFieldsInStruct_StructOut2__pf, false);
			}
		case 12:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf = bpv__Mesh__pf->UPrimitiveComponent::GetPhysicsLinearVelocity(bpfv__CallFunc_Array_Get_Item2__pf.bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf);
				}
			}
		case 13:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__AntixDriftxMultiplier__pfGT, bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf = bpv__Mesh__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf = UKismetMathLibrary::InverseTransformDirection(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf, bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, -1.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf, 0.000000);
				bpfv__CallFunc_TransformDirection_ReturnValue__pf = UKismetMathLibrary::TransformDirection(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf, bpfv__CallFunc_MakeVector_ReturnValue2__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpv__Mesh__pf->UPrimitiveComponent::SetPhysicsLinearVelocity(bpfv__CallFunc_TransformDirection_ReturnValue__pf, true, bpfv__CallFunc_Array_Get_Item2__pf.bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf);
				}
			}
		case 14:
			{
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetAllSocketNames_ReturnValue__pf = bpv__Mesh__pf->USceneComponent::GetAllSocketNames();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllSocketNames_ReturnValue__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf = bpv__Mesh__pf->UPrimitiveComponent::GetPhysicsAngularVelocity(bpfv__CallFunc_Array_Get_Item3__pf);
				}
			}
		case 15:
			{
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue3__pf = bpv__Mesh__pf->USceneComponent::K2_GetComponentToWorld();
				}
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetAllSocketNames_ReturnValue__pf = bpv__Mesh__pf->USceneComponent::GetAllSocketNames();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllSocketNames_ReturnValue__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				bpfv__CallFunc_InverseTransformDirection_ReturnValue2__pf = UKismetMathLibrary::InverseTransformDirection(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue3__pf, bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_InverseTransformDirection_ReturnValue2__pf, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_BreakVector_X2__pf, -1.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue6__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf, bpv__AntixRollxMultiplier__pfGT);
				bpfv__CallFunc_MakeVector_ReturnValue3__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue6__pf, 0.000000, 0.000000);
				bpfv__CallFunc_TransformDirection_ReturnValue2__pf = UKismetMathLibrary::TransformDirection(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue3__pf, bpfv__CallFunc_MakeVector_ReturnValue3__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpv__Mesh__pf->UPrimitiveComponent::SetPhysicsAngularVelocity(bpfv__CallFunc_TransformDirection_ReturnValue2__pf, true, bpfv__CallFunc_Array_Get_Item3__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		case 17:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Array_Get_Item2__pf.bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf = false;
				bpfv__K2Node_SetFieldsInStruct_StructOut__pf = bpfv__CallFunc_Array_Get_Item2__pf;
			}
		case 18:
			{
				FCustomThunkTemplates::Array_Set(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, bpfv__K2Node_SetFieldsInStruct_StructOut__pf, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__CalculatexSpeed__pfT()
{
	float bpfv__TempxSpeed__pfT{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	USkeletalMeshComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_DegreesToRadians_ReturnValue__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Abs_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(12);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if (!bpfv__CallFunc_Array_Get_Item2__pf.bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->UPrimitiveComponent::GetPhysicsAngularVelocity(FName(TEXT("None")));
				}
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__TempxSpeed__pfT);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf = UKismetMathLibrary::InverseTransformDirection(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_DegreesToRadians_ReturnValue__pf = UKismetMathLibrary::DegreesToRadians(bpfv__CallFunc_BreakVector_Y__pf);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_DegreesToRadians_ReturnValue__pf, bpfv__CallFunc_Array_Get_Item2__pf.bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.036000);
				bpfv__CallFunc_Abs_ReturnValue2__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Abs_ReturnValue2__pf, bpfv__CallFunc_Abs_ReturnValue__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf = UKismetMathLibrary::InverseTransformDirection(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_DegreesToRadians_ReturnValue__pf = UKismetMathLibrary::DegreesToRadians(bpfv__CallFunc_BreakVector_Y__pf);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_DegreesToRadians_ReturnValue__pf, bpfv__CallFunc_Array_Get_Item2__pf.bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.036000);
				bpfv__TempxSpeed__pfT = bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				AActor::FlushNetDormancy();
			}
		case 11:
			{
				bpv__Speed__pf = bpfv__TempxSpeed__pfT;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__DetectxDrifting__pfT()
{
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	USkeletalMeshComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	FVector bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetComponentVelocity_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll2__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch2__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw2__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue3__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll3__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch3__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw3__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf{};
	FVector bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_InverseTransformDirection_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_DegreesToRadians_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X2__pf{};
	float bpfv__CallFunc_BreakVector_Y2__pf{};
	float bpfv__CallFunc_BreakVector_Z2__pf{};
	float bpfv__CallFunc_Square_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	float bpfv__CallFunc_Square_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Sqrt_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FWheel_Structure__pf863842189 bpfv__K2Node_SetFieldsInStruct_StructOut__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldTransform_SweepHitResult__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf(EForceInit::ForceInit);
	UParticleSystemComponent* bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue3__pf(EForceInit::ForceInit);
	FWheel_Structure__pf863842189 bpfv__K2Node_SetFieldsInStruct_StructOut2__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue3__pf(EForceInit::ForceInit);
	UParticleSystemComponent* bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	float bpfv__CallFunc_Abs_ReturnValue2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue3__pf{};
	float bpfv__CallFunc_Abs_ReturnValue3__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 5:
			{
				__StateStack.Push(12);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->UPrimitiveComponent::GetPhysicsLinearVelocity(FName(TEXT("None")));
				}
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->UPrimitiveComponent::GetPhysicsAngularVelocity(FName(TEXT("None")));
				}
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentToWorld();
				}
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf = UKismetMathLibrary::InverseTransformDirection(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, bpfv__CallFunc_GetPhysicsAngularVelocity_ReturnValue__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_InverseTransformDirection_ReturnValue2__pf = UKismetMathLibrary::InverseTransformDirection(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue2__pf, bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf);
				bpfv__CallFunc_DegreesToRadians_ReturnValue__pf = UKismetMathLibrary::DegreesToRadians(bpfv__CallFunc_BreakVector_Y__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_InverseTransformDirection_ReturnValue2__pf, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_Square_ReturnValue__pf = UKismetMathLibrary::Square(bpfv__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_BreakVector_Y2__pf);
				bpfv__CallFunc_Square_ReturnValue2__pf = UKismetMathLibrary::Square(bpfv__CallFunc_BreakVector_X2__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, 500.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Square_ReturnValue2__pf, bpfv__CallFunc_Square_ReturnValue__pf);
				bpfv__CallFunc_Sqrt_ReturnValue__pf = UKismetMathLibrary::Sqrt(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Sqrt_ReturnValue__pf, 0.036000);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_DegreesToRadians_ReturnValue__pf, bpfv__CallFunc_Array_Get_Item2__pf.bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, 0.036000);
				bpfv__CallFunc_Abs_ReturnValue2__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Abs_ReturnValue2__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Abs_ReturnValue3__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue3__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Abs_ReturnValue3__pf, 10.000000);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanOR_ReturnValue__pf, bpfv__CallFunc_Array_Get_Item2__pf.bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 13;
					break;
				}
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentRotation();
				}
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue3__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentLocation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll3__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch3__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw3__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue3__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw3__pf);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_MakeVector_ReturnValue3__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_Array_Get_Item2__pf.bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue3__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue3__pf, bpfv__CallFunc_MakeVector_ReturnValue3__pf);
				bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue2__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed), bpfv__CallFunc_Subtract_VectorVector_ReturnValue3__pf, bpfv__CallFunc_MakeRotator_ReturnValue3__pf, true);
			}
		case 10:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if (!bpfv__CallFunc_Array_Get_Item2__pf.bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 11:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->GetComponentVelocity();
				}
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(90.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw__pf);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Array_Get_Item2__pf.bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf.bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf))
				{
					bpfv__CallFunc_Array_Get_Item2__pf.bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf->USceneComponent::K2_SetWorldTransform(bpfv__CallFunc_MakeTransform_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldTransform_SweepHitResult__pf, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 3;
				break;
			}
		case 13:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if (!bpfv__CallFunc_Array_Get_Item2__pf.bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Array_Get_Item2__pf.bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf = false;
				bpfv__K2Node_SetFieldsInStruct_StructOut__pf = bpfv__CallFunc_Array_Get_Item2__pf;
			}
		case 15:
			{
				FCustomThunkTemplates::Array_Set(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, bpfv__K2Node_SetFieldsInStruct_StructOut__pf, false);
			}
		case 16:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf.bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf))
				{
					bpfv__CallFunc_Array_Get_Item2__pf.bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf->Deactivate();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				FCustomThunkTemplates::Array_Get(bpv__WheelxMeshes__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue2__pf = bpfv__CallFunc_Array_Get_Item__pf->GetComponentVelocity();
				}
				bpfv__CallFunc_Conv_VectorToRotator_ReturnValue2__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_GetComponentVelocity_ReturnValue2__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_Conv_VectorToRotator_ReturnValue2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_MakeRotator_ReturnValue2__pf = UKismetMathLibrary::MakeRotator(90.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw2__pf);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_Array_Get_Item2__pf.bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf, 2.000000);
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf);
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf, bpfv__CallFunc_MakeVector_ReturnValue2__pf);
				bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed), bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf, bpfv__CallFunc_MakeRotator_ReturnValue2__pf, false);
			}
		case 18:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Array_Get_Item2__pf.bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf = true;
				bpfv__CallFunc_Array_Get_Item2__pf.bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf = bpfv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf;
				bpfv__K2Node_SetFieldsInStruct_StructOut2__pf = bpfv__CallFunc_Array_Get_Item2__pf;
			}
		case 19:
			{
				FCustomThunkTemplates::Array_Set(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, bpfv__K2Node_SetFieldsInStruct_StructOut2__pf, false);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__UnPossesxVehicle__pfT()
{
	FVector bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	ABP_Physic_Pawn_C__pf4061722237* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__SetxHandBrakexInput__pfTT(true);
			}
		case 2:
			{
				if(IsValid(bpv__PlayerxLocation__pfT))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__PlayerxLocation__pfT->USceneComponent::K2_GetComponentToWorld();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_BreakTransform_Location__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_Physic_Pawn_C__pf4061722237::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, ((AActor*)nullptr));
			}
		case 3:
			{
				UKismetSystemLibrary::SetBoolPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Is ThirdPerson")), bpv__IsxThirdPersonxView__pfTT);
			}
		case 4:
			{
				if(IsValid(bpv__PlayerxLocation__pfT))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__PlayerxLocation__pfT->USceneComponent::K2_GetComponentToWorld();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_BreakTransform_Location__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_Physic_Pawn_C__pf4061722237>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 5:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if(IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue__pf->Possess(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf);
				}
			}
		case 6:
			{
				bpf__DebugxWidget__pfT(false);
			}
		case 7:
			{
				if(IsValid(bpv__Driver__pf))
				{
					bpv__Driver__pf->USceneComponent::SetVisibility(false, true);
				}
			}
		case 8:
			{
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf = bpv__Mesh__pf->UPrimitiveComponent::GetPhysicsLinearVelocity(FName(TEXT("None")));
				}
			}
		case 9:
			{
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 900.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf, 1.000000);
				if(IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpf__TriggerxRagdoll__pfT(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, FName(TEXT("Spine_02")));
				}
			}
		case 11:
			{
				if(IsValid(bpv__Engine_Sound__pf))
				{
					bpv__Engine_Sound__pf->UAudioComponent::SetBoolParameter(FName(TEXT("Engine Started")), false);
				}
			}
		case 12:
			{
				AActor::FlushNetDormancy();
			}
		case 13:
			{
				bpv__EnginexStarted__pfT = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__ReversexGear__pfT(bool bpp__ReversexGear__pfT)
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__ReversexGear__pfT)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 2:
			{
				bpv__CanxChangexGear__pfTT = false;
			}
		case 3:
			{
				AActor::FlushNetDormancy();
			}
		case 4:
			{
				bpv__Gear__pf = 0;
			}
		case 5:
			{
				AActor::FlushNetDormancy();
			}
		case 6:
			{
				bpv__IsxReversexGear__pfTT = true;
			}
		case 7:
			{
				bpf__OnRep_IsxReversexGear__pfTT();
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				AActor::FlushNetDormancy();
			}
		case 9:
			{
				bpv__Gear__pf = 2;
			}
		case 10:
			{
				bpv__CanxChangexGear__pfTT = true;
			}
		case 11:
			{
				AActor::FlushNetDormancy();
			}
		case 12:
			{
				bpv__IsxReversexGear__pfTT = false;
			}
		case 13:
			{
				bpf__OnRep_IsxReversexGear__pfTT();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__OnRep_SteeringxAngle__pfT()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	UPhysicsConstraintComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(9);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Array_Get_Item2__pf.bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__SteeringxAngle__pfT, -1.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				FCustomThunkTemplates::Array_Get(bpv__SteeringxConstraints__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UPhysicsConstraintComponent::SetAngularOrientationTarget(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__Initialize__pf()
{
	bool bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetMaterialIndex_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpfv__CallFunc_IsPlayerController_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				AActor::FlushNetDormancy();
			}
		case 2:
			{
				bpv__IsxBraking__pfT = false;
			}
		case 3:
			{
				bpf__OnRep_IsxBraking__pfT();
			}
		case 4:
			{
				AActor::FlushNetDormancy();
			}
		case 5:
			{
				bpv__HeadLightsxOn__pfT = false;
			}
		case 6:
			{
				bpf__OnRep_HeadLightsxOn__pfT();
			}
		case 7:
			{
				AActor::FlushNetDormancy();
			}
		case 8:
			{
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(bpv__RPMxIdle__pfT, 0.000000, bpv__EnginexStarted__pfT);
				bpv__RPM__pf = bpfv__CallFunc_SelectFloat_ReturnValue__pf;
			}
		case 9:
			{
				bpf__OnRep_RPM__pf();
			}
		case 10:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_GetController_ReturnValue__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 11:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if(IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
				{
					bpfv__CallFunc_IsPlayerController_ReturnValue__pf = bpfv__CallFunc_GetController_ReturnValue__pf->AController::IsPlayerController();
				}
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_IsPlayerController_ReturnValue__pf);
				bpf__Server_Handbrake__pf(bpfv__CallFunc_Not_PreBool_ReturnValue2__pf);
			}
		case 12:
			{
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(bpv__BrakeLightxMaterialxSlot__pfTT, FName(TEXT("None")));
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 13:
			{
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetMaterialIndex_ReturnValue__pf = bpv__Mesh__pf->GetMaterialIndex(bpv__BrakeLightxMaterialxSlot__pfTT);
				}
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__Mesh__pf->CreateDynamicMaterialInstance(bpfv__CallFunc_GetMaterialIndex_ReturnValue__pf, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed));
				}
			}
		case 14:
			{
				bpv__M_BrakeLight__pf = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				bpf__Server_Handbrake__pf(true);
				__CurrentState = 12;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__OnRep_RPM__pf()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	FRotator bpfv__CallFunc_GetSocketRotation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(9);
			}
		case 7:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__HandBrakexOn__pfT);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_Array_Get_Item__pf.bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_Not_PreBool_ReturnValue2__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Array_Get_Item__pf.bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf, bpfv__CallFunc_BooleanOR_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__Gear__pf, 0);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(-1.000000, 1.000000, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpv__RPM__pf, 360.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 60.000000);
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, 0.000000);
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetSocketRotation_ReturnValue__pf = bpv__Mesh__pf->GetSocketRotation(bpfv__CallFunc_Array_Get_Item__pf.bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf);
				}
				bpfv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpfv__CallFunc_GetSocketRotation_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetRightVector_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				if(IsValid(bpv__Mesh__pf))
				{
					bpv__Mesh__pf->UPrimitiveComponent::SetPhysicsAngularVelocity(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf, false, bpfv__CallFunc_Array_Get_Item__pf.bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__OnRep_HandBrakexOn__pfT()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue3__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_HasAuthority_ReturnValue__pf{};
	UPhysicsConstraintComponent* bpfv__CallFunc_Array_Get_Item2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_HasAuthority_ReturnValue__pf = AActor::HasAuthority();
				if (!bpfv__CallFunc_HasAuthority_ReturnValue__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__WheelxConstraints__pfT);
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Array_Length_ReturnValue2__pf, 0);
				bpfv__CallFunc_Array_Length_ReturnValue3__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Array_Length_ReturnValue3__pf, 0);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Greater_IntInt_ReturnValue2__pf, bpfv__CallFunc_Greater_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(10);
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if (!bpfv__CallFunc_Array_Get_Item__pf.bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(50000000.000000, 0.000000, bpv__HandBrakexOn__pfT);
				FCustomThunkTemplates::Array_Get(bpv__WheelxConstraints__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf))
				{
					bpfv__CallFunc_Array_Get_Item2__pf->UPhysicsConstraintComponent::SetAngularDriveParams(0.000000, bpfv__CallFunc_SelectFloat_ReturnValue__pf, 0.000000);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__StallxEngine__pfT()
{
	AActor::FlushNetDormancy();
	bpv__EnginexStarted__pfT = false;
	AActor::FlushNetDormancy();
	bpv__RPM__pf = 0.000000;
	bpf__OnRep_RPM__pf();
	if(IsValid(bpv__Engine_Sound__pf))
	{
		bpv__Engine_Sound__pf->UAudioComponent::SetSound(CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed));
	}
	if(IsValid(bpv__Engine_Sound__pf))
	{
		bpv__Engine_Sound__pf->Play(0.000000);
	}
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__UpdatexLightxMaterial__pfTT()
{
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__OnRep_HeadLightsxOn__pfT()
{
	bool bpfv__Temp_bool_Variable__pf{};
	UMaterialInterface* bpfv__Temp_object_Variable__pf{};
	UMaterialInterface* bpfv__Temp_object_Variable2__pf{};
	UMaterialInterface* bpfv__K2Node_Select_Default__pf{};
	bool bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__CallFunc_GetMaterialIndex_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(FName(TEXT("None")), bpv__HeadLightxMaterialxSlot__pfTT);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_object_Variable__pf = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
				bpfv__Temp_object_Variable2__pf = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
				bpfv__Temp_bool_Variable__pf = bpv__HeadLightsxOn__pfT;
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetMaterialIndex_ReturnValue__pf = bpv__Mesh__pf->GetMaterialIndex(bpv__HeadLightxMaterialxSlot__pfTT);
				}
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__Mesh__pf->CreateDynamicMaterialInstance(bpfv__CallFunc_GetMaterialIndex_ReturnValue__pf, TSwitchValue<bool , UMaterialInterface* >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , UMaterialInterface* >(false, bpfv__Temp_object_Variable2__pf), TSwitchPair<bool , UMaterialInterface* >(true, bpfv__Temp_object_Variable__pf)));
				}
			}
		case 3:
			{
				if(IsValid(bpv__HeadLight_02__pf))
				{
					bpv__HeadLight_02__pf->USceneComponent::SetVisibility(bpv__HeadLightsxOn__pfT, false);
				}
				if(IsValid(bpv__HeadLight_01__pf))
				{
					bpv__HeadLight_01__pf->USceneComponent::SetVisibility(bpv__HeadLightsxOn__pfT, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__OnRep_IsxBraking__pfT()
{
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__M_BrakeLight__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpv__M_BrakeLight__pf))
				{
					bpv__M_BrakeLight__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light Color")), FLinearColor(0.035000,0.000257,0.000000,1.000000));
				}
			}
		case 3:
			{
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(2500.000000, 50.000000, bpv__IsxBraking__pfT);
				if(IsValid(bpv__M_BrakeLight__pf))
				{
					bpv__M_BrakeLight__pf->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Glow Intensity")), bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				}
			}
		case 4:
			{
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(2500.000000, 50.000000, bpv__IsxBraking__pfT);
				if(IsValid(bpv__BreakLight_01__pf))
				{
					bpv__BreakLight_01__pf->ULightComponent::SetIntensity(bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				}
				if(IsValid(bpv__BreakLight_02__pf))
				{
					bpv__BreakLight_02__pf->ULightComponent::SetIntensity(bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__TogglexHeadLights__pfT()
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	AActor::FlushNetDormancy();
	bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__HeadLightsxOn__pfT);
	bpv__HeadLightsxOn__pfT = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
	bpf__OnRep_HeadLightsxOn__pfT();
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__OnRep_IsxReversexGear__pfTT()
{
	bool bpfv__Temp_bool_Variable__pf{};
	UMaterialInterface* bpfv__Temp_object_Variable__pf{};
	UMaterialInterface* bpfv__Temp_object_Variable2__pf{};
	bool bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	UMaterialInterface* bpfv__K2Node_Select_Default__pf{};
	int32 bpfv__CallFunc_GetMaterialIndex_ReturnValue__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf = UKismetMathLibrary::EqualEqual_NameName(FName(TEXT("None")), bpv__ReverseLightxMaterialxSlot__pfTT);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_EqualEqual_NameName_ReturnValue__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_object_Variable__pf = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed);
				bpfv__Temp_object_Variable2__pf = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Master_Vehicle_C__pf3373537038::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
				bpfv__Temp_bool_Variable__pf = bpv__IsxReversexGear__pfTT;
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_GetMaterialIndex_ReturnValue__pf = bpv__Mesh__pf->GetMaterialIndex(bpv__ReverseLightxMaterialxSlot__pfTT);
				}
				if(IsValid(bpv__Mesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__Mesh__pf->CreateDynamicMaterialInstance(bpfv__CallFunc_GetMaterialIndex_ReturnValue__pf, TSwitchValue<bool , UMaterialInterface* >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , UMaterialInterface* >(false, bpfv__Temp_object_Variable2__pf), TSwitchPair<bool , UMaterialInterface* >(true, bpfv__Temp_object_Variable__pf)));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__UpdatexSounds__pfT()
{
	int32 bpfv__IntxDriftingxWheels__pfTT{};
	bool bpfv__Drifting__pf{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(13);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if (!bpfv__CallFunc_Array_Get_Item__pf.bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpfv__IntxDriftingxWheels__pfTT, 1);
				bpfv__IntxDriftingxWheels__pfTT = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__IntxDriftingxWheels__pfTT, 0);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(1.000000, 0.000000, bpfv__CallFunc_Greater_IntInt_ReturnValue__pf);
				if(IsValid(bpv__Tire_sound__pf))
				{
					bpv__Tire_sound__pf->UAudioComponent::AdjustVolume(0.200000, bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				}
			}
		case 10:
			{
				bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__IntxDriftingxWheels__pfTT);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, 1.000000, 5.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_FClamp_ReturnValue__pf, 2.000000);
				if(IsValid(bpv__Tire_sound__pf))
				{
					bpv__Tire_sound__pf->UAudioComponent::SetVolumeMultiplier(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				}
			}
		case 11:
			{
				bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf = UKismetMathLibrary::MapRangeClamped(bpv__RPM__pf, bpv__RPMxIdle__pfT, bpv__RPMxLimit__pfT, 1.000000, 3.000000);
				if(IsValid(bpv__Engine_Sound__pf))
				{
					bpv__Engine_Sound__pf->UAudioComponent::SetVolumeMultiplier(bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf);
				}
			}
		case 12:
			{
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpv__RPM__pf, bpv__RPMxIdle__pfT, bpv__RPMxLimit__pfT, 1.000000, 3.000000);
				if(IsValid(bpv__Engine_Sound__pf))
				{
					bpv__Engine_Sound__pf->UAudioComponent::SetPitchMultiplier(bpfv__CallFunc_MapRangeClamped_ReturnValue__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__CalculatexMilleage__pfT()
{
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpv__Speed__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, 3600.000000);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Mileage__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpv__Mileage__pf = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__SavexVariables__pfT()
{
	FString bpfv__CallFunc_GetObjectName_ReturnValue__pf{};
	UVehicle_Save_C__pf1010915279* bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf{};
	bool bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf{};
	bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf = CastChecked<UVehicle_Save_C__pf1010915279>(UGameplayStatics::CreateSaveGameObject(UVehicle_Save_C__pf1010915279::StaticClass()), ECastCheckedType::NullAllowed);
	if(IsValid(bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf))
	{
		bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf->bpv__Mileage__pf = bpv__Mileage__pf;
	}
	if(IsValid(bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf))
	{
		bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf->bpv__FuelxAmmount__pfT = bpv__FuelxAmmount__pfT;
	}
	bpfv__CallFunc_GetObjectName_ReturnValue__pf = UKismetSystemLibrary::GetObjectName(this);
	bpfv__CallFunc_SaveGameToSlot_ReturnValue__pf = UGameplayStatics::SaveGameToSlot(bpfv__CallFunc_CreateSaveGameObject_ReturnValue__pf, bpfv__CallFunc_GetObjectName_ReturnValue__pf, 0);
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__LoadxVariables__pfT()
{
	FString bpfv__CallFunc_GetObjectName_ReturnValue__pf{};
	bool bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf{};
	USaveGame* bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf{};
	UVehicle_Save_C__pf1010915279* bpfv__K2Node_DynamicCast_AsVehicle_Save__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetObjectName_ReturnValue__pf = UKismetSystemLibrary::GetObjectName(this);
				bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf = UGameplayStatics::DoesSaveGameExist(bpfv__CallFunc_GetObjectName_ReturnValue__pf, 0);
			}
		case 2:
			{
				if (!bpfv__CallFunc_DoesSaveGameExist_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_GetObjectName_ReturnValue__pf = UKismetSystemLibrary::GetObjectName(this);
				bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf = UGameplayStatics::LoadGameFromSlot(bpfv__CallFunc_GetObjectName_ReturnValue__pf, 0);
			}
		case 4:
			{
				bpfv__K2Node_DynamicCast_AsVehicle_Save__pf = Cast<UVehicle_Save_C__pf1010915279>(bpfv__CallFunc_LoadGameFromSlot_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsVehicle_Save__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				float  __Local__61 = 0.000000;
				bpv__Mileage__pf = ((IsValid(bpfv__K2Node_DynamicCast_AsVehicle_Save__pf)) ? (bpfv__K2Node_DynamicCast_AsVehicle_Save__pf->bpv__Mileage__pf) : (__Local__61));
			}
		case 6:
			{
				float  __Local__62 = 0.000000;
				bpv__FuelxAmmount__pfT = ((IsValid(bpfv__K2Node_DynamicCast_AsVehicle_Save__pf)) ? (bpfv__K2Node_DynamicCast_AsVehicle_Save__pf->bpv__FuelxAmmount__pfT) : (__Local__62));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__DetectxinxAir__pfTT()
{
	bool bpfv__InxAir__pfT{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__InxAir__pfT = true;
			}
		case 2:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__Wheels__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(11);
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__Wheels__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if (!bpfv__CallFunc_Array_Get_Item__pf.bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				bpfv__InxAir__pfT = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpv__IsxinxAir__pfTT = bpfv__InxAir__pfT;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Master_Vehicle_C__pf3373537038::bpf__AirxDrag__pfT()
{
	FVector bpfv__CallFunc_GetComponentBounds_Origin__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetComponentBounds_BoxExtent__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetComponentBounds_SphereRadius__pf{};
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Divide_VectorFloat_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Square_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	FVector bpfv__CallFunc_NegateVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf(EForceInit::ForceInit);
	UKismetSystemLibrary::GetComponentBounds(bpv__Mesh__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_Origin__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_BoxExtent__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_SphereRadius__pf);
	bpfv__CallFunc_GetVelocity_ReturnValue__pf = GetVelocity();
	bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Divide_VectorFloat(bpfv__CallFunc_GetComponentBounds_BoxExtent__pf, 100.000000);
	bpfv__CallFunc_Divide_VectorFloat_ReturnValue2__pf = UKismetMathLibrary::Divide_VectorFloat(bpfv__CallFunc_GetVelocity_ReturnValue__pf, 100.000000);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Divide_VectorFloat_ReturnValue2__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_Square_ReturnValue__pf = UKismetMathLibrary::Square(bpfv__CallFunc_VSize_ReturnValue__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__DragxCoefficient__pfT);
	bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, bpv__AirxDensity__pfT);
	bpfv__CallFunc_NegateVector_ReturnValue__pf = UKismetMathLibrary::NegateVector(bpfv__CallFunc_Normal_ReturnValue__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf, 0.500000);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_NegateVector_ReturnValue__pf, bpfv__CallFunc_Square_ReturnValue__pf);
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf);
	if(IsValid(bpv__Mesh__pf))
	{
		bpv__Mesh__pf->AddForce(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue2__pf, FName(TEXT("None")), false);
	}
}
void ABP_Master_Vehicle_C__pf3373537038::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Vehicles/Camaro/Meshes/Camaro.Camaro 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicsAsset /Game/Vehicles/Camaro/Meshes/Camaro_Physics.Camaro_Physics 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Player/Mesh/SK_Mannequin.SK_Mannequin 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicsAsset /Game/Player/Mesh/SK_Mannequin_PhysicsAsset.SK_Mannequin_PhysicsAsset 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Vehicles/Camaro/Sounds/road_skid_ext_Cue.road_skid_ext_Cue 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/Vehicles/00_Master_Vehicle/Curves/Acceleration_Curve.Acceleration_Curve 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/Vehicles/00_Master_Vehicle/Curves/Steering_Speed_Curve.Steering_Speed_Curve 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Vehicles/00_Master_Vehicle/Materials/M_default.M_default 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Vehicles/Camaro/Sounds/Opel/Opel_Engine_Cue.Opel_Engine_Cue 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EngineMeshes/Cube.Cube 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Vehicles/00_Master_Vehicle/Wheels/Wheel_01.Wheel_01 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicsAsset /Game/Vehicles/00_Master_Vehicle/Wheels/Wheel_01_Physics.Wheel_01_Physics 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Vehicles/00_Master_Vehicle/Effects/Smoke/PS_Smoke.PS_Smoke 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Vehicles/00_Master_Vehicle/Effects/Skid/PS_Skid.PS_Skid 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Vehicles/00_Master_Vehicle/Materials/Instances/MI_BrakeLight.MI_BrakeLight 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Player/Sounds/0477.0477 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Vehicles/00_Master_Vehicle/Materials/Instances/MI_HeadLight.MI_HeadLight 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Vehicles/00_Master_Vehicle/Materials/M_Chrome.M_Chrome 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Vehicles/00_Master_Vehicle/Materials/Instances/MI_ReverseLight.MI_ReverseLight 
	};
	for(const FCompactBlueprintDependencyData CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(
			F__NativeDependencies::Get(CompactData.ObjectRefIndex)
			,CompactData.ClassDependency
			,CompactData.CDODependency
			,CompactData.ObjectRefIndex
		));
	} 
}
void ABP_Master_Vehicle_C__pf3373537038::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpringArmComponent 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavArea_Obstacle 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ArrowComponent 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpotLightComponent 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PointLightComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AudioComponent 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SoundBase 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PhysicsConstraintComponent 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CurveFloat 
		{85, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EEndPlayReason 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{31, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CurveBase 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LightComponent 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Vehicles/Camaro/Anims/Camaro_AnimBlueprint.Camaro_AnimBlueprint_C 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Vehicles/Camaro/Anims/Camaro_Driver_AnimBlueprint.Camaro_Driver_AnimBlueprint_C 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/Vehicle_Debug.Vehicle_Debug_C 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Environment/BP_Water_Volume.BP_Water_Volume_C 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/BP_Physic_Pawn.BP_Physic_Pawn_C 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Vehicle_Save.Vehicle_Save_C 
		{98, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Vehicles/00_Master_Vehicle/Structs/Wheel_Structure.Wheel_Structure 
		{99, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Vehicles/00_Master_Vehicle/Structs/Gear_Structure.Gear_Structure 
	};
	for(const FCompactBlueprintDependencyData CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(
			F__NativeDependencies::Get(CompactData.ObjectRefIndex)
			,CompactData.ClassDependency
			,CompactData.CDODependency
			,CompactData.ObjectRefIndex
		));
	} 
}
struct FRegisterHelper__ABP_Master_Vehicle_C__pf3373537038
{
	FRegisterHelper__ABP_Master_Vehicle_C__pf3373537038()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Vehicles/00_Master_Vehicle/BP_Master_Vehicle"), &ABP_Master_Vehicle_C__pf3373537038::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Master_Vehicle_C__pf3373537038 Instance;
};
FRegisterHelper__ABP_Master_Vehicle_C__pf3373537038 FRegisterHelper__ABP_Master_Vehicle_C__pf3373537038::Instance;
void ABP_Master_Vehicle_C__pf3373537038::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(ABP_Master_Vehicle_C__pf3373537038, bpv__EnginexStarted__pfT, FName(TEXT("Engine Started")));
	DOREPLIFETIME_DIFFNAMES(ABP_Master_Vehicle_C__pf3373537038, bpv__SteeringxAngle__pfT, FName(TEXT("Steering Angle")));
	DOREPLIFETIME_DIFFNAMES(ABP_Master_Vehicle_C__pf3373537038, bpv__RPM__pf, FName(TEXT("RPM")));
	DOREPLIFETIME_DIFFNAMES(ABP_Master_Vehicle_C__pf3373537038, bpv__Speed__pf, FName(TEXT("Speed")));
	DOREPLIFETIME_DIFFNAMES(ABP_Master_Vehicle_C__pf3373537038, bpv__Gear__pf, FName(TEXT("Gear")));
	DOREPLIFETIME_DIFFNAMES(ABP_Master_Vehicle_C__pf3373537038, bpv__IsxChangingxGear__pfTT, FName(TEXT("Is Changing Gear")));
	DOREPLIFETIME_DIFFNAMES(ABP_Master_Vehicle_C__pf3373537038, bpv__IsxBraking__pfT, FName(TEXT("Is Braking")));
	DOREPLIFETIME_DIFFNAMES(ABP_Master_Vehicle_C__pf3373537038, bpv__IsxReversexGear__pfTT, FName(TEXT("Is Reverse Gear")));
	DOREPLIFETIME_DIFFNAMES(ABP_Master_Vehicle_C__pf3373537038, bpv__HandBrakexOn__pfT, FName(TEXT("HandBrake On")));
	DOREPLIFETIME_DIFFNAMES(ABP_Master_Vehicle_C__pf3373537038, bpv__HeadLightsxOn__pfT, FName(TEXT("HeadLights On")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
