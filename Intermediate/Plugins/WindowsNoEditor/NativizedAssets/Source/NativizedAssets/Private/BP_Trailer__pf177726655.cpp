#include "NativizedAssets.h"
#include "BP_Trailer__pf177726655.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
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
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
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
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/ClothingSystemRuntime/Public/ClothingSimulationFactory.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "BP_Master_Vehicle__pf3373537038.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Vehicle_Debug__pf1863595755.h"
#include "Wheel_Structure__pf863842189.h"
#include "Gear_Structure__pf863842189.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "BP_Water_Volume__pf3286898353.h"
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
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "BP_Physic_Pawn__pf4061722237.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Vehicle_Save__pf1010915279.h"
#include "Popxup__pfG1863595755.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ABP_Trailer_C__pf177726655::ABP_Trailer_C__pf177726655(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_Trailer_C__pf177726655::StaticClass() == GetClass()))
	{
		ABP_Trailer_C__pf177726655::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Mesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	bpv__Box__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	bpv__PhysicsConstraint__pf = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint"));
	bpv__Cargo__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Cargo"));
	bpv__PhysicsConstraint1__pf = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint1"));
	static TWeakObjectPtr<UProperty> __Local__1{};
	const UProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bReplicates")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__DefaultSceneRoot__pf), true, 0));
	bpv__Mesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Mesh__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Mesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Vehicle")));
	bpv__Mesh__pf->BodyInstance.bSimulatePhysics = true;
	bpv__Mesh__pf->BodyInstance.PositionSolverIterationCount = 80;
	bpv__Mesh__pf->BodyInstance.VelocitySolverIterationCount = 11;
	bpv__Mesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__Mesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_Trailer_C__pf177726655::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__Mesh__pf->ComponentTags = TArray<FName> ();
	bpv__Mesh__pf->ComponentTags.Reserve(1);
	bpv__Mesh__pf->ComponentTags.Add(FName(TEXT("Usable")));
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Mesh__pf), true, 0));
	if(!bpv__Mesh__pf->IsTemplate())
	{
		bpv__Mesh__pf->BodyInstance.FixupData(bpv__Mesh__pf);
	}
	bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Box__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("Attach Socket"));
	bpv__Box__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__2 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Box__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__3 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__2), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__3 = TArray<FResponseChannel> ();
	__Local__3.AddUninitialized(7);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__3.GetData(), 7);
	auto& __Local__4 = __Local__3[0];
	__Local__4.Channel = FName(TEXT("WorldStatic"));
	__Local__4.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__5 = __Local__3[1];
	__Local__5.Channel = FName(TEXT("WorldDynamic"));
	__Local__5.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__6 = __Local__3[2];
	__Local__6.Channel = FName(TEXT("Pawn"));
	__Local__6.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__7 = __Local__3[3];
	__Local__7.Channel = FName(TEXT("Camera"));
	__Local__7.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__8 = __Local__3[4];
	__Local__8.Channel = FName(TEXT("PhysicsBody"));
	__Local__8.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__9 = __Local__3[5];
	__Local__9.Channel = FName(TEXT("Vehicle"));
	__Local__9.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__10 = __Local__3[6];
	__Local__10.Channel = FName(TEXT("Destructible"));
	__Local__10.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__11 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__Box__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__11 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__12 = (*(AccessPrivateProperty<FVector >((bpv__Box__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__12 = FVector(60.000000, 60.000000, 60.000000);
	bpv__Box__pf->ComponentTags = TArray<FName> ();
	bpv__Box__pf->ComponentTags.Reserve(1);
	bpv__Box__pf->ComponentTags.Add(FName(TEXT("Usable")));
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Box__pf), true, 0));
	if(!bpv__Box__pf->IsTemplate())
	{
		bpv__Box__pf->BodyInstance.FixupData(bpv__Box__pf);
	}
	bpv__PhysicsConstraint__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PhysicsConstraint__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PhysicsConstraint__pf->ComponentName1.ComponentName = FName(TEXT("Mesh"));
	bpv__PhysicsConstraint__pf->ComponentName2.ComponentName = FName(TEXT("Mesh"));
	bpv__PhysicsConstraint__pf->ConstraintInstance.ProfileInstance.ProjectionLinearTolerance = 0.100000f;
	bpv__PhysicsConstraint__pf->ConstraintInstance.ProfileInstance.ProjectionAngularTolerance = 1.000000f;
	bpv__PhysicsConstraint__pf->ConstraintInstance.ProfileInstance.ConeLimit.Swing1Motion = EAngularConstraintMotion::ACM_Limited;
	bpv__PhysicsConstraint__pf->ConstraintInstance.ProfileInstance.ConeLimit.Swing2Motion = EAngularConstraintMotion::ACM_Limited;
	bpv__PhysicsConstraint__pf->ConstraintInstance.ProfileInstance.TwistLimit.TwistMotion = EAngularConstraintMotion::ACM_Limited;
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__PhysicsConstraint__pf), true, 0));
	bpv__Cargo__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Cargo__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("Bed"));
	auto& __Local__13 = (*(AccessPrivateProperty<FVector >((bpv__Cargo__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__13 = FVector(200.000000, 100.000000, 75.000000);
	bpv__Cargo__pf->RelativeLocation = FVector(8.457153, -0.000061, 106.143616);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Cargo__pf), true, 0));
	if(!bpv__Cargo__pf->IsTemplate())
	{
		bpv__Cargo__pf->BodyInstance.FixupData(bpv__Cargo__pf);
	}
	bpv__PhysicsConstraint1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PhysicsConstraint1__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PhysicsConstraint1__pf->ComponentName1.ComponentName = FName(TEXT("Mesh"));
	bpv__PhysicsConstraint1__pf->ComponentName2.ComponentName = FName(TEXT("Mesh"));
	bpv__PhysicsConstraint1__pf->ConstraintInstance.ProfileInstance.ProjectionLinearTolerance = 0.100000f;
	bpv__PhysicsConstraint1__pf->ConstraintInstance.ProfileInstance.ProjectionAngularTolerance = 1.000000f;
	bpv__PhysicsConstraint1__pf->ConstraintInstance.ProfileInstance.ConeLimit.Swing1Motion = EAngularConstraintMotion::ACM_Locked;
	bpv__PhysicsConstraint1__pf->ConstraintInstance.ProfileInstance.ConeLimit.Swing2Motion = EAngularConstraintMotion::ACM_Locked;
	bpv__PhysicsConstraint1__pf->ConstraintInstance.ProfileInstance.TwistLimit.TwistMotion = EAngularConstraintMotion::ACM_Locked;
	bpv__PhysicsConstraint1__pf->RelativeLocation = FVector(-419.998871, -0.000061, 124.955620);
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__PhysicsConstraint1__pf), true, 0));
	bpv__IsxAttached__pfT = false;
	bpv__TargetxComponent__pfT = nullptr;
	bpv__IsxCargoxSecured__pfTT = false;
	bReplicates = true;
}
void ABP_Trailer_C__pf177726655::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Mesh__pf)
	{
		bpv__Mesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Box__pf)
	{
		bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PhysicsConstraint__pf)
	{
		bpv__PhysicsConstraint__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Cargo__pf)
	{
		bpv__Cargo__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PhysicsConstraint1__pf)
	{
		bpv__PhysicsConstraint1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_Trailer_C__pf177726655::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AInteractable_Master_C__pf1010915279::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Master_Vehicle_C__pf3373537038::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UPopxup_C__pfG1863595755::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__14 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__14);
}
void ABP_Trailer_C__pf177726655::bpf__ExecuteUbergraph_BP_Trailer__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	AActor* bpfv__CallFunc_GetOwner_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
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
				bpv__IsxAttached__pfT = true;
			}
		case 3:
			{
				bpf__Popxup__pfG(3.000000, FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Trailer Attached!"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("50A6247D4985EB5C479C2C8576D9EB7D") /* Key */
	));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				b1l__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 14:
			{
				b1l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 15:
			{
				b1l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 16:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b1l__Temp_bool_True_if_break_was_hit_Variable__pf);
				if(IsValid(bpv__Box__pf))
				{
					(b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf).Reset();
					bpv__Box__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf);
				}
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				b1l__Temp_int_Array_Index_Variable__pf = b1l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 18:
			{
				__StateStack.Push(22);
			}
		case 19:
			{
				if(IsValid(bpv__Box__pf))
				{
					(b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf).Reset();
					bpv__Box__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf);
				}
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				b1l__Temp_name_Variable__pf = FName(TEXT("Hitch"));
				TArray<FName>  __Local__15 = TArray<FName> {};
				bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(((IsValid(b1l__CallFunc_Array_Get_Item__pf)) ? (b1l__CallFunc_Array_Get_Item__pf->ComponentTags) : (__Local__15)), b1l__Temp_name_Variable__pf);
				if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 20:
			{
				__StateStack.Push(23);
			}
		case 21:
			{
				b1l__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b1l__Temp_int_Loop_Counter_Variable__pf, 1);
				b1l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 16;
				break;
			}
		case 23:
			{
				if(IsValid(bpv__Box__pf))
				{
					(b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf).Reset();
					bpv__Box__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf);
				}
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b1l__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = b1l__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentToWorld();
				}
				if(IsValid(bpv__Mesh__pf))
				{
					bpv__Mesh__pf->USceneComponent::K2_SetWorldTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, false, /*out*/ b1l__CallFunc_K2_SetWorldTransform_SweepHitResult__pf, false);
				}
			}
		case 24:
			{
				if(IsValid(bpv__Box__pf))
				{
					(b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf).Reset();
					bpv__Box__pf->UPrimitiveComponent::GetOverlappingComponents(/*out*/ b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf);
				}
				FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, b1l__Temp_int_Array_Index_Variable__pf, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b1l__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_GetOwner_ReturnValue__pf = b1l__CallFunc_Array_Get_Item__pf->UActorComponent::GetOwner();
				}
				b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf = Cast<ABP_Master_Vehicle_C__pf3373537038>(bpfv__CallFunc_GetOwner_ReturnValue__pf);
				b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf != nullptr);;
				if (!b1l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 25:
			{
				if(IsValid(bpv__PhysicsConstraint__pf))
				{
					USkeletalMeshComponent*  __Local__16 = ((USkeletalMeshComponent*)nullptr);
					bpv__PhysicsConstraint__pf->UPhysicsConstraintComponent::SetConstrainedComponents(bpv__Mesh__pf, FName(TEXT("None")), ((IsValid(b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf)) ? (b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__Mesh__pf) : (__Local__16)), FName(TEXT("None")));
				}
				__CurrentState = 1;
				break;
			}
		case 37:
			{
				__CurrentState = 13;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Trailer_C__pf177726655::bpf__ExecuteUbergraph_BP_Trailer__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 38);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Cargo__pf))
	{
		(b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
		bpv__Cargo__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, ABP_Master_Vehicle_C__pf3373537038::StaticClass());
	}
	FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, 0, /*out*/ b1l__CallFunc_Array_Get_Item2__pf);
	b1l__K2Node_DynamicCast_AsBP_Master_Vehicle2__pf = Cast<ABP_Master_Vehicle_C__pf3373537038>(b1l__CallFunc_Array_Get_Item2__pf);
	b1l__K2Node_DynamicCast_bSuccess2__pf = (b1l__K2Node_DynamicCast_AsBP_Master_Vehicle2__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(IsValid(bpv__PhysicsConstraint1__pf))
	{
		USkeletalMeshComponent*  __Local__17 = ((USkeletalMeshComponent*)nullptr);
		bpv__PhysicsConstraint1__pf->UPhysicsConstraintComponent::SetConstrainedComponents(((IsValid(b1l__K2Node_DynamicCast_AsBP_Master_Vehicle2__pf)) ? (b1l__K2Node_DynamicCast_AsBP_Master_Vehicle2__pf->bpv__Mesh__pf) : (__Local__17)), FName(TEXT("None")), bpv__Mesh__pf, FName(TEXT("None")));
	}
	bpf__Popxup__pfG(3.000000, FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Cargo secured!"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("63E38312471633B65355E6B411AD9146") /* Key */
	));
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__IsxCargoxSecured__pfTT = true;
	return; //KCST_EndOfThread
}
void ABP_Trailer_C__pf177726655::bpf__ExecuteUbergraph_BP_Trailer__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 42);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__PhysicsConstraint1__pf))
	{
		bpv__PhysicsConstraint1__pf->UPhysicsConstraintComponent::BreakConstraint();
	}
	bpf__Popxup__pfG(3.000000, FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Cargo released"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4D7324474643B5A257A42DA8FA3474E6") /* Key */
	));
	AActor::FlushNetDormancy();
	bpv__IsxCargoxSecured__pfTT = false;
	return; //KCST_EndOfThread
}
void ABP_Trailer_C__pf177726655::bpf__ExecuteUbergraph_BP_Trailer__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
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
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b1l__K2Node_Event_Component__pf, bpv__Box__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 28:
			{
				if (!bpv__IsxAttached__pfT)
				{
					__CurrentState = 30;
					break;
				}
			}
		case 29:
			{
				bpf__Detach__pf();
				__CurrentState = -1;
				break;
			}
		case 30:
			{
				bpf__Attach__pf();
				__CurrentState = -1;
				break;
			}
		case 31:
			{
				if (!bpv__IsxCargoxSecured__pfTT)
				{
					__CurrentState = 33;
					break;
				}
			}
		case 32:
			{
				bpf__ReleasexCargo__pfT();
				__CurrentState = -1;
				break;
			}
		case 33:
			{
				bpf__Secure_Cargo__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Trailer_C__pf177726655::bpf__ExecuteUbergraph_BP_Trailer__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 36);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__PhysicsConstraint__pf))
	{
		bpv__PhysicsConstraint__pf->UPhysicsConstraintComponent::BreakConstraint();
	}
	if(IsValid(bpv__Mesh__pf))
	{
		bpv__Mesh__pf->AddImpulseAtLocation(FVector(0.000000,0.000000,0.000000), FVector(0.000000,0.000000,0.000000), FName(TEXT("None")));
	}
	// optimized KCST_UnconditionalGoto
	AActor::FlushNetDormancy();
	bpv__IsxAttached__pfT = false;
	bpf__Popxup__pfG(3.000000, FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Trailer detached!"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5FB5DEC245CF40A3E3F00FBEAFD25DEF") /* Key */
	));
	return; //KCST_EndOfThread
}
void ABP_Trailer_C__pf177726655::bpf__ReleasexCargo__pfT()
{
	bpf__ExecuteUbergraph_BP_Trailer__pf_2(42);
}
void ABP_Trailer_C__pf177726655::bpf__Secure_Cargo__pf()
{
	bpf__ExecuteUbergraph_BP_Trailer__pf_1(38);
}
void ABP_Trailer_C__pf177726655::bpf__Attach__pf()
{
	bpf__ExecuteUbergraph_BP_Trailer__pf_0(37);
}
void ABP_Trailer_C__pf177726655::bpf__Detach__pf()
{
	bpf__ExecuteUbergraph_BP_Trailer__pf_4(36);
}
void ABP_Trailer_C__pf177726655::bpf__Use__pf(UActorComponent* bpp__Component__pf)
{
	b1l__K2Node_Event_Component__pf = bpp__Component__pf;
	bpf__ExecuteUbergraph_BP_Trailer__pf_3(26);
}
void ABP_Trailer_C__pf177726655::bpf__UserConstructionScript__pf()
{
}
void ABP_Trailer_C__pf177726655::bpf__Popxup__pfG(float bpp__Duration__pf, const FText& bpp__Text__pf__const)
{
	typedef FText  T__Local__18;
	T__Local__18& bpp__Text__pf = *const_cast<T__Local__18 *>(&bpp__Text__pf__const);
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
void ABP_Trailer_C__pf177726655::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Vehicles/Trailer/Trailer.Trailer 
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
void ABP_Trailer_C__pf177726655::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{45, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Interactable_Master.Interactable_Master_C 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavArea_Obstacle 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PhysicsConstraintComponent 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{31, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Vehicles/00_Master_Vehicle/BP_Master_Vehicle.BP_Master_Vehicle_C 
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
struct FRegisterHelper__ABP_Trailer_C__pf177726655
{
	FRegisterHelper__ABP_Trailer_C__pf177726655()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Vehicles/Trailer/BP_Trailer"), &ABP_Trailer_C__pf177726655::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Trailer_C__pf177726655 Instance;
};
FRegisterHelper__ABP_Trailer_C__pf177726655 FRegisterHelper__ABP_Trailer_C__pf177726655::Instance;
void ABP_Trailer_C__pf177726655::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(ABP_Trailer_C__pf177726655, bpv__IsxAttached__pfT, FName(TEXT("Is Attached")));
	DOREPLIFETIME_DIFFNAMES(ABP_Trailer_C__pf177726655, bpv__IsxCargoxSecured__pfTT, FName(TEXT("Is Cargo Secured")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
