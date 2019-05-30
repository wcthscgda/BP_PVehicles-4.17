#include "NativizedAssets.h"
#include "BP_Water_Volume__pf3286898353.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
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
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Components/PostProcessComponent.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PostProcessVolume.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ABP_Water_Volume_C__pf3286898353::ABP_Water_Volume_C__pf3286898353(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_Water_Volume_C__pf3286898353::StaticClass() == GetClass()))
	{
		ABP_Water_Volume_C__pf3286898353::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Box__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	bpv__WaterPlane__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaterPlane"));
	bpv__PostProcess__pf = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));
	bpv__Decal__pf = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal"));
	RootComponent = bpv__Box__pf;
	bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Box__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__0 = (*(AccessPrivateProperty<FVector >((bpv__Box__pf), UBoxComponent::__PPO__BoxExtent() )));
	__Local__0 = FVector(50.000000, 50.000000, 50.000000);
	bpv__Box__pf->ComponentTags = TArray<FName> ();
	bpv__Box__pf->ComponentTags.Reserve(1);
	bpv__Box__pf->ComponentTags.Add(FName(TEXT("Water")));
	if(!bpv__Box__pf->IsTemplate())
	{
		bpv__Box__pf->BodyInstance.FixupData(bpv__Box__pf);
	}
	bpv__WaterPlane__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__WaterPlane__pf->AttachToComponent(bpv__Box__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__WaterPlane__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__WaterPlane__pf->BodyInstance.bEnableGravity = false;
	bpv__WaterPlane__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_Water_Volume_C__pf3286898353::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__WaterPlane__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__WaterPlane__pf->OverrideMaterials.Reserve(1);
	bpv__WaterPlane__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Water_Volume_C__pf3286898353::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__WaterPlane__pf->bGenerateOverlapEvents = false;
	if(!bpv__WaterPlane__pf->IsTemplate())
	{
		bpv__WaterPlane__pf->BodyInstance.FixupData(bpv__WaterPlane__pf);
	}
	bpv__PostProcess__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PostProcess__pf->AttachToComponent(bpv__Box__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PostProcess__pf->Settings.bOverride_SceneColorTint = true;
	bpv__PostProcess__pf->Settings.bOverride_BloomIntensity = true;
	bpv__PostProcess__pf->Settings.bOverride_BloomThreshold = true;
	bpv__PostProcess__pf->Settings.bOverride_LensFlareIntensity = true;
	bpv__PostProcess__pf->Settings.bOverride_LensFlareTint = true;
	bpv__PostProcess__pf->Settings.bOverride_LensFlareBokehSize = true;
	bpv__PostProcess__pf->Settings.bOverride_VignetteIntensity = true;
	bpv__PostProcess__pf->Settings.bOverride_DepthOfFieldFocalDistance = true;
	bpv__PostProcess__pf->Settings.bOverride_DepthOfFieldNearTransitionRegion = true;
	bpv__PostProcess__pf->Settings.bOverride_DepthOfFieldFarTransitionRegion = true;
	bpv__PostProcess__pf->Settings.bOverride_DepthOfFieldNearBlurSize = true;
	bpv__PostProcess__pf->Settings.bOverride_DepthOfFieldFarBlurSize = true;
	bpv__PostProcess__pf->Settings.bOverride_DepthOfFieldMethod = true;
	bpv__PostProcess__pf->Settings.SceneColorTint = FLinearColor(0.078431, 0.298039, 0.400000, 1.000000);
	bpv__PostProcess__pf->Settings.BloomIntensity = 2.675000f;
	bpv__PostProcess__pf->Settings.BloomThreshold = 1.500000f;
	bpv__PostProcess__pf->Settings.LensFlareIntensity = 0.600000f;
	bpv__PostProcess__pf->Settings.LensFlareTint = FLinearColor(0.070000, 0.120000, 0.200000, 1.000000);
	bpv__PostProcess__pf->Settings.LensFlareBokehSize = 7.500000f;
	bpv__PostProcess__pf->Settings.VignetteIntensity = 0.800000f;
	bpv__PostProcess__pf->Settings.DepthOfFieldMethod = EDepthOfFieldMethod::DOFM_Gaussian;
	bpv__PostProcess__pf->Settings.DepthOfFieldFocalDistance = 500.000000f;
	bpv__PostProcess__pf->Settings.DepthOfFieldNearTransitionRegion = 500.000000f;
	bpv__PostProcess__pf->Settings.DepthOfFieldNearBlurSize = 1.000000f;
	bpv__PostProcess__pf->Settings.DepthOfFieldFarBlurSize = 1.000000f;
	bpv__PostProcess__pf->Settings.WeightedBlendables.Array = TArray<FWeightedBlendable> ();
	bpv__PostProcess__pf->Settings.WeightedBlendables.Array.AddUninitialized(1);
	FWeightedBlendable::StaticStruct()->InitializeStruct(bpv__PostProcess__pf->Settings.WeightedBlendables.Array.GetData(), 1);
	auto& __Local__1 = bpv__PostProcess__pf->Settings.WeightedBlendables.Array[0];
	__Local__1.Weight = 1.000000f;
	__Local__1.Object = CastChecked<UObject>(CastChecked<UDynamicClass>(ABP_Water_Volume_C__pf3286898353::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__PostProcess__pf->Priority = 0.500000f;
	bpv__PostProcess__pf->BlendRadius = 2.000000f;
	bpv__PostProcess__pf->bUnbound = false;
	bpv__PostProcess__pf->RelativeScale3D = FVector(4.000000, 4.000000, 1.000000);
	bpv__Decal__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Decal__pf->AttachToComponent(bpv__Box__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Decal__pf->DecalMaterial = CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Water_Volume_C__pf3286898353::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__Decal__pf->DecalSize = FVector(1.000000, 1.000000, 1.000000);
	bpv__Decal__pf->RelativeLocation = FVector(0.000000, 0.000000, -0.100000);
	bpv__WaterxMaterial__pfT = nullptr;
	bpv__VolumexExtent__pfT = FVector(200.000000, 200.000000, 200.000000);
	bpv__ShorexDepth__pfT = 20.000000f;
	bpv__WavexSpeed__pfT = 0.500000f;
	bpv__BasexOpacity__pfT = 0.900000f;
	bpv__WaterxScale__pfT = 256.000000f;
	bpv__VariationxAmmount__pfT = 0.850000f;
	bpv__WaterxDepth__pfT = 580.000000f;
	bpv__WaterxColorxA__pfTT = FLinearColor(0.050980, 0.247059, 0.235294, 1.000000);
	bpv__WaterxColorxB__pfTT = FLinearColor(0.121569, 0.858824, 0.909804, 1.000000);
	bpv__WaterxColorxDeep__pfTT = FLinearColor(0.019608, 0.082353, 0.094118, 1.000000);
	bpv__WaterxColorxShallow__pfTT = FLinearColor(0.078431, 0.298039, 0.400000, 1.000000);
	bpv__FloatxOffset__pfT = 2.000000f;
	bpv__OverlapxComponents__pfT = TArray<UPrimitiveComponent*> ();
	PrimaryActorTick.bCanEverTick = true;
}
void ABP_Water_Volume_C__pf3286898353::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Box__pf)
	{
		bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__WaterPlane__pf)
	{
		bpv__WaterPlane__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PostProcess__pf)
	{
		bpv__PostProcess__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Decal__pf)
	{
		bpv__Decal__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_Water_Volume_C__pf3286898353::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__2 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__2);
	auto __Local__3 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__3);
	__Local__3->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__3->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__3->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__4 = __Local__3->ComponentDelegateBindings[0];
	__Local__4.ComponentPropertyName = FName(TEXT("Box"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__5 = __Local__3->ComponentDelegateBindings[1];
	__Local__5.ComponentPropertyName = FName(TEXT("Box"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
void ABP_Water_Volume_C__pf3286898353::bpf__ExecuteUbergraph_BP_Water_Volume__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	bpf__FloatxActors__pfT();
	// optimized KCST_UnconditionalGoto
	bpf__UprightxActors__pfT();
	return; // KCST_GotoReturn
}
void ABP_Water_Volume_C__pf3286898353::bpf__ExecuteUbergraph_BP_Water_Volume__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetAngularDamping_ReturnValue2__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetLinearDamping_ReturnValue__pf{};
	float bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf{};
	bool bpfv__CallFunc_Array_Contains_ReturnValue__pf{};
	bool bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Array_Contains_ReturnValue__pf = FCustomThunkTemplates::Array_Contains(bpv__OverlapxComponents__pfT, b0l__K2Node_ComponentBoundEvent_OtherComp__pf);
	if (!bpfv__CallFunc_Array_Contains_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpfv__CallFunc_Array_RemoveItem_ReturnValue__pf = FCustomThunkTemplates::Array_RemoveItem(bpv__OverlapxComponents__pfT, b0l__K2Node_ComponentBoundEvent_OtherComp__pf);
	if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp__pf))
	{
		bpfv__CallFunc_GetLinearDamping_ReturnValue__pf = b0l__K2Node_ComponentBoundEvent_OtherComp__pf->GetLinearDamping();
	}
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetLinearDamping_ReturnValue__pf, 2.500000);
	if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp__pf))
	{
		b0l__K2Node_ComponentBoundEvent_OtherComp__pf->SetLinearDamping(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf);
	}
	if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp__pf))
	{
		bpfv__CallFunc_GetAngularDamping_ReturnValue2__pf = b0l__K2Node_ComponentBoundEvent_OtherComp__pf->GetAngularDamping();
	}
	bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpfv__CallFunc_GetAngularDamping_ReturnValue2__pf, 4.000000);
	if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp__pf))
	{
		b0l__K2Node_ComponentBoundEvent_OtherComp__pf->SetAngularDamping(bpfv__CallFunc_Subtract_FloatFloat_ReturnValue__pf);
	}
	return; // KCST_GotoReturn
}
void ABP_Water_Volume_C__pf3286898353::bpf__ExecuteUbergraph_BP_Water_Volume__pf_2(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetAngularDamping_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetLinearDamping_ReturnValue2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				b0l__K2Node_DynamicCast_AsPawn__pf = Cast<APawn>(b0l__K2Node_ComponentBoundEvent_OtherActor2__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsPawn__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__OverlapxComponents__pfT, b0l__K2Node_ComponentBoundEvent_OtherComp2__pf);
			}
		case 5:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp2__pf))
				{
					bpfv__CallFunc_GetLinearDamping_ReturnValue2__pf = b0l__K2Node_ComponentBoundEvent_OtherComp2__pf->GetLinearDamping();
				}
				bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_GetLinearDamping_ReturnValue2__pf, 2.500000);
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp2__pf))
				{
					b0l__K2Node_ComponentBoundEvent_OtherComp2__pf->SetLinearDamping(bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf);
				}
			}
		case 6:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp2__pf))
				{
					bpfv__CallFunc_GetAngularDamping_ReturnValue__pf = b0l__K2Node_ComponentBoundEvent_OtherComp2__pf->GetAngularDamping();
				}
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_GetAngularDamping_ReturnValue__pf, 4.000000);
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp2__pf))
				{
					b0l__K2Node_ComponentBoundEvent_OtherComp2__pf->SetAngularDamping(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Water_Volume_C__pf3286898353::bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_BP_Water_Volume__pf_1(7);
}
void ABP_Water_Volume_C__pf3286898353::bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__6;
	T__Local__6& bpp__SweepResult__pf = *const_cast<T__Local__6 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_Water_Volume__pf_2(2);
}
void ABP_Water_Volume_C__pf3286898353::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_Water_Volume__pf_0(13);
}
void ABP_Water_Volume_C__pf3286898353::bpf__UserConstructionScript__pf()
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X2__pf{};
	float bpfv__CallFunc_BreakVector_Y2__pf{};
	float bpfv__CallFunc_BreakVector_Z2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X3__pf{};
	float bpfv__CallFunc_BreakVector_Y3__pf{};
	float bpfv__CallFunc_BreakVector_Z3__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	if(IsValid(bpv__Box__pf))
	{
		bpv__Box__pf->UBoxComponent::SetBoxExtent(bpv__VolumexExtent__pfT, true);
	}
	UKismetMathLibrary::BreakVector(bpv__VolumexExtent__pfT, /*out*/ bpfv__CallFunc_BreakVector_X3__pf, /*out*/ bpfv__CallFunc_BreakVector_Y3__pf, /*out*/ bpfv__CallFunc_BreakVector_Z3__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpfv__CallFunc_BreakVector_Z3__pf);
	if(IsValid(bpv__WaterPlane__pf))
	{
		bpv__WaterPlane__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
	}
	UKismetMathLibrary::BreakVector(bpv__VolumexExtent__pfT, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakVector_Y2__pf, 50.000000);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakVector_X2__pf, 50.000000);
	bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, 1.000000);
	if(IsValid(bpv__WaterPlane__pf))
	{
		bpv__WaterPlane__pf->SetRelativeScale3D(bpfv__CallFunc_MakeVector_ReturnValue2__pf);
	}
	if(IsValid(bpv__Decal__pf))
	{
		bpv__Decal__pf->SetRelativeScale3D(bpv__VolumexExtent__pfT);
	}
	if(IsValid(bpv__WaterPlane__pf))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__WaterPlane__pf->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_Water_Volume_C__pf3286898353::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	}
	bpv__WaterxMaterial__pfT = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
	if(IsValid(bpv__WaterPlane__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__WaterPlane__pf->USceneComponent::K2_GetComponentLocation();
	}
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	if(IsValid(bpv__WaterxMaterial__pfT))
	{
		bpv__WaterxMaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Water Height")), bpfv__CallFunc_BreakVector_Z__pf);
	}
	if(IsValid(bpv__WaterxMaterial__pfT))
	{
		bpv__WaterxMaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Shore Depth")), bpv__ShorexDepth__pfT);
	}
	if(IsValid(bpv__WaterxMaterial__pfT))
	{
		bpv__WaterxMaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Wave Speed")), bpv__WavexSpeed__pfT);
	}
	if(IsValid(bpv__WaterxMaterial__pfT))
	{
		bpv__WaterxMaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("BaseOpacity")), bpv__BasexOpacity__pfT);
	}
	if(IsValid(bpv__WaterxMaterial__pfT))
	{
		bpv__WaterxMaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Water Scale")), bpv__WaterxScale__pfT);
	}
	if(IsValid(bpv__WaterxMaterial__pfT))
	{
		bpv__WaterxMaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Variation Amount")), bpv__VariationxAmmount__pfT);
	}
	if(IsValid(bpv__WaterxMaterial__pfT))
	{
		bpv__WaterxMaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Water Depth")), bpv__WaterxDepth__pfT);
	}
	if(IsValid(bpv__WaterxMaterial__pfT))
	{
		bpv__WaterxMaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("WaterColor A")), bpv__WaterxColorxA__pfTT);
	}
	if(IsValid(bpv__WaterxMaterial__pfT))
	{
		bpv__WaterxMaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("WaterColor B")), bpv__WaterxColorxB__pfTT);
	}
	if(IsValid(bpv__WaterxMaterial__pfT))
	{
		bpv__WaterxMaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("DeepWater")), bpv__WaterxColorxDeep__pfTT);
	}
	if(IsValid(bpv__WaterxMaterial__pfT))
	{
		bpv__WaterxMaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("ShallowWater")), bpv__WaterxColorxShallow__pfTT);
	}
}
void ABP_Water_Volume_C__pf3286898353::bpf__FloatxActors__pfT()
{
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetComponentBounds_Origin__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetComponentBounds_BoxExtent__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetComponentBounds_SphereRadius__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	float bpfv__CallFunc_BreakVector_X2__pf{};
	float bpfv__CallFunc_BreakVector_Y2__pf{};
	float bpfv__CallFunc_BreakVector_Z2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	UPrimitiveComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetComponentBounds_Origin2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetComponentBounds_BoxExtent2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetComponentBounds_SphereRadius2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X3__pf{};
	float bpfv__CallFunc_BreakVector_Y3__pf{};
	float bpfv__CallFunc_BreakVector_Z3__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X4__pf{};
	float bpfv__CallFunc_BreakVector_Y4__pf{};
	float bpfv__CallFunc_BreakVector_Z4__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf{};
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
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__OverlapxComponents__pfT);
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
				FCustomThunkTemplates::Array_Get(bpv__OverlapxComponents__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->IsSimulatingPhysics(FName(TEXT("None")));
				}
				if (!bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				UKismetSystemLibrary::GetComponentBounds(bpv__Box__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_Origin__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_BoxExtent__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_SphereRadius__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_BoxExtent__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_Origin__pf, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z2__pf, bpfv__CallFunc_BreakVector_Z__pf);
				FCustomThunkTemplates::Array_Get(bpv__OverlapxComponents__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UKismetSystemLibrary::GetComponentBounds(bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_Origin2__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_BoxExtent2__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_SphereRadius2__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_BoxExtent2__pf, /*out*/ bpfv__CallFunc_BreakVector_X3__pf, /*out*/ bpfv__CallFunc_BreakVector_Y3__pf, /*out*/ bpfv__CallFunc_BreakVector_Z3__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakVector_Z3__pf, bpv__FloatxOffset__pfT);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_Origin2__pf, /*out*/ bpfv__CallFunc_BreakVector_X4__pf, /*out*/ bpfv__CallFunc_BreakVector_Y4__pf, /*out*/ bpfv__CallFunc_BreakVector_Z4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z4__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 1500.000000);
				FCustomThunkTemplates::Array_Get(bpv__OverlapxComponents__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->AddForce(bpfv__CallFunc_MakeVector_ReturnValue2__pf, FName(TEXT("None")), true);
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
		case 10:
			{
				UKismetSystemLibrary::GetComponentBounds(bpv__Box__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_Origin__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_BoxExtent__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_SphereRadius__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_BoxExtent__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_Origin__pf, /*out*/ bpfv__CallFunc_BreakVector_X2__pf, /*out*/ bpfv__CallFunc_BreakVector_Y2__pf, /*out*/ bpfv__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z2__pf, bpfv__CallFunc_BreakVector_Z__pf);
				FCustomThunkTemplates::Array_Get(bpv__OverlapxComponents__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				UKismetSystemLibrary::GetComponentBounds(bpfv__CallFunc_Array_Get_Item__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_Origin2__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_BoxExtent2__pf, /*out*/ bpfv__CallFunc_GetComponentBounds_SphereRadius2__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_BoxExtent2__pf, /*out*/ bpfv__CallFunc_BreakVector_X3__pf, /*out*/ bpfv__CallFunc_BreakVector_Y3__pf, /*out*/ bpfv__CallFunc_BreakVector_Z3__pf);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_BreakVector_Z3__pf, bpv__FloatxOffset__pfT);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetComponentBounds_Origin2__pf, /*out*/ bpfv__CallFunc_BreakVector_X4__pf, /*out*/ bpfv__CallFunc_BreakVector_Y4__pf, /*out*/ bpfv__CallFunc_BreakVector_Z4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_BreakVector_Z4__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 11:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 950.000000);
				FCustomThunkTemplates::Array_Get(bpv__OverlapxComponents__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->AddForce(bpfv__CallFunc_MakeVector_ReturnValue__pf, FName(TEXT("None")), true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_Water_Volume_C__pf3286898353::bpf__UprightxActors__pfT()
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	UPrimitiveComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue__pf{};
	float bpfv__CallFunc_FClamp_ReturnValue2__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
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
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__OverlapxComponents__pfT);
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
				__StateStack.Push(7);
			}
		case 6:
			{
				FCustomThunkTemplates::Array_Get(bpv__OverlapxComponents__pfT, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpfv__CallFunc_Array_Get_Item__pf->USceneComponent::K2_GetComponentRotation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_FClamp_ReturnValue__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_BreakRotator_Roll__pf, -90.000000, 90.000000);
				bpfv__CallFunc_FClamp_ReturnValue2__pf = UKismetMathLibrary::FClamp(bpfv__CallFunc_BreakRotator_Pitch__pf, -90.000000, 90.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_FClamp_ReturnValue__pf, 500.000000);
				bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_FClamp_ReturnValue2__pf, 500.000000);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf, 0.000000);
				bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf, 1.000000);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->AddAngularImpulse(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, FName(TEXT("None")), true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 7:
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
void ABP_Water_Volume_C__pf3286898353::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{106, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Environment/Water/Meshes/SM_OceanWater.SM_OceanWater 
		{107, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/Environment/Water/Materials/M_TranslucentWater_Inst.M_TranslucentWater_Inst 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Environment/Water/Materials/PP_WaterDeformation.PP_WaterDeformation 
		{109, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Environment/Water/Materials/M_Caustic.M_Caustic 
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
void ABP_Water_Volume_C__pf3286898353::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.BoxComponent 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavArea_Obstacle 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PostProcessComponent 
		{111, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DecalComponent 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{12, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{31, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
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
struct FRegisterHelper__ABP_Water_Volume_C__pf3286898353
{
	FRegisterHelper__ABP_Water_Volume_C__pf3286898353()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Environment/BP_Water_Volume"), &ABP_Water_Volume_C__pf3286898353::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_Water_Volume_C__pf3286898353 Instance;
};
FRegisterHelper__ABP_Water_Volume_C__pf3286898353 FRegisterHelper__ABP_Water_Volume_C__pf3286898353::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
