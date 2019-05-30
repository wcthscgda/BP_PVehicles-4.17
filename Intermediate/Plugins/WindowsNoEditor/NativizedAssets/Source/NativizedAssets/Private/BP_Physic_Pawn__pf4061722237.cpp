#include "NativizedAssets.h"
#include "BP_Physic_Pawn__pf4061722237.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
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
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
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
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
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
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "ThirdPerson_AnimBP__pf600339337.h"
#include "Runtime/ClothingSystemRuntime/Public/ClothingSimulationFactory.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "BP_Controller__pf4061722237.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "BP_Master_Vehicle__pf3373537038.h"
#include "WheeledVehicle.h"
#include "WheeledVehicleMovementComponent.h"
#include "VehicleWheel.h"
#include "TireConfig.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "Interactable_Master__pf1010915279.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Vehicle_Debug__pf1863595755.h"
#include "Wheel_Structure__pf863842189.h"
#include "Gear_Structure__pf863842189.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "BP_Water_Volume__pf3286898353.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
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
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Vehicle_Save__pf1010915279.h"
#include "Popxup__pfG1863595755.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ABP_Physic_Pawn_C__pf4061722237::ABP_Physic_Pawn_C__pf4061722237(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_Physic_Pawn_C__pf4061722237::StaticClass() == GetClass()))
	{
		ABP_Physic_Pawn_C__pf4061722237::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Capsule__pf = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	bpv__SkeletalMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	bpv__FP_Camera_Root__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("FP_Camera_Root"));
	bpv__FP_SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("FP_SpringArm"));
	bpv__FP_Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("FP_Camera"));
	bpv__Audio__pf = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	bpv__TP_Camera_Root__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("TP_Camera_Root"));
	bpv__TP_SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("TP_SpringArm"));
	bpv__TP_Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("TP_Camera"));
	bpv__SwimxCapsule__pfT = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Swim Capsule"));
	RootComponent = bpv__Capsule__pf;
	bpv__Capsule__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Capsule__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__0 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Capsule__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__1 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__0), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__1 = TArray<FResponseChannel> ();
	bpv__Capsule__pf->BodyInstance.bUseCCD = true;
	bpv__Capsule__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	bpv__Capsule__pf->BodyInstance.bSimulatePhysics = true;
	bpv__Capsule__pf->BodyInstance.bLockXRotation = true;
	bpv__Capsule__pf->BodyInstance.bLockYRotation = true;
	bpv__Capsule__pf->BodyInstance.LinearDamping = 1.500000f;
	bpv__Capsule__pf->BodyInstance.AngularDamping = 10.000000f;
	auto& __Local__2 = (*(AccessPrivateProperty<UPhysicalMaterial* >(&(bpv__Capsule__pf->BodyInstance), FBodyInstance::__PPO__PhysMaterialOverride() )));
	__Local__2 = CastChecked<UPhysicalMaterial>(CastChecked<UDynamicClass>(ABP_Physic_Pawn_C__pf4061722237::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__3 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__Capsule__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__3 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__4 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__Capsule__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__4 = ECollisionChannel::ECC_Pawn;
	auto& __Local__5 = (*(AccessPrivateProperty<float >((bpv__Capsule__pf), UCapsuleComponent::__PPO__CapsuleHalfHeight() )));
	__Local__5 = 92.000000f;
	auto& __Local__6 = (*(AccessPrivateProperty<float >((bpv__Capsule__pf), UCapsuleComponent::__PPO__CapsuleRadius() )));
	__Local__6 = 40.000000f;
	bpv__Capsule__pf->bAlwaysCreatePhysicsState = true;
	bpv__Capsule__pf->bMultiBodyOverlap = true;
	bpv__Capsule__pf->bShouldUpdatePhysicsVolume = true;
	bpv__Capsule__pf->ComponentTags = TArray<FName> ();
	bpv__Capsule__pf->ComponentTags.Reserve(1);
	bpv__Capsule__pf->ComponentTags.Add(FName(TEXT("Usable")));
	static TWeakObjectPtr<UProperty> __Local__8{};
	const UProperty* __Local__7 = __Local__8.Get();
	if (nullptr == __Local__7)
	{
		__Local__7 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bReplicates")));
		check(__Local__7);
		__Local__8 = __Local__7;
	}
	(((UBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__Capsule__pf), true, 0));
	if(!bpv__Capsule__pf->IsTemplate())
	{
		bpv__Capsule__pf->BodyInstance.FixupData(bpv__Capsule__pf);
	}
	bpv__SkeletalMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SkeletalMesh__pf->AttachToComponent(bpv__Capsule__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SkeletalMesh__pf->AnimClass = UThirdPerson_AnimBP_C__pf600339337::StaticClass();
	bpv__SkeletalMesh__pf->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(ABP_Physic_Pawn_C__pf4061722237::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__SkeletalMesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__SkeletalMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_Physic_Pawn_C__pf4061722237::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__SkeletalMesh__pf->PhysicsAssetOverride = CastChecked<UPhysicsAsset>(CastChecked<UDynamicClass>(ABP_Physic_Pawn_C__pf4061722237::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__SkeletalMesh__pf->bGenerateOverlapEvents = true;
	bpv__SkeletalMesh__pf->BodyInstance.bUseCCD = true;
	bpv__SkeletalMesh__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	bpv__SkeletalMesh__pf->BodyInstance.PositionSolverIterationCount = 80;
	bpv__SkeletalMesh__pf->BodyInstance.VelocitySolverIterationCount = 11;
	bpv__SkeletalMesh__pf->BodyInstance.SleepFamily = ESleepFamily::Sensitive;
	bpv__SkeletalMesh__pf->RelativeLocation = FVector(0.000000, 0.000000, -90.000000);
	bpv__SkeletalMesh__pf->RelativeRotation = FRotator(0.000000, -90.000000, 0.000000);
	(((UBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__SkeletalMesh__pf), true, 0));
	if(!bpv__SkeletalMesh__pf->IsTemplate())
	{
		bpv__SkeletalMesh__pf->BodyInstance.FixupData(bpv__SkeletalMesh__pf);
	}
	bpv__FP_Camera_Root__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FP_Camera_Root__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("head"));
	bpv__FP_Camera_Root__pf->TargetArmLength = 0.000000f;
	bpv__FP_Camera_Root__pf->bDoCollisionTest = false;
	bpv__FP_Camera_Root__pf->bUsePawnControlRotation = true;
	bpv__FP_Camera_Root__pf->RelativeLocation = FVector(0.000000, 17.000000, 2.000000);
	bpv__FP_Camera_Root__pf->RelativeRotation = FRotator(0.000000, 89.999992, 0.000000);
	bpv__FP_SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FP_SpringArm__pf->AttachToComponent(bpv__FP_Camera_Root__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FP_SpringArm__pf->TargetArmLength = 1.000000f;
	bpv__FP_SpringArm__pf->bDoCollisionTest = false;
	bpv__FP_SpringArm__pf->RelativeRotation = FRotator(0.000000, -10.000000, 0.000000);
	(((UBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__FP_SpringArm__pf), true, 0));
	bpv__FP_Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FP_Camera__pf->AttachToComponent(bpv__FP_SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FP_Camera__pf->RelativeRotation = FRotator(0.000000, 10.000000, 0.000000);
	bpv__FP_Camera__pf->bAutoActivate = false;
	bpv__Audio__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Audio__pf->AttachToComponent(bpv__Capsule__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Audio__pf->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_Physic_Pawn_C__pf4061722237::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__Audio__pf->VolumeMultiplier = 0.500000f;
	bpv__Audio__pf->bAutoActivate = false;
	bpv__TP_Camera_Root__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TP_Camera_Root__pf->AttachToComponent(bpv__Capsule__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TP_Camera_Root__pf->TargetArmLength = 0.000000f;
	bpv__TP_Camera_Root__pf->bDoCollisionTest = false;
	bpv__TP_Camera_Root__pf->bUsePawnControlRotation = true;
	bpv__TP_Camera_Root__pf->RelativeLocation = FVector(0.000000, 0.000000, 10.000000);
	bpv__TP_Camera_Root__pf->RelativeRotation = FRotator(0.000000, -0.000010, 0.000000);
	bpv__TP_SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TP_SpringArm__pf->AttachToComponent(bpv__TP_Camera_Root__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TP_SpringArm__pf->RelativeRotation = FRotator(0.000000, -15.000000, 0.000000);
	(((UBoolProperty*)__Local__7)->SetPropertyValue_InContainer((bpv__TP_SpringArm__pf), true, 0));
	bpv__TP_Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TP_Camera__pf->AttachToComponent(bpv__TP_SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TP_Camera__pf->RelativeRotation = FRotator(0.000000, 15.000000, 0.000000);
	bpv__SwimxCapsule__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__SwimxCapsule__pfT->AttachToComponent(bpv__Capsule__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SwimxCapsule__pfT->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__9 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__SwimxCapsule__pfT->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__9), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__10 = TArray<FResponseChannel> ();
	__Local__10.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__10.GetData(), 8);
	auto& __Local__11 = __Local__10[0];
	__Local__11.Channel = FName(TEXT("WorldStatic"));
	__Local__11.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__12 = __Local__10[1];
	__Local__12.Channel = FName(TEXT("WorldDynamic"));
	__Local__12.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__13 = __Local__10[2];
	__Local__13.Channel = FName(TEXT("Pawn"));
	__Local__13.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__14 = __Local__10[3];
	__Local__14.Channel = FName(TEXT("Visibility"));
	__Local__14.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__15 = __Local__10[4];
	__Local__15.Channel = FName(TEXT("Camera"));
	__Local__15.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__16 = __Local__10[5];
	__Local__16.Channel = FName(TEXT("PhysicsBody"));
	__Local__16.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__17 = __Local__10[6];
	__Local__17.Channel = FName(TEXT("Vehicle"));
	__Local__17.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__18 = __Local__10[7];
	__Local__18.Channel = FName(TEXT("Destructible"));
	__Local__18.Response = ECollisionResponse::ECR_Ignore;
	bpv__SwimxCapsule__pfT->BodyInstance.bEnableGravity = false;
	auto& __Local__19 = (*(AccessPrivateProperty<float >((bpv__SwimxCapsule__pfT), UCapsuleComponent::__PPO__CapsuleHalfHeight() )));
	__Local__19 = 50.000000f;
	auto& __Local__20 = (*(AccessPrivateProperty<float >((bpv__SwimxCapsule__pfT), UCapsuleComponent::__PPO__CapsuleRadius() )));
	__Local__20 = 30.000000f;
	bpv__SwimxCapsule__pfT->RelativeLocation = FVector(0.000000, 0.000000, 50.000000);
	if(!bpv__SwimxCapsule__pfT->IsTemplate())
	{
		bpv__SwimxCapsule__pfT->BodyInstance.FixupData(bpv__SwimxCapsule__pfT);
	}
	bpv__BP_Controller__pf = nullptr;
	bpv__IsxAlive__pfT = true;
	bpv__IsxonxGround__pfTT = true;
	bpv__IsxRagdoll__pfT = false;
	bpv__IsxRagdollxStable__pfTT = false;
	bpv__IsxThirdPerson__pfT = true;
	bpv__Health__pf = 0.000000f;
	bpv__CameraxRot__pfT = FRotator(0.000000, 0.000000, 0.000000);
	bpv__IsxSwimming__pfT = false;
	bpv__WaterxVolume__pfT = nullptr;
	bUseControllerRotationYaw = true;
	Tags = TArray<FName> ();
	Tags.Reserve(1);
	Tags.Add(FName(TEXT("Character")));
}
void ABP_Physic_Pawn_C__pf4061722237::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Capsule__pf)
	{
		bpv__Capsule__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SkeletalMesh__pf)
	{
		bpv__SkeletalMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FP_Camera_Root__pf)
	{
		bpv__FP_Camera_Root__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FP_SpringArm__pf)
	{
		bpv__FP_SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__FP_Camera__pf)
	{
		bpv__FP_Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Audio__pf)
	{
		bpv__Audio__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TP_Camera_Root__pf)
	{
		bpv__TP_Camera_Root__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TP_SpringArm__pf)
	{
		bpv__TP_SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TP_Camera__pf)
	{
		bpv__TP_Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SwimxCapsule__pfT)
	{
		bpv__SwimxCapsule__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_Physic_Pawn_C__pf4061722237::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UThirdPerson_AnimBP_C__pf600339337::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Controller_C__pf4061722237::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Master_Vehicle_C__pf3373537038::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AInteractable_Master_C__pf1010915279::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPopxup_C__pfG1863595755::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__21 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__21);
	auto __Local__22 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__22);
	auto __Local__23 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__23);
	auto __Local__24 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__24);
	__Local__22->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__22->ComponentDelegateBindings.AddUninitialized(4);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__22->ComponentDelegateBindings.GetData(), 4);
	auto& __Local__25 = __Local__22->ComponentDelegateBindings[0];
	__Local__25.ComponentPropertyName = FName(TEXT("Swim Capsule"));
	__Local__25.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__25.FunctionNameToBind = FName(TEXT("BndEvt__Torso Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__26 = __Local__22->ComponentDelegateBindings[1];
	__Local__26.ComponentPropertyName = FName(TEXT("Swim Capsule"));
	__Local__26.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__26.FunctionNameToBind = FName(TEXT("BndEvt__Torso Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__27 = __Local__22->ComponentDelegateBindings[2];
	__Local__27.ComponentPropertyName = FName(TEXT("SkeletalMesh"));
	__Local__27.DelegatePropertyName = FName(TEXT("OnComponentHit"));
	__Local__27.FunctionNameToBind = FName(TEXT("BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature"));
	auto& __Local__28 = __Local__22->ComponentDelegateBindings[3];
	__Local__28.ComponentPropertyName = FName(TEXT("Capsule"));
	__Local__28.DelegatePropertyName = FName(TEXT("OnComponentHit"));
	__Local__28.FunctionNameToBind = FName(TEXT("BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature"));
	__Local__23->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__23->InputActionDelegateBindings.AddUninitialized(3);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__23->InputActionDelegateBindings.GetData(), 3);
	auto& __Local__29 = __Local__23->InputActionDelegateBindings[0];
	__Local__29.InputActionName = FName(TEXT("ChangeView"));
	__Local__29.FunctionNameToBind = FName(TEXT("InpActEvt_ChangeView_K2Node_InputActionEvent_3"));
	auto& __Local__30 = __Local__23->InputActionDelegateBindings[1];
	__Local__30.InputActionName = FName(TEXT("Interact"));
	__Local__30.FunctionNameToBind = FName(TEXT("InpActEvt_Interact_K2Node_InputActionEvent_5"));
	auto& __Local__31 = __Local__23->InputActionDelegateBindings[2];
	__Local__31.InputActionName = FName(TEXT("Jump"));
	__Local__31.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_4"));
	__Local__24->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__24->InputAxisDelegateBindings.AddUninitialized(4);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__24->InputAxisDelegateBindings.GetData(), 4);
	auto& __Local__32 = __Local__24->InputAxisDelegateBindings[0];
	__Local__32.InputAxisName = FName(TEXT("MoveRight"));
	__Local__32.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_130"));
	auto& __Local__33 = __Local__24->InputAxisDelegateBindings[1];
	__Local__33.InputAxisName = FName(TEXT("MoveForward"));
	__Local__33.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_129"));
	auto& __Local__34 = __Local__24->InputAxisDelegateBindings[2];
	__Local__34.InputAxisName = FName(TEXT("LookRight"));
	__Local__34.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookRight_K2Node_InputAxisEvent_60"));
	auto& __Local__35 = __Local__24->InputAxisDelegateBindings[3];
	__Local__35.InputAxisName = FName(TEXT("LookUp"));
	__Local__35.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_40"));
	__Local__35.bOverrideParentBinding = false;
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Array_Contains_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 80);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable2__pf = FName(TEXT("Water"));
	TArray<FName>  __Local__36 = TArray<FName> {};
	bpfv__CallFunc_Array_Contains_ReturnValue2__pf = FCustomThunkTemplates::Array_Contains(((IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp2__pf)) ? (b0l__K2Node_ComponentBoundEvent_OtherComp2__pf->ComponentTags) : (__Local__36)), b0l__Temp_name_Variable2__pf);
	if (!bpfv__CallFunc_Array_Contains_ReturnValue2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__IsxSwimming__pfT = true;
	// optimized KCST_UnconditionalGoto
	bpf__OnRep_IsxSwimming__pfT();
	bpv__WaterxVolume__pfT = b0l__K2Node_ComponentBoundEvent_OtherComp2__pf;
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 36:
			{
				__CurrentState = 37;
				break;
			}
		case 37:
			{
				bpf__Server_Tick__pf();
			}
		case 38:
			{
				bpf__Floatxinxwater__pfTT();
			}
		case 39:
			{
				if (!bpv__IsxSwimming__pfT)
				{
					__CurrentState = 40;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 40:
			{
				bpf__IsxonxGroundx__pfTTzy();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 51:
			{
				__CurrentState = 52;
				break;
			}
		case 52:
			{
				if (!bpv__IsxSwimming__pfT)
				{
					__CurrentState = 53;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 53:
			{
				bpf__Server_Jump__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 82);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_name_Variable__pf = FName(TEXT("Water"));
	TArray<FName>  __Local__37 = TArray<FName> {};
	bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(((IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp__pf)) ? (b0l__K2Node_ComponentBoundEvent_OtherComp__pf->ComponentTags) : (__Local__37)), b0l__Temp_name_Variable__pf);
	if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__IsxSwimming__pfT = false;
	// optimized KCST_UnconditionalGoto
	bpf__OnRep_IsxSwimming__pfT();
	// optimized KCST_UnconditionalGoto
	bpv__WaterxVolume__pfT = ((UPrimitiveComponent*)nullptr);
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 78);
	// optimized KCST_UnconditionalGoto
	bpf__SwitchxViewxMode__pfTT();
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 49);
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__Health__pf = 100.000000;
	// optimized KCST_UnconditionalGoto
	bpf__OnRep_Health__pf();
	if(IsValid(bpv__TP_Camera__pf))
	{
		bpv__TP_Camera__pf->SetActive(bpv__IsxThirdPerson__pfT, false);
	}
	bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsxThirdPerson__pfT);
	if(IsValid(bpv__FP_Camera__pf))
	{
		bpv__FP_Camera__pf->SetActive(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, false);
	}
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_6(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 33);
	// optimized KCST_UnconditionalGoto
	AddControllerYawInput(b0l__K2Node_InputAxisEvent_AxisValue3__pf);
	bpfv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
	bpf__Server_CameraxRotation__pfT(bpfv__CallFunc_GetControlRotation_ReturnValue__pf);
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_7(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 75);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(bpv__BP_Controller__pf);
	if (!bpfv__CallFunc_IsValid_ReturnValue2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__BP_Controller__pf))
	{
		bpv__BP_Controller__pf->bpf__Hide_PlayerxHUD__pfT();
	}
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 72);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Controller__pf = Cast<ABP_Controller_C__pf4061722237>(b0l__K2Node_Event_NewController__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBP_Controller__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__BP_Controller__pf = b0l__K2Node_DynamicCast_AsBP_Controller__pf;
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__BP_Controller__pf))
	{
		bpv__BP_Controller__pf->bpf__Show_PlayerxHUD__pfT();
	}
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 70);
	// optimized KCST_UnconditionalGoto
	bpf__PossessxPassenger__pfT(b0l__K2Node_CustomEvent_Object__pf);
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 68);
	// optimized KCST_UnconditionalGoto
	bpf__DrivexVehicle__pfT(b0l__K2Node_CustomEvent_Object2__pf);
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_11(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue3__pf{};
	bool bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetSocketLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				AActor::FlushNetDormancy();
			}
		case 3:
			{
				bpv__IsxRagdollxStable__pfTT = true;
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				AActor::FlushNetDormancy();
			}
		case 5:
			{
				bpv__IsxRagdollxStable__pfTT = false;
			}
		case 6:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpfv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__SkeletalMesh__pf->GetSocketLocation(FName(TEXT("pelvis")));
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetSocketLocation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector_X2__pf, /*out*/ b0l__CallFunc_BreakVector_Y2__pf, /*out*/ b0l__CallFunc_BreakVector_Z2__pf);
				float  __Local__38 = 0.000000;
				bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(b0l__CallFunc_BreakVector_Z2__pf, ((IsValid(bpv__Capsule__pf)) ? ((*(AccessPrivateProperty<float >((bpv__Capsule__pf), UCapsuleComponent::__PPO__CapsuleHalfHeight() )))) : (__Local__38)));
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X2__pf, b0l__CallFunc_BreakVector_Y2__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf);
				if(IsValid(bpv__Capsule__pf))
				{
					bpv__Capsule__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_MakeVector_ReturnValue2__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 43:
			{
				if (!bpv__IsxRagdoll__pfT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 44:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf = bpv__SkeletalMesh__pf->UPrimitiveComponent::GetPhysicsLinearVelocity(FName(TEXT("pelvis")));
				}
			}
		case 45:
			{
				bpfv__CallFunc_VSize_ReturnValue3__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf);
				bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NearlyEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue3__pf, 0.000000, 100.000000);
				if (!bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = 2;
				break;
			}
		case 50:
			{
				__CurrentState = 43;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_12(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 41:
			{
				bpf__Interact__pf();
				__CurrentState = -1;
				break;
			}
		case 60:
			{
				__CurrentState = 61;
				break;
			}
		case 61:
			{
				if (!bpv__IsxRagdoll__pfT)
				{
					__CurrentState = 41;
					break;
				}
			}
		case 62:
			{
				if (!bpv__IsxRagdoll__pfT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 63:
			{
				bpf__Server_UnRagdoll__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_13(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Abs_ReturnValue3__pf{};
	float bpfv__CallFunc_Abs_ReturnValue4__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue4__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue5__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_SelectFloat_ReturnValue3__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 54);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Abs_ReturnValue3__pf = UKismetMathLibrary::Abs(b0l__K2Node_CustomEvent_Right_Axis__pf);
	bpfv__CallFunc_Abs_ReturnValue4__pf = UKismetMathLibrary::Abs(b0l__K2Node_CustomEvent_Forward_Axis__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Abs_ReturnValue4__pf, bpfv__CallFunc_Abs_ReturnValue3__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue5__pf = FCustomThunkTemplates::Divide_FloatFloat(b0l__K2Node_CustomEvent_Forward_Axis__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
	UKismetMathLibrary::BreakRotator(bpv__CameraxRot__pfT, /*out*/ b0l__CallFunc_BreakRotator_Roll2__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch2__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw2__pf);
	bpfv__CallFunc_SelectFloat_ReturnValue3__pf = UKismetMathLibrary::SelectFloat(b0l__CallFunc_BreakRotator_Pitch2__pf, 0.000000, bpv__IsxSwimming__pfT);
	bpfv__CallFunc_MakeRotator_ReturnValue2__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_SelectFloat_ReturnValue3__pf, b0l__CallFunc_BreakRotator_Yaw2__pf);
	bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_MakeRotator_ReturnValue2__pf);
	bpf__Move__pf(bpfv__CallFunc_Divide_FloatFloat_ReturnValue5__pf, bpfv__CallFunc_GetForwardVector_ReturnValue__pf);
	bpfv__CallFunc_Abs_ReturnValue3__pf = UKismetMathLibrary::Abs(b0l__K2Node_CustomEvent_Right_Axis__pf);
	bpfv__CallFunc_Abs_ReturnValue4__pf = UKismetMathLibrary::Abs(b0l__K2Node_CustomEvent_Forward_Axis__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Abs_ReturnValue4__pf, bpfv__CallFunc_Abs_ReturnValue3__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue4__pf = FCustomThunkTemplates::Divide_FloatFloat(b0l__K2Node_CustomEvent_Right_Axis__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
	UKismetMathLibrary::BreakRotator(bpv__CameraxRot__pfT, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpfv__CallFunc_MakeRotator_ReturnValue__pf);
	bpf__Move__pf(bpfv__CallFunc_Divide_FloatFloat_ReturnValue4__pf, bpfv__CallFunc_GetRightVector_ReturnValue__pf);
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 66);
	// optimized KCST_UnconditionalGoto
	bpf__UnxRagdoll__pfT();
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_15(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue2__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 29);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(110000.000000, 3500.000000, bpv__IsxonxGround__pfTT);
	bpfv__CallFunc_SelectFloat_ReturnValue2__pf = UKismetMathLibrary::SelectFloat(110000.000000, bpfv__CallFunc_SelectFloat_ReturnValue__pf, bpv__IsxSwimming__pfT);
	UKismetMathLibrary::BreakVector(b0l__K2Node_ComponentBoundEvent_NormalImpulse2__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(b0l__CallFunc_BreakVector_Z__pf, 1.800000);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X__pf, b0l__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_MakeVector_ReturnValue__pf);
	bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpfv__CallFunc_SelectFloat_ReturnValue2__pf);
	if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	UKismetMathLibrary::BreakVector(b0l__K2Node_ComponentBoundEvent_NormalImpulse2__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(b0l__CallFunc_BreakVector_Z__pf, 1.800000);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X__pf, b0l__CallFunc_BreakVector_Y__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_MakeVector_ReturnValue__pf);
	bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_VSize_ReturnValue__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Abs_ReturnValue__pf, 30000.000000);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__Health__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf);
	bpv__Health__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf;
	// optimized KCST_UnconditionalGoto
	bpf__OnRep_Health__pf();
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(b0l__K2Node_ComponentBoundEvent_NormalImpulse2__pf, -0.015000);
	bpf__TriggerxRagdoll__pfT(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, FName(TEXT("None")));
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 64);
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__CameraxRot__pfT = b0l__K2Node_CustomEvent_NewParam__pf;
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 65);
	// optimized KCST_UnconditionalGoto
	bpf__Jump__pf();
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_18(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 57);
	// optimized KCST_UnconditionalGoto
	bpf__Server_Move__pf(b0l__K2Node_InputAxisEvent_AxisValue2__pf, b0l__K2Node_InputAxisEvent_AxisValue__pf);
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_19(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 59);
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_20(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_VSize_ReturnValue2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 46);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(b0l__K2Node_ComponentBoundEvent_OtherActor3__pf);
	if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpfv__CallFunc_VSize_ReturnValue2__pf = UKismetMathLibrary::VSize(b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf);
	bpfv__CallFunc_Abs_ReturnValue2__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_VSize_ReturnValue2__pf);
	bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Abs_ReturnValue2__pf, 15000.000000);
	if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpfv__CallFunc_VSize_ReturnValue2__pf = UKismetMathLibrary::VSize(b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf);
	bpfv__CallFunc_Abs_ReturnValue2__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_VSize_ReturnValue2__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Abs_ReturnValue2__pf, 30000.000000);
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__Health__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue3__pf);
	bpv__Health__pf = bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
	// optimized KCST_UnconditionalGoto
	bpf__OnRep_Health__pf();
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_21(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 31);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue4__pf, -1.000000);
	AddControllerPitchInput(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	return; // KCST_GotoReturn
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pfT(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_3(82);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__BndEvt__TorsoxCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pfT(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__39;
	T__Local__39& bpp__SweepResult__pf = *const_cast<T__Local__39 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_0(80);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ReceiveUnpossessed__pf(AController* bpp__OldController__pf)
{
	b0l__K2Node_Event_OldController__pf = bpp__OldController__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_7(75);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ReceivePossessed__pf(AController* bpp__NewController__pf)
{
	b0l__K2Node_Event_NewController__pf = bpp__NewController__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_8(72);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Server_PossessxPassenger__pfT_Implementation(UObject* bpp__Object__pf)
{
	b0l__K2Node_CustomEvent_Object__pf = bpp__Object__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_9(70);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Server_DrivexVehicle__pfT_Implementation(UObject* bpp__Object__pf)
{
	b0l__K2Node_CustomEvent_Object2__pf = bpp__Object__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_10(68);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Server_UnRagdoll__pf_Implementation()
{
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_14(66);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Server_Jump__pf_Implementation()
{
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_17(65);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Server_CameraxRotation__pfT_Implementation(FRotator bpp__NewParam__pf)
{
	b0l__K2Node_CustomEvent_NewParam__pf = bpp__NewParam__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_16(64);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_130__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_19(59);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_129__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_18(57);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Server_Move__pf_Implementation(float bpp__ForwardxAxis__pfT, float bpp__RightxAxis__pfT)
{
	b0l__K2Node_CustomEvent_Forward_Axis__pf = bpp__ForwardxAxis__pfT;
	b0l__K2Node_CustomEvent_Right_Axis__pf = bpp__RightxAxis__pfT;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_13(54);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Server_Tick__pf_Implementation()
{
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_11(50);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_5(49);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__40;
	T__Local__40& bpp__Hit__pf = *const_cast<T__Local__40 *>(&bpp__Hit__pf__const);
	b0l__K2Node_ComponentBoundEvent_HitComponent__pf = bpp__HitComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor3__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp3__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_ComponentBoundEvent_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_20(46);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_1(36);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_60__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_6(33);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue4__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_21(31);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__41;
	T__Local__41& bpp__Hit__pf = *const_cast<T__Local__41 *>(&bpp__Hit__pf__const);
	b0l__K2Node_ComponentBoundEvent_HitComponent2__pf = bpp__HitComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor4__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp4__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_NormalImpulse2__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_ComponentBoundEvent_Hit2__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_15(29);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__InpActEvt_ChangeView_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_4(78);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__InpActEvt_Jump_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_2(51);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__InpActEvt_Interact_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Physic_Pawn__pf_12(60);
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__UserConstructionScript__pf()
{
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__DrivexVehicle__pfT(UObject* bpp__Object__pf)
{
	AWheeledVehicle* bpfv__K2Node_DynamicCast_AsWheeled_Vehicle__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	ABP_Master_Vehicle_C__pf3373537038* bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess2__pf{};
	bool bpfv__CallFunc_IsControlled_ReturnValue__pf{};
	bool bpfv__CallFunc_IsControlled_ReturnValue2__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf = Cast<ABP_Master_Vehicle_C__pf3373537038>(bpp__Object__pf);
				bpfv__K2Node_DynamicCast_bSuccess2__pf = (bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf))
				{
					bpfv__CallFunc_IsControlled_ReturnValue2__pf = bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->APawn::IsControlled();
				}
				if (!bpfv__CallFunc_IsControlled_ReturnValue2__pf)
				{
					__CurrentState = 7;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__K2Node_DynamicCast_AsWheeled_Vehicle__pf = Cast<AWheeledVehicle>(bpp__Object__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsWheeled_Vehicle__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsWheeled_Vehicle__pf))
				{
					bpfv__CallFunc_IsControlled_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsWheeled_Vehicle__pf->APawn::IsControlled();
				}
				if (!bpfv__CallFunc_IsControlled_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if(IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue__pf->Possess(bpfv__K2Node_DynamicCast_AsWheeled_Vehicle__pf);
				}
			}
		case 6:
			{
				K2_DestroyActor();
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_GetController_ReturnValue2__pf = APawn::GetController();
				if(IsValid(bpfv__CallFunc_GetController_ReturnValue2__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue2__pf->Possess(bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf);
				}
			}
		case 8:
			{
				K2_DestroyActor();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__PossessxPassenger__pfT(UObject* bpp__Object__pf)
{
	APawn* bpfv__K2Node_DynamicCast_AsPawn__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	bool bpfv__CallFunc_IsControlled_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsPawn__pf = Cast<APawn>(bpp__Object__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPawn__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsPawn__pf))
				{
					bpfv__CallFunc_IsControlled_ReturnValue__pf = bpfv__K2Node_DynamicCast_AsPawn__pf->APawn::IsControlled();
				}
				if (!bpfv__CallFunc_IsControlled_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if(IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue__pf->Possess(bpfv__K2Node_DynamicCast_AsPawn__pf);
				}
			}
		case 4:
			{
				K2_DestroyActor();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__TriggerxRagdoll__pfT(FVector bpp__Velocity__pf, FName bpp__BoneName__pf)
{
	FVector bpfv__Velocity_Ragdoll__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsxThirdPerson__pfT)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 2:
			{
				bpfv__Velocity_Ragdoll__pf = bpp__Velocity__pf;
			}
		case 3:
			{
				if(IsValid(bpv__FP_SpringArm__pf))
				{
					bpv__FP_SpringArm__pf->bDoCollisionTest = false;
				}
			}
		case 4:
			{
				AActor::FlushNetDormancy();
			}
		case 5:
			{
				bpv__IsxRagdoll__pfT = true;
			}
		case 6:
			{
				if(IsValid(bpv__Capsule__pf))
				{
					bpv__Capsule__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 7:
			{
				if(IsValid(bpv__Capsule__pf))
				{
					bpv__Capsule__pf->SetSimulatePhysics(false);
				}
			}
		case 8:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
				}
			}
		case 9:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSimulatePhysics(true);
				}
			}
		case 10:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
			}
		case 11:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->UPrimitiveComponent::SetPhysicsLinearVelocity(bpfv__Velocity_Ragdoll__pf, true, bpp__BoneName__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpf__SwitchxViewxMode__pfTT();
				__CurrentState = 2;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Interact__pf()
{
	bool bpfv__Temp_bool_Variable__pf{};
	USpringArmComponent* bpfv__K2Node_Select_Default__pf{};
	FName bpfv__Temp_name_Variable__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FText bpfv__CallFunc_MakeLiteralText_ReturnValue__pf{};
	FName bpfv__Temp_name_Variable2__pf{};
	TArray<AActor*> bpfv__Temp_object_Variable__pf{};
	FName bpfv__Temp_name_Variable3__pf{};
	FName bpfv__Temp_name_Variable4__pf{};
	bool bpfv__Temp_bool_Variable2__pf{};
	USceneComponent* bpfv__K2Node_Select2_Default__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_LineTraceSingle_OutHit__pf{};
	bool bpfv__CallFunc_LineTraceSingle_ReturnValue__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	ABP_Master_Vehicle_C__pf3373537038* bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	AInteractable_Master_C__pf1010915279* bpfv__K2Node_DynamicCast_AsInteractable_Master__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_NameToText_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_NameToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_NameToString_ReturnValue2__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue2__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue2__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue3__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue4__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_bool_Variable2__pf = bpv__IsxThirdPerson__pfT;
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(TSwitchValue<bool , USceneComponent* >(bpfv__Temp_bool_Variable2__pf, bpfv__K2Node_Select2_Default__pf, 2, TSwitchPair<bool , USceneComponent* >(false, *(USceneComponent**)(&(bpv__FP_Camera__pf))), TSwitchPair<bool , USceneComponent* >(true, *(USceneComponent**)(&(bpv__TP_Camera__pf)))));
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_bool_Variable__pf = bpv__IsxThirdPerson__pfT;
				float  __Local__42 = 0.000000;
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(((IsValid(TSwitchValue<bool , USpringArmComponent* >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , USpringArmComponent* >(false, bpv__FP_SpringArm__pf), TSwitchPair<bool , USpringArmComponent* >(true, bpv__TP_SpringArm__pf)))) ? (TSwitchValue<bool , USpringArmComponent* >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , USpringArmComponent* >(false, bpv__FP_SpringArm__pf), TSwitchPair<bool , USpringArmComponent* >(true, bpv__TP_SpringArm__pf))->TargetArmLength) : (__Local__42)), 100.000000);
				bpfv__Temp_bool_Variable2__pf = bpv__IsxThirdPerson__pfT;
				if(IsValid(TSwitchValue<bool , USceneComponent* >(bpfv__Temp_bool_Variable2__pf, bpfv__K2Node_Select2_Default__pf, 2, TSwitchPair<bool , USceneComponent* >(false, *(USceneComponent**)(&(bpv__FP_Camera__pf))), TSwitchPair<bool , USceneComponent* >(true, *(USceneComponent**)(&(bpv__TP_Camera__pf))))))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = TSwitchValue<bool , USceneComponent* >(bpfv__Temp_bool_Variable2__pf, bpfv__K2Node_Select2_Default__pf, 2, TSwitchPair<bool , USceneComponent* >(false, *(USceneComponent**)(&(bpv__FP_Camera__pf))), TSwitchPair<bool , USceneComponent* >(true, *(USceneComponent**)(&(bpv__TP_Camera__pf))))->USceneComponent::K2_GetComponentToWorld();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				bpfv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpfv__CallFunc_BreakTransform_Rotation__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_BreakTransform_Location__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpfv__CallFunc_LineTraceSingle_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle(this, bpfv__CallFunc_BreakTransform_Location__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery1, false, bpfv__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ bpfv__CallFunc_LineTraceSingle_OutHit__pf, true, FLinearColor(0.000000,0.000000,0.000000,1.000000), FLinearColor(0.225000,0.225000,0.225000,1.000000), 1.000000);
			}
		case 3:
			{
				if (!bpfv__CallFunc_LineTraceSingle_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				bpfv__Temp_name_Variable2__pf = FName(TEXT("Usable"));
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				TArray<FName>  __Local__43 = TArray<FName> {};
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(((IsValid(bpfv__CallFunc_BreakHitResult_HitComponent__pf)) ? (bpfv__CallFunc_BreakHitResult_HitComponent__pf->ComponentTags) : (__Local__43)), bpfv__Temp_name_Variable2__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_name_Variable__pf = FName(TEXT("Vehicle"));
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				TArray<FName>  __Local__44 = TArray<FName> {};
				bpfv__CallFunc_Array_Contains_ReturnValue2__pf = FCustomThunkTemplates::Array_Contains(((IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf)) ? (bpfv__CallFunc_BreakHitResult_HitActor__pf->Tags) : (__Local__44)), bpfv__Temp_name_Variable__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue2__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 6:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpf__Server_DrivexVehicle__pfT(bpfv__CallFunc_BreakHitResult_HitActor__pf);
			}
		case 7:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				TArray<FName>  __Local__45 = TArray<FName> {};
				bpfv__CallFunc_Conv_NameToString_ReturnValue2__pf = UKismetStringLibrary::Conv_NameToString(((IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf)) ? (bpfv__CallFunc_BreakHitResult_HitActor__pf->Tags) : (__Local__45))[1]);
				bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Driving ")), bpfv__CallFunc_Conv_NameToString_ReturnValue2__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue2__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf);
				bpf__Popxup__pfG(3.000000, bpfv__CallFunc_Conv_StringToText_ReturnValue2__pf);
			}
		case 8:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf = Cast<ABP_Master_Vehicle_C__pf3373537038>(bpfv__CallFunc_BreakHitResult_HitActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf))
				{
					bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__IsxThirdPersonxView__pfTT = bpv__IsxThirdPerson__pfT;
				}
			}
		case 10:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf) && IsValid(bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__TP_Camera__pf))
				{
					bool  __Local__46 = false;
					bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__TP_Camera__pf->SetActive(((IsValid(bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf)) ? (bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__IsxThirdPersonxView__pfTT) : (__Local__46)), false);
				}
			}
		case 11:
			{
				bool  __Local__47 = false;
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(((IsValid(bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf)) ? (bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__IsxThirdPersonxView__pfTT) : (__Local__47)));
				if(IsValid(bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf) && IsValid(bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__FP_Camera__pf))
				{
					bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__FP_Camera__pf->SetActive(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				TArray<FName>  __Local__48 = TArray<FName> {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf)) ? (bpfv__CallFunc_BreakHitResult_HitActor__pf->Tags) : (__Local__48)));
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 0);
				if (!bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 13:
			{
				bpfv__CallFunc_MakeLiteralText_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("None"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9D8FC2614A300497868DAA91A4A429D8") /* Key */
	));
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				TArray<FName>  __Local__49 = TArray<FName> {};
				bpfv__CallFunc_Conv_NameToText_ReturnValue__pf = UKismetTextLibrary::Conv_NameToText(((IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf)) ? (bpfv__CallFunc_BreakHitResult_HitActor__pf->Tags) : (__Local__49))[1]);
				bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf = UKismetTextLibrary::EqualEqual_TextText(bpfv__CallFunc_MakeLiteralText_ReturnValue__pf, bpfv__CallFunc_Conv_NameToText_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_TextText_ReturnValue__pf)
				{
					__CurrentState = 14;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 14:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				TArray<FName>  __Local__50 = TArray<FName> {};
				bpfv__CallFunc_Conv_NameToText_ReturnValue__pf = UKismetTextLibrary::Conv_NameToText(((IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf)) ? (bpfv__CallFunc_BreakHitResult_HitActor__pf->Tags) : (__Local__50))[1]);
				bpf__Popxup__pfG(3.000000, bpfv__CallFunc_Conv_NameToText_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		case 15:
			{
				bpfv__Temp_name_Variable3__pf = FName(TEXT("Pawn"));
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				TArray<FName>  __Local__51 = TArray<FName> {};
				bpfv__CallFunc_Array_Contains_ReturnValue4__pf = FCustomThunkTemplates::Array_Contains(((IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf)) ? (bpfv__CallFunc_BreakHitResult_HitActor__pf->Tags) : (__Local__51)), bpfv__Temp_name_Variable3__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue4__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 16:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpf__Server_PossessxPassenger__pfT(bpfv__CallFunc_BreakHitResult_HitActor__pf);
			}
		case 17:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				TArray<FName>  __Local__52 = TArray<FName> {};
				bpfv__CallFunc_Conv_NameToString_ReturnValue__pf = UKismetStringLibrary::Conv_NameToString(((IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf)) ? (bpfv__CallFunc_BreakHitResult_HitActor__pf->Tags) : (__Local__52))[1]);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Sitting in ")), bpfv__CallFunc_Conv_NameToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
				bpf__Popxup__pfG(3.000000, bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				bpfv__Temp_name_Variable4__pf = FName(TEXT("Character"));
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				TArray<FName>  __Local__53 = TArray<FName> {};
				bpfv__CallFunc_Array_Contains_ReturnValue3__pf = FCustomThunkTemplates::Array_Contains(((IsValid(bpfv__CallFunc_BreakHitResult_HitActor__pf)) ? (bpfv__CallFunc_BreakHitResult_HitActor__pf->Tags) : (__Local__53)), bpfv__Temp_name_Variable4__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue3__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 19:
			{
				bpf__Popxup__pfG(3.000000, FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Character interaction not yet implemented"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("B04C96944BE71AD673B35887A0822FE1") /* Key */
	));
				__CurrentState = -1;
				break;
			}
		case 20:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__K2Node_DynamicCast_AsInteractable_Master__pf = Cast<AInteractable_Master_C__pf1010915279>(bpfv__CallFunc_BreakHitResult_HitActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess2__pf = (bpfv__K2Node_DynamicCast_AsInteractable_Master__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 21:
			{
				UGameplayStatics::BreakHitResult(bpfv__CallFunc_LineTraceSingle_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
				if(IsValid(bpfv__K2Node_DynamicCast_AsInteractable_Master__pf))
				{
					bpfv__K2Node_DynamicCast_AsInteractable_Master__pf->bpf__Use__pf(bpfv__CallFunc_BreakHitResult_HitComponent__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__UnxRagdoll__pfT()
{
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsxRagdollxStable__pfTT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpv__FP_SpringArm__pf))
				{
					bpv__FP_SpringArm__pf->bDoCollisionTest = true;
				}
			}
		case 3:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__SkeletalMesh__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FVector(0.000000,0.000000,92.000000));
				bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = AActor::K2_SetActorLocation(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf, false);
			}
		case 4:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetSimulatePhysics(false);
				}
			}
		case 5:
			{
				if(IsValid(bpv__Capsule__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Capsule__pf->USceneComponent::K2_GetComponentRotation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_BreakRotator_Pitch__pf, -1.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_BreakRotator_Roll__pf, -1.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, -90.000000);
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USceneComponent::K2_SetRelativeLocationAndRotation(FVector(0.000000,0.000000,-90.000000), bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf, false);
				}
			}
		case 6:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
			}
		case 7:
			{
				if(IsValid(bpv__Capsule__pf))
				{
					bpv__Capsule__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
			}
		case 8:
			{
				if(IsValid(bpv__Capsule__pf))
				{
					bpv__Capsule__pf->SetSimulatePhysics(true);
				}
			}
		case 9:
			{
				AActor::FlushNetDormancy();
			}
		case 10:
			{
				bpv__IsxRagdoll__pfT = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Jump__pf()
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsxSwimming__pfT);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__IsxonxGround__pfTT, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpv__Capsule__pf))
				{
					bpv__Capsule__pf->UPrimitiveComponent::SetPhysicsLinearVelocity(FVector(0.000000,0.000000,600.000000), true, FName(TEXT("None")));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Move__pf(float bpp__AxisxValue__pfT, FVector bpp__DirectionxVector__pfT)
{
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__IsxonxGround__pfTT, bpv__IsxSwimming__pfT);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(700.000000, 1500.000000, bpv__IsxSwimming__pfT);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpp__AxisxValue__pfT, bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpp__DirectionxVector__pfT, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				if(IsValid(bpv__Capsule__pf))
				{
					bpv__Capsule__pf->AddForce(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, FName(TEXT("None")), true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__OnRep_IsxonxGround__pfTT()
{
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(1.500000, 0.100000, bpv__IsxonxGround__pfTT);
	if(IsValid(bpv__Capsule__pf))
	{
		bpv__Capsule__pf->SetLinearDamping(bpfv__CallFunc_SelectFloat_ReturnValue__pf);
	}
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__IsxonxGroundx__pfTTzy()
{
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<TEnumAsByte<EObjectTypeQuery> > bpfv__K2Node_MakeArray_Array__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	TArray<AActor*> bpfv__K2Node_MakeArray_Array2__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	TArray<UPrimitiveComponent*> bpfv__CallFunc_SphereOverlapComponents_OutComponents__pf{};
	bool bpfv__CallFunc_SphereOverlapComponents_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	UPrimitiveComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	TEnumAsByte<ECollisionResponse> bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_MakeArray_Array__pf.SetNum(5, true);
				bpfv__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery1;
				bpfv__K2Node_MakeArray_Array__pf[1] = EObjectTypeQuery::ObjectTypeQuery2;
				bpfv__K2Node_MakeArray_Array__pf[2] = EObjectTypeQuery::ObjectTypeQuery3;
				bpfv__K2Node_MakeArray_Array__pf[3] = EObjectTypeQuery::ObjectTypeQuery4;
				bpfv__K2Node_MakeArray_Array__pf[4] = EObjectTypeQuery::ObjectTypeQuery5;
				if(IsValid(bpv__Capsule__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Capsule__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__K2Node_MakeArray_Array2__pf.SetNum(1, true);
				bpfv__K2Node_MakeArray_Array2__pf[0] = this;
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FVector(0.000000,0.000000,-60.000000));
				(bpfv__CallFunc_SphereOverlapComponents_OutComponents__pf).Reset();
				bpfv__CallFunc_SphereOverlapComponents_ReturnValue__pf = UKismetSystemLibrary::SphereOverlapComponents(this, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, 38.000000, bpfv__K2Node_MakeArray_Array__pf, ((UClass*)nullptr), bpfv__K2Node_MakeArray_Array2__pf, /*out*/ bpfv__CallFunc_SphereOverlapComponents_OutComponents__pf);
			}
		case 2:
			{
				if (!bpfv__CallFunc_SphereOverlapComponents_ReturnValue__pf)
				{
					__CurrentState = 14;
					break;
				}
			}
		case 3:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 4:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 6:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable__pf);
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_SphereOverlapComponents_OutComponents__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 8:
			{
				__StateStack.Push(17);
			}
		case 9:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_SphereOverlapComponents_OutComponents__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->GetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn);
				}
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpfv__CallFunc_GetCollisionResponseToChannel_ReturnValue__pf), static_cast<uint8>(ECollisionResponse::ECR_Block));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 10:
			{
				AActor::FlushNetDormancy();
			}
		case 11:
			{
				bpv__IsxonxGround__pfTT = true;
			}
		case 12:
			{
				bpf__OnRep_IsxonxGround__pfTT();
			}
		case 13:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				AActor::FlushNetDormancy();
			}
		case 15:
			{
				bpv__IsxonxGround__pfTT = false;
			}
		case 16:
			{
				bpf__OnRep_IsxonxGround__pfTT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 6;
				break;
			}
		case 18:
			{
				AActor::FlushNetDormancy();
			}
		case 19:
			{
				bpv__IsxonxGround__pfTT = false;
			}
		case 20:
			{
				bpf__OnRep_IsxonxGround__pfTT();
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__OnRep_Health__pf()
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	TArray<UMaterialInterface*> bpfv__CallFunc_GetMaterials_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	UMaterialInterface* bpfv__CallFunc_Array_Get_Item__pf{};
	FLinearColor bpfv__K2Node_MakeStruct_LinearColor__pf(EForceInit::ForceInit);
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsxAlive__pfT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__Health__pf, 0.000000);
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 3:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USkeletalMeshComponent::BreakConstraint(FVector(150.000000,0.000000,0.000000), FVector(0.000000,0.000000,0.000000), FName(TEXT("foot_r")));
				}
			}
		case 4:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USkeletalMeshComponent::BreakConstraint(FVector(150.000000,0.000000,0.000000), FVector(0.000000,0.000000,0.000000), FName(TEXT("lowerarm_r")));
				}
			}
		case 5:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USkeletalMeshComponent::BreakConstraint(FVector(150.000000,0.000000,0.000000), FVector(0.000000,0.000000,0.000000), FName(TEXT("lowerarm_l")));
				}
			}
		case 6:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USkeletalMeshComponent::BreakConstraint(FVector(150.000000,0.000000,0.000000), FVector(0.000000,0.000000,0.000000), FName(TEXT("thigh_r")));
				}
			}
		case 7:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USkeletalMeshComponent::BreakConstraint(FVector(150.000000,0.000000,0.000000), FVector(0.000000,0.000000,0.000000), FName(TEXT("thigh_l")));
				}
			}
		case 8:
			{
				AActor::FlushNetDormancy();
			}
		case 9:
			{
				bpv__IsxAlive__pfT = false;
			}
		case 10:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				DisableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
			}
		case 11:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpfv__CallFunc_GetMaterials_ReturnValue__pf = bpv__SkeletalMesh__pf->GetMaterials();
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetMaterials_ReturnValue__pf, 0, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__SkeletalMesh__pf->CreateDynamicMaterialInstance(0, bpfv__CallFunc_Array_Get_Item__pf);
				}
			}
		case 12:
			{
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpv__Health__pf, 0.000000, 100.000000, 0.000000, 1.000000);
				bpfv__K2Node_MakeStruct_LinearColor__pf.R = 0.700000;
				bpfv__K2Node_MakeStruct_LinearColor__pf.G = bpfv__CallFunc_MapRangeClamped_ReturnValue__pf;
				bpfv__K2Node_MakeStruct_LinearColor__pf.B = bpfv__CallFunc_MapRangeClamped_ReturnValue__pf;
				bpfv__K2Node_MakeStruct_LinearColor__pf.A = 1.000000;
				if(IsValid(bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf))
				{
					bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Color")), bpfv__K2Node_MakeStruct_LinearColor__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Popxup__pfG(float bpp__Duration__pf, const FText& bpp__Text__pf__const)
{
	typedef FText  T__Local__54;
	T__Local__54& bpp__Text__pf = *const_cast<T__Local__54 *>(&bpp__Text__pf__const);
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	TArray<UPopxup_C__pfG1863595755*> bpfv__CallFunc_GetAllWidgetsOfClass_FoundWidgets__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UPopxup_C__pfG1863595755* bpfv__CallFunc_Array_Get_Item__pf{};
	UPopxup_C__pfG1863595755* bpfv__CallFunc_Create_ReturnValue__pf{};
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
				(bpfv__CallFunc_GetAllWidgetsOfClass_FoundWidgets__pf).Reset();
				UWidgetBlueprintLibrary::GetAllWidgetsOfClass(this, /*out*/ TArrayCaster< UPopxup_C__pfG1863595755* >(bpfv__CallFunc_GetAllWidgetsOfClass_FoundWidgets__pf).Get< UUserWidget* >(), UPopxup_C__pfG1863595755::StaticClass(), true);
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
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllWidgetsOfClass_FoundWidgets__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(12);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllWidgetsOfClass_FoundWidgets__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->RemoveFromParent();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UPopxup_C__pfG1863595755>(UWidgetBlueprintLibrary::Create(this, UPopxup_C__pfG1863595755::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 9:
			{
				UKismetSystemLibrary::SetFloatPropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("Duration")), bpp__Duration__pf);
			}
		case 10:
			{
				UKismetSystemLibrary::SetTextPropertyByName(bpfv__CallFunc_Create_ReturnValue__pf, FName(TEXT("Text")), bpp__Text__pf);
			}
		case 11:
			{
				if(IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
				{
					bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
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
void ABP_Physic_Pawn_C__pf4061722237::bpf__SwitchxViewxMode__pfTT()
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
				if (!bpv__IsxRagdoll__pfT)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(bpv__IsxThirdPerson__pfT);
				bpv__IsxThirdPerson__pfT = bpfv__CallFunc_Not_PreBool_ReturnValue2__pf;
			}
		case 3:
			{
				if(IsValid(bpv__TP_Camera__pf))
				{
					bpv__TP_Camera__pf->SetActive(bpv__IsxThirdPerson__pfT, false);
				}
			}
		case 4:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsxThirdPerson__pfT);
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
void ABP_Physic_Pawn_C__pf4061722237::bpf__OnRep_IsxSwimming__pfT()
{
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue2__pf{};
	bpfv__CallFunc_SelectFloat_ReturnValue2__pf = UKismetMathLibrary::SelectFloat(1.000000, 1.500000, bpv__IsxSwimming__pfT);
	if(IsValid(bpv__Capsule__pf))
	{
		bpv__Capsule__pf->SetLinearDamping(bpfv__CallFunc_SelectFloat_ReturnValue2__pf);
	}
	bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(15.000000, 10.000000, bpv__IsxSwimming__pfT);
	if(IsValid(bpv__Capsule__pf))
	{
		bpv__Capsule__pf->SetAngularDamping(bpfv__CallFunc_SelectFloat_ReturnValue__pf);
	}
}
void ABP_Physic_Pawn_C__pf4061722237::bpf__Floatxinxwater__pfTT()
{
	FVector bpfv__CallFunc_GetComponentBounds_Origin__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetComponentBounds_BoxExtent__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetComponentBounds_SphereRadius__pf{};
	FVector bpfv__CallFunc_GetComponentBounds_Origin2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetComponentBounds_BoxExtent2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetComponentBounds_SphereRadius2__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakVector_X2__pf{};
	float bpfv__CallFunc_BreakVector_Y2__pf{};
	float bpfv__CallFunc_BreakVector_Z2__pf{};
	float bpfv__CallFunc_BreakVector_X3__pf{};
	float bpfv__CallFunc_BreakVector_Y3__pf{};
	float bpfv__CallFunc_BreakVector_Z3__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X4__pf{};
	float bpfv__CallFunc_BreakVector_Y4__pf{};
	float bpfv__CallFunc_BreakVector_Z4__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X5__pf{};
	float bpfv__CallFunc_BreakVector_Y5__pf{};
	float bpfv__CallFunc_BreakVector_Z5__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue3__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsxSwimming__pfT)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				UKismetSystemLibrary::GetComponentBounds(bpv__WaterxVolume__pfT, /*out*/ bpfv__CallFunc_GetComponentBounds_Origin__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_BoxExtent__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_SphereRadius__pf);
				UKismetSystemLibrary::GetComponentBounds(bpv__SwimxCapsule__pfT, /*out*/ bpfv__CallFunc_GetComponentBounds_Origin2__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_BoxExtent2__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_SphereRadius2__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_BoxExtent__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_BoxExtent2__pf, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_Origin2__pf, /*out*/ bpfv__CallFunc_BreakVector_X3__pf, /*out*/ bpfv__CallFunc_BreakVector_Y3__pf, /*out*/ bpfv__CallFunc_BreakVector_Z3__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakVector_Z2__pf, 2.200000);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_Origin__pf, /*out*/ bpfv__CallFunc_BreakVector_X4__pf, /*out*/ bpfv__CallFunc_BreakVector_Y4__pf, /*out*/ bpfv__CallFunc_BreakVector_Z4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z3__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z4__pf, bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 4;
					break;
				}
			}
		case 3:
			{
				if(IsValid(bpv__Capsule__pf))
				{
					bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf = bpv__Capsule__pf->GetComponentVelocity();
				}
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentVelocity_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X5__pf, /*out*/ bpfv__CallFunc_BreakVector_Y5__pf, /*out*/ bpfv__CallFunc_BreakVector_Z5__pf);
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X5__pf, bpfv__CallFunc_BreakVector_Y5__pf, 0.000000);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_MakeVector_ReturnValue2__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 120.000000);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(970.000000, 1100.000000, bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf);
				bpfv__CallFunc_MakeVector_ReturnValue3__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				if(IsValid(bpv__Capsule__pf))
				{
					bpv__Capsule__pf->AddForce(bpfv__CallFunc_MakeVector_ReturnValue3__pf, FName(TEXT("None")), true);
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				UKismetSystemLibrary::GetComponentBounds(bpv__WaterxVolume__pfT, /*out*/ bpfv__CallFunc_GetComponentBounds_Origin__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_BoxExtent__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_SphereRadius__pf);
				UKismetSystemLibrary::GetComponentBounds(bpv__SwimxCapsule__pfT, /*out*/ bpfv__CallFunc_GetComponentBounds_Origin2__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_BoxExtent2__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_SphereRadius2__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_BoxExtent__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_BoxExtent2__pf, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_Origin2__pf, /*out*/ bpfv__CallFunc_BreakVector_X3__pf, /*out*/ bpfv__CallFunc_BreakVector_Y3__pf, /*out*/ bpfv__CallFunc_BreakVector_Z3__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakVector_Z2__pf, 2.200000);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_Origin__pf, /*out*/ bpfv__CallFunc_BreakVector_X4__pf, /*out*/ bpfv__CallFunc_BreakVector_Y4__pf, /*out*/ bpfv__CallFunc_BreakVector_Z4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z3__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z4__pf, bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 700.000000);
				if(IsValid(bpv__Capsule__pf))
				{
					bpv__Capsule__pf->AddForce(bpfv__CallFunc_MakeVector_ReturnValue__pf, FName(TEXT("None")), true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Physic_Pawn_C__pf4061722237::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicalMaterial /Game/Player/PM_PlayerCapsule.PM_PlayerCapsule 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Player/Animations/ThirdPersonIdle.ThirdPersonIdle 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Player/Mesh/SK_Mannequin.SK_Mannequin 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicsAsset /Game/Player/Mesh/SK_Mannequin_PhysicsAsset.SK_Mannequin_PhysicsAsset 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/Player/Sounds/0477.0477 
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
void ABP_Physic_Pawn_C__pf4061722237::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CapsuleComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavArea_Obstacle 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpringArmComponent 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.AudioComponent 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{31, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysXVehicles.WheeledVehicle 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PhysicalMaterial 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ECollisionResponse 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInterface 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Player/Animations/ThirdPerson_AnimBP.ThirdPerson_AnimBP_C 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/BP_Controller.BP_Controller_C 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Vehicles/00_Master_Vehicle/BP_Master_Vehicle.BP_Master_Vehicle_C 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Interactable_Master.Interactable_Master_C 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/Pop-up.Pop-up_C 
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
struct FRegisterHelper__ABP_Physic_Pawn_C__pf4061722237
{
	FRegisterHelper__ABP_Physic_Pawn_C__pf4061722237()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Player/BP_Physic_Pawn"), &ABP_Physic_Pawn_C__pf4061722237::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Physic_Pawn_C__pf4061722237 Instance;
};
FRegisterHelper__ABP_Physic_Pawn_C__pf4061722237 FRegisterHelper__ABP_Physic_Pawn_C__pf4061722237::Instance;
void ABP_Physic_Pawn_C__pf4061722237::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(ABP_Physic_Pawn_C__pf4061722237, bpv__IsxAlive__pfT, FName(TEXT("Is Alive")));
	DOREPLIFETIME_DIFFNAMES(ABP_Physic_Pawn_C__pf4061722237, bpv__IsxonxGround__pfTT, FName(TEXT("Is on Ground")));
	DOREPLIFETIME_DIFFNAMES(ABP_Physic_Pawn_C__pf4061722237, bpv__IsxRagdoll__pfT, FName(TEXT("Is Ragdoll")));
	DOREPLIFETIME_DIFFNAMES(ABP_Physic_Pawn_C__pf4061722237, bpv__IsxRagdollxStable__pfTT, FName(TEXT("Is Ragdoll Stable")));
	DOREPLIFETIME_DIFFNAMES(ABP_Physic_Pawn_C__pf4061722237, bpv__Health__pf, FName(TEXT("Health")));
	DOREPLIFETIME_DIFFNAMES(ABP_Physic_Pawn_C__pf4061722237, bpv__CameraxRot__pfT, FName(TEXT("Camera Rot")));
	DOREPLIFETIME_DIFFNAMES(ABP_Physic_Pawn_C__pf4061722237, bpv__IsxSwimming__pfT, FName(TEXT("Is Swimming")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
