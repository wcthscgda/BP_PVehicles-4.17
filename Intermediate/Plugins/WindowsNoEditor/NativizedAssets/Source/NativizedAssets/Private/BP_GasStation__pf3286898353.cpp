#include "NativizedAssets.h"
#include "BP_GasStation__pf3286898353.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
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
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
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
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "BP_Master_Vehicle__pf3373537038.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
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
ABP_GasStation_C__pf3286898353::ABP_GasStation_C__pf3286898353(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_GasStation_C__pf3286898353::StaticClass() == GetClass()))
	{
		ABP_GasStation_C__pf3286898353::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__Box__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	bpv__Box1__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box1"));
	bpv__TextRender__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("PhysicsActor")));
	bpv__StaticMesh__pf->BodyInstance.bUseCCD = true;
	bpv__StaticMesh__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	bpv__StaticMesh__pf->BodyInstance.bSimulatePhysics = true;
	bpv__StaticMesh__pf->BodyInstance.bEnableGravity = false;
	bpv__StaticMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_GasStation_C__pf3286898353::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->RelativeLocation = FVector(0.002441, 0.000000, 319.667938);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Box__pf->AttachToComponent(bpv__StaticMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Box__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__0 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Box__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__1 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__0), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__1 = TArray<FResponseChannel> ();
	__Local__1.AddUninitialized(7);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__1.GetData(), 7);
	auto& __Local__2 = __Local__1[0];
	__Local__2.Channel = FName(TEXT("WorldStatic"));
	__Local__2.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__3 = __Local__1[1];
	__Local__3.Channel = FName(TEXT("WorldDynamic"));
	__Local__3.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__4 = __Local__1[2];
	__Local__4.Channel = FName(TEXT("Pawn"));
	__Local__4.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__5 = __Local__1[3];
	__Local__5.Channel = FName(TEXT("Camera"));
	__Local__5.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__6 = __Local__1[4];
	__Local__6.Channel = FName(TEXT("PhysicsBody"));
	__Local__6.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__7 = __Local__1[5];
	__Local__7.Channel = FName(TEXT("Vehicle"));
	__Local__7.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__8 = __Local__1[6];
	__Local__8.Channel = FName(TEXT("Destructible"));
	__Local__8.Response = ECollisionResponse::ECR_Overlap;
	bpv__Box__pf->RelativeLocation = FVector(260.511169, 24.757498, -213.104492);
	bpv__Box__pf->RelativeScale3D = FVector(1.000000, 1.250000, 2.250000);
	bpv__Box__pf->ComponentTags = TArray<FName> ();
	bpv__Box__pf->ComponentTags.Reserve(1);
	bpv__Box__pf->ComponentTags.Add(FName(TEXT("Usable")));
	if(!bpv__Box__pf->IsTemplate())
	{
		bpv__Box__pf->BodyInstance.FixupData(bpv__Box__pf);
	}
	bpv__Box1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Box1__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Box1__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__9 = (*(AccessPrivateProperty<FVector >((bpv__Box1__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__9 = FVector(100.000000, 200.000000, 50.000000);
	bpv__Box1__pf->bHiddenInGame = false;
	bpv__Box1__pf->RelativeLocation = FVector(-53.777275, 24.757528, 77.282730);
	bpv__Box1__pf->ComponentTags = TArray<FName> ();
	bpv__Box1__pf->ComponentTags.Reserve(1);
	bpv__Box1__pf->ComponentTags.Add(FName());
	if(!bpv__Box1__pf->IsTemplate())
	{
		bpv__Box1__pf->BodyInstance.FixupData(bpv__Box1__pf);
	}
	bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TextRender__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TextRender__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Press \"F\" to fuel a car."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("8F3757304AE62F2CD0CAA2BA394AC03A") /* Key */
	);
	bpv__TextRender__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__TextRender__pf->RelativeLocation = FVector(269.507507, 23.519497, 185.886368);
	bpv__TextRender__pf->RelativeRotation = FRotator(0.000000, 179.999466, 0.000000);
	if(!bpv__TextRender__pf->IsTemplate())
	{
		bpv__TextRender__pf->BodyInstance.FixupData(bpv__TextRender__pf);
	}
	PrimaryActorTick.bCanEverTick = true;
}
void ABP_GasStation_C__pf3286898353::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Box__pf)
	{
		bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Box1__pf)
	{
		bpv__Box1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TextRender__pf)
	{
		bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_GasStation_C__pf3286898353::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Master_Vehicle_C__pf3373537038::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AInteractable_Master_C__pf1010915279::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__10 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__10);
	auto __Local__11 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__11);
	__Local__11->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__11->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__11->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__12 = __Local__11->ComponentDelegateBindings[0];
	__Local__12.ComponentPropertyName = FName(TEXT("Box1"));
	__Local__12.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__12.FunctionNameToBind = FName(TEXT("BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature"));
}
void ABP_GasStation_C__pf3286898353::bpf__ExecuteUbergraph_BP_GasStation__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 31);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Box1__pf))
	{
		(b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
		bpv__Box1__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, ABP_Master_Vehicle_C__pf3373537038::StaticClass());
	}
	FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, 0, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
	bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b1l__K2Node_ComponentBoundEvent_OtherActor__pf, b1l__CallFunc_Array_Get_Item__pf);
	if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue2__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__ClosexGate__pfT();
	return; //KCST_EndOfThread
}
void ABP_GasStation_C__pf3286898353::bpf__ExecuteUbergraph_BP_GasStation__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FText bpfv__CallFunc_MakeLiteralText_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__StateStack.Push(4);
			}
		case 3:
			{
				if (!b1l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 9;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				if (!b1l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 5;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				b1l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 6:
			{
				if (!true)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 7:
			{
				b1l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				b1l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				b1l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 10:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				b1l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				__StateStack.Push(13);
				__CurrentState = 2;
				break;
			}
		case 13:
			{
				if (!b1l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				float  __Local__13 = 0.000000;
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(((IsValid(b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf)) ? (b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__FuelxAmmount__pfT) : (__Local__13)), 0.100000);
				if(IsValid(b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf))
				{
					b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__FuelxAmmount__pfT = bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf;
				}
			}
		case 15:
			{
				float  __Local__14 = 0.000000;
				bpfv__CallFunc_Round_ReturnValue__pf = UKismetMathLibrary::Round(((IsValid(b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf)) ? (b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__FuelxAmmount__pfT) : (__Local__14)));
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Round_ReturnValue__pf);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue__pf, FString(TEXT(" %")));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
				if(IsValid(bpv__TextRender__pf))
				{
					bpv__TextRender__pf->UTextRenderComponent::K2_SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 16:
			{
				float  __Local__15 = 0.000000;
				bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(((IsValid(b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf)) ? (b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__FuelxAmmount__pfT) : (__Local__15)), 100.000000);
				if (!bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 17:
			{
				bpf__ClosexGate__pfT();
			}
		case 18:
			{
				if(IsValid(b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf))
				{
					b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf->bpv__FuelxAmmount__pfT = 100.000000;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				b1l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = false;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				b1l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				__StateStack.Push(20);
				__CurrentState = 2;
				break;
			}
		case 22:
			{
				__StateStack.Push(19);
				__CurrentState = 2;
				break;
			}
		case 27:
			{
				__CurrentState = 12;
				break;
			}
		case 28:
			{
				__CurrentState = 21;
				break;
			}
		case 29:
			{
				__CurrentState = 30;
				break;
			}
		case 30:
			{
				bpfv__CallFunc_MakeLiteralText_ReturnValue__pf = UKismetSystemLibrary::MakeLiteralText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Press \"F\" to fuel a car."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("2D8DDAA8426E325B2E09979AEF85343E") /* Key */
	));
				if(IsValid(bpv__TextRender__pf))
				{
					bpv__TextRender__pf->UTextRenderComponent::K2_SetText(bpfv__CallFunc_MakeLiteralText_ReturnValue__pf);
				}
				__CurrentState = 22;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_GasStation_C__pf3286898353::bpf__ExecuteUbergraph_BP_GasStation__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(b1l__K2Node_Event_Component__pf, bpv__Box__pf);
	if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	if(IsValid(bpv__Box1__pf))
	{
		(b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
		bpv__Box1__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, ABP_Master_Vehicle_C__pf3373537038::StaticClass());
	}
	FCustomThunkTemplates::Array_Get(b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, 0, /*out*/ b1l__CallFunc_Array_Get_Item__pf);
	b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf = Cast<ABP_Master_Vehicle_C__pf3373537038>(b1l__CallFunc_Array_Get_Item__pf);
	b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	bpf__OpenxGate__pfT();
	return; //KCST_EndOfThread
}
void ABP_GasStation_C__pf3286898353::bpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b1l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b1l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_BP_GasStation__pf_0(31);
}
void ABP_GasStation_C__pf3286898353::bpf__ClosexGate__pfT()
{
	bpf__ExecuteUbergraph_BP_GasStation__pf_1(29);
}
void ABP_GasStation_C__pf3286898353::bpf__OpenxGate__pfT()
{
	bpf__ExecuteUbergraph_BP_GasStation__pf_1(28);
}
void ABP_GasStation_C__pf3286898353::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b1l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_GasStation__pf_1(27);
}
void ABP_GasStation_C__pf3286898353::bpf__Use__pf(UActorComponent* bpp__Component__pf)
{
	b1l__K2Node_Event_Component__pf = bpp__Component__pf;
	bpf__ExecuteUbergraph_BP_GasStation__pf_2(23);
}
void ABP_GasStation_C__pf3286898353::bpf__UserConstructionScript__pf()
{
	Super::bpf__UserConstructionScript__pf();
}
void ABP_GasStation_C__pf3286898353::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Environment/Meshes/SM_Gas_Station.SM_Gas_Station 
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
void ABP_GasStation_C__pf3286898353::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{45, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Interactable_Master.Interactable_Master_C 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavArea_Obstacle 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.TextRenderComponent 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Vehicles/00_Master_Vehicle/BP_Master_Vehicle.BP_Master_Vehicle_C 
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
struct FRegisterHelper__ABP_GasStation_C__pf3286898353
{
	FRegisterHelper__ABP_GasStation_C__pf3286898353()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Environment/BP_GasStation"), &ABP_GasStation_C__pf3286898353::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_GasStation_C__pf3286898353 Instance;
};
FRegisterHelper__ABP_GasStation_C__pf3286898353 FRegisterHelper__ABP_GasStation_C__pf3286898353::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
