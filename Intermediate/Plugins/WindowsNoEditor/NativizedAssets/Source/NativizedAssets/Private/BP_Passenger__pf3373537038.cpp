#include "NativizedAssets.h"
#include "BP_Passenger__pf3373537038.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "BP_Physic_Pawn__pf4061722237.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
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
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ABP_Passenger_C__pf3373537038::ABP_Passenger_C__pf3373537038(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_Passenger_C__pf3373537038::StaticClass() == GetClass()))
	{
		ABP_Passenger_C__pf3373537038::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__SkeletalMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	bpv__Box__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	bpv__SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	bpv__PlayerxLocation__pfT = CreateDefaultSubobject<UArrowComponent>(TEXT("Player Location"));
	RootComponent = bpv__SkeletalMesh__pf;
	bpv__SkeletalMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SkeletalMesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__0 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__SkeletalMesh__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__1 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__0), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__1 = TArray<FResponseChannel> ();
	__Local__1.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__1.GetData(), 8);
	auto& __Local__2 = __Local__1[0];
	__Local__2.Channel = FName(TEXT("Pawn"));
	__Local__2.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__3 = __Local__1[1];
	__Local__3.Channel = FName(TEXT("Visibility"));
	__Local__3.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__4 = __Local__1[2];
	__Local__4.Channel = FName(TEXT("Vehicle"));
	__Local__4.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__5 = __Local__1[3];
	__Local__5.Channel = FName(TEXT("PhysicsBody"));
	__Local__5.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__6 = __Local__1[4];
	__Local__6.Channel = FName(TEXT("WorldDynamic"));
	__Local__6.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__7 = __Local__1[5];
	__Local__7.Channel = FName(TEXT("WorldStatic"));
	__Local__7.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__8 = __Local__1[6];
	__Local__8.Channel = FName(TEXT("Camera"));
	__Local__8.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__9 = __Local__1[7];
	__Local__9.Channel = FName(TEXT("Destructible"));
	__Local__9.Response = ECollisionResponse::ECR_Overlap;
	bpv__SkeletalMesh__pf->BodyInstance.bEnableGravity = false;
	bpv__SkeletalMesh__pf->BodyInstance.PositionSolverIterationCount = 80;
	bpv__SkeletalMesh__pf->BodyInstance.VelocitySolverIterationCount = 11;
	auto& __Local__10 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(bpv__SkeletalMesh__pf->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__10 = ECollisionEnabled::Type::QueryAndPhysics;
	auto& __Local__11 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionChannel> >(&(bpv__SkeletalMesh__pf->BodyInstance), FBodyInstance::__PPO__ObjectType() )));
	__Local__11 = ECollisionChannel::ECC_PhysicsBody;
	auto& __Local__12 = (*(AccessPrivateProperty<TEnumAsByte<EAnimationMode::Type> >((bpv__SkeletalMesh__pf), USkeletalMeshComponent::__PPO__AnimationMode() )));
	__Local__12 = EAnimationMode::Type::AnimationSingleNode;
	bpv__SkeletalMesh__pf->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(ABP_Passenger_C__pf3373537038::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__SkeletalMesh__pf->PhysicsTransformUpdateMode = EPhysicsTransformUpdateMode::Type::ComponentTransformIsKinematic;
	bpv__SkeletalMesh__pf->ClothingSimulationFactory = UClothingSimulationFactoryNv::StaticClass();
	bpv__SkeletalMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_Passenger_C__pf3373537038::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__SkeletalMesh__pf->bVisible = false;
	static TWeakObjectPtr<UProperty> __Local__14{};
	const UProperty* __Local__13 = __Local__14.Get();
	if (nullptr == __Local__13)
	{
		__Local__13 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bReplicates")));
		check(__Local__13);
		__Local__14 = __Local__13;
	}
	(((UBoolProperty*)__Local__13)->SetPropertyValue_InContainer((bpv__SkeletalMesh__pf), true, 0));
	if(!bpv__SkeletalMesh__pf->IsTemplate())
	{
		bpv__SkeletalMesh__pf->BodyInstance.FixupData(bpv__SkeletalMesh__pf);
	}
	bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Box__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Box__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__15 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__Box__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__15), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__16 = TArray<FResponseChannel> ();
	__Local__16.AddUninitialized(7);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__16.GetData(), 7);
	auto& __Local__17 = __Local__16[0];
	__Local__17.Channel = FName(TEXT("WorldStatic"));
	__Local__17.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__18 = __Local__16[1];
	__Local__18.Channel = FName(TEXT("WorldDynamic"));
	__Local__18.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__19 = __Local__16[2];
	__Local__19.Channel = FName(TEXT("Pawn"));
	__Local__19.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__20 = __Local__16[3];
	__Local__20.Channel = FName(TEXT("Camera"));
	__Local__20.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__21 = __Local__16[4];
	__Local__21.Channel = FName(TEXT("PhysicsBody"));
	__Local__21.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__22 = __Local__16[5];
	__Local__22.Channel = FName(TEXT("Vehicle"));
	__Local__22.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__23 = __Local__16[6];
	__Local__23.Channel = FName(TEXT("Destructible"));
	__Local__23.Response = ECollisionResponse::ECR_Ignore;
	bpv__Box__pf->RelativeLocation = FVector(0.000000, 0.000000, 2987.804688);
	bpv__Box__pf->ComponentTags = TArray<FName> ();
	bpv__Box__pf->ComponentTags.Reserve(1);
	bpv__Box__pf->ComponentTags.Add(FName(TEXT("Usable")));
	if(!bpv__Box__pf->IsTemplate())
	{
		bpv__Box__pf->BodyInstance.FixupData(bpv__Box__pf);
	}
	bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm__pf->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm__pf->TargetArmLength = -10.000000f;
	bpv__SpringArm__pf->bDoCollisionTest = false;
	bpv__SpringArm__pf->RelativeLocation = FVector(-45.971809, -31.249178, 122.446342);
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PlayerxLocation__pfT->CreationMethod = EComponentCreationMethod::Native;
	bpv__PlayerxLocation__pfT->AttachToComponent(bpv__SkeletalMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PlayerxLocation__pfT->RelativeLocation = FVector(-0.000000, 43.637848, 97.560974);
	if(!bpv__PlayerxLocation__pfT->IsTemplate())
	{
		bpv__PlayerxLocation__pfT->BodyInstance.FixupData(bpv__PlayerxLocation__pfT);
	}
	bpv__CollisionxOffset__pfT = FVector(0.000000, 0.000000, 75.000000);
	bpv__CollisionxExtent__pfT = FVector(50.000000, 20.000000, 35.000000);
	Tags = TArray<FName> ();
	Tags.Reserve(1);
	Tags.Add(FName(TEXT("Pawn")));
}
void ABP_Passenger_C__pf3373537038::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SkeletalMesh__pf)
	{
		bpv__SkeletalMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Box__pf)
	{
		bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SpringArm__pf)
	{
		bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PlayerxLocation__pfT)
	{
		bpv__PlayerxLocation__pfT->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_Passenger_C__pf3373537038::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Physic_Pawn_C__pf4061722237::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__24 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__24);
	auto __Local__25 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__25);
	auto __Local__26 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__26);
	__Local__25->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__25->InputActionDelegateBindings.AddUninitialized(1);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__25->InputActionDelegateBindings.GetData(), 1);
	auto& __Local__27 = __Local__25->InputActionDelegateBindings[0];
	__Local__27.InputActionName = FName(TEXT("Interact"));
	__Local__27.FunctionNameToBind = FName(TEXT("InpActEvt_Interact_K2Node_InputActionEvent_1"));
	__Local__26->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__26->InputAxisDelegateBindings.AddUninitialized(2);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__26->InputAxisDelegateBindings.GetData(), 2);
	auto& __Local__28 = __Local__26->InputAxisDelegateBindings[0];
	__Local__28.InputAxisName = FName(TEXT("LookRight"));
	__Local__28.bOverrideParentBinding = false;
	auto& __Local__29 = __Local__26->InputAxisDelegateBindings[1];
	__Local__29.InputAxisName = FName(TEXT("LookUp"));
	__Local__29.bOverrideParentBinding = false;
}
void ABP_Passenger_C__pf3373537038::bpf__ExecuteUbergraph_BP_Passenger__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsPlayerController_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	if(IsValid(b0l__K2Node_Event_NewController__pf))
	{
		bpfv__CallFunc_IsPlayerController_ReturnValue__pf = b0l__K2Node_Event_NewController__pf->AController::IsPlayerController();
	}
	if (!bpfv__CallFunc_IsPlayerController_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__SkeletalMesh__pf))
	{
		bpv__SkeletalMesh__pf->USceneComponent::SetVisibility(true, true);
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Box__pf))
	{
		bpv__Box__pf->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Ignore);
	}
	return; // KCST_GotoReturn
}
void ABP_Passenger_C__pf3373537038::bpf__ExecuteUbergraph_BP_Passenger__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	bpf__Server_ExitxVehicle__pfT();
	return; // KCST_GotoReturn
}
void ABP_Passenger_C__pf3373537038::bpf__ExecuteUbergraph_BP_Passenger__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	bpf__ExitxVehicle__pfT();
	return; // KCST_GotoReturn
}
void ABP_Passenger_C__pf3373537038::bpf__ExecuteUbergraph_BP_Passenger__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpf__LookxAround__pfT();
	return; // KCST_GotoReturn
}
void ABP_Passenger_C__pf3373537038::bpf__ReceivePossessed__pf(AController* bpp__NewController__pf)
{
	b0l__K2Node_Event_NewController__pf = bpp__NewController__pf;
	bpf__ExecuteUbergraph_BP_Passenger__pf_0(8);
}
void ABP_Passenger_C__pf3373537038::bpf__Server_ExitxVehicle__pfT_Implementation()
{
	bpf__ExecuteUbergraph_BP_Passenger__pf_2(7);
}
void ABP_Passenger_C__pf3373537038::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_Passenger__pf_3(2);
}
void ABP_Passenger_C__pf3373537038::bpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Passenger__pf_1(4);
}
void ABP_Passenger_C__pf3373537038::bpf__UserConstructionScript__pf()
{
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	if(IsValid(bpv__Box__pf))
	{
		bpv__Box__pf->USceneComponent::K2_SetRelativeLocation(bpv__CollisionxOffset__pfT, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
	}
	if(IsValid(bpv__Box__pf))
	{
		bpv__Box__pf->UBoxComponent::SetBoxExtent(bpv__CollisionxExtent__pfT, true);
	}
}
void ABP_Passenger_C__pf3373537038::bpf__LookxAround__pfT()
{
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue2__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue2__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("LookUp")));
				bpfv__CallFunc_GetInputAxisValue_ReturnValue2__pf = AActor::GetInputAxisValue(FName(TEXT("LookRight")));
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpfv__CallFunc_GetInputAxisValue_ReturnValue2__pf, 0.000000);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf, bpfv__CallFunc_EqualEqual_FloatFloat_ReturnValue2__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("LookUp")));
				bpfv__CallFunc_GetInputAxisValue_ReturnValue2__pf = AActor::GetInputAxisValue(FName(TEXT("LookRight")));
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetInputAxisValue_ReturnValue2__pf, 1.000000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf, 1.000000);
				FRotator  __Local__30 = FRotator(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakRotator(((IsValid(bpv__SpringArm__pf)) ? (bpv__SpringArm__pf->RelativeRotation) : (__Local__30)), /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakRotator_Pitch__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, -40.000000, 10.000000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakRotator_Yaw__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_FClamp_ReturnValue2__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf, -160.000000, 110.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, bpfv__CallFunc_FClamp_ReturnValue__pf, bpfv__CallFunc_FClamp_ReturnValue2__pf);
				if(IsValid(bpv__SpringArm__pf))
				{
					bpv__SpringArm__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
			}
		case 3:
			{
				FVector  __Local__31 = FVector(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakVector(((IsValid(bpv__Camera__pf)) ? (bpv__Camera__pf->RelativeLocation) : (__Local__31)), /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				FRotator  __Local__32 = FRotator(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakRotator(((IsValid(bpv__SpringArm__pf)) ? (bpv__SpringArm__pf->RelativeRotation) : (__Local__32)), /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_BreakRotator_Yaw__pf, -70.000000, -160.000000, 0.000000, 25.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_MapRangeClamped_ReturnValue__pf, bpfv__CallFunc_BreakVector_Z__pf);
				if(IsValid(bpv__Camera__pf))
				{
					bpv__Camera__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Passenger_C__pf3373537038::bpf__ExitxVehicle__pfT()
{
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
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
	APawn* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	ABP_Physic_Pawn_C__pf4061722237* bpfv__K2Node_DynamicCast_AsBP_Physic_Pawn__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				if(IsValid(bpv__PlayerxLocation__pfT))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__PlayerxLocation__pfT->USceneComponent::K2_GetComponentToWorld();
				}
				UKismetMathLibrary::BreakTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_BreakTransform_Location__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				TSubclassOf<APawn>   __Local__33 = ((UClass*)nullptr);
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ((IsValid(bpfv__CallFunc_GetGameMode_ReturnValue__pf)) ? (bpfv__CallFunc_GetGameMode_ReturnValue__pf->DefaultPawnClass) : (__Local__33)), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, ((AActor*)nullptr));
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
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<APawn>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if(IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue__pf->Possess(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf);
				}
			}
		case 4:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpv__SkeletalMesh__pf->USceneComponent::SetVisibility(false, true);
				}
			}
		case 5:
			{
				if(IsValid(bpv__Box__pf))
				{
					bpv__Box__pf->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
				}
			}
		case 6:
			{
				bpfv__K2Node_DynamicCast_AsBP_Physic_Pawn__pf = Cast<ABP_Physic_Pawn_C__pf4061722237>(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsBP_Physic_Pawn__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 7:
			{
				if(IsValid(bpv__SkeletalMesh__pf))
				{
					bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf = bpv__SkeletalMesh__pf->UPrimitiveComponent::GetPhysicsLinearVelocity(FName(TEXT("None")));
				}
			}
		case 8:
			{
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 900.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 9:
			{
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetPhysicsLinearVelocity_ReturnValue__pf, 1.000000);
				if(IsValid(bpfv__K2Node_DynamicCast_AsBP_Physic_Pawn__pf))
				{
					bpfv__K2Node_DynamicCast_AsBP_Physic_Pawn__pf->bpf__TriggerxRagdoll__pfT(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, FName(TEXT("Spine_02")));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Passenger_C__pf3373537038::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Vehicles/Camaro/Anims/Camaro_Passenger.Camaro_Passenger 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Player/Mesh/SK_Mannequin.SK_Mannequin 
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
void ABP_Passenger_C__pf3373537038::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavArea_Obstacle 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpringArmComponent 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ArrowComponent 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{1, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/BP_Physic_Pawn.BP_Physic_Pawn_C 
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
struct FRegisterHelper__ABP_Passenger_C__pf3373537038
{
	FRegisterHelper__ABP_Passenger_C__pf3373537038()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Vehicles/00_Master_Vehicle/BP_Passenger"), &ABP_Passenger_C__pf3373537038::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Passenger_C__pf3373537038 Instance;
};
FRegisterHelper__ABP_Passenger_C__pf3373537038 FRegisterHelper__ABP_Passenger_C__pf3373537038::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
