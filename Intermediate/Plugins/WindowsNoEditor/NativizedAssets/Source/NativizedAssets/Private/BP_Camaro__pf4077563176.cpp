#include "NativizedAssets.h"
#include "BP_Camaro__pf4077563176.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
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
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "BP_Passenger__pf3373537038.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Camaro_AnimBlueprint__pf2913349635.h"
#include "Runtime/ClothingSystemRuntime/Public/ClothingSimulationFactory.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Camaro_Driver_AnimBlueprint__pf2913349635.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h"
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
#include "Wheel_Structure__pf863842189.h"
#include "Gear_Structure__pf863842189.h"
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
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ModifyBone.h"
#include "Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RefPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeSpaceConversions.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Root.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_SequenceEvaluator.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ABP_Camaro_C__pf4077563176::ABP_Camaro_C__pf4077563176(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_Camaro_C__pf4077563176::StaticClass() == GetClass()))
	{
		ABP_Camaro_C__pf4077563176::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Passenger_FR__pf = CreateDefaultSubobject<UChildActorComponent>(TEXT("Passenger_FR"));
	bpv__Box__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	bpv__Mesh__pf->BodyInstance.COMNudge = FVector(25.000000, 0.000000, -20.000000);
	static TWeakObjectPtr<UProperty> __Local__1{};
	const UProperty* __Local__0 = __Local__1.Get();
	if (nullptr == __Local__0)
	{
		__Local__0 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bReplicates")));
		check(__Local__0);
		__Local__1 = __Local__0;
	}
	(((UBoolProperty*)__Local__0)->SetPropertyValue_InContainer((bpv__Mesh__pf), true, 0));
	if(!bpv__Mesh__pf->IsTemplate())
	{
		bpv__Mesh__pf->BodyInstance.FixupData(bpv__Mesh__pf);
	}
	bpv__TP_SpringArm__pf->RelativeLocation = FVector(-35.196621, 0.000244, 108.811005);
	bpv__FP_SpringArm__pf->RelativeLocation = FVector(-17.741776, -40.014423, 109.230881);
	bpv__FP_Camera__pf->FieldOfView = 90.000000f;
	bpv__FP_Camera__pf->RelativeLocation = FVector(-3.121511, 0.000000, 11.000000);
	auto& __Local__2 = (*(AccessPrivateProperty<FVector >((bpv__DriverxTriggerBox__pfT), UBoxComponent::__PPO__BoxExtent() )));
	__Local__2 = FVector(50.000000, 25.000000, 32.000000);
	bpv__DriverxTriggerBox__pfT->RelativeLocation = FVector(-24.093094, -84.417877, 93.528923);
	if(!bpv__DriverxTriggerBox__pfT->IsTemplate())
	{
		bpv__DriverxTriggerBox__pfT->BodyInstance.FixupData(bpv__DriverxTriggerBox__pfT);
	}
	bpv__PlayerxLocation__pfT->RelativeLocation = FVector(-84.630409, -193.729065, 103.235176);
	bpv__PlayerxLocation__pfT->RelativeRotation = FRotator(0.000000, 30.000282, 0.000000);
	if(!bpv__PlayerxLocation__pfT->IsTemplate())
	{
		bpv__PlayerxLocation__pfT->BodyInstance.FixupData(bpv__PlayerxLocation__pfT);
	}
	bpv__Passenger_FR__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Passenger_FR__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("Body"));
	auto& __Local__3 = (*(AccessPrivateProperty<TSubclassOf<AActor>  >((bpv__Passenger_FR__pf), UChildActorComponent::__PPO__ChildActorClass() )));
	__Local__3 = ABP_Passenger_C__pf3373537038::StaticClass();
	auto& __Local__4 = (*(AccessPrivateProperty<AActor* >((bpv__Passenger_FR__pf), UChildActorComponent::__PPO__ChildActorTemplate() )));
	__Local__4 = CastChecked<AActor>(CastChecked<UDynamicClass>(ABP_Camaro_C__pf4077563176::StaticClass())->MiscConvertedSubobjects[0]);
	bpv__Passenger_FR__pf->RelativeLocation = FVector(-0.898798, 62.677490, -11.201698);
	bpv__Passenger_FR__pf->RelativeScale3D = FVector(0.820000, 0.820000, 0.820000);
	bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Box__pf->AttachToComponent(bpv__Mesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__5 = (*(AccessPrivateProperty<FVector >((bpv__Box__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__5 = FVector(10.000000, 10.000000, 10.000000);
	bpv__Box__pf->BodyInstance.PositionSolverIterationCount = 80;
	bpv__Box__pf->BodyInstance.VelocitySolverIterationCount = 11;
	bpv__Box__pf->RelativeLocation = FVector(-259.726074, 0.000031, 48.357731);
	bpv__Box__pf->RelativeRotation = FRotator(-4.000000, 0.000000, 0.000000);
	bpv__Box__pf->ComponentTags = TArray<FName> ();
	bpv__Box__pf->ComponentTags.Reserve(1);
	bpv__Box__pf->ComponentTags.Add(FName(TEXT("Hitch")));
	if(!bpv__Box__pf->IsTemplate())
	{
		bpv__Box__pf->BodyInstance.FixupData(bpv__Box__pf);
	}
	bpv__Vehicle_AnimBP__pf = nullptr;
	bpv__Driver_AnimBP__pf = nullptr;
	bpv__BrakexLightxMat__pfTT = nullptr;
	bpv__ReversexLightxMat__pfTT = nullptr;
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
	bpv__Wheels__pf[2].bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf = 1.000000f;
	bpv__Wheels__pf.Add(FWheel_Structure__pf863842189{});
	bpv__Wheels__pf[3].bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf = FName(TEXT("Wheel_FR"));
	bpv__Wheels__pf[3].bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf = 33.500000f;
	bpv__Wheels__pf[3].bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf = 45.000000f;
	bpv__Wheels__pf[3].bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf = 1.000000f;
	bpv__SuspensionxStrength__pfT = 6000.000000f;
	bpv__SuspensionxDamping__pfT = 22.000000f;
	bpv__SuspensionxLength__pfT = 15.000000f;
	bpv__AutoxRotatexCamera__pfTT = true;
	bpv__SmartxThrottle__pfT = false;
	bpv__AntixRollxMultiplier__pfGT = 0.600000f;
	bpv__AntixDriftxMultiplier__pfGT = 0.200000f;
	bpv__BrakeLightxMaterialxSlot__pfTT = FName(TEXT("BrakeLight"));
	bpv__ReverseLightxMaterialxSlot__pfTT = FName(TEXT("ReverseLight"));
	bpv__EnginexSound__pfT = CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_Camaro_C__pf4077563176::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	Tags = TArray<FName> ();
	Tags.Reserve(2);
	Tags.Add(FName(TEXT("Vehicle")));
	Tags.Add(FName(TEXT("Chevrolet Camaro 1969")));
}
void ABP_Camaro_C__pf4077563176::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Passenger_FR__pf)
	{
		bpv__Passenger_FR__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Box__pf)
	{
		bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_Camaro_C__pf4077563176::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Passenger_C__pf3373537038::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Master_Vehicle_C__pf3373537038::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	ABP_Passenger_C__pf3373537038::StaticClass()->GetDefaultObject();
	auto __Local__6 = NewObject<ABP_Passenger_C__pf3373537038>(InDynamicClass, ABP_Passenger_C__pf3373537038::StaticClass(), TEXT("Passenger_FR_GEN_VARIABLE_BP_Passenger_C_CAT"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__6);
	__Local__6->bpv__CollisionxOffset__pfT = FVector(-35.000000, 26.996635, 80.000000);
	__Local__6->bpv__CollisionxExtent__pfT = FVector(60.000000, 20.000000, 45.000000);
	__Local__6->Tags = TArray<FName> ();
	__Local__6->Tags.Reserve(2);
	__Local__6->Tags.Add(FName(TEXT("Pawn")));
	__Local__6->Tags.Add(FName(TEXT("Chevrolet Camaro 1969")));
	auto __Local__7 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__7);
	auto __Local__8 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__8);
	auto __Local__9 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__9);
	auto __Local__10 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__10);
	auto __Local__11 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__11);
	__Local__8->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__8->InputActionDelegateBindings.AddUninitialized(7);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__8->InputActionDelegateBindings.GetData(), 7);
	auto& __Local__12 = __Local__8->InputActionDelegateBindings[0];
	__Local__12.InputActionName = FName(TEXT("Interact"));
	__Local__12.FunctionNameToBind = FName(TEXT("InpActEvt_Interact_K2Node_InputActionEvent_13"));
	auto& __Local__13 = __Local__8->InputActionDelegateBindings[1];
	__Local__13.InputActionName = FName(TEXT("ChangeView"));
	__Local__13.FunctionNameToBind = FName(TEXT("InpActEvt_ChangeView_K2Node_InputActionEvent_12"));
	auto& __Local__14 = __Local__8->InputActionDelegateBindings[2];
	__Local__14.InputActionName = FName(TEXT("Vehicle_LookBack"));
	__Local__14.FunctionNameToBind = FName(TEXT("InpActEvt_Vehicle_LookBack_K2Node_InputActionEvent_10"));
	auto& __Local__15 = __Local__8->InputActionDelegateBindings[3];
	__Local__15.InputActionName = FName(TEXT("Vehicle_Lights"));
	__Local__15.FunctionNameToBind = FName(TEXT("InpActEvt_Vehicle_Lights_K2Node_InputActionEvent_9"));
	auto& __Local__16 = __Local__8->InputActionDelegateBindings[4];
	__Local__16.InputActionName = FName(TEXT("Vehicle_LookBack"));
	__Local__16.InputKeyEvent = EInputEvent::IE_Released;
	__Local__16.FunctionNameToBind = FName(TEXT("InpActEvt_Vehicle_LookBack_K2Node_InputActionEvent_11"));
	auto& __Local__17 = __Local__8->InputActionDelegateBindings[5];
	__Local__17.InputActionName = FName(TEXT("Vehicle_Handbrake"));
	__Local__17.FunctionNameToBind = FName(TEXT("InpActEvt_Vehicle_Handbrake_K2Node_InputActionEvent_7"));
	auto& __Local__18 = __Local__8->InputActionDelegateBindings[6];
	__Local__18.InputActionName = FName(TEXT("Vehicle_Handbrake"));
	__Local__18.InputKeyEvent = EInputEvent::IE_Released;
	__Local__18.FunctionNameToBind = FName(TEXT("InpActEvt_Vehicle_Handbrake_K2Node_InputActionEvent_8"));
	__Local__9->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__9->InputAxisDelegateBindings.AddUninitialized(5);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__9->InputAxisDelegateBindings.GetData(), 5);
	auto& __Local__19 = __Local__9->InputAxisDelegateBindings[0];
	__Local__19.InputAxisName = FName(TEXT("LookUp"));
	__Local__19.bOverrideParentBinding = false;
	auto& __Local__20 = __Local__9->InputAxisDelegateBindings[1];
	__Local__20.InputAxisName = FName(TEXT("LookRight"));
	__Local__20.bOverrideParentBinding = false;
	auto& __Local__21 = __Local__9->InputAxisDelegateBindings[2];
	__Local__21.InputAxisName = FName(TEXT("Vehicle_Steering"));
	__Local__21.FunctionNameToBind = FName(TEXT("InpAxisEvt_Vehicle_Steering_K2Node_InputAxisEvent_0"));
	auto& __Local__22 = __Local__9->InputAxisDelegateBindings[3];
	__Local__22.InputAxisName = FName(TEXT("Vehicle_Throttle"));
	__Local__22.FunctionNameToBind = FName(TEXT("InpAxisEvt_Vehicle_Throttle_K2Node_InputAxisEvent_101"));
	auto& __Local__23 = __Local__9->InputAxisDelegateBindings[4];
	__Local__23.InputAxisName = FName(TEXT("Vehicle_Brake"));
	__Local__23.FunctionNameToBind = FName(TEXT("InpAxisEvt_Vehicle_Brake_K2Node_InputAxisEvent_148"));
	__Local__10->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__10->InputKeyDelegateBindings.AddUninitialized(5);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__10->InputKeyDelegateBindings.GetData(), 5);
	auto& __Local__24 = __Local__10->InputKeyDelegateBindings[0];
	__Local__24.InputChord.Key = FKey(TEXT("Tab"));
	__Local__24.FunctionNameToBind = FName(TEXT("InpActEvt_Tab_K2Node_InputKeyEvent_5"));
	auto& __Local__25 = __Local__10->InputKeyDelegateBindings[1];
	__Local__25.InputChord.Key = FKey(TEXT("RightMouseButton"));
	__Local__25.InputKeyEvent = EInputEvent::IE_Released;
	__Local__25.FunctionNameToBind = FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_9"));
	auto& __Local__26 = __Local__10->InputKeyDelegateBindings[2];
	__Local__26.InputChord.Key = FKey(TEXT("RightMouseButton"));
	__Local__26.FunctionNameToBind = FName(TEXT("InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8"));
	auto& __Local__27 = __Local__10->InputKeyDelegateBindings[3];
	__Local__27.InputChord.Key = FKey(TEXT("Q"));
	__Local__27.FunctionNameToBind = FName(TEXT("InpActEvt_Q_K2Node_InputKeyEvent_7"));
	auto& __Local__28 = __Local__10->InputKeyDelegateBindings[4];
	__Local__28.InputChord.Key = FKey(TEXT("E"));
	__Local__28.FunctionNameToBind = FName(TEXT("InpActEvt_E_K2Node_InputKeyEvent_6"));
	__Local__11->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__11->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__11->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__29 = __Local__11->ComponentDelegateBindings[0];
	__Local__29.ComponentPropertyName = FName(TEXT("Mesh"));
	__Local__29.DelegatePropertyName = FName(TEXT("OnComponentHit"));
	__Local__29.FunctionNameToBind = FName(TEXT("BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"));
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue2__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 40);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("LookRight")));
	bpfv__CallFunc_GetInputAxisValue_ReturnValue2__pf = AActor::GetInputAxisValue(FName(TEXT("LookUp")));
	bpf__LookAround__pf(bpfv__CallFunc_GetInputAxisValue_ReturnValue2__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf);
	bpf__Server_Tick__pf();
	bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf = UKismetMathLibrary::MapRangeClamped(bpv__Speed__pf, 0.000000, 120.000000, -125.000000, 128.000000);
	if(IsValid(bpv__Vehicle_AnimBP__pf))
	{
		bpv__Vehicle_AnimBP__pf->bpv__SpeedxAngle__pfT = bpfv__CallFunc_MapRangeClamped_ReturnValue2__pf;
	}
	bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpv__RPM__pf, 0.000000, bpv__RPMxLimit__pfT, -127.000000, 128.000000);
	if(IsValid(bpv__Vehicle_AnimBP__pf))
	{
		bpv__Vehicle_AnimBP__pf->bpv__RPMxAngle__pfT = bpfv__CallFunc_MapRangeClamped_ReturnValue__pf;
	}
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__SteeringxAngle__pfT, 0.500000);
	if(IsValid(bpv__Vehicle_AnimBP__pf))
	{
		bpv__Vehicle_AnimBP__pf->bpv__SteeringxAngle__pfT = bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf;
	}
	float  __Local__30 = 0.000000;
	if(IsValid(bpv__Driver_AnimBP__pf))
	{
		bpv__Driver_AnimBP__pf->bpv__SteeringxAngle__pfT = ((IsValid(bpv__Vehicle_AnimBP__pf)) ? (bpv__Vehicle_AnimBP__pf->bpv__SteeringxAngle__pfT) : (__Local__30));
	}
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 53);
	// optimized KCST_UnconditionalGoto
	bpf__ChangexView__pfT();
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 51);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable3__pf = b1l__K2Node_InputActionEvent_Key4__pf;
	// optimized KCST_UnconditionalGoto
	bpv__LookxBack__pfT = true;
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable3__pf = b1l__K2Node_InputActionEvent_Key5__pf;
	// optimized KCST_UnconditionalGoto
	bpv__LookxBack__pfT = false;
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 50);
	// optimized KCST_UnconditionalGoto
	bpf__Server_HeadLights__pf();
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 9:
			{
				bpf__DebugxWidget__pfT(true);
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpf__DebugxWidget__pfT(false);
				__CurrentState = -1;
				break;
			}
		case 47:
			{
				__CurrentState = 48;
				break;
			}
		case 48:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b1l__Temp_bool_Variable__pf);
				b1l__Temp_bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
			}
		case 49:
			{
				if (!b1l__Temp_bool_Variable__pf)
				{
					__CurrentState = 10;
					break;
				}
				__CurrentState = 9;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_6(int32 bpp__EntryPoint__pf)
{
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	Super::bpf__ReceiveBeginPlay__pf();
	if(IsValid(bpv__Mesh__pf))
	{
		bpfv__CallFunc_GetAnimInstance_ReturnValue2__pf = bpv__Mesh__pf->USkeletalMeshComponent::GetAnimInstance();
	}
	b1l__K2Node_DynamicCast_AsCamaro_Anim_Blueprint__pf = Cast<UCamaro_AnimBlueprint_C__pf2913349635>(bpfv__CallFunc_GetAnimInstance_ReturnValue2__pf);
	b1l__K2Node_DynamicCast_bSuccess2__pf = (b1l__K2Node_DynamicCast_AsCamaro_Anim_Blueprint__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__Vehicle_AnimBP__pf = b1l__K2Node_DynamicCast_AsCamaro_Anim_Blueprint__pf;
	if(IsValid(bpv__Driver__pf))
	{
		bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = bpv__Driver__pf->USkeletalMeshComponent::GetAnimInstance();
	}
	b1l__K2Node_DynamicCast_AsCamaro_Driver_Anim_Blueprint__pf = Cast<UCamaro_Driver_AnimBlueprint_C__pf2913349635>(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
	b1l__K2Node_DynamicCast_bSuccess__pf = (b1l__K2Node_DynamicCast_AsCamaro_Driver_Anim_Blueprint__pf != nullptr);;
	if (!b1l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__Driver_AnimBP__pf = b1l__K2Node_DynamicCast_AsCamaro_Driver_Anim_Blueprint__pf;
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 38);
	// optimized KCST_UnconditionalGoto
	bpf__Server_Steering__pf(b1l__K2Node_InputAxisEvent_AxisValue__pf);
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 36);
	// optimized KCST_UnconditionalGoto
	bpf__Server_Throttle__pf(b1l__K2Node_InputAxisEvent_AxisValue2__pf);
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 34);
	// optimized KCST_UnconditionalGoto
	bpf__Server_Brake__pf(b1l__K2Node_InputAxisEvent_AxisValue3__pf);
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 31);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable2__pf = b1l__K2Node_InputKeyEvent_Key5__pf;
	// optimized KCST_UnconditionalGoto
	bpf__Server_ReversexGear__pfT(false);
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable2__pf = b1l__K2Node_InputKeyEvent_Key4__pf;
	// optimized KCST_UnconditionalGoto
	bpf__Server_ReversexGear__pfT(true);
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 30);
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 26);
	// optimized KCST_UnconditionalGoto
	bpf__GearxDown__pfT();
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	bpf__GearxUp__pfT();
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable__pf = b1l__K2Node_InputActionEvent_Key2__pf;
	bpf__Server_Handbrake__pf(false);
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	b1l__Temp_struct_Variable__pf = b1l__K2Node_InputActionEvent_Key__pf;
	bpf__Server_Handbrake__pf(true);
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ExecuteUbergraph_BP_Camaro__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpf__Server_ExitxVehicle__pfT();
	return; // KCST_GotoReturn
}
void ABP_Camaro_C__pf4077563176::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b1l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_0(40);
}
void ABP_Camaro_C__pf4077563176::bpf__InpAxisEvt_Vehicle_Steering_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_7(38);
}
void ABP_Camaro_C__pf4077563176::bpf__InpAxisEvt_Vehicle_Throttle_K2Node_InputAxisEvent_101__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_8(36);
}
void ABP_Camaro_C__pf4077563176::bpf__InpAxisEvt_Vehicle_Brake_K2Node_InputAxisEvent_148__pf(float bpp__AxisValue__pf)
{
	b1l__K2Node_InputAxisEvent_AxisValue3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_9(34);
}
void ABP_Camaro_C__pf4077563176::bpf__BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__31;
	T__Local__31& bpp__Hit__pf = *const_cast<T__Local__31 *>(&bpp__Hit__pf__const);
	b1l__K2Node_ComponentBoundEvent_HitComponent__pf = bpp__HitComponent__pf;
	b1l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b1l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b1l__K2Node_ComponentBoundEvent_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b1l__K2Node_ComponentBoundEvent_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_12(30);
}
void ABP_Camaro_C__pf4077563176::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_Camaro__pf_6(11);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_Vehicle_Handbrake_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_16(6);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_Vehicle_Handbrake_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_15(3);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_Tab_K2Node_InputKeyEvent_5__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_5(47);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_Vehicle_Lights_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_4(50);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_Vehicle_LookBack_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_2(51);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_Vehicle_LookBack_K2Node_InputActionEvent_11__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_3(23);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_E_K2Node_InputKeyEvent_6__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputKeyEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_14(25);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_Q_K2Node_InputKeyEvent_7__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputKeyEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_13(26);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_8__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputKeyEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_11(28);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_9__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputKeyEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_10(31);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_ChangeView_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_1(53);
}
void ABP_Camaro_C__pf4077563176::bpf__InpActEvt_Interact_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf)
{
	b1l__K2Node_InputActionEvent_Key7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_BP_Camaro__pf_17(1);
}
void ABP_Camaro_C__pf4077563176::bpf__UserConstructionScript__pf()
{
	Super::bpf__UserConstructionScript__pf();
}
void ABP_Camaro_C__pf4077563176::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Vehicles/Camaro/Sounds/Camaro_Engine_Cue.Camaro_Engine_Cue 
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
void ABP_Camaro_C__pf4077563176::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{44, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Vehicles/00_Master_Vehicle/BP_Master_Vehicle.BP_Master_Vehicle_C 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ChildActorComponent 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavArea_Obstacle 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Vehicles/Camaro/Meshes/Camaro.Camaro 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PhysicsAsset /Game/Vehicles/Camaro/Meshes/Camaro_Physics.Camaro_Physics 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpringArmComponent 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ArrowComponent 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{2, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{31, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/Vehicles/00_Master_Vehicle/Curves/Acceleration_Curve.Acceleration_Curve 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  CurveFloat /Game/Vehicles/00_Master_Vehicle/Curves/Steering_Speed_Curve.Steering_Speed_Curve 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Vehicles/00_Master_Vehicle/Materials/M_default.M_default 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  BlueprintGeneratedClass /Game/Vehicles/00_Master_Vehicle/BP_Passenger.BP_Passenger_C 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Vehicles/Camaro/Anims/Camaro_AnimBlueprint.Camaro_AnimBlueprint_C 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Vehicles/Camaro/Anims/Camaro_Driver_AnimBlueprint.Camaro_Driver_AnimBlueprint_C 
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
struct FRegisterHelper__ABP_Camaro_C__pf4077563176
{
	FRegisterHelper__ABP_Camaro_C__pf4077563176()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Vehicles/Camaro/BP_Camaro"), &ABP_Camaro_C__pf4077563176::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Camaro_C__pf4077563176 Instance;
};
FRegisterHelper__ABP_Camaro_C__pf4077563176 FRegisterHelper__ABP_Camaro_C__pf4077563176::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
