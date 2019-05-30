#include "NativizedAssets.h"
#include "Environment_BP__pf3286898353.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
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
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Components/DirectionalLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Components/SkyLightComponent.h"
#include "Runtime/Engine/Classes/Components/PostProcessComponent.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PostProcessVolume.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
AEnvironment_BP_C__pf3286898353::AEnvironment_BP_C__pf3286898353(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AEnvironment_BP_C__pf3286898353::StaticClass() == GetClass()))
	{
		AEnvironment_BP_C__pf3286898353::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Base__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Base"));
	bpv__SkyxSpherexmesh__pfTT = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sky Sphere mesh"));
	bpv__Sun_Light__pf = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Sun_Light"));
	bpv__Sky_Light__pf = CreateDefaultSubobject<USkyLightComponent>(TEXT("Sky_Light"));
	bpv__PostProcess__pf = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));
	RootComponent = bpv__Base__pf;
	bpv__Base__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Base__pf->Mobility = EComponentMobility::Type::Static;
	bpv__SkyxSpherexmesh__pfTT->CreationMethod = EComponentCreationMethod::Native;
	bpv__SkyxSpherexmesh__pfTT->AttachToComponent(bpv__Base__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SkyxSpherexmesh__pfTT->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__SkyxSpherexmesh__pfTT->BodyInstance.bAutoWeld = false;
	auto& __Local__0 = (*(AccessPrivateProperty<float >(&(bpv__SkyxSpherexmesh__pfTT->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	__Local__0 = 0.000000f;
	bpv__SkyxSpherexmesh__pfTT->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AEnvironment_BP_C__pf3286898353::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__SkyxSpherexmesh__pfTT->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__SkyxSpherexmesh__pfTT->OverrideMaterials.Reserve(1);
	bpv__SkyxSpherexmesh__pfTT->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnvironment_BP_C__pf3286898353::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__SkyxSpherexmesh__pfTT->bGenerateOverlapEvents = false;
	bpv__SkyxSpherexmesh__pfTT->bReceivesDecals = false;
	bpv__SkyxSpherexmesh__pfTT->CastShadow = false;
	bpv__SkyxSpherexmesh__pfTT->bAffectDynamicIndirectLighting = false;
	bpv__SkyxSpherexmesh__pfTT->bCastDynamicShadow = false;
	bpv__SkyxSpherexmesh__pfTT->bCastStaticShadow = false;
	bpv__SkyxSpherexmesh__pfTT->bAbsoluteRotation = true;
	bpv__SkyxSpherexmesh__pfTT->RelativeScale3D = FVector(400.000000, 400.000000, 400.000000);
	bpv__SkyxSpherexmesh__pfTT->Mobility = EComponentMobility::Type::Static;
	static TWeakObjectPtr<UProperty> __Local__2{};
	const UProperty* __Local__1 = __Local__2.Get();
	if (nullptr == __Local__1)
	{
		__Local__1 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__1);
		__Local__2 = __Local__1;
	}
	(((UBoolProperty*)__Local__1)->SetPropertyValue_InContainer((bpv__SkyxSpherexmesh__pfTT), false, 0));
	if(!bpv__SkyxSpherexmesh__pfTT->IsTemplate())
	{
		bpv__SkyxSpherexmesh__pfTT->BodyInstance.FixupData(bpv__SkyxSpherexmesh__pfTT);
	}
	bpv__Sun_Light__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sun_Light__pf->AttachToComponent(bpv__Base__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sun_Light__pf->bUsedAsAtmosphereSunLight = true;
	bpv__Sun_Light__pf->bAffectDynamicIndirectLighting = true;
	bpv__Sun_Light__pf->BloomScale = 0.100000f;
	bpv__Sun_Light__pf->LightGuid = FGuid(0xDD4DA85F, 0x4E40FF46, 0x3987CA8D, 0xBB829DEC);
	bpv__Sun_Light__pf->Intensity = 5.000000f;
	bpv__Sun_Light__pf->CastStaticShadows = false;
	bpv__Sun_Light__pf->RelativeLocation = FVector(0.000000, 0.000000, 400.000000);
	bpv__Sun_Light__pf->RelativeRotation = FRotator(-90.000000, 0.000000, 0.000000);
	bpv__Sky_Light__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sky_Light__pf->AttachToComponent(bpv__Base__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Sky_Light__pf->LightGuid = FGuid(0x1D2A90BE, 0x43CF9FA7, 0xE59590AD, 0x4AD9F813);
	bpv__Sky_Light__pf->Intensity = 0.400000f;
	bpv__Sky_Light__pf->RelativeLocation = FVector(0.000000, 0.000000, 200.000000);
	bpv__Sky_Light__pf->Mobility = EComponentMobility::Type::Movable;
	bpv__PostProcess__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PostProcess__pf->AttachToComponent(bpv__Base__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PostProcess__pf->Settings.bOverride_BloomMethod = true;
	bpv__PostProcess__pf->Settings.bOverride_BloomIntensity = true;
	bpv__PostProcess__pf->Settings.bOverride_BloomThreshold = true;
	bpv__PostProcess__pf->Settings.bOverride_AutoExposureLowPercent = true;
	bpv__PostProcess__pf->Settings.bOverride_AutoExposureHighPercent = true;
	bpv__PostProcess__pf->Settings.bOverride_AutoExposureMinBrightness = true;
	bpv__PostProcess__pf->Settings.bOverride_AutoExposureMaxBrightness = true;
	bpv__PostProcess__pf->Settings.bOverride_AutoExposureBias = true;
	bpv__PostProcess__pf->Settings.bOverride_AmbientOcclusionIntensity = true;
	bpv__PostProcess__pf->Settings.bOverride_AmbientOcclusionRadius = true;
	bpv__PostProcess__pf->Settings.bOverride_MotionBlurAmount = true;
	bpv__PostProcess__pf->Settings.bOverride_MotionBlurMax = true;
	bpv__PostProcess__pf->Settings.AutoExposureLowPercent = 50.000000f;
	bpv__PostProcess__pf->Settings.AutoExposureMinBrightness = 1.000000f;
	bpv__PostProcess__pf->Settings.AutoExposureMaxBrightness = 1.000000f;
	bpv__PostProcess__pf->Settings.AmbientOcclusionIntensity = 0.200000f;
	bpv__PostProcess__pf->Settings.AmbientOcclusionRadius = 20.000000f;
	bpv__PostProcess__pf->Settings.MotionBlurAmount = 0.150000f;
	bpv__PostProcess__pf->Settings.MotionBlurMax = 0.150000f;
	bpv__PostProcess__pf->Settings.WeightedBlendables.Array = TArray<FWeightedBlendable> ();
	bpv__PostProcess__pf->Settings.WeightedBlendables.Array.AddUninitialized(1);
	FWeightedBlendable::StaticStruct()->InitializeStruct(bpv__PostProcess__pf->Settings.WeightedBlendables.Array.GetData(), 1);
	auto& __Local__3 = bpv__PostProcess__pf->Settings.WeightedBlendables.Array[0];
	__Local__3.Weight = 1.000000f;
	__Local__3.Object = CastChecked<UObject>(CastChecked<UDynamicClass>(AEnvironment_BP_C__pf3286898353::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__PostProcess__pf->RelativeRotation = FRotator(-90.000000, 0.000000, 30.016478);
	bpv__Time_Flow_Cloud_Color_C8ACAA514EF486185222D2B3D8685635__pf = FLinearColor(0.000000, 0.000000, 0.000000, 0.000000);
	bpv__Time_Flow_Zenith_Color_C8ACAA514EF486185222D2B3D8685635__pf = FLinearColor(0.000000, 0.000000, 0.000000, 0.000000);
	bpv__Time_Flow_Horizon_Color_C8ACAA514EF486185222D2B3D8685635__pf = FLinearColor(0.000000, 0.000000, 0.000000, 0.000000);
	bpv__Time_Flow_TimeofDay_C8ACAA514EF486185222D2B3D8685635__pf = 0.000000f;
	bpv__Time_Flow_Horizon_Falloff_C8ACAA514EF486185222D2B3D8685635__pf = 0.000000f;
	bpv__Time_Flow_Cloud_Opacity_C8ACAA514EF486185222D2B3D8685635__pf = 0.000000f;
	bpv__Time_Flow_Sun_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf = 0.000000f;
	bpv__Time_Flow_Sky_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf = 0.000000f;
	bpv__Time_Flow_Sun_Light_Yaw_C8ACAA514EF486185222D2B3D8685635__pf = 0.000000f;
	bpv__Time_Flow_Sun_Light_Pitch_C8ACAA514EF486185222D2B3D8685635__pf = 0.000000f;
	bpv__Time_Flow__Direction_C8ACAA514EF486185222D2B3D8685635__pf = ETimelineDirection::Type::Forward;
	bpv__Time_Flow__pf = nullptr;
	bpv__Skyxmaterial__pfT = nullptr;
	bpv__Sunxbrightness__pfT = 600.000000f;
	bpv__Cloudxspeed__pfT = 1.000000f;
	bpv__Starsxbrightness__pfT = 1.000000f;
	bpv__StartxTime__pfT = 12.000000f;
	bpv__Time__pf = 0.000000f;
}
void AEnvironment_BP_C__pf3286898353::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Base__pf)
	{
		bpv__Base__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SkyxSpherexmesh__pfTT)
	{
		bpv__SkyxSpherexmesh__pfTT->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sun_Light__pf)
	{
		bpv__Sun_Light__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Sky_Light__pf)
	{
		bpv__Sky_Light__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PostProcess__pf)
	{
		bpv__PostProcess__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AEnvironment_BP_C__pf3286898353::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__4 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_0"));
	InDynamicClass->ComponentTemplates.Add(__Local__4);
	auto __Local__5 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Time_Flow_Template"));
	InDynamicClass->Timelines.Add(__Local__5);
	__Local__5->TimelineLength = 24.000000f;
	__Local__5->bLoop = true;
	__Local__5->bValidatedAsWired = true;
	__Local__5->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__5->FloatTracks.AddUninitialized(7);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__5->FloatTracks.GetData(), 7);
	auto& __Local__6 = __Local__5->FloatTracks[0];
	auto __Local__7 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__7);
	__Local__7->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__7->FloatCurve.Keys.AddUninitialized(19);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__7->FloatCurve.Keys.GetData(), 19);
	auto& __Local__8 = __Local__7->FloatCurve.Keys[0];
	__Local__8.Value = 90.000000f;
	auto& __Local__9 = __Local__7->FloatCurve.Keys[1];
	__Local__9.Time = 2.978858f;
	__Local__9.Value = 88.268425f;
	auto& __Local__10 = __Local__7->FloatCurve.Keys[2];
	__Local__10.Time = 3.885466f;
	__Local__10.Value = 71.316826f;
	auto& __Local__11 = __Local__7->FloatCurve.Keys[3];
	__Local__11.Time = 4.632081f;
	__Local__11.Value = 30.148613f;
	auto& __Local__12 = __Local__7->FloatCurve.Keys[4];
	__Local__12.Time = 5.325366f;
	__Local__12.Value = -2.947380f;
	auto& __Local__13 = __Local__7->FloatCurve.Keys[5];
	__Local__13.Time = 6.082648f;
	__Local__13.Value = -32.007324f;
	auto& __Local__14 = __Local__7->FloatCurve.Keys[6];
	__Local__14.Time = 7.127910f;
	__Local__14.Value = -56.223877f;
	auto& __Local__15 = __Local__7->FloatCurve.Keys[7];
	__Local__15.Time = 9.143772f;
	__Local__15.Value = -76.404358f;
	auto& __Local__16 = __Local__7->FloatCurve.Keys[8];
	__Local__16.Time = 11.133334f;
	__Local__16.Value = -84.719757f;
	auto& __Local__17 = __Local__7->FloatCurve.Keys[9];
	__Local__17.Time = 12.000000f;
	__Local__17.Value = -90.000008f;
	auto& __Local__18 = __Local__7->FloatCurve.Keys[10];
	__Local__18.Time = 12.733332f;
	__Local__18.Value = -95.279724f;
	auto& __Local__19 = __Local__7->FloatCurve.Keys[11];
	__Local__19.Time = 14.003031f;
	__Local__19.Value = -109.197624f;
	auto& __Local__20 = __Local__7->FloatCurve.Keys[12];
	__Local__20.Time = 15.994129f;
	__Local__20.Value = -128.033783f;
	auto& __Local__21 = __Local__7->FloatCurve.Keys[13];
	__Local__21.Time = 17.957573f;
	__Local__21.Value = -154.543915f;
	auto& __Local__22 = __Local__7->FloatCurve.Keys[14];
	__Local__22.Time = 19.566999f;
	__Local__22.Value = -176.604294f;
	auto& __Local__23 = __Local__7->FloatCurve.Keys[15];
	__Local__23.Time = 20.252899f;
	__Local__23.Value = -198.896500f;
	auto& __Local__24 = __Local__7->FloatCurve.Keys[16];
	__Local__24.Time = 21.220190f;
	__Local__24.Value = -254.627014f;
	auto& __Local__25 = __Local__7->FloatCurve.Keys[17];
	__Local__25.Time = 22.000000f;
	__Local__25.Value = -270.000000f;
	auto& __Local__26 = __Local__7->FloatCurve.Keys[18];
	__Local__26.Time = 24.000002f;
	__Local__26.Value = -270.000000f;
	__Local__6.CurveFloat = __Local__7;
	__Local__6.TrackName = FName(TEXT("Sun_Light_Pitch"));
	auto& __Local__27 = __Local__5->FloatTracks[1];
	auto __Local__28 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_1"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__28);
	__Local__28->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__28->FloatCurve.Keys.AddUninitialized(3);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__28->FloatCurve.Keys.GetData(), 3);
	auto& __Local__29 = __Local__28->FloatCurve.Keys[0];
	__Local__29.Value = -10.000000f;
	auto& __Local__30 = __Local__28->FloatCurve.Keys[1];
	__Local__30.Time = 17.966772f;
	__Local__30.Value = 49.913727f;
	auto& __Local__31 = __Local__28->FloatCurve.Keys[2];
	__Local__31.Time = 24.073982f;
	__Local__31.Value = 51.431625f;
	__Local__27.CurveFloat = __Local__28;
	__Local__27.TrackName = FName(TEXT("Sun_Light_Yaw"));
	auto& __Local__32 = __Local__5->FloatTracks[2];
	auto __Local__33 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_2"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__33);
	__Local__33->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__33->FloatCurve.Keys.AddUninitialized(10);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__33->FloatCurve.Keys.GetData(), 10);
	auto& __Local__34 = __Local__33->FloatCurve.Keys[0];
	__Local__34.Time = 4.500000f;
	__Local__34.Value = 1.500000f;
	auto& __Local__35 = __Local__33->FloatCurve.Keys[1];
	__Local__35.Time = 5.000000f;
	__Local__35.Value = 0.820000f;
	auto& __Local__36 = __Local__33->FloatCurve.Keys[2];
	__Local__36.Time = 6.173853f;
	__Local__36.Value = 0.787764f;
	auto& __Local__37 = __Local__33->FloatCurve.Keys[3];
	__Local__37.Time = 8.082653f;
	__Local__37.Value = 0.814108f;
	auto& __Local__38 = __Local__33->FloatCurve.Keys[4];
	__Local__38.Time = 9.881360f;
	__Local__38.Value = 1.200000f;
	auto& __Local__39 = __Local__33->FloatCurve.Keys[5];
	__Local__39.Time = 12.000000f;
	__Local__39.Value = 1.500000f;
	auto& __Local__40 = __Local__33->FloatCurve.Keys[6];
	__Local__40.Time = 14.395216f;
	__Local__40.Value = 1.200000f;
	auto& __Local__41 = __Local__33->FloatCurve.Keys[7];
	__Local__41.Time = 16.633081f;
	__Local__41.Value = 0.700000f;
	auto& __Local__42 = __Local__33->FloatCurve.Keys[8];
	__Local__42.Time = 17.976259f;
	__Local__42.Value = 0.638689f;
	auto& __Local__43 = __Local__33->FloatCurve.Keys[9];
	__Local__43.Time = 20.200001f;
	__Local__43.Value = 1.500000f;
	__Local__32.CurveFloat = __Local__33;
	__Local__32.TrackName = FName(TEXT("Sky_Light_Intensity"));
	auto& __Local__44 = __Local__5->FloatTracks[3];
	auto __Local__45 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_4"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__45);
	__Local__45->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__45->FloatCurve.Keys.AddUninitialized(11);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__45->FloatCurve.Keys.GetData(), 11);
	auto& __Local__46 = __Local__45->FloatCurve.Keys[0];
	__Local__46.Time = 4.700000f;
	__Local__46.Value = 0.500000f;
	auto& __Local__47 = __Local__45->FloatCurve.Keys[1];
	__Local__47.Time = 5.044261f;
	__Local__47.Value = 2.077500f;
	auto& __Local__48 = __Local__45->FloatCurve.Keys[2];
	__Local__48.Time = 5.973566f;
	__Local__48.Value = 5.185000f;
	auto& __Local__49 = __Local__45->FloatCurve.Keys[3];
	__Local__49.Time = 7.359076f;
	__Local__49.Value = 7.055000f;
	auto& __Local__50 = __Local__45->FloatCurve.Keys[4];
	__Local__50.Time = 8.889065f;
	__Local__50.Value = 7.790727f;
	auto& __Local__51 = __Local__45->FloatCurve.Keys[5];
	__Local__51.Time = 12.000001f;
	__Local__51.Value = 8.000000f;
	auto& __Local__52 = __Local__45->FloatCurve.Keys[6];
	__Local__52.Time = 13.853016f;
	__Local__52.Value = 7.868370f;
	auto& __Local__53 = __Local__45->FloatCurve.Keys[7];
	__Local__53.Time = 15.361669f;
	__Local__53.Value = 7.247236f;
	auto& __Local__54 = __Local__45->FloatCurve.Keys[8];
	__Local__54.Time = 17.289513f;
	__Local__54.Value = 5.408004f;
	auto& __Local__55 = __Local__45->FloatCurve.Keys[9];
	__Local__55.Time = 19.196709f;
	__Local__55.Value = 2.060000f;
	auto& __Local__56 = __Local__45->FloatCurve.Keys[10];
	__Local__56.Time = 20.000000f;
	__Local__56.Value = 0.500000f;
	__Local__44.CurveFloat = __Local__45;
	__Local__44.TrackName = FName(TEXT("Sun_Light_Intensity"));
	auto& __Local__57 = __Local__5->FloatTracks[4];
	auto __Local__58 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_3"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__58);
	__Local__58->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__58->FloatCurve.Keys.AddUninitialized(4);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__58->FloatCurve.Keys.GetData(), 4);
	auto& __Local__59 = __Local__58->FloatCurve.Keys[0];
	__Local__59.Time = 5.300000f;
	__Local__59.Value = 1.000000f;
	auto& __Local__60 = __Local__58->FloatCurve.Keys[1];
	__Local__60.Time = 6.500000f;
	__Local__60.Value = 1.600000f;
	auto& __Local__61 = __Local__58->FloatCurve.Keys[2];
	__Local__61.Time = 18.000000f;
	__Local__61.Value = 1.600000f;
	auto& __Local__62 = __Local__58->FloatCurve.Keys[3];
	__Local__62.Time = 19.200001f;
	__Local__62.Value = 1.000000f;
	__Local__57.CurveFloat = __Local__58;
	__Local__57.TrackName = FName(TEXT("Cloud Opacity"));
	auto& __Local__63 = __Local__5->FloatTracks[5];
	auto __Local__64 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_5"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__64);
	__Local__64->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__64->FloatCurve.Keys.AddUninitialized(4);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__64->FloatCurve.Keys.GetData(), 4);
	auto& __Local__65 = __Local__64->FloatCurve.Keys[0];
	__Local__65.Time = 6.000000f;
	__Local__65.Value = 2.000000f;
	auto& __Local__66 = __Local__64->FloatCurve.Keys[1];
	__Local__66.Time = 7.000000f;
	__Local__66.Value = 10.000000f;
	auto& __Local__67 = __Local__64->FloatCurve.Keys[2];
	__Local__67.Time = 18.000000f;
	__Local__67.Value = 10.000000f;
	auto& __Local__68 = __Local__64->FloatCurve.Keys[3];
	__Local__68.Time = 19.000000f;
	__Local__68.Value = 2.000000f;
	__Local__63.CurveFloat = __Local__64;
	__Local__63.TrackName = FName(TEXT("Horizon Falloff"));
	auto& __Local__69 = __Local__5->FloatTracks[6];
	auto __Local__70 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_6"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__70);
	__Local__70->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__70->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__70->FloatCurve.Keys.GetData(), 2);
	auto& __Local__71 = __Local__70->FloatCurve.Keys[0];
	auto& __Local__72 = __Local__70->FloatCurve.Keys[1];
	__Local__72.Time = 24.000000f;
	__Local__72.Value = 24.000000f;
	__Local__69.CurveFloat = __Local__70;
	__Local__69.TrackName = FName(TEXT("TimeofDay"));
	__Local__5->LinearColorTracks = TArray<FTTLinearColorTrack> ();
	__Local__5->LinearColorTracks.AddUninitialized(3);
	FTTLinearColorTrack::StaticStruct()->InitializeStruct(__Local__5->LinearColorTracks.GetData(), 3);
	auto& __Local__73 = __Local__5->LinearColorTracks[0];
	auto __Local__74 = NewObject<UCurveLinearColor>(InDynamicClass, UCurveLinearColor::StaticClass(), TEXT("CurveLinearColor_0"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__74);
	__Local__74->FloatCurves[0].Keys = TArray<FRichCurveKey> ();
	__Local__74->FloatCurves[0].Keys.AddUninitialized(8);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__74->FloatCurves[0].Keys.GetData(), 8);
	auto& __Local__75 = __Local__74->FloatCurves[0].Keys[0];
	__Local__75.Value = 0.078431f;
	auto& __Local__76 = __Local__74->FloatCurves[0].Keys[1];
	__Local__76.Time = 4.500000f;
	__Local__76.Value = 0.078431f;
	auto& __Local__77 = __Local__74->FloatCurves[0].Keys[2];
	__Local__77.Time = 5.300000f;
	__Local__77.Value = 0.705882f;
	auto& __Local__78 = __Local__74->FloatCurves[0].Keys[3];
	__Local__78.Time = 6.500000f;
	__Local__78.Value = 1.000000f;
	auto& __Local__79 = __Local__74->FloatCurves[0].Keys[4];
	__Local__79.Time = 18.000000f;
	__Local__79.Value = 1.000000f;
	auto& __Local__80 = __Local__74->FloatCurves[0].Keys[5];
	__Local__80.Time = 19.200001f;
	__Local__80.Value = 0.705882f;
	auto& __Local__81 = __Local__74->FloatCurves[0].Keys[6];
	__Local__81.Time = 20.000000f;
	__Local__81.Value = 0.078431f;
	auto& __Local__82 = __Local__74->FloatCurves[0].Keys[7];
	__Local__82.Time = 24.000000f;
	__Local__82.Value = 0.078431f;
	__Local__74->FloatCurves[1].Keys = TArray<FRichCurveKey> ();
	__Local__74->FloatCurves[1].Keys.AddUninitialized(8);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__74->FloatCurves[1].Keys.GetData(), 8);
	auto& __Local__83 = __Local__74->FloatCurves[1].Keys[0];
	__Local__83.Value = 0.078431f;
	auto& __Local__84 = __Local__74->FloatCurves[1].Keys[1];
	__Local__84.Time = 4.500000f;
	__Local__84.Value = 0.078431f;
	auto& __Local__85 = __Local__74->FloatCurves[1].Keys[2];
	__Local__85.Time = 5.300000f;
	__Local__85.Value = 0.207843f;
	auto& __Local__86 = __Local__74->FloatCurves[1].Keys[3];
	__Local__86.Time = 6.500000f;
	__Local__86.Value = 1.000000f;
	auto& __Local__87 = __Local__74->FloatCurves[1].Keys[4];
	__Local__87.Time = 18.000000f;
	__Local__87.Value = 1.000000f;
	auto& __Local__88 = __Local__74->FloatCurves[1].Keys[5];
	__Local__88.Time = 19.200001f;
	__Local__88.Value = 0.207843f;
	auto& __Local__89 = __Local__74->FloatCurves[1].Keys[6];
	__Local__89.Time = 20.000000f;
	__Local__89.Value = 0.078431f;
	auto& __Local__90 = __Local__74->FloatCurves[1].Keys[7];
	__Local__90.Time = 24.000000f;
	__Local__90.Value = 0.078431f;
	__Local__74->FloatCurves[2].Keys = TArray<FRichCurveKey> ();
	__Local__74->FloatCurves[2].Keys.AddUninitialized(8);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__74->FloatCurves[2].Keys.GetData(), 8);
	auto& __Local__91 = __Local__74->FloatCurves[2].Keys[0];
	__Local__91.Value = 0.078431f;
	auto& __Local__92 = __Local__74->FloatCurves[2].Keys[1];
	__Local__92.Time = 4.500000f;
	__Local__92.Value = 0.078431f;
	auto& __Local__93 = __Local__74->FloatCurves[2].Keys[2];
	__Local__93.Time = 5.300000f;
	__Local__93.Value = 0.113725f;
	auto& __Local__94 = __Local__74->FloatCurves[2].Keys[3];
	__Local__94.Time = 6.500000f;
	__Local__94.Value = 1.000000f;
	auto& __Local__95 = __Local__74->FloatCurves[2].Keys[4];
	__Local__95.Time = 18.000000f;
	__Local__95.Value = 1.000000f;
	auto& __Local__96 = __Local__74->FloatCurves[2].Keys[5];
	__Local__96.Time = 19.200001f;
	__Local__96.Value = 0.113725f;
	auto& __Local__97 = __Local__74->FloatCurves[2].Keys[6];
	__Local__97.Time = 20.000000f;
	__Local__97.Value = 0.078431f;
	auto& __Local__98 = __Local__74->FloatCurves[2].Keys[7];
	__Local__98.Time = 24.000000f;
	__Local__98.Value = 0.078431f;
	__Local__74->FloatCurves[3].Keys = TArray<FRichCurveKey> ();
	__Local__74->FloatCurves[3].Keys.AddUninitialized(8);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__74->FloatCurves[3].Keys.GetData(), 8);
	auto& __Local__99 = __Local__74->FloatCurves[3].Keys[0];
	__Local__99.Value = 1.000000f;
	auto& __Local__100 = __Local__74->FloatCurves[3].Keys[1];
	__Local__100.Time = 4.500000f;
	__Local__100.Value = 1.000000f;
	auto& __Local__101 = __Local__74->FloatCurves[3].Keys[2];
	__Local__101.Time = 5.300000f;
	__Local__101.Value = 1.000000f;
	auto& __Local__102 = __Local__74->FloatCurves[3].Keys[3];
	__Local__102.Time = 6.500000f;
	__Local__102.Value = 1.000000f;
	auto& __Local__103 = __Local__74->FloatCurves[3].Keys[4];
	__Local__103.Time = 18.000000f;
	__Local__103.Value = 1.000000f;
	auto& __Local__104 = __Local__74->FloatCurves[3].Keys[5];
	__Local__104.Time = 19.200001f;
	__Local__104.Value = 1.000000f;
	auto& __Local__105 = __Local__74->FloatCurves[3].Keys[6];
	__Local__105.Time = 20.000000f;
	__Local__105.Value = 1.000000f;
	auto& __Local__106 = __Local__74->FloatCurves[3].Keys[7];
	__Local__106.Time = 24.000000f;
	__Local__106.Value = 1.000000f;
	__Local__73.CurveLinearColor = __Local__74;
	__Local__73.TrackName = FName(TEXT("Horizon Color"));
	auto& __Local__107 = __Local__5->LinearColorTracks[1];
	auto __Local__108 = NewObject<UCurveLinearColor>(InDynamicClass, UCurveLinearColor::StaticClass(), TEXT("CurveLinearColor_1"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__108);
	__Local__108->FloatCurves[0].Keys = TArray<FRichCurveKey> ();
	__Local__108->FloatCurves[0].Keys.AddUninitialized(6);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__108->FloatCurves[0].Keys.GetData(), 6);
	auto& __Local__109 = __Local__108->FloatCurves[0].Keys[0];
	auto& __Local__110 = __Local__108->FloatCurves[0].Keys[1];
	__Local__110.Time = 4.500000f;
	auto& __Local__111 = __Local__108->FloatCurves[0].Keys[2];
	__Local__111.Time = 6.500000f;
	__Local__111.Value = 0.243137f;
	auto& __Local__112 = __Local__108->FloatCurves[0].Keys[3];
	__Local__112.Time = 18.000000f;
	__Local__112.Value = 0.243137f;
	auto& __Local__113 = __Local__108->FloatCurves[0].Keys[4];
	__Local__113.Time = 20.000000f;
	auto& __Local__114 = __Local__108->FloatCurves[0].Keys[5];
	__Local__114.Time = 24.000000f;
	__Local__108->FloatCurves[1].Keys = TArray<FRichCurveKey> ();
	__Local__108->FloatCurves[1].Keys.AddUninitialized(6);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__108->FloatCurves[1].Keys.GetData(), 6);
	auto& __Local__115 = __Local__108->FloatCurves[1].Keys[0];
	auto& __Local__116 = __Local__108->FloatCurves[1].Keys[1];
	__Local__116.Time = 4.500000f;
	auto& __Local__117 = __Local__108->FloatCurves[1].Keys[2];
	__Local__117.Time = 6.500000f;
	__Local__117.Value = 0.341176f;
	auto& __Local__118 = __Local__108->FloatCurves[1].Keys[3];
	__Local__118.Time = 18.000000f;
	__Local__118.Value = 0.341176f;
	auto& __Local__119 = __Local__108->FloatCurves[1].Keys[4];
	__Local__119.Time = 20.000000f;
	auto& __Local__120 = __Local__108->FloatCurves[1].Keys[5];
	__Local__120.Time = 24.000000f;
	__Local__108->FloatCurves[2].Keys = TArray<FRichCurveKey> ();
	__Local__108->FloatCurves[2].Keys.AddUninitialized(6);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__108->FloatCurves[2].Keys.GetData(), 6);
	auto& __Local__121 = __Local__108->FloatCurves[2].Keys[0];
	auto& __Local__122 = __Local__108->FloatCurves[2].Keys[1];
	__Local__122.Time = 4.500000f;
	auto& __Local__123 = __Local__108->FloatCurves[2].Keys[2];
	__Local__123.Time = 6.500000f;
	__Local__123.Value = 0.784314f;
	auto& __Local__124 = __Local__108->FloatCurves[2].Keys[3];
	__Local__124.Time = 18.000000f;
	__Local__124.Value = 0.784314f;
	auto& __Local__125 = __Local__108->FloatCurves[2].Keys[4];
	__Local__125.Time = 20.000000f;
	auto& __Local__126 = __Local__108->FloatCurves[2].Keys[5];
	__Local__126.Time = 24.000000f;
	__Local__108->FloatCurves[3].Keys = TArray<FRichCurveKey> ();
	__Local__108->FloatCurves[3].Keys.AddUninitialized(6);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__108->FloatCurves[3].Keys.GetData(), 6);
	auto& __Local__127 = __Local__108->FloatCurves[3].Keys[0];
	__Local__127.Value = 1.000000f;
	auto& __Local__128 = __Local__108->FloatCurves[3].Keys[1];
	__Local__128.Time = 4.500000f;
	__Local__128.Value = 1.000000f;
	auto& __Local__129 = __Local__108->FloatCurves[3].Keys[2];
	__Local__129.Time = 6.500000f;
	__Local__129.Value = 1.000000f;
	auto& __Local__130 = __Local__108->FloatCurves[3].Keys[3];
	__Local__130.Time = 18.000000f;
	__Local__130.Value = 1.000000f;
	auto& __Local__131 = __Local__108->FloatCurves[3].Keys[4];
	__Local__131.Time = 20.000000f;
	__Local__131.Value = 1.000000f;
	auto& __Local__132 = __Local__108->FloatCurves[3].Keys[5];
	__Local__132.Time = 24.000000f;
	__Local__132.Value = 1.000000f;
	__Local__107.CurveLinearColor = __Local__108;
	__Local__107.TrackName = FName(TEXT("Zenith Color"));
	auto& __Local__133 = __Local__5->LinearColorTracks[2];
	auto __Local__134 = NewObject<UCurveLinearColor>(InDynamicClass, UCurveLinearColor::StaticClass(), TEXT("CurveLinearColor_2"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__134);
	__Local__134->FloatCurves[0].Keys = TArray<FRichCurveKey> ();
	__Local__134->FloatCurves[0].Keys.AddUninitialized(8);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__134->FloatCurves[0].Keys.GetData(), 8);
	auto& __Local__135 = __Local__134->FloatCurves[0].Keys[0];
	__Local__135.Value = 0.090196f;
	auto& __Local__136 = __Local__134->FloatCurves[0].Keys[1];
	__Local__136.Time = 2.107601f;
	__Local__136.Value = 0.090196f;
	auto& __Local__137 = __Local__134->FloatCurves[0].Keys[2];
	__Local__137.Time = 4.500000f;
	__Local__137.Value = 0.090196f;
	auto& __Local__138 = __Local__134->FloatCurves[0].Keys[3];
	__Local__138.Time = 5.100000f;
	__Local__138.Value = 1.000000f;
	auto& __Local__139 = __Local__134->FloatCurves[0].Keys[4];
	__Local__139.Time = 19.391825f;
	__Local__139.Value = 1.000000f;
	auto& __Local__140 = __Local__134->FloatCurves[0].Keys[5];
	__Local__140.Time = 20.000000f;
	__Local__140.Value = 0.090196f;
	auto& __Local__141 = __Local__134->FloatCurves[0].Keys[6];
	__Local__141.Time = 21.929836f;
	__Local__141.Value = 0.090196f;
	auto& __Local__142 = __Local__134->FloatCurves[0].Keys[7];
	__Local__142.Time = 24.000000f;
	__Local__142.Value = 0.090196f;
	__Local__134->FloatCurves[1].Keys = TArray<FRichCurveKey> ();
	__Local__134->FloatCurves[1].Keys.AddUninitialized(8);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__134->FloatCurves[1].Keys.GetData(), 8);
	auto& __Local__143 = __Local__134->FloatCurves[1].Keys[0];
	__Local__143.Value = 0.090196f;
	auto& __Local__144 = __Local__134->FloatCurves[1].Keys[1];
	__Local__144.Time = 2.107601f;
	__Local__144.Value = 0.090196f;
	auto& __Local__145 = __Local__134->FloatCurves[1].Keys[2];
	__Local__145.Time = 4.500000f;
	__Local__145.Value = 0.090196f;
	auto& __Local__146 = __Local__134->FloatCurves[1].Keys[3];
	__Local__146.Time = 5.100000f;
	__Local__146.Value = 1.000000f;
	auto& __Local__147 = __Local__134->FloatCurves[1].Keys[4];
	__Local__147.Time = 19.391825f;
	__Local__147.Value = 1.000000f;
	auto& __Local__148 = __Local__134->FloatCurves[1].Keys[5];
	__Local__148.Time = 20.000000f;
	__Local__148.Value = 0.090196f;
	auto& __Local__149 = __Local__134->FloatCurves[1].Keys[6];
	__Local__149.Time = 21.929836f;
	__Local__149.Value = 0.090196f;
	auto& __Local__150 = __Local__134->FloatCurves[1].Keys[7];
	__Local__150.Time = 24.000000f;
	__Local__150.Value = 0.090196f;
	__Local__134->FloatCurves[2].Keys = TArray<FRichCurveKey> ();
	__Local__134->FloatCurves[2].Keys.AddUninitialized(8);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__134->FloatCurves[2].Keys.GetData(), 8);
	auto& __Local__151 = __Local__134->FloatCurves[2].Keys[0];
	__Local__151.Value = 0.090196f;
	auto& __Local__152 = __Local__134->FloatCurves[2].Keys[1];
	__Local__152.Time = 2.107601f;
	__Local__152.Value = 0.090196f;
	auto& __Local__153 = __Local__134->FloatCurves[2].Keys[2];
	__Local__153.Time = 4.500000f;
	__Local__153.Value = 0.090196f;
	auto& __Local__154 = __Local__134->FloatCurves[2].Keys[3];
	__Local__154.Time = 5.100000f;
	__Local__154.Value = 1.000000f;
	auto& __Local__155 = __Local__134->FloatCurves[2].Keys[4];
	__Local__155.Time = 19.391825f;
	__Local__155.Value = 1.000000f;
	auto& __Local__156 = __Local__134->FloatCurves[2].Keys[5];
	__Local__156.Time = 20.000000f;
	__Local__156.Value = 0.090196f;
	auto& __Local__157 = __Local__134->FloatCurves[2].Keys[6];
	__Local__157.Time = 21.929836f;
	__Local__157.Value = 0.090196f;
	auto& __Local__158 = __Local__134->FloatCurves[2].Keys[7];
	__Local__158.Time = 24.000000f;
	__Local__158.Value = 0.090196f;
	__Local__134->FloatCurves[3].Keys = TArray<FRichCurveKey> ();
	__Local__134->FloatCurves[3].Keys.AddUninitialized(8);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__134->FloatCurves[3].Keys.GetData(), 8);
	auto& __Local__159 = __Local__134->FloatCurves[3].Keys[0];
	__Local__159.Value = 1.000000f;
	auto& __Local__160 = __Local__134->FloatCurves[3].Keys[1];
	__Local__160.Time = 2.134403f;
	__Local__160.Value = 1.000000f;
	auto& __Local__161 = __Local__134->FloatCurves[3].Keys[2];
	__Local__161.Time = 4.500000f;
	__Local__161.Value = 1.000000f;
	auto& __Local__162 = __Local__134->FloatCurves[3].Keys[3];
	__Local__162.Time = 5.100000f;
	__Local__162.Value = 1.000000f;
	auto& __Local__163 = __Local__134->FloatCurves[3].Keys[4];
	__Local__163.Time = 19.392000f;
	__Local__163.Value = 1.000000f;
	auto& __Local__164 = __Local__134->FloatCurves[3].Keys[5];
	__Local__164.Time = 20.000000f;
	__Local__164.Value = 1.000000f;
	auto& __Local__165 = __Local__134->FloatCurves[3].Keys[6];
	__Local__165.Time = 22.117451f;
	__Local__165.Value = 1.000000f;
	auto& __Local__166 = __Local__134->FloatCurves[3].Keys[7];
	__Local__166.Time = 24.000000f;
	__Local__166.Value = 1.000000f;
	__Local__133.CurveLinearColor = __Local__134;
	__Local__133.TrackName = FName(TEXT("Cloud Color"));
	__Local__5->TimelineGuid = FGuid(0xC8ACAA51, 0x4EF48618, 0x5222D2B3, 0xD8685635);
}
void AEnvironment_BP_C__pf3286898353::bpf__ExecuteUbergraph_Environment_BP__pf_0(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf(EForceInit::ForceInit);
	FLinearColor bpfv__CallFunc_GetLightColor_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	float bpfv__CallFunc_SelectFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				bpf__OnRep_Time__pf();
			}
		case 3:
			{
				if(IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Horizon color")), bpv__Time_Flow_Horizon_Color_C8ACAA514EF486185222D2B3D8685635__pf);
				}
			}
		case 4:
			{
				if(IsValid(bpv__Sun_Light__pf))
				{
					bpv__Sun_Light__pf->ULightComponent::SetLightColor(bpv__Time_Flow_Horizon_Color_C8ACAA514EF486185222D2B3D8685635__pf, true);
				}
			}
		case 5:
			{
				if(IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Zenith color")), bpv__Time_Flow_Zenith_Color_C8ACAA514EF486185222D2B3D8685635__pf);
				}
			}
		case 6:
			{
				if(IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Overall color")), bpv__Time_Flow_Cloud_Color_C8ACAA514EF486185222D2B3D8685635__pf);
				}
			}
		case 7:
			{
				if(IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Cloud color")), bpv__Time_Flow_Cloud_Color_C8ACAA514EF486185222D2B3D8685635__pf);
				}
			}
		case 8:
			{
				if(IsValid(bpv__Sun_Light__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Sun_Light__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf = UKismetMathLibrary::Conv_RotatorToVector(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToLinearColor(bpfv__CallFunc_Conv_RotatorToVector_ReturnValue__pf);
				if(IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Light direction")), bpfv__CallFunc_Conv_VectorToLinearColor_ReturnValue__pf);
				}
			}
		case 9:
			{
				if(IsValid(bpv__Sun_Light__pf))
				{
					bpfv__CallFunc_K2_GetComponentRotation_ReturnValue2__pf = bpv__Sun_Light__pf->USceneComponent::K2_GetComponentRotation();
				}
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetComponentRotation_ReturnValue2__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf = UKismetMathLibrary::MapRangeUnclamped(b0l__CallFunc_BreakRotator_Pitch__pf, 0.000000, -90.000000, 0.000000, 1.000000);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf, 0.000000);
				bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpfv__CallFunc_MapRangeUnclamped_ReturnValue__pf);
				bpfv__CallFunc_SelectFloat_ReturnValue__pf = UKismetMathLibrary::SelectFloat(bpfv__CallFunc_Abs_ReturnValue__pf, 0.000000, bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf);
				if(IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun height")), bpfv__CallFunc_SelectFloat_ReturnValue__pf);
				}
			}
		case 10:
			{
				if(IsValid(bpv__Sun_Light__pf))
				{
					bpfv__CallFunc_GetLightColor_ReturnValue__pf = bpv__Sun_Light__pf->ULightComponentBase::GetLightColor();
				}
				if(IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("Sun color")), bpfv__CallFunc_GetLightColor_ReturnValue__pf);
				}
			}
		case 11:
			{
				if(IsValid(bpv__Sky_Light__pf))
				{
					bpv__Sky_Light__pf->USkyLightComponent::RecaptureSky();
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				AActor::FlushNetDormancy();
			}
		case 13:
			{
				bpv__Time__pf = bpv__Time_Flow_TimeofDay_C8ACAA514EF486185222D2B3D8685635__pf;
				__CurrentState = 2;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, bpv__Time_Flow_Sun_Light_Pitch_C8ACAA514EF486185222D2B3D8685635__pf, bpv__Time_Flow_Sun_Light_Yaw_C8ACAA514EF486185222D2B3D8685635__pf);
				if(IsValid(bpv__Sun_Light__pf))
				{
					bpv__Sun_Light__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
				}
			}
		case 16:
			{
				if(IsValid(bpv__Sky_Light__pf))
				{
					bpv__Sky_Light__pf->USkyLightComponent::SetIntensity(bpv__Time_Flow_Sky_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf);
				}
			}
		case 17:
			{
				if(IsValid(bpv__Sun_Light__pf))
				{
					bpv__Sun_Light__pf->ULightComponent::SetIntensity(bpv__Time_Flow_Sun_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf);
				}
			}
		case 18:
			{
				if(IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Cloud Opacity")), bpv__Time_Flow_Cloud_Opacity_C8ACAA514EF486185222D2B3D8685635__pf);
				}
			}
		case 19:
			{
				if(IsValid(bpv__Skyxmaterial__pfT))
				{
					bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Horizon falloff")), bpv__Time_Flow_Horizon_Falloff_C8ACAA514EF486185222D2B3D8685635__pf);
				}
				__CurrentState = 12;
				break;
			}
		case 20:
			{
				__CurrentState = 21;
				break;
			}
		case 21:
			{
				__StateStack.Push(15);
			}
		case 22:
			{
				if(IsValid(bpv__Time_Flow__pf))
				{
					bpv__Time_Flow__pf->UTimelineComponent::SetNewTime(bpv__StartxTime__pfT);
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
void AEnvironment_BP_C__pf3286898353::bpf__ExecuteUbergraph_Environment_BP__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	return; //KCST_EndOfThread
}
void AEnvironment_BP_C__pf3286898353::bpf__ExecuteUbergraph_Environment_BP__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Time_Flow__pf))
	{
		bpv__Time_Flow__pf->UTimelineComponent::SetPlayRate(0.000000);
	}
	return; //KCST_EndOfThread
}
void AEnvironment_BP_C__pf3286898353::bpf__ExecuteUbergraph_Environment_BP__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	return; //KCST_EndOfThread
}
void AEnvironment_BP_C__pf3286898353::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_Environment_BP__pf_2(23);
}
void AEnvironment_BP_C__pf3286898353::bpf__SetxTime__pfT()
{
	bpf__ExecuteUbergraph_Environment_BP__pf_0(20);
}
void AEnvironment_BP_C__pf3286898353::bpf__Time_Flow__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_Environment_BP__pf_1(24);
}
void AEnvironment_BP_C__pf3286898353::bpf__Time_Flow__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_Environment_BP__pf_3(1);
}
void AEnvironment_BP_C__pf3286898353::bpf__UserConstructionScript__pf()
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	if(IsValid(bpv__SkyxSpherexmesh__pfTT))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = bpv__SkyxSpherexmesh__pfTT->CreateDynamicMaterialInstance(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AEnvironment_BP_C__pf3286898353::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	}
	bpv__Skyxmaterial__pfT = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
	if(IsValid(bpv__Skyxmaterial__pfT))
	{
		bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Cloud speed")), bpv__Cloudxspeed__pfT);
	}
	if(IsValid(bpv__Skyxmaterial__pfT))
	{
		bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Stars Brightness")), bpv__Starsxbrightness__pfT);
	}
	if(IsValid(bpv__Skyxmaterial__pfT))
	{
		bpv__Skyxmaterial__pfT->UMaterialInstanceDynamic::SetScalarParameterValue(FName(TEXT("Sun brightness")), bpv__Sunxbrightness__pfT);
	}
	bpf__SetxTime__pfT();
}
void AEnvironment_BP_C__pf3286898353::bpf__OnRep_Time__pf()
{
}
void AEnvironment_BP_C__pf3286898353::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/EngineSky/SM_SkySphere.SM_SkySphere 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineSky/M_Sky_Panning_Clouds2.M_Sky_Panning_Clouds2 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Environment/Materials/PP_Global.PP_Global 
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
void AEnvironment_BP_C__pf3286898353::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.DirectionalLightComponent 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SkyLightComponent 
		{110, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.PostProcessComponent 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.TimelineComponent 
		{148, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.ETimelineDirection 
		{31, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LightComponent 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.LightComponentBase 
		{12, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
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
struct FRegisterHelper__AEnvironment_BP_C__pf3286898353
{
	FRegisterHelper__AEnvironment_BP_C__pf3286898353()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Environment/Environment_BP"), &AEnvironment_BP_C__pf3286898353::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AEnvironment_BP_C__pf3286898353 Instance;
};
FRegisterHelper__AEnvironment_BP_C__pf3286898353 FRegisterHelper__AEnvironment_BP_C__pf3286898353::Instance;
void AEnvironment_BP_C__pf3286898353::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_DIFFNAMES(AEnvironment_BP_C__pf3286898353, bpv__Time__pf, FName(TEXT("Time")));
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
