#include "NativizedAssets.h"
#include "BP_AI_Race__pf1689870207.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
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
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
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
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
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
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "BP_Vehicle_Waypoint__pf1689870207.h"
#include "BP_Master_Vehicle__pf3373537038.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Wheel_Structure__pf863842189.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Vehicle_Debug__pf1863595755.h"
#include "Gear_Structure__pf863842189.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
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


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ABP_AI_Race_C__pf1689870207::ABP_AI_Race_C__pf1689870207(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_AI_Race_C__pf1689870207::StaticClass() == GetClass()))
	{
		ABP_AI_Race_C__pf1689870207::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<USceneComponent>(GetDefaultSubobjectByName(TEXT("TransformComponent0")));
	auto __Local__1 = CastChecked<UPathFollowingComponent>(GetDefaultSubobjectByName(TEXT("PathFollowingComponent")));
	auto __Local__2 = CastChecked<UPawnActionsComponent>(GetDefaultSubobjectByName(TEXT("ActionsComp")));
	bpv__Vehicle__pf = nullptr;
	bpv__WaypointxList__pfT = TArray<ABP_Vehicle_Waypoint_C__pf1689870207*> ();
	bpv__PreviousxWaypoint__pfT = nullptr;
	bpv__TargetxWaypoint__pfT = nullptr;
	bpv__WaypointxTargetxIndex__pfTT = 0;
	bpv__MaximumxSteering__pfT = 0.000000f;
	bpv__SteeringxAngle__pfT = 0.000000f;
	bpv__DesiredxSpeed__pfT = 90.000000f;
	bpv__IsxAccelerating__pfT = false;
	bpv__IsxBraking__pfT = false;
	bpv__IsxDrifting__pfT = false;
	auto& __Local__3 = (*(AccessPrivateProperty<UPathFollowingComponent* >((this), AAIController::__PPO__PathFollowingComponent() )));
	auto& __Local__4 = (*(AccessPrivateProperty<UPawnActionsComponent* >((this), AAIController::__PPO__ActionsComp() )));
	auto& __Local__5 = (*(AccessPrivateProperty<USceneComponent* >((this), AController::__PPO__TransformComponent() )));
}
void ABP_AI_Race_C__pf1689870207::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void ABP_AI_Race_C__pf1689870207::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Vehicle_Waypoint_C__pf1689870207::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Master_Vehicle_C__pf3373537038::StaticClass());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FWheel_Structure__pf863842189();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FWheel_Structure__pf863842189());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__6 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__6);
}
void ABP_AI_Race_C__pf1689870207::bpf__ExecuteUbergraph_BP_AI_Race__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	bpf__HandlexTargetxWaypoint__pfTT();
	bpf__HandlexSteeringxAngle__pfTT();
	bpf__DetectxDrifting__pfT();
	bpf__CalculatexDesiredxSpeed__pfTT();
	bpf__HandlexSpeed__pfT();
	bpf__PrintxDebugxVariables__pfTT();
	return; //KCST_EndOfThread
}
void ABP_AI_Race_C__pf1689870207::bpf__ExecuteUbergraph_BP_AI_Race__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(2, 209792885, TEXT("ExecuteUbergraph_BP_AI_Race_1"), this));
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				bpf__Begin__pf();
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				__CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_AI_Race_C__pf1689870207::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_AI_Race__pf_0(5);
}
void ABP_AI_Race_C__pf1689870207::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_AI_Race__pf_1(4);
}
void ABP_AI_Race_C__pf1689870207::bpf__UserConstructionScript__pf()
{
}
void ABP_AI_Race_C__pf1689870207::bpf__HandlexTargetxWaypoint__pfTT()
{
	bool bpfv__Temp_bool_Variable__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	ABP_Vehicle_Waypoint_C__pf1689870207* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	int32 bpfv__K2Node_Select_Default__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__TargetxWaypoint__pfT))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__TargetxWaypoint__pfT->AActor::K2_GetActorLocation();
				}
				if(IsValid(bpv__Vehicle__pf))
				{
					bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf = bpv__Vehicle__pf->AActor::K2_GetActorLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				float  __Local__8 = 0.000000;
				bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, ((IsValid(bpv__TargetxWaypoint__pfT)) ? (bpv__TargetxWaypoint__pfT->bpv__AcceptablexRadius__pfT) : (__Local__8)));
				if (!bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_int_Variable__pf = 0;
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__WaypointxTargetxIndex__pfTT, 1);
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpv__WaypointxList__pfT);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, bpv__WaypointxTargetxIndex__pfTT);
				bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf;
				bpv__WaypointxTargetxIndex__pfTT = TSwitchValue<bool , int32 >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , int32 >(false, bpfv__CallFunc_Add_IntInt_ReturnValue__pf), TSwitchPair<bool , int32 >(true, bpfv__Temp_int_Variable__pf));
			}
		case 3:
			{
				bpv__PreviousxWaypoint__pfT = bpv__TargetxWaypoint__pfT;
			}
		case 4:
			{
				FCustomThunkTemplates::Array_Get(bpv__WaypointxList__pfT, bpv__WaypointxTargetxIndex__pfTT, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpv__TargetxWaypoint__pfT = bpfv__CallFunc_Array_Get_Item__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_AI_Race_C__pf1689870207::bpf__Begin__pf()
{
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	bool bpfv__Temp_bool_True_if_break_was_hit_Variable__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable2__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	ABP_Vehicle_Waypoint_C__pf1689870207* bpfv__CallFunc_Array_Get_Item__pf{};
	FWheel_Structure__pf863842189 bpfv__CallFunc_Array_Get_Item2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable2__pf{};
	APawn* bpfv__CallFunc_K2_GetPawn_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	ABP_Master_Vehicle_C__pf3373537038* bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_Possess_Vehicle_Is_Controlled_by_Player__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	ABP_Vehicle_Waypoint_C__pf1689870207* bpfv__CallFunc_Array_Get_Item3__pf{};
	TArray<ABP_Vehicle_Waypoint_C__pf1689870207*> bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	ABP_Vehicle_Waypoint_C__pf1689870207* bpfv__CallFunc_Array_Get_Item4__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_K2_GetPawn_ReturnValue__pf = AController::K2_GetPawn();
				bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf = Cast<ABP_Master_Vehicle_C__pf3373537038>(bpfv__CallFunc_K2_GetPawn_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf))
				{
					bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpf__PossessxVehicle__pfT(this, /*out*/ bpfv__CallFunc_Possess_Vehicle_Is_Controlled_by_Player__pf);
				}
			}
		case 3:
			{
				bpv__Vehicle__pf = bpfv__K2Node_DynamicCast_AsBP_Master_Vehicle__pf;
			}
		case 4:
			{
				if(IsValid(bpv__Vehicle__pf) && IsValid(bpv__Vehicle__pf->bpv__Driver__pf))
				{
					bpv__Vehicle__pf->bpv__Driver__pf->USceneComponent::SetVisibility(true, true);
				}
			}
		case 5:
			{
				(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Reset();
				UGameplayStatics::GetAllActorsOfClass(this, ABP_Vehicle_Waypoint_C__pf1689870207::StaticClass(), /*out*/ TArrayCaster< ABP_Vehicle_Waypoint_C__pf1689870207* >(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf).Get< AActor* >());
			}
		case 6:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 7:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 8:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 9:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 10:
			{
				__StateStack.Push(22);
			}
		case 11:
			{
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetAllActorsOfClass_OutActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item4__pf);
				int32  __Local__9 = 0;
				FCustomThunkTemplates::Array_Set(bpv__WaypointxList__pfT, ((IsValid(bpfv__CallFunc_Array_Get_Item4__pf)) ? (bpfv__CallFunc_Array_Get_Item4__pf->bpv__Index__pf) : (__Local__9)), bpfv__CallFunc_Array_Get_Item4__pf, true);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				FCustomThunkTemplates::Array_Get(bpv__WaypointxList__pfT, 0, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				bpv__TargetxWaypoint__pfT = bpfv__CallFunc_Array_Get_Item3__pf;
			}
		case 13:
			{
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpv__WaypointxList__pfT);
				FCustomThunkTemplates::Array_Get(bpv__WaypointxList__pfT, bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpv__PreviousxWaypoint__pfT = bpfv__CallFunc_Array_Get_Item__pf;
			}
		case 14:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = false;
			}
		case 15:
			{
				bpfv__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 16:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 17:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__Temp_bool_True_if_break_was_hit_Variable__pf);
				TArray<FWheel_Structure__pf863842189>  __Local__10 = TArray<FWheel_Structure__pf863842189> {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__Wheels__pf) : (__Local__10)));
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = bpfv__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 19:
			{
				__StateStack.Push(21);
			}
		case 20:
			{
				TArray<FWheel_Structure__pf863842189>  __Local__11 = TArray<FWheel_Structure__pf863842189> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__Wheels__pf) : (__Local__11)), bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpfv__CallFunc_Array_Get_Item2__pf.bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, 0.000000);
				if (!bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 23;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 17;
				break;
			}
		case 22:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 8;
				break;
			}
		case 23:
			{
				__StateStack.Push(25);
			}
		case 24:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				TArray<FWheel_Structure__pf863842189>  __Local__12 = TArray<FWheel_Structure__pf863842189> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__Wheels__pf) : (__Local__12)), bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_Array_Get_Item2__pf.bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf);
				bpv__MaximumxSteering__pfT = bpfv__CallFunc_Abs_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_AI_Race_C__pf1689870207::bpf__PrintxDebugxVariables__pfTT()
{
	FString bpfv__CallFunc_SelectString_ReturnValue__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_SelectString_ReturnValue2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_SelectString_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf{};
	bpfv__CallFunc_SelectString_ReturnValue3__pf = UKismetMathLibrary::SelectString(FString(TEXT("Accelerating!")), FString(TEXT("")), bpv__IsxAccelerating__pfT);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_SelectString_ReturnValue3__pf, true, true, FLinearColor(0.690000,0.000000,0.000000,1.000000), 0.000000);
	bpfv__CallFunc_SelectString_ReturnValue2__pf = UKismetMathLibrary::SelectString(FString(TEXT("Braking!")), FString(TEXT("")), bpv__IsxBraking__pfT);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_SelectString_ReturnValue2__pf, true, true, FLinearColor(0.690000,0.000000,0.000000,1.000000), 0.000000);
	bpfv__CallFunc_SelectString_ReturnValue__pf = UKismetMathLibrary::SelectString(FString(TEXT("Drifting!")), FString(TEXT("")), bpv__IsxDrifting__pfT);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_SelectString_ReturnValue__pf, true, true, FLinearColor(0.690000,0.000000,0.000000,1.000000), 0.000000);
	bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf = UKismetStringLibrary::Conv_IntToString(bpv__WaypointxTargetxIndex__pfTT);
	bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Target Waypoint : ")), bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf, true, true, FLinearColor(0.006193,0.690000,0.000000,1.000000), 0.000000);
	bpfv__CallFunc_Round_ReturnValue2__pf = UKismetMathLibrary::Round(bpv__SteeringxAngle__pfT);
	bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Round_ReturnValue2__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Steering Angle : ")), bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf, true, true, FLinearColor(0.006193,0.690000,0.000000,1.000000), 0.000000);
	float  __Local__13 = 0.000000;
	bpfv__CallFunc_Round_ReturnValue__pf = UKismetMathLibrary::Round(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__Speed__pf) : (__Local__13)));
	bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Round_ReturnValue__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(FString(TEXT("Speed (km/h) : ")), bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
	UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, true, true, FLinearColor(0.006193,0.690000,0.000000,1.000000), 0.000000);
}
void ABP_AI_Race_C__pf1689870207::bpf__HandlexSteeringxAngle__pfTT()
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_GetTransform_ReturnValue__pf{};
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_NegateRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	if(IsValid(bpv__TargetxWaypoint__pfT))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__TargetxWaypoint__pfT->AActor::K2_GetActorLocation();
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpfv__CallFunc_GetTransform_ReturnValue__pf = bpv__Vehicle__pf->AActor::GetTransform();
	}
	UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetTransform_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
	bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(bpfv__CallFunc_BreakTransform_Location__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf);
	bpfv__CallFunc_NegateRotator_ReturnValue__pf = UKismetMathLibrary::NegateRotator(bpfv__CallFunc_BreakTransform_Rotation__pf);
	bpfv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(bpfv__CallFunc_NegateRotator_ReturnValue__pf, bpfv__CallFunc_FindLookAtRotation_ReturnValue__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_ComposeRotators_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpv__SteeringxAngle__pfT = bpfv__CallFunc_BreakRotator_Yaw__pf;
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__MaximumxSteering__pfT, -1.000000);
	bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpv__SteeringxAngle__pfT, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__MaximumxSteering__pfT, -1.000000, 1.000000);
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpf__Server_Steering__pf(bpfv__CallFunc_MapRangeClamped_ReturnValue__pf);
	}
}
void ABP_AI_Race_C__pf1689870207::bpf__HandlexSpeed__pfT()
{
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsxDrifting__pfT)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpv__IsxAccelerating__pfT = false;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				if(IsValid(bpv__Vehicle__pf))
				{
					bpfv__CallFunc_GetVelocity_ReturnValue__pf = bpv__Vehicle__pf->GetVelocity();
				}
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 0.036000);
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000, bpv__DesiredxSpeed__pfT, 1.000000, 0.000000);
				if(IsValid(bpv__Vehicle__pf))
				{
					bpv__Vehicle__pf->bpf__Server_Throttle__pf(bpfv__CallFunc_MapRangeClamped_ReturnValue__pf);
				}
			}
		case 4:
			{
				if(IsValid(bpv__Vehicle__pf))
				{
					bpfv__CallFunc_GetVelocity_ReturnValue__pf = bpv__Vehicle__pf->GetVelocity();
				}
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 0.036000);
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, 0.000000, bpv__DesiredxSpeed__pfT, 1.000000, 0.000000);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_MapRangeClamped_ReturnValue__pf, 0.100000);
				bpv__IsxAccelerating__pfT = bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf;
			}
		case 5:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__DesiredxSpeed__pfT, 20.000000);
				if(IsValid(bpv__Vehicle__pf))
				{
					bpfv__CallFunc_GetVelocity_ReturnValue__pf = bpv__Vehicle__pf->GetVelocity();
				}
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 0.036000);
				bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__DesiredxSpeed__pfT, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, 1.000000);
				if(IsValid(bpv__Vehicle__pf))
				{
					bpv__Vehicle__pf->bpf__Server_Brake__pf(bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf);
				}
			}
		case 6:
			{
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__DesiredxSpeed__pfT, 20.000000);
				if(IsValid(bpv__Vehicle__pf))
				{
					bpfv__CallFunc_GetVelocity_ReturnValue__pf = bpv__Vehicle__pf->GetVelocity();
				}
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 0.036000);
				bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__DesiredxSpeed__pfT, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, 0.000000, 1.000000);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf, 0.100000);
				bpv__IsxBraking__pfT = bpfv__CallFunc_Greater_FloatFloat_ReturnValue2__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_AI_Race_C__pf1689870207::bpf__DetectxDrifting__pfT()
{
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
				TArray<FWheel_Structure__pf863842189>  __Local__14 = TArray<FWheel_Structure__pf863842189> {};
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__Wheels__pf) : (__Local__14)));
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_Less_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
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
				__StateStack.Push(10);
			}
		case 7:
			{
				TArray<FWheel_Structure__pf863842189>  __Local__15 = TArray<FWheel_Structure__pf863842189> {};
				FCustomThunkTemplates::Array_Get(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__Wheels__pf) : (__Local__15)), bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if (!bpfv__CallFunc_Array_Get_Item__pf.bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 8:
			{
				bpv__IsxDrifting__pfT = true;
			}
		case 9:
			{
				bpfv__Temp_bool_True_if_break_was_hit_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 11:
			{
				bpv__IsxDrifting__pfT = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_AI_Race_C__pf1689870207::bpf__CalculatexDesiredxSpeed__pfTT()
{
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_VSize_ReturnValue2__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	float bpfv__CallFunc_Lerp_ReturnValue__pf{};
	if(IsValid(bpv__Vehicle__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__Vehicle__pf->AActor::K2_GetActorLocation();
	}
	if(IsValid(bpv__PreviousxWaypoint__pfT))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf = bpv__PreviousxWaypoint__pfT->AActor::K2_GetActorLocation();
	}
	if(IsValid(bpv__TargetxWaypoint__pfT))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf = bpv__TargetxWaypoint__pfT->AActor::K2_GetActorLocation();
	}
	bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue2__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf);
	bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue3__pf, bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf);
	bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
	bpfv__CallFunc_VSize_ReturnValue2__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue2__pf);
	bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_VSize_ReturnValue2__pf, 0.000000, bpfv__CallFunc_VSize_ReturnValue__pf, 1.000000, 0.000000);
	float  __Local__16 = 0.000000;
	bpfv__CallFunc_Lerp_ReturnValue__pf = UKismetMathLibrary::Lerp(600.000000, ((IsValid(bpv__TargetxWaypoint__pfT)) ? (bpv__TargetxWaypoint__pfT->bpv__DesiredxSpeed__pfT) : (__Local__16)), bpfv__CallFunc_MapRangeClamped_ReturnValue__pf);
	bpv__DesiredxSpeed__pfT = bpfv__CallFunc_Lerp_ReturnValue__pf;
}
void ABP_AI_Race_C__pf1689870207::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void ABP_AI_Race_C__pf1689870207::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{41, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Vehicles/BP_Vehicle_Waypoint.BP_Vehicle_Waypoint_C 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Vehicles/00_Master_Vehicle/BP_Master_Vehicle.BP_Master_Vehicle_C 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Vehicles/00_Master_Vehicle/Structs/Wheel_Structure.Wheel_Structure 
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
struct FRegisterHelper__ABP_AI_Race_C__pf1689870207
{
	FRegisterHelper__ABP_AI_Race_C__pf1689870207()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Vehicles/BP_AI_Race"), &ABP_AI_Race_C__pf1689870207::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_AI_Race_C__pf1689870207 Instance;
};
FRegisterHelper__ABP_AI_Race_C__pf1689870207 FRegisterHelper__ABP_AI_Race_C__pf1689870207::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
