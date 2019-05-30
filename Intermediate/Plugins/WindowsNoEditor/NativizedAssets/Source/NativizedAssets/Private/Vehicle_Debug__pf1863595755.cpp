#include "NativizedAssets.h"
#include "Vehicle_Debug__pf1863595755.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/CheckBox.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/UMG/Public/Components/SpinBox.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "BP_Master_Vehicle__pf3373537038.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
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
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
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
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
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
#include "Runtime/SlateCore/Public/Layout/Margin.h"
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
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
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
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Wheel_Structure__pf863842189.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "BP_Physic_Pawn__pf4061722237.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Vehicle_Save__pf1010915279.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UVehicle_Debug_C__pf1863595755::UVehicle_Debug_C__pf1863595755(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UVehicle_Debug_C__pf1863595755::StaticClass() == GetClass()))
	{
		UVehicle_Debug_C__pf1863595755::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__CheckBox_AirControl__pf = nullptr;
	bpv__CheckBox_AutoGears__pf = nullptr;
	bpv__CheckBox_autorotcam__pf = nullptr;
	bpv__CheckBox_BrakeasReverse__pf = nullptr;
	bpv__CheckBox_InfiniteFuel__pf = nullptr;
	bpv__CheckBox_ShowCollisions__pf = nullptr;
	bpv__CheckBox_SmartThrottle__pf = nullptr;
	bpv__Drift_Value__pf = nullptr;
	bpv__FPS_Text__pf = nullptr;
	bpv__Fuel_Text__pf = nullptr;
	bpv__FuelBurningValue__pf = nullptr;
	bpv__Gear_Text__pf = nullptr;
	bpv__GSpeed_Text__pf = nullptr;
	bpv__Mileage_Text__pf = nullptr;
	bpv__Respawn_Button__pf = nullptr;
	bpv__Roll_Value__pf = nullptr;
	bpv__RPM_Text__pf = nullptr;
	bpv__Save_Button__pf = nullptr;
	bpv__SuspensionDampingValue__pf = nullptr;
	bpv__SuspensionLengthValue__pf = nullptr;
	bpv__SuspensionStrengthValue__pf = nullptr;
	bpv__UnxRoll_Button__pfG = nullptr;
	bpv__VSpeed_Text__pf = nullptr;
	bpv__Vehicle__pf = nullptr;
	bpv__Readyx__pfS = false;
	bpv__SavedxTransform__pfT = FTransform( FQuat(0.000000,0.000000,0.000000,1.000000), FVector(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000) );
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UVehicle_Debug_C__pf1863595755::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UVehicle_Debug_C__pf1863595755::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FGear_Structure__pf863842189();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FGear_Structure__pf863842189());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(17);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 17);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("CheckBox_AirControl"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__CheckBox_AirControl_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("FuelBurningValue"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__FuelBurningValue_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("CheckBox_InfiniteFuel"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__CheckBox_InfiniteFuel_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("CheckBox_SmartThrottle"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__CheckBox_SmartThrottle_K2Node_ComponentBoundEvent_249_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("CheckBox_BrakeasReverse"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__CheckBox_BrakeasReverse_K2Node_ComponentBoundEvent_139_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("CheckBox_AutoGears"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__CheckBox_AutoGears_K2Node_ComponentBoundEvent_301_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("Drift_Value"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__DriftValue_K2Node_ComponentBoundEvent_1013_OnSpinBoxValueChangedEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[7];
	__Local__9.ComponentPropertyName = FName(TEXT("Roll_Value"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__Roll_Value_K2Node_ComponentBoundEvent_987_OnSpinBoxValueChangedEvent__DelegateSignature"));
	auto& __Local__10 = __Local__0->ComponentDelegateBindings[8];
	__Local__10.ComponentPropertyName = FName(TEXT("Respawn_Button"));
	__Local__10.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__10.FunctionNameToBind = FName(TEXT("BndEvt__Button_42_K2Node_ComponentBoundEvent_1633_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__11 = __Local__0->ComponentDelegateBindings[9];
	__Local__11.ComponentPropertyName = FName(TEXT("Save_Button"));
	__Local__11.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__11.FunctionNameToBind = FName(TEXT("BndEvt__Button_41_K2Node_ComponentBoundEvent_1536_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__12 = __Local__0->ComponentDelegateBindings[10];
	__Local__12.ComponentPropertyName = FName(TEXT("Un-Roll_Button"));
	__Local__12.DelegatePropertyName = FName(TEXT("OnReleased"));
	__Local__12.FunctionNameToBind = FName(TEXT("BndEvt__Un-Roll_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature"));
	auto& __Local__13 = __Local__0->ComponentDelegateBindings[11];
	__Local__13.ComponentPropertyName = FName(TEXT("Un-Roll_Button"));
	__Local__13.DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__13.FunctionNameToBind = FName(TEXT("BndEvt__Button_40_K2Node_ComponentBoundEvent_1165_OnButtonPressedEvent__DelegateSignature"));
	auto& __Local__14 = __Local__0->ComponentDelegateBindings[12];
	__Local__14.ComponentPropertyName = FName(TEXT("SuspensionDampingValue"));
	__Local__14.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__14.FunctionNameToBind = FName(TEXT("BndEvt__SuspensionDampingValue_K2Node_ComponentBoundEvent_1051_OnSpinBoxValueChangedEvent__DelegateSignature"));
	auto& __Local__15 = __Local__0->ComponentDelegateBindings[13];
	__Local__15.ComponentPropertyName = FName(TEXT("SuspensionLengthValue"));
	__Local__15.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__15.FunctionNameToBind = FName(TEXT("BndEvt__SuspensionLengthValue_K2Node_ComponentBoundEvent_629_OnSpinBoxValueChangedEvent__DelegateSignature"));
	auto& __Local__16 = __Local__0->ComponentDelegateBindings[14];
	__Local__16.ComponentPropertyName = FName(TEXT("SuspensionStrengthValue"));
	__Local__16.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__16.FunctionNameToBind = FName(TEXT("BndEvt__SuspensionStrengthValue_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature"));
	auto& __Local__17 = __Local__0->ComponentDelegateBindings[15];
	__Local__17.ComponentPropertyName = FName(TEXT("CheckBox_ShowCollisions"));
	__Local__17.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__17.FunctionNameToBind = FName(TEXT("BndEvt__CheckBox_ShowCollisions_K2Node_ComponentBoundEvent_528_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto& __Local__18 = __Local__0->ComponentDelegateBindings[16];
	__Local__18.ComponentPropertyName = FName(TEXT("CheckBox_autorotcam"));
	__Local__18.DelegatePropertyName = FName(TEXT("OnCheckStateChanged"));
	__Local__18.FunctionNameToBind = FName(TEXT("BndEvt__CheckBox_autorotcam_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature"));
	auto __Local__19 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__19), UPanelWidget::__PPO__Slots() )));
	__Local__20 = TArray<UPanelSlot*> ();
	__Local__20.Reserve(1);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__19, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__21->LayoutData.Offsets.Left = 10.000000f;
	__Local__21->LayoutData.Offsets.Top = 10.000000f;
	__Local__21->LayoutData.Offsets.Right = 330.000000f;
	__Local__21->LayoutData.Offsets.Bottom = 633.422974f;
	__Local__21->Parent = __Local__19;
	auto __Local__22 = NewObject<UBorder>(__Local__1, UBorder::StaticClass(), TEXT("Debug_Pannel"));
	__Local__22->Padding.Left = 10.000000f;
	__Local__22->Padding.Top = 10.000000f;
	__Local__22->Padding.Right = 10.000000f;
	__Local__22->Padding.Bottom = 10.000000f;
	auto& __Local__23 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__22->Background.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__23 = FLinearColor(0.000000, 0.000000, 0.000000, 0.700000);
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__22), UPanelWidget::__PPO__Slots() )));
	__Local__24 = TArray<UPanelSlot*> ();
	__Local__24.Reserve(1);
	auto __Local__25 = NewObject<UBorderSlot>(__Local__22, UBorderSlot::StaticClass(), TEXT("BorderSlot_0"));
	auto& __Local__26 = (*(AccessPrivateProperty<FMargin >((__Local__25), UBorderSlot::__PPO__Padding() )));
	__Local__26.Left = 10.000000f;
	__Local__26.Top = 10.000000f;
	__Local__26.Right = 10.000000f;
	__Local__26.Bottom = 10.000000f;
	__Local__25->Parent = __Local__22;
	auto __Local__27 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("VerticalBox_45"));
	auto& __Local__28 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__27), UPanelWidget::__PPO__Slots() )));
	__Local__28 = TArray<UPanelSlot*> ();
	__Local__28.Reserve(30);
	auto __Local__29 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__29->Parent = __Local__27;
	auto __Local__30 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("FPS_Box"));
	auto& __Local__31 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__30), UPanelWidget::__PPO__Slots() )));
	__Local__31 = TArray<UPanelSlot*> ();
	__Local__31.Reserve(2);
	auto __Local__32 = NewObject<UHorizontalBoxSlot>(__Local__30, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__32->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__32->Parent = __Local__30;
	auto __Local__33 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_4"));
	__Local__33->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("FPS"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4E900A7944E52121778A07AFEFFD0D84") /* Key */
	);
	__Local__33->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__33->Font.Size = 14;
	__Local__33->ShadowOffset = FVector2D(1.000000, 0.500000);
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__31.Add(__Local__32);
	auto __Local__34 = NewObject<UHorizontalBoxSlot>(__Local__30, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__34->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__34->Parent = __Local__30;
	auto __Local__35 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("FPS_Text"));
	__Local__35->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("AC2B9FDB4FD4EC5A51C2478AD1554512") /* Key */
	);
	__Local__35->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__35->Font.Size = 14;
	__Local__35->ShadowOffset = FVector2D(1.000000, 0.500000);
	auto& __Local__36 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__35), UTextLayoutWidget::__PPO__Justification() )));
	__Local__36 = ETextJustify::Type::Right;
	__Local__35->bIsVariable = true;
	__Local__35->Slot = __Local__34;
	__Local__34->Content = __Local__35;
	__Local__31.Add(__Local__34);
	__Local__30->Slot = __Local__29;
	__Local__29->Content = __Local__30;
	__Local__28.Add(__Local__29);
	auto __Local__37 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"));
	__Local__37->Padding.Top = 5.000000f;
	__Local__37->Padding.Bottom = 5.000000f;
	__Local__37->Parent = __Local__27;
	auto __Local__38 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("Spacer_01"));
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__28.Add(__Local__37);
	auto __Local__39 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_4"));
	__Local__39->Parent = __Local__27;
	auto __Local__40 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("WheelSpeed_Box"));
	auto& __Local__41 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__40), UPanelWidget::__PPO__Slots() )));
	__Local__41 = TArray<UPanelSlot*> ();
	__Local__41.Reserve(2);
	auto __Local__42 = NewObject<UHorizontalBoxSlot>(__Local__40, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__42->Parent = __Local__40;
	auto __Local__43 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_5"));
	__Local__43->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Wheel Speed"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("7CB6C49B47955F0AB778418B2B2CA768") /* Key */
	);
	__Local__43->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__43->Font.Size = 14;
	__Local__43->ShadowOffset = FVector2D(1.000000, 0.500000);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__41.Add(__Local__42);
	auto __Local__44 = NewObject<UHorizontalBoxSlot>(__Local__40, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__44->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__44->Parent = __Local__40;
	auto __Local__45 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("GSpeed_Text"));
	__Local__45->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("58FBA15F4CE5C02FD424D9BF47931219") /* Key */
	);
	__Local__45->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__45->Font.Size = 14;
	__Local__45->ShadowOffset = FVector2D(1.000000, 0.500000);
	auto& __Local__46 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__45), UTextLayoutWidget::__PPO__Justification() )));
	__Local__46 = ETextJustify::Type::Right;
	__Local__45->bIsVariable = true;
	__Local__45->Slot = __Local__44;
	__Local__44->Content = __Local__45;
	__Local__41.Add(__Local__44);
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__28.Add(__Local__39);
	auto __Local__47 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_23"));
	__Local__47->Parent = __Local__27;
	auto __Local__48 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_178"));
	auto& __Local__49 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__48), UPanelWidget::__PPO__Slots() )));
	__Local__49 = TArray<UPanelSlot*> ();
	__Local__49.Reserve(2);
	auto __Local__50 = NewObject<UHorizontalBoxSlot>(__Local__48, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__50->Parent = __Local__48;
	auto __Local__51 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_60"));
	__Local__51->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Vehicle Speed"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F794528A4708D5ED928926B7250768B6") /* Key */
	);
	__Local__51->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__51->Font.Size = 14;
	__Local__51->ShadowOffset = FVector2D(1.000000, 0.500000);
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__49.Add(__Local__50);
	auto __Local__52 = NewObject<UHorizontalBoxSlot>(__Local__48, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__52->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__52->Parent = __Local__48;
	auto __Local__53 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("VSpeed_Text"));
	__Local__53->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("58FBA15F4CE5C02FD424D9BF47931219") /* Key */
	);
	__Local__53->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__53->Font.Size = 14;
	__Local__53->ShadowOffset = FVector2D(1.000000, 0.500000);
	auto& __Local__54 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__53), UTextLayoutWidget::__PPO__Justification() )));
	__Local__54 = ETextJustify::Type::Right;
	__Local__53->bIsVariable = true;
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__49.Add(__Local__52);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__28.Add(__Local__47);
	auto __Local__55 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__55->Parent = __Local__27;
	auto __Local__56 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("RPM_Box"));
	auto& __Local__57 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__56), UPanelWidget::__PPO__Slots() )));
	__Local__57 = TArray<UPanelSlot*> ();
	__Local__57.Reserve(2);
	auto __Local__58 = NewObject<UHorizontalBoxSlot>(__Local__56, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_4"));
	__Local__58->Parent = __Local__56;
	auto __Local__59 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_8"));
	__Local__59->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Engine RPM"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("BB01A6C74D92964F94F6758214F82B65") /* Key */
	);
	__Local__59->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__59->Font.Size = 14;
	__Local__59->ShadowOffset = FVector2D(1.000000, 0.500000);
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__57.Add(__Local__58);
	auto __Local__60 = NewObject<UHorizontalBoxSlot>(__Local__56, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_5"));
	__Local__60->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__60->Parent = __Local__56;
	auto __Local__61 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("RPM_Text"));
	__Local__61->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("BE1C022E45B82F67BB4A93B5D6900095") /* Key */
	);
	__Local__61->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__61->Font.Size = 14;
	__Local__61->ShadowOffset = FVector2D(1.000000, 0.500000);
	auto& __Local__62 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__61), UTextLayoutWidget::__PPO__Justification() )));
	__Local__62 = ETextJustify::Type::Right;
	__Local__61->bIsVariable = true;
	__Local__61->Slot = __Local__60;
	__Local__60->Content = __Local__61;
	__Local__57.Add(__Local__60);
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__28.Add(__Local__55);
	auto __Local__63 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_8"));
	__Local__63->Parent = __Local__27;
	auto __Local__64 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("Gear_Box"));
	auto& __Local__65 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__64), UPanelWidget::__PPO__Slots() )));
	__Local__65 = TArray<UPanelSlot*> ();
	__Local__65.Reserve(2);
	auto __Local__66 = NewObject<UHorizontalBoxSlot>(__Local__64, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_7"));
	__Local__66->Parent = __Local__64;
	auto __Local__67 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_12"));
	__Local__67->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Current Gear"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("040FC1B34186DF9EA2EBC89B9681B02B") /* Key */
	);
	__Local__67->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__67->Font.Size = 14;
	__Local__67->ShadowOffset = FVector2D(1.000000, 0.500000);
	__Local__67->Slot = __Local__66;
	__Local__66->Content = __Local__67;
	__Local__65.Add(__Local__66);
	auto __Local__68 = NewObject<UHorizontalBoxSlot>(__Local__64, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"));
	__Local__68->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__68->Parent = __Local__64;
	auto __Local__69 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Gear_Text"));
	__Local__69->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F3302BE04FB9FC7190AE2D932E2B5D5B") /* Key */
	);
	__Local__69->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__69->Font.Size = 14;
	__Local__69->ShadowOffset = FVector2D(1.000000, 0.500000);
	auto& __Local__70 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__69), UTextLayoutWidget::__PPO__Justification() )));
	__Local__70 = ETextJustify::Type::Right;
	__Local__69->bIsVariable = true;
	__Local__69->Slot = __Local__68;
	__Local__68->Content = __Local__69;
	__Local__65.Add(__Local__68);
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__28.Add(__Local__63);
	auto __Local__71 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_28"));
	__Local__71->Padding.Top = 5.000000f;
	__Local__71->Padding.Bottom = 5.000000f;
	__Local__71->Parent = __Local__27;
	auto __Local__72 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_3"));
	__Local__72->Slot = __Local__71;
	__Local__71->Content = __Local__72;
	__Local__28.Add(__Local__71);
	auto __Local__73 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"));
	__Local__73->Parent = __Local__27;
	auto __Local__74 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_0"));
	auto& __Local__75 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__74), UPanelWidget::__PPO__Slots() )));
	__Local__75 = TArray<UPanelSlot*> ();
	__Local__75.Reserve(2);
	auto __Local__76 = NewObject<UHorizontalBoxSlot>(__Local__74, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_7"));
	__Local__76->Parent = __Local__74;
	auto __Local__77 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_14"));
	__Local__77->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Fuel Percentage"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("8FA8A82C4CB5E34E3061A8910114DF1C") /* Key */
	);
	__Local__77->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__77->Font.Size = 14;
	__Local__77->ShadowOffset = FVector2D(1.000000, 0.500000);
	__Local__77->Slot = __Local__76;
	__Local__76->Content = __Local__77;
	__Local__75.Add(__Local__76);
	auto __Local__78 = NewObject<UHorizontalBoxSlot>(__Local__74, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"));
	__Local__78->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__78->Parent = __Local__74;
	auto __Local__79 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Fuel_Text"));
	__Local__79->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F3302BE04FB9FC7190AE2D932E2B5D5B") /* Key */
	);
	__Local__79->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__79->Font.Size = 14;
	__Local__79->ShadowOffset = FVector2D(1.000000, 0.500000);
	auto& __Local__80 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__79), UTextLayoutWidget::__PPO__Justification() )));
	__Local__80 = ETextJustify::Type::Right;
	__Local__79->bIsVariable = true;
	__Local__79->Slot = __Local__78;
	__Local__78->Content = __Local__79;
	__Local__75.Add(__Local__78);
	__Local__74->Slot = __Local__73;
	__Local__73->Content = __Local__74;
	__Local__28.Add(__Local__73);
	auto __Local__81 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_27"));
	__Local__81->Parent = __Local__27;
	auto __Local__82 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_2"));
	auto& __Local__83 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__82), UPanelWidget::__PPO__Slots() )));
	__Local__83 = TArray<UPanelSlot*> ();
	__Local__83.Reserve(2);
	auto __Local__84 = NewObject<UHorizontalBoxSlot>(__Local__82, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_7"));
	__Local__84->Parent = __Local__82;
	auto __Local__85 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_19"));
	__Local__85->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Milleage"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("92B588C44BCEA514F6AC478F41F6CE3A") /* Key */
	);
	__Local__85->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__85->Font.Size = 14;
	__Local__85->ShadowOffset = FVector2D(1.000000, 0.500000);
	__Local__85->Slot = __Local__84;
	__Local__84->Content = __Local__85;
	__Local__83.Add(__Local__84);
	auto __Local__86 = NewObject<UHorizontalBoxSlot>(__Local__82, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"));
	__Local__86->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__86->Parent = __Local__82;
	auto __Local__87 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Mileage_Text"));
	__Local__87->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F3302BE04FB9FC7190AE2D932E2B5D5B") /* Key */
	);
	__Local__87->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__87->Font.Size = 14;
	__Local__87->ShadowOffset = FVector2D(1.000000, 0.500000);
	auto& __Local__88 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__87), UTextLayoutWidget::__PPO__Justification() )));
	__Local__88 = ETextJustify::Type::Right;
	__Local__87->bIsVariable = true;
	__Local__87->Slot = __Local__86;
	__Local__86->Content = __Local__87;
	__Local__83.Add(__Local__86);
	__Local__82->Slot = __Local__81;
	__Local__81->Content = __Local__82;
	__Local__28.Add(__Local__81);
	auto __Local__89 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_9"));
	__Local__89->Padding.Top = 5.000000f;
	__Local__89->Padding.Bottom = 5.000000f;
	__Local__89->Parent = __Local__27;
	auto __Local__90 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("Spacer_02"));
	__Local__90->Slot = __Local__89;
	__Local__89->Content = __Local__90;
	__Local__28.Add(__Local__89);
	auto __Local__91 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_10"));
	__Local__91->Parent = __Local__27;
	auto __Local__92 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("CheckBox_AutoGears"));
	__Local__92->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	auto& __Local__93 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__92), UPanelWidget::__PPO__Slots() )));
	__Local__93 = TArray<UPanelSlot*> ();
	__Local__93.Reserve(1);
	auto __Local__94 = NewObject<UPanelSlot>(__Local__92, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__94->Parent = __Local__92;
	auto __Local__95 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_16"));
	__Local__95->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Automatic Gears"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("2919059744E4C0B366554784ED2C8042") /* Key */
	);
	__Local__95->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__95->Font.Size = 14;
	__Local__95->ShadowOffset = FVector2D(0.000000, 0.000000);
	auto& __Local__96 = (*(AccessPrivateProperty<FMargin >((__Local__95), UTextLayoutWidget::__PPO__Margin() )));
	__Local__96.Left = 5.000000f;
	__Local__95->Slot = __Local__94;
	__Local__94->Content = __Local__95;
	__Local__93.Add(__Local__94);
	__Local__92->Slot = __Local__91;
	__Local__91->Content = __Local__92;
	__Local__28.Add(__Local__91);
	auto __Local__97 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_11"));
	__Local__97->Parent = __Local__27;
	auto __Local__98 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("CheckBox_BrakeasReverse"));
	__Local__98->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	auto& __Local__99 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__98), UPanelWidget::__PPO__Slots() )));
	__Local__99 = TArray<UPanelSlot*> ();
	__Local__99.Reserve(1);
	auto __Local__100 = NewObject<UPanelSlot>(__Local__98, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__100->Parent = __Local__98;
	auto __Local__101 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_2"));
	__Local__101->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Brake as Reverse"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("76A4D8B14AC0DC6F1D36A1830C2BDB11") /* Key */
	);
	__Local__101->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__101->Font.Size = 14;
	__Local__101->ShadowOffset = FVector2D(0.000000, 0.000000);
	auto& __Local__102 = (*(AccessPrivateProperty<FMargin >((__Local__101), UTextLayoutWidget::__PPO__Margin() )));
	__Local__102.Left = 5.000000f;
	__Local__101->Slot = __Local__100;
	__Local__100->Content = __Local__101;
	__Local__99.Add(__Local__100);
	__Local__98->Slot = __Local__97;
	__Local__97->Content = __Local__98;
	__Local__28.Add(__Local__97);
	auto __Local__103 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_12"));
	__Local__103->Parent = __Local__27;
	auto __Local__104 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("CheckBox_SmartThrottle"));
	__Local__104->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	auto& __Local__105 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__104), UPanelWidget::__PPO__Slots() )));
	__Local__105 = TArray<UPanelSlot*> ();
	__Local__105.Reserve(1);
	auto __Local__106 = NewObject<UPanelSlot>(__Local__104, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__106->Parent = __Local__104;
	auto __Local__107 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_6"));
	__Local__107->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Smart Throttle"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("71F9EBAA43986833180C57A278B3A777") /* Key */
	);
	__Local__107->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__107->Font.Size = 14;
	__Local__107->ShadowOffset = FVector2D(0.000000, 0.000000);
	auto& __Local__108 = (*(AccessPrivateProperty<FMargin >((__Local__107), UTextLayoutWidget::__PPO__Margin() )));
	__Local__108.Left = 5.000000f;
	__Local__107->Slot = __Local__106;
	__Local__106->Content = __Local__107;
	__Local__105.Add(__Local__106);
	__Local__104->Slot = __Local__103;
	__Local__103->Content = __Local__104;
	__Local__28.Add(__Local__103);
	auto __Local__109 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_13"));
	__Local__109->Parent = __Local__27;
	auto __Local__110 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("CheckBox_autorotcam"));
	__Local__110->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__110), UPanelWidget::__PPO__Slots() )));
	__Local__111 = TArray<UPanelSlot*> ();
	__Local__111.Reserve(1);
	auto __Local__112 = NewObject<UPanelSlot>(__Local__110, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__112->Parent = __Local__110;
	auto __Local__113 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_7"));
	__Local__113->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Auto Rotate Camera"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("855770CE47170D0DF39F94B4B0E246CD") /* Key */
	);
	__Local__113->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__113->Font.Size = 14;
	__Local__113->ShadowOffset = FVector2D(0.000000, 0.000000);
	auto& __Local__114 = (*(AccessPrivateProperty<FMargin >((__Local__113), UTextLayoutWidget::__PPO__Margin() )));
	__Local__114.Left = 5.000000f;
	__Local__113->Slot = __Local__112;
	__Local__112->Content = __Local__113;
	__Local__111.Add(__Local__112);
	__Local__110->Slot = __Local__109;
	__Local__109->Content = __Local__110;
	__Local__28.Add(__Local__109);
	auto __Local__115 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_24"));
	__Local__115->Parent = __Local__27;
	auto __Local__116 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("CheckBox_InfiniteFuel"));
	__Local__116->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	auto& __Local__117 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__116), UPanelWidget::__PPO__Slots() )));
	__Local__117 = TArray<UPanelSlot*> ();
	__Local__117.Reserve(1);
	auto __Local__118 = NewObject<UPanelSlot>(__Local__116, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__118->Parent = __Local__116;
	auto __Local__119 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_17"));
	__Local__119->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Infinite Fuel"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5F8096E843282C0107CB229380A36C67") /* Key */
	);
	__Local__119->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__119->Font.Size = 14;
	__Local__119->ShadowOffset = FVector2D(0.000000, 0.000000);
	auto& __Local__120 = (*(AccessPrivateProperty<FMargin >((__Local__119), UTextLayoutWidget::__PPO__Margin() )));
	__Local__120.Left = 5.000000f;
	__Local__119->Slot = __Local__118;
	__Local__118->Content = __Local__119;
	__Local__117.Add(__Local__118);
	__Local__116->Slot = __Local__115;
	__Local__115->Content = __Local__116;
	__Local__28.Add(__Local__115);
	auto __Local__121 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_14"));
	__Local__121->Parent = __Local__27;
	auto __Local__122 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("CheckBox_ShowCollisions"));
	__Local__122->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	auto& __Local__123 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__122), UPanelWidget::__PPO__Slots() )));
	__Local__123 = TArray<UPanelSlot*> ();
	__Local__123.Reserve(1);
	auto __Local__124 = NewObject<UPanelSlot>(__Local__122, UPanelSlot::StaticClass(), TEXT("PanelSlot_1"));
	__Local__124->Parent = __Local__122;
	auto __Local__125 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__125->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Show Collision"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("16F744454BB9A82A4F3CDCBE43364BD1") /* Key */
	);
	__Local__125->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__125->Font.Size = 14;
	__Local__125->ShadowOffset = FVector2D(0.000000, 0.000000);
	auto& __Local__126 = (*(AccessPrivateProperty<FMargin >((__Local__125), UTextLayoutWidget::__PPO__Margin() )));
	__Local__126.Left = 5.000000f;
	__Local__125->Slot = __Local__124;
	__Local__124->Content = __Local__125;
	__Local__123.Add(__Local__124);
	__Local__122->Slot = __Local__121;
	__Local__121->Content = __Local__122;
	__Local__28.Add(__Local__121);
	auto __Local__127 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_29"));
	__Local__127->Parent = __Local__27;
	auto __Local__128 = NewObject<UCheckBox>(__Local__1, UCheckBox::StaticClass(), TEXT("CheckBox_AirControl"));
	__Local__128->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	auto& __Local__129 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__128), UPanelWidget::__PPO__Slots() )));
	__Local__129 = TArray<UPanelSlot*> ();
	__Local__129.Reserve(1);
	auto __Local__130 = NewObject<UPanelSlot>(__Local__128, UPanelSlot::StaticClass(), TEXT("PanelSlot_0"));
	__Local__130->Parent = __Local__128;
	auto __Local__131 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_1"));
	__Local__131->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Air Control"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A5B9E4DC472F88473103889133C1555E") /* Key */
	);
	__Local__131->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__131->Font.Size = 14;
	__Local__131->ShadowOffset = FVector2D(0.000000, 0.000000);
	auto& __Local__132 = (*(AccessPrivateProperty<FMargin >((__Local__131), UTextLayoutWidget::__PPO__Margin() )));
	__Local__132.Left = 5.000000f;
	__Local__131->Slot = __Local__130;
	__Local__130->Content = __Local__131;
	__Local__129.Add(__Local__130);
	__Local__128->Slot = __Local__127;
	__Local__127->Content = __Local__128;
	__Local__28.Add(__Local__127);
	auto __Local__133 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_15"));
	__Local__133->Padding.Top = 5.000000f;
	__Local__133->Padding.Bottom = 5.000000f;
	__Local__133->Parent = __Local__27;
	auto __Local__134 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("Spacer_03"));
	__Local__134->Slot = __Local__133;
	__Local__133->Content = __Local__134;
	__Local__28.Add(__Local__133);
	auto __Local__135 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_16"));
	__Local__135->Padding.Top = 2.000000f;
	__Local__135->Padding.Bottom = 2.000000f;
	__Local__135->Parent = __Local__27;
	auto __Local__136 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("SStrength_Box"));
	auto& __Local__137 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__136), UPanelWidget::__PPO__Slots() )));
	__Local__137 = TArray<UPanelSlot*> ();
	__Local__137.Reserve(2);
	auto __Local__138 = NewObject<UCanvasPanelSlot>(__Local__136, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_12"));
	__Local__138->LayoutData.Offsets.Bottom = 22.000000f;
	__Local__138->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.500000);
	__Local__138->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__138->LayoutData.Alignment = FVector2D(1.000000, 0.500000);
	__Local__138->Parent = __Local__136;
	auto __Local__139 = NewObject<USpinBox>(__Local__1, USpinBox::StaticClass(), TEXT("SuspensionStrengthValue"));
	__Local__139->Delta = 1.000000f;
	static TWeakObjectPtr<UProperty> __Local__141{};
	const UProperty* __Local__140 = __Local__141.Get();
	if (nullptr == __Local__140)
	{
		__Local__140 = (USpinBox::StaticClass())->FindPropertyByName(FName(TEXT("bOverride_MinValue")));
		check(__Local__140);
		__Local__141 = __Local__140;
	}
	(((UBoolProperty*)__Local__140)->SetPropertyValue_InContainer((__Local__139), true, 0));
	static TWeakObjectPtr<UProperty> __Local__143{};
	const UProperty* __Local__142 = __Local__143.Get();
	if (nullptr == __Local__142)
	{
		__Local__142 = (USpinBox::StaticClass())->FindPropertyByName(FName(TEXT("bOverride_MaxValue")));
		check(__Local__142);
		__Local__143 = __Local__142;
	}
	(((UBoolProperty*)__Local__142)->SetPropertyValue_InContainer((__Local__139), true, 0));
	static TWeakObjectPtr<UProperty> __Local__145{};
	const UProperty* __Local__144 = __Local__145.Get();
	if (nullptr == __Local__144)
	{
		__Local__144 = (USpinBox::StaticClass())->FindPropertyByName(FName(TEXT("bOverride_MinSliderValue")));
		check(__Local__144);
		__Local__145 = __Local__144;
	}
	(((UBoolProperty*)__Local__144)->SetPropertyValue_InContainer((__Local__139), true, 0));
	static TWeakObjectPtr<UProperty> __Local__147{};
	const UProperty* __Local__146 = __Local__147.Get();
	if (nullptr == __Local__146)
	{
		__Local__146 = (USpinBox::StaticClass())->FindPropertyByName(FName(TEXT("bOverride_MaxSliderValue")));
		check(__Local__146);
		__Local__147 = __Local__146;
	}
	(((UBoolProperty*)__Local__146)->SetPropertyValue_InContainer((__Local__139), true, 0));
	auto& __Local__148 = (*(AccessPrivateProperty<float >((__Local__139), USpinBox::__PPO__MinValue() )));
	__Local__148 = 100.000000f;
	auto& __Local__149 = (*(AccessPrivateProperty<float >((__Local__139), USpinBox::__PPO__MaxValue() )));
	__Local__149 = 15000.000000f;
	auto& __Local__150 = (*(AccessPrivateProperty<float >((__Local__139), USpinBox::__PPO__MinSliderValue() )));
	__Local__150 = 100.000000f;
	auto& __Local__151 = (*(AccessPrivateProperty<float >((__Local__139), USpinBox::__PPO__MaxSliderValue() )));
	__Local__151 = 15000.000000f;
	__Local__139->Slot = __Local__138;
	__Local__138->Content = __Local__139;
	__Local__137.Add(__Local__138);
	auto __Local__152 = NewObject<UCanvasPanelSlot>(__Local__136, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_13"));
	__Local__152->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__152->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__152->LayoutData.Alignment = FVector2D(0.000000, 0.500000);
	__Local__152->bAutoSize = true;
	__Local__152->Parent = __Local__136;
	auto __Local__153 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_9"));
	__Local__153->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Suspension Strength"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("33B0C80346F4FA2118D1678DEBB2589C") /* Key */
	);
	__Local__153->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__153->Font.Size = 14;
	__Local__153->ShadowOffset = FVector2D(0.000000, 0.000000);
	__Local__153->Slot = __Local__152;
	__Local__152->Content = __Local__153;
	__Local__137.Add(__Local__152);
	__Local__136->Slot = __Local__135;
	__Local__135->Content = __Local__136;
	__Local__28.Add(__Local__135);
	auto __Local__154 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_17"));
	__Local__154->Padding.Top = 2.000000f;
	__Local__154->Padding.Bottom = 2.000000f;
	__Local__154->Parent = __Local__27;
	auto __Local__155 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("SLength_Box"));
	auto& __Local__156 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__155), UPanelWidget::__PPO__Slots() )));
	__Local__156 = TArray<UPanelSlot*> ();
	__Local__156.Reserve(2);
	auto __Local__157 = NewObject<UCanvasPanelSlot>(__Local__155, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_16"));
	__Local__157->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__157->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__157->LayoutData.Alignment = FVector2D(0.000000, 0.500000);
	__Local__157->bAutoSize = true;
	__Local__157->Parent = __Local__155;
	auto __Local__158 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_10"));
	__Local__158->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Suspension Length"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F59EC7204737F92FAE5E4586C9FFFDDE") /* Key */
	);
	__Local__158->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__158->Font.Size = 14;
	__Local__158->ShadowOffset = FVector2D(0.000000, 0.000000);
	__Local__158->Slot = __Local__157;
	__Local__157->Content = __Local__158;
	__Local__156.Add(__Local__157);
	auto __Local__159 = NewObject<UCanvasPanelSlot>(__Local__155, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_17"));
	__Local__159->LayoutData.Offsets.Bottom = 22.000000f;
	__Local__159->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.500000);
	__Local__159->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__159->LayoutData.Alignment = FVector2D(1.000000, 0.500000);
	__Local__159->ZOrder = 2;
	__Local__159->Parent = __Local__155;
	auto __Local__160 = NewObject<USpinBox>(__Local__1, USpinBox::StaticClass(), TEXT("SuspensionLengthValue"));
	__Local__160->Delta = 1.000000f;
	(((UBoolProperty*)__Local__140)->SetPropertyValue_InContainer((__Local__160), true, 0));
	(((UBoolProperty*)__Local__142)->SetPropertyValue_InContainer((__Local__160), true, 0));
	(((UBoolProperty*)__Local__144)->SetPropertyValue_InContainer((__Local__160), true, 0));
	(((UBoolProperty*)__Local__146)->SetPropertyValue_InContainer((__Local__160), true, 0));
	auto& __Local__161 = (*(AccessPrivateProperty<float >((__Local__160), USpinBox::__PPO__MinValue() )));
	__Local__161 = 1.000000f;
	auto& __Local__162 = (*(AccessPrivateProperty<float >((__Local__160), USpinBox::__PPO__MaxValue() )));
	__Local__162 = 75.000000f;
	auto& __Local__163 = (*(AccessPrivateProperty<float >((__Local__160), USpinBox::__PPO__MinSliderValue() )));
	__Local__163 = 1.000000f;
	auto& __Local__164 = (*(AccessPrivateProperty<float >((__Local__160), USpinBox::__PPO__MaxSliderValue() )));
	__Local__164 = 75.000000f;
	__Local__160->Slot = __Local__159;
	__Local__159->Content = __Local__160;
	__Local__156.Add(__Local__159);
	__Local__155->Slot = __Local__154;
	__Local__154->Content = __Local__155;
	__Local__28.Add(__Local__154);
	auto __Local__165 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_18"));
	__Local__165->Padding.Top = 2.000000f;
	__Local__165->Padding.Bottom = 2.000000f;
	__Local__165->Parent = __Local__27;
	auto __Local__166 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("SDamping_Box"));
	auto& __Local__167 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__166), UPanelWidget::__PPO__Slots() )));
	__Local__167 = TArray<UPanelSlot*> ();
	__Local__167.Reserve(2);
	auto __Local__168 = NewObject<UCanvasPanelSlot>(__Local__166, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_19"));
	__Local__168->LayoutData.Offsets.Bottom = 22.000000f;
	__Local__168->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.500000);
	__Local__168->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__168->LayoutData.Alignment = FVector2D(1.000000, 0.500000);
	__Local__168->ZOrder = 2;
	__Local__168->Parent = __Local__166;
	auto __Local__169 = NewObject<USpinBox>(__Local__1, USpinBox::StaticClass(), TEXT("SuspensionDampingValue"));
	__Local__169->Delta = 1.000000f;
	(((UBoolProperty*)__Local__140)->SetPropertyValue_InContainer((__Local__169), true, 0));
	(((UBoolProperty*)__Local__142)->SetPropertyValue_InContainer((__Local__169), true, 0));
	(((UBoolProperty*)__Local__144)->SetPropertyValue_InContainer((__Local__169), true, 0));
	(((UBoolProperty*)__Local__146)->SetPropertyValue_InContainer((__Local__169), true, 0));
	auto& __Local__170 = (*(AccessPrivateProperty<float >((__Local__169), USpinBox::__PPO__MaxValue() )));
	__Local__170 = 250.000000f;
	auto& __Local__171 = (*(AccessPrivateProperty<float >((__Local__169), USpinBox::__PPO__MaxSliderValue() )));
	__Local__171 = 250.000000f;
	__Local__169->Slot = __Local__168;
	__Local__168->Content = __Local__169;
	__Local__167.Add(__Local__168);
	auto __Local__172 = NewObject<UCanvasPanelSlot>(__Local__166, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_20"));
	__Local__172->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__172->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__172->LayoutData.Alignment = FVector2D(0.000000, 0.500000);
	__Local__172->bAutoSize = true;
	__Local__172->Parent = __Local__166;
	auto __Local__173 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_11"));
	__Local__173->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Suspension Damping"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4D5DEC1E449A0D35934A9885222DA924") /* Key */
	);
	__Local__173->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__173->Font.Size = 14;
	__Local__173->ShadowOffset = FVector2D(0.000000, 0.000000);
	__Local__173->Slot = __Local__172;
	__Local__172->Content = __Local__173;
	__Local__167.Add(__Local__172);
	__Local__166->Slot = __Local__165;
	__Local__165->Content = __Local__166;
	__Local__28.Add(__Local__165);
	auto __Local__174 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_19"));
	__Local__174->Padding.Top = 5.000000f;
	__Local__174->Padding.Bottom = 5.000000f;
	__Local__174->Parent = __Local__27;
	auto __Local__175 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("Spacer_04"));
	__Local__175->Slot = __Local__174;
	__Local__174->Content = __Local__175;
	__Local__28.Add(__Local__174);
	auto __Local__176 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_25"));
	__Local__176->Parent = __Local__27;
	auto __Local__177 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("FBurnRate_Box"));
	auto& __Local__178 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__177), UPanelWidget::__PPO__Slots() )));
	__Local__178 = TArray<UPanelSlot*> ();
	__Local__178.Reserve(2);
	auto __Local__179 = NewObject<UCanvasPanelSlot>(__Local__177, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_19"));
	__Local__179->LayoutData.Offsets.Bottom = 22.000000f;
	__Local__179->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.500000);
	__Local__179->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__179->LayoutData.Alignment = FVector2D(1.000000, 0.500000);
	__Local__179->ZOrder = 2;
	__Local__179->Parent = __Local__177;
	auto __Local__180 = NewObject<USpinBox>(__Local__1, USpinBox::StaticClass(), TEXT("FuelBurningValue"));
	(((UBoolProperty*)__Local__140)->SetPropertyValue_InContainer((__Local__180), true, 0));
	(((UBoolProperty*)__Local__142)->SetPropertyValue_InContainer((__Local__180), true, 0));
	(((UBoolProperty*)__Local__144)->SetPropertyValue_InContainer((__Local__180), true, 0));
	(((UBoolProperty*)__Local__146)->SetPropertyValue_InContainer((__Local__180), true, 0));
	auto& __Local__181 = (*(AccessPrivateProperty<float >((__Local__180), USpinBox::__PPO__MinValue() )));
	__Local__181 = 1.000000f;
	auto& __Local__182 = (*(AccessPrivateProperty<float >((__Local__180), USpinBox::__PPO__MinSliderValue() )));
	__Local__182 = 1.000000f;
	auto& __Local__183 = (*(AccessPrivateProperty<float >((__Local__180), USpinBox::__PPO__MaxSliderValue() )));
	__Local__183 = 10.000000f;
	__Local__180->Slot = __Local__179;
	__Local__179->Content = __Local__180;
	__Local__178.Add(__Local__179);
	auto __Local__184 = NewObject<UCanvasPanelSlot>(__Local__177, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_20"));
	__Local__184->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__184->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__184->LayoutData.Alignment = FVector2D(0.000000, 0.500000);
	__Local__184->bAutoSize = true;
	__Local__184->Parent = __Local__177;
	auto __Local__185 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_18"));
	__Local__185->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Fuel Burning Rate"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A6590F95407C441AFEC83FAADC0965FD") /* Key */
	);
	__Local__185->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__185->Font.Size = 14;
	__Local__185->ShadowOffset = FVector2D(0.000000, 0.000000);
	__Local__185->Slot = __Local__184;
	__Local__184->Content = __Local__185;
	__Local__178.Add(__Local__184);
	__Local__177->Slot = __Local__176;
	__Local__176->Content = __Local__177;
	__Local__28.Add(__Local__176);
	auto __Local__186 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_26"));
	__Local__186->Padding.Top = 5.000000f;
	__Local__186->Padding.Bottom = 5.000000f;
	__Local__186->Parent = __Local__27;
	auto __Local__187 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"));
	__Local__187->Slot = __Local__186;
	__Local__186->Content = __Local__187;
	__Local__28.Add(__Local__186);
	auto __Local__188 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_20"));
	__Local__188->Padding.Top = 2.000000f;
	__Local__188->Padding.Bottom = 2.000000f;
	__Local__188->Parent = __Local__27;
	auto __Local__189 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Anti-Roll_Box"));
	auto& __Local__190 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__189), UPanelWidget::__PPO__Slots() )));
	__Local__190 = TArray<UPanelSlot*> ();
	__Local__190.Reserve(2);
	auto __Local__191 = NewObject<UCanvasPanelSlot>(__Local__189, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_22"));
	__Local__191->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__191->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__191->LayoutData.Alignment = FVector2D(0.000000, 0.500000);
	__Local__191->bAutoSize = true;
	__Local__191->Parent = __Local__189;
	auto __Local__192 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_3"));
	__Local__192->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Anti-Roll Assistance"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("3ECC1E3B4D4E07D67D431A90AEA78D99") /* Key */
	);
	__Local__192->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__192->Font.Size = 14;
	__Local__192->ShadowOffset = FVector2D(0.000000, 0.000000);
	__Local__192->Slot = __Local__191;
	__Local__191->Content = __Local__192;
	__Local__190.Add(__Local__191);
	auto __Local__193 = NewObject<UCanvasPanelSlot>(__Local__189, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_23"));
	__Local__193->LayoutData.Offsets.Bottom = 22.000000f;
	__Local__193->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.500000);
	__Local__193->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__193->LayoutData.Alignment = FVector2D(1.000000, 0.500000);
	__Local__193->ZOrder = 2;
	__Local__193->Parent = __Local__189;
	auto __Local__194 = NewObject<USpinBox>(__Local__1, USpinBox::StaticClass(), TEXT("Roll_Value"));
	__Local__194->Delta = 0.010000f;
	(((UBoolProperty*)__Local__140)->SetPropertyValue_InContainer((__Local__194), true, 0));
	(((UBoolProperty*)__Local__142)->SetPropertyValue_InContainer((__Local__194), true, 0));
	(((UBoolProperty*)__Local__144)->SetPropertyValue_InContainer((__Local__194), true, 0));
	(((UBoolProperty*)__Local__146)->SetPropertyValue_InContainer((__Local__194), true, 0));
	auto& __Local__195 = (*(AccessPrivateProperty<float >((__Local__194), USpinBox::__PPO__MaxValue() )));
	__Local__195 = 1.000000f;
	auto& __Local__196 = (*(AccessPrivateProperty<float >((__Local__194), USpinBox::__PPO__MaxSliderValue() )));
	__Local__196 = 1.000000f;
	__Local__194->Slot = __Local__193;
	__Local__193->Content = __Local__194;
	__Local__190.Add(__Local__193);
	__Local__189->Slot = __Local__188;
	__Local__188->Content = __Local__189;
	__Local__28.Add(__Local__188);
	auto __Local__197 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_21"));
	__Local__197->Padding.Top = 2.000000f;
	__Local__197->Padding.Bottom = 2.000000f;
	__Local__197->Parent = __Local__27;
	auto __Local__198 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Anti-Drift_Box"));
	auto& __Local__199 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__198), UPanelWidget::__PPO__Slots() )));
	__Local__199 = TArray<UPanelSlot*> ();
	__Local__199.Reserve(2);
	auto __Local__200 = NewObject<UCanvasPanelSlot>(__Local__198, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_25"));
	__Local__200->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__200->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__200->LayoutData.Alignment = FVector2D(0.000000, 0.500000);
	__Local__200->bAutoSize = true;
	__Local__200->Parent = __Local__198;
	auto __Local__201 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_13"));
	__Local__201->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Anti-Drift Assistance"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A8545E3C439017E74AC34DB408F27E86") /* Key */
	);
	__Local__201->Font.TypefaceFontName = FName(TEXT("Regular"));
	__Local__201->Font.Size = 14;
	__Local__201->ShadowOffset = FVector2D(0.000000, 0.000000);
	__Local__201->Slot = __Local__200;
	__Local__200->Content = __Local__201;
	__Local__199.Add(__Local__200);
	auto __Local__202 = NewObject<UCanvasPanelSlot>(__Local__198, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_26"));
	__Local__202->LayoutData.Offsets.Bottom = 22.000000f;
	__Local__202->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.500000);
	__Local__202->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__202->LayoutData.Alignment = FVector2D(1.000000, 0.500000);
	__Local__202->ZOrder = 2;
	__Local__202->Parent = __Local__198;
	auto __Local__203 = NewObject<USpinBox>(__Local__1, USpinBox::StaticClass(), TEXT("Drift_Value"));
	__Local__203->Delta = 0.010000f;
	(((UBoolProperty*)__Local__140)->SetPropertyValue_InContainer((__Local__203), true, 0));
	(((UBoolProperty*)__Local__142)->SetPropertyValue_InContainer((__Local__203), true, 0));
	(((UBoolProperty*)__Local__144)->SetPropertyValue_InContainer((__Local__203), true, 0));
	(((UBoolProperty*)__Local__146)->SetPropertyValue_InContainer((__Local__203), true, 0));
	auto& __Local__204 = (*(AccessPrivateProperty<float >((__Local__203), USpinBox::__PPO__MaxValue() )));
	__Local__204 = 1.000000f;
	auto& __Local__205 = (*(AccessPrivateProperty<float >((__Local__203), USpinBox::__PPO__MaxSliderValue() )));
	__Local__205 = 1.000000f;
	__Local__203->Slot = __Local__202;
	__Local__202->Content = __Local__203;
	__Local__199.Add(__Local__202);
	__Local__198->Slot = __Local__197;
	__Local__197->Content = __Local__198;
	__Local__28.Add(__Local__197);
	auto __Local__206 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_22"));
	__Local__206->Padding.Top = 5.000000f;
	__Local__206->Padding.Bottom = 5.000000f;
	__Local__206->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__206->Parent = __Local__27;
	auto __Local__207 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("Spacer_05"));
	__Local__207->Slot = __Local__206;
	__Local__206->Content = __Local__207;
	__Local__28.Add(__Local__206);
	auto __Local__208 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_1"));
	__Local__208->Parent = __Local__27;
	auto __Local__209 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Un-Roll_Button"));
	auto& __Local__210 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__209), UPanelWidget::__PPO__Slots() )));
	__Local__210 = TArray<UPanelSlot*> ();
	__Local__210.Reserve(1);
	auto __Local__211 = NewObject<UButtonSlot>(__Local__209, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__211->Parent = __Local__209;
	auto __Local__212 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_52"));
	__Local__212->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Un-roll"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("B21C14734918C4EF9A2A03975D1222FF") /* Key */
	);
	auto& __Local__213 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__212->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__213 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__212->Font.Size = 14;
	__Local__212->Slot = __Local__211;
	__Local__211->Content = __Local__212;
	__Local__210.Add(__Local__211);
	__Local__209->Slot = __Local__208;
	__Local__208->Content = __Local__209;
	__Local__28.Add(__Local__208);
	auto __Local__214 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"));
	__Local__214->Parent = __Local__27;
	auto __Local__215 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Save_Button"));
	auto& __Local__216 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__215), UPanelWidget::__PPO__Slots() )));
	__Local__216 = TArray<UPanelSlot*> ();
	__Local__216.Reserve(1);
	auto __Local__217 = NewObject<UButtonSlot>(__Local__215, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__217->Parent = __Local__215;
	auto __Local__218 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_53"));
	__Local__218->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Save Current Location"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5A4D56D848A021F84706E9AA4BE4CDC0") /* Key */
	);
	auto& __Local__219 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__218->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__219 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__218->Font.Size = 14;
	__Local__218->Slot = __Local__217;
	__Local__217->Content = __Local__218;
	__Local__216.Add(__Local__217);
	__Local__215->Slot = __Local__214;
	__Local__214->Content = __Local__215;
	__Local__28.Add(__Local__214);
	auto __Local__220 = NewObject<UVerticalBoxSlot>(__Local__27, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_3"));
	__Local__220->Parent = __Local__27;
	auto __Local__221 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Respawn_Button"));
	auto& __Local__222 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__221), UPanelWidget::__PPO__Slots() )));
	__Local__222 = TArray<UPanelSlot*> ();
	__Local__222.Reserve(1);
	auto __Local__223 = NewObject<UButtonSlot>(__Local__221, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__223->Parent = __Local__221;
	auto __Local__224 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_54"));
	__Local__224->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Respawn at Saved Location"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("48EFCA5249E391A1D8D2ED815C26C0D5") /* Key */
	);
	auto& __Local__225 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__224->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__225 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__224->Font.Size = 14;
	__Local__224->Slot = __Local__223;
	__Local__223->Content = __Local__224;
	__Local__222.Add(__Local__223);
	__Local__221->Slot = __Local__220;
	__Local__221->bIsEnabled = false;
	__Local__220->Content = __Local__221;
	__Local__28.Add(__Local__220);
	__Local__27->Slot = __Local__25;
	__Local__25->Content = __Local__27;
	__Local__24.Add(__Local__25);
	__Local__22->Slot = __Local__21;
	__Local__21->Content = __Local__22;
	__Local__20.Add(__Local__21);
	__Local__19->Visibility = ESlateVisibility::Visible;
	__Local__1->RootWidget = __Local__19;
}
void UVehicle_Debug_C__pf1863595755::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__226;
	SlotNames.Append(__Local__226);
}
void UVehicle_Debug_C__pf1863595755::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__227;
	TArray<FDelegateRuntimeBinding>  __Local__228;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UVehicle_Debug_C__pf1863595755::StaticClass())->MiscConvertedSubobjects[0]), __Local__227, __Local__228);
}
void UVehicle_Debug_C__pf1863595755::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	int32 bpfv__CallFunc_FFloor_ReturnValue__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue__pf{};
	float bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue2__pf{};
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue3__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue4__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue3__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue4__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue4__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue5__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Round_ReturnValue5__pf{};
	bool bpfv__CallFunc_Greater_IntInt_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_IntToText_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(1.000000, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf);
	bpfv__CallFunc_Round_ReturnValue5__pf = UKismetMathLibrary::Round(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf);
	bpfv__CallFunc_Conv_IntToText_ReturnValue2__pf = UKismetTextLibrary::Conv_IntToText(bpfv__CallFunc_Round_ReturnValue5__pf, true, 1, 324);
	if(IsValid(bpv__FPS_Text__pf))
	{
		bpv__FPS_Text__pf->SetText(bpfv__CallFunc_Conv_IntToText_ReturnValue2__pf);
	}
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf = FCustomThunkTemplates::Divide_FloatFloat(1.000000, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf);
	bpfv__CallFunc_Round_ReturnValue5__pf = UKismetMathLibrary::Round(bpfv__CallFunc_Divide_FloatFloat_ReturnValue2__pf);
	b0l__K2Node_MakeStruct_LinearColor4__pf.R = 0.000000;
	b0l__K2Node_MakeStruct_LinearColor4__pf.G = 0.500000;
	b0l__K2Node_MakeStruct_LinearColor4__pf.B = 0.000000;
	b0l__K2Node_MakeStruct_LinearColor4__pf.A = 1.000000;
	bpfv__CallFunc_Greater_IntInt_ReturnValue__pf = UKismetMathLibrary::Greater_IntInt(bpfv__CallFunc_Round_ReturnValue5__pf, 59);
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor4__pf), FSlateColor::__PPO__SpecifiedColor() ))) = b0l__K2Node_MakeStruct_LinearColor4__pf;
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor4__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	b0l__Temp_bool_Variable2__pf = bpfv__CallFunc_Greater_IntInt_ReturnValue__pf;
	b0l__K2Node_MakeStruct_LinearColor5__pf.R = 0.500000;
	b0l__K2Node_MakeStruct_LinearColor5__pf.G = 0.000000;
	b0l__K2Node_MakeStruct_LinearColor5__pf.B = 0.000000;
	b0l__K2Node_MakeStruct_LinearColor5__pf.A = 1.000000;
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor5__pf), FSlateColor::__PPO__SpecifiedColor() ))) = b0l__K2Node_MakeStruct_LinearColor5__pf;
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor5__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	if(IsValid(bpv__FPS_Text__pf))
	{
		bpv__FPS_Text__pf->UTextBlock::SetColorAndOpacity(TSwitchValue<bool , FSlateColor >(b0l__Temp_bool_Variable2__pf, b0l__K2Node_Select2_Default__pf, 2, TSwitchPair<bool , FSlateColor >(false, b0l__K2Node_MakeStruct_SlateColor5__pf), TSwitchPair<bool , FSlateColor >(true, b0l__K2Node_MakeStruct_SlateColor4__pf)));
	}
	float  __Local__229 = 0.000000;
	bpfv__CallFunc_Round_ReturnValue4__pf = UKismetMathLibrary::Round(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__Speed__pf) : (__Local__229)));
	bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Round_ReturnValue4__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue4__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue3__pf, FString(TEXT(" km/h")));
	bpfv__CallFunc_Conv_StringToText_ReturnValue5__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue4__pf);
	if(IsValid(bpv__GSpeed_Text__pf))
	{
		bpv__GSpeed_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue5__pf);
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpfv__CallFunc_GetVelocity_ReturnValue__pf = bpv__Vehicle__pf->GetVelocity();
	}
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetVelocity_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b0l__CallFunc_BreakVector_X__pf, b0l__CallFunc_BreakVector_Y__pf, 0.000000);
	bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_MakeVector_ReturnValue__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 0.036000);
	bpfv__CallFunc_Round_ReturnValue2__pf = UKismetMathLibrary::Round(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf);
	bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Round_ReturnValue2__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf, FString(TEXT(" km/h")));
	bpfv__CallFunc_Conv_StringToText_ReturnValue3__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue3__pf);
	if(IsValid(bpv__VSpeed_Text__pf))
	{
		bpv__VSpeed_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue3__pf);
	}
	float  __Local__230 = 0.000000;
	bpfv__CallFunc_Round_ReturnValue3__pf = UKismetMathLibrary::Round(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__RPM__pf) : (__Local__230)));
	bpfv__CallFunc_Conv_IntToText_ReturnValue__pf = UKismetTextLibrary::Conv_IntToText(bpfv__CallFunc_Round_ReturnValue3__pf, true, 1, 324);
	if(IsValid(bpv__RPM_Text__pf))
	{
		bpv__RPM_Text__pf->SetText(bpfv__CallFunc_Conv_IntToText_ReturnValue__pf);
	}
	TArray<FGear_Structure__pf863842189>  __Local__231 = TArray<FGear_Structure__pf863842189> {};
	int32  __Local__232 = 0;
	FCustomThunkTemplates::Array_Get(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__Gears__pf) : (__Local__231)), ((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__Gear__pf) : (__Local__232)), /*out*/ b0l__CallFunc_Array_Get_Item__pf);
	bpfv__CallFunc_Conv_StringToText_ReturnValue4__pf = UKismetTextLibrary::Conv_StringToText(b0l__CallFunc_Array_Get_Item__pf.bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf);
	if(IsValid(bpv__Gear_Text__pf))
	{
		bpv__Gear_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue4__pf);
	}
	b0l__K2Node_MakeStruct_LinearColor__pf.R = 1.000000;
	b0l__K2Node_MakeStruct_LinearColor__pf.G = 1.000000;
	b0l__K2Node_MakeStruct_LinearColor__pf.B = 1.000000;
	b0l__K2Node_MakeStruct_LinearColor__pf.A = 1.000000;
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__SpecifiedColor() ))) = b0l__K2Node_MakeStruct_LinearColor__pf;
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	bool  __Local__233 = false;
	b0l__Temp_bool_Variable__pf = ((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__IsxChangingxGear__pfTT) : (__Local__233));
	b0l__K2Node_MakeStruct_LinearColor6__pf.R = 0.000000;
	b0l__K2Node_MakeStruct_LinearColor6__pf.G = 0.500000;
	b0l__K2Node_MakeStruct_LinearColor6__pf.B = 0.000000;
	b0l__K2Node_MakeStruct_LinearColor6__pf.A = 1.000000;
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor6__pf), FSlateColor::__PPO__SpecifiedColor() ))) = b0l__K2Node_MakeStruct_LinearColor6__pf;
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor6__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	if(IsValid(bpv__Gear_Text__pf))
	{
		bpv__Gear_Text__pf->UTextBlock::SetColorAndOpacity(TSwitchValue<bool , FSlateColor >(b0l__Temp_bool_Variable__pf, b0l__K2Node_Select3_Default__pf, 2, TSwitchPair<bool , FSlateColor >(false, b0l__K2Node_MakeStruct_SlateColor__pf), TSwitchPair<bool , FSlateColor >(true, b0l__K2Node_MakeStruct_SlateColor6__pf)));
	}
	float  __Local__234 = 0.000000;
	bpfv__CallFunc_Round_ReturnValue__pf = UKismetMathLibrary::Round(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__FuelxAmmount__pfT) : (__Local__234)));
	bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_Round_ReturnValue__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue__pf, FString(TEXT(" %")));
	bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf);
	if(IsValid(bpv__Fuel_Text__pf))
	{
		bpv__Fuel_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
	}
	float  __Local__235 = 0.000000;
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__Mileage__pf) : (__Local__235)), 100.000000);
	bpfv__CallFunc_FFloor_ReturnValue__pf = UKismetMathLibrary::FFloor(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf = UKismetMathLibrary::Conv_IntToFloat(bpfv__CallFunc_FFloor_ReturnValue__pf);
	bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf = FCustomThunkTemplates::Divide_FloatFloat(bpfv__CallFunc_Conv_IntToFloat_ReturnValue__pf, 100.000000);
	bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf = UKismetStringLibrary::Conv_FloatToString(bpfv__CallFunc_Divide_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf, FString(TEXT(" Km")));
	bpfv__CallFunc_Conv_StringToText_ReturnValue2__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf);
	if(IsValid(bpv__Mileage_Text__pf))
	{
		bpv__Mileage_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue2__pf);
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 92);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__SmartxThrottle__pfT = b0l__K2Node_ComponentBoundEvent_bIsChecked3__pf;
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__AutoxRotatexCamera__pfTT = b0l__K2Node_ComponentBoundEvent_bIsChecked7__pf;
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 89);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__BrakexasxReverse__pfTT = b0l__K2Node_ComponentBoundEvent_bIsChecked4__pf;
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 95);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__InfinitexFuel__pfT = b0l__K2Node_ComponentBoundEvent_bIsChecked2__pf;
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__FuelxAmmount__pfT = 100.000000;
	}
	bool  __Local__236 = false;
	b0l__Temp_bool_Variable3__pf = ((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__InfinitexFuel__pfT) : (__Local__236));
	b0l__K2Node_MakeStruct_LinearColor2__pf.R = 0.000000;
	b0l__K2Node_MakeStruct_LinearColor2__pf.G = 0.500000;
	b0l__K2Node_MakeStruct_LinearColor2__pf.B = 0.000000;
	b0l__K2Node_MakeStruct_LinearColor2__pf.A = 1.000000;
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor2__pf), FSlateColor::__PPO__SpecifiedColor() ))) = b0l__K2Node_MakeStruct_LinearColor2__pf;
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor2__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	b0l__K2Node_MakeStruct_LinearColor3__pf.R = 1.000000;
	b0l__K2Node_MakeStruct_LinearColor3__pf.G = 1.000000;
	b0l__K2Node_MakeStruct_LinearColor3__pf.B = 1.000000;
	b0l__K2Node_MakeStruct_LinearColor3__pf.A = 1.000000;
	(*(AccessPrivateProperty<FLinearColor >(&(b0l__K2Node_MakeStruct_SlateColor3__pf), FSlateColor::__PPO__SpecifiedColor() ))) = b0l__K2Node_MakeStruct_LinearColor3__pf;
	(*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(b0l__K2Node_MakeStruct_SlateColor3__pf), FSlateColor::__PPO__ColorUseRule() ))) = ESlateColorStylingMode::UseColor_Specified;
	if(IsValid(bpv__Fuel_Text__pf))
	{
		bpv__Fuel_Text__pf->UTextBlock::SetColorAndOpacity(TSwitchValue<bool , FSlateColor >(b0l__Temp_bool_Variable3__pf, b0l__K2Node_Select_Default__pf, 2, TSwitchPair<bool , FSlateColor >(false, b0l__K2Node_MakeStruct_SlateColor3__pf), TSwitchPair<bool , FSlateColor >(true, b0l__K2Node_MakeStruct_SlateColor2__pf)));
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 32);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::ExecuteConsoleCommand(this, FString(TEXT("Show Collision")), ((APlayerController*)nullptr));
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 46);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::K2_ClearTimer(this, FString(TEXT("Timer")));
	bpv__Readyx__pfS = false;
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_7(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_SetTimer_ReturnValue2__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("Timer")), 0.100000, true);
	if(IsValid(bpv__CheckBox_autorotcam__pf))
	{
		bool  __Local__237 = false;
		bpv__CheckBox_autorotcam__pf->UCheckBox::SetIsChecked(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__AutoxRotatexCamera__pfTT) : (__Local__237)));
	}
	if(IsValid(bpv__CheckBox_AutoGears__pf))
	{
		bool  __Local__238 = false;
		bpv__CheckBox_AutoGears__pf->UCheckBox::SetIsChecked(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__AutomaticxTransmision__pfT) : (__Local__238)));
	}
	if(IsValid(bpv__SuspensionStrengthValue__pf))
	{
		float  __Local__239 = 0.000000;
		bpv__SuspensionStrengthValue__pf->USpinBox::SetValue(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__SuspensionxStrength__pfT) : (__Local__239)));
	}
	if(IsValid(bpv__SuspensionLengthValue__pf))
	{
		float  __Local__240 = 0.000000;
		bpv__SuspensionLengthValue__pf->USpinBox::SetValue(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__SuspensionxLength__pfT) : (__Local__240)));
	}
	if(IsValid(bpv__SuspensionDampingValue__pf))
	{
		float  __Local__241 = 0.000000;
		bpv__SuspensionDampingValue__pf->USpinBox::SetValue(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__SuspensionxDamping__pfT) : (__Local__241)));
	}
	if(IsValid(bpv__Roll_Value__pf))
	{
		float  __Local__242 = 0.000000;
		bpv__Roll_Value__pf->USpinBox::SetValue(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__AntixRollxMultiplier__pfGT) : (__Local__242)));
	}
	if(IsValid(bpv__Drift_Value__pf))
	{
		float  __Local__243 = 0.000000;
		bpv__Drift_Value__pf->USpinBox::SetValue(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__AntixDriftxMultiplier__pfGT) : (__Local__243)));
	}
	if(IsValid(bpv__CheckBox_SmartThrottle__pf))
	{
		bool  __Local__244 = false;
		bpv__CheckBox_SmartThrottle__pf->UCheckBox::SetIsChecked(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__SmartxThrottle__pfT) : (__Local__244)));
	}
	if(IsValid(bpv__CheckBox_BrakeasReverse__pf))
	{
		bool  __Local__245 = false;
		bpv__CheckBox_BrakeasReverse__pf->UCheckBox::SetIsChecked(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__BrakexasxReverse__pfTT) : (__Local__245)));
	}
	if(IsValid(bpv__CheckBox_InfiniteFuel__pf))
	{
		bool  __Local__246 = false;
		bpv__CheckBox_InfiniteFuel__pf->UCheckBox::SetIsChecked(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__InfinitexFuel__pfT) : (__Local__246)));
	}
	if(IsValid(bpv__FuelBurningValue__pf))
	{
		float  __Local__247 = 0.000000;
		bpv__FuelBurningValue__pf->USpinBox::SetValue(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__FuelxBurningxRate__pfTT) : (__Local__247)));
	}
	if(IsValid(bpv__CheckBox_AirControl__pf))
	{
		bool  __Local__248 = false;
		bpv__CheckBox_AirControl__pf->UCheckBox::SetIsChecked(((IsValid(bpv__Vehicle__pf)) ? (bpv__Vehicle__pf->bpv__EnablexAirxControl__pfTT) : (__Local__248)));
	}
	bpv__Readyx__pfS = true;
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 101);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__EnablexAirxControl__pfTT = b0l__K2Node_ComponentBoundEvent_bIsChecked__pf;
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_9(int32 bpp__EntryPoint__pf)
{
	UClass* bpfv__CallFunc_GetObjectClass_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue2__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue2__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	ABP_Master_Vehicle_C__pf3373537038* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue2__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue3__pf{};
	bool bpfv__CallFunc_IsChecked_ReturnValue__pf{};
	bool bpfv__CallFunc_IsChecked_ReturnValue2__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue4__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue5__pf{};
	bool bpfv__CallFunc_IsChecked_ReturnValue3__pf{};
	bool bpfv__CallFunc_IsChecked_ReturnValue4__pf{};
	bool bpfv__CallFunc_IsChecked_ReturnValue5__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue6__pf{};
	check(bpp__EntryPoint__pf == 66);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetObjectClass_ReturnValue__pf = UGameplayStatics::GetObjectClass(bpv__Vehicle__pf);
	UKismetMathLibrary::BreakTransform(bpv__SavedxTransform__pfT, /*out*/ b0l__CallFunc_BreakTransform_Location2__pf, /*out*/ b0l__CallFunc_BreakTransform_Rotation2__pf, /*out*/ b0l__CallFunc_BreakTransform_Scale2__pf);
	UKismetMathLibrary::BreakRotator(b0l__CallFunc_BreakTransform_Rotation2__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_Add_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Add_VectorVector(b0l__CallFunc_BreakTransform_Location2__pf, FVector(0.000000,0.000000,100.000000));
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeTransform_ReturnValue2__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_Add_VectorVector_ReturnValue2__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, b0l__CallFunc_BreakTransform_Scale2__pf);
	bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, bpfv__CallFunc_GetObjectClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue2__pf, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, ((AActor*)nullptr));
	if(IsValid(bpv__SuspensionStrengthValue__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue2__pf = bpv__SuspensionStrengthValue__pf->USpinBox::GetValue();
	}
	UKismetSystemLibrary::SetFloatPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Suspension Strength")), bpfv__CallFunc_GetValue_ReturnValue2__pf);
	if(IsValid(bpv__SuspensionDampingValue__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__SuspensionDampingValue__pf->USpinBox::GetValue();
	}
	UKismetSystemLibrary::SetFloatPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Suspension Damping")), bpfv__CallFunc_GetValue_ReturnValue__pf);
	if(IsValid(bpv__SuspensionLengthValue__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue3__pf = bpv__SuspensionLengthValue__pf->USpinBox::GetValue();
	}
	UKismetSystemLibrary::SetFloatPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Suspension Length")), bpfv__CallFunc_GetValue_ReturnValue3__pf);
	if(IsValid(bpv__CheckBox_autorotcam__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue2__pf = bpv__CheckBox_autorotcam__pf->UCheckBox::IsChecked();
	}
	UKismetSystemLibrary::SetBoolPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Auto Rotate Camera")), bpfv__CallFunc_IsChecked_ReturnValue2__pf);
	if(IsValid(bpv__CheckBox_AutoGears__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue__pf = bpv__CheckBox_AutoGears__pf->UCheckBox::IsChecked();
	}
	UKismetSystemLibrary::SetBoolPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Automatic Transmision")), bpfv__CallFunc_IsChecked_ReturnValue__pf);
	if(IsValid(bpv__CheckBox_BrakeasReverse__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue4__pf = bpv__CheckBox_BrakeasReverse__pf->UCheckBox::IsChecked();
	}
	UKismetSystemLibrary::SetBoolPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Brake as Reverse")), bpfv__CallFunc_IsChecked_ReturnValue4__pf);
	if(IsValid(bpv__CheckBox_SmartThrottle__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue3__pf = bpv__CheckBox_SmartThrottle__pf->UCheckBox::IsChecked();
	}
	UKismetSystemLibrary::SetBoolPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Smart Throttle")), bpfv__CallFunc_IsChecked_ReturnValue3__pf);
	if(IsValid(bpv__CheckBox_InfiniteFuel__pf))
	{
		bpfv__CallFunc_IsChecked_ReturnValue5__pf = bpv__CheckBox_InfiniteFuel__pf->UCheckBox::IsChecked();
	}
	UKismetSystemLibrary::SetBoolPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Infinite Fuel")), bpfv__CallFunc_IsChecked_ReturnValue5__pf);
	if(IsValid(bpv__FuelBurningValue__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue6__pf = bpv__FuelBurningValue__pf->USpinBox::GetValue();
	}
	UKismetSystemLibrary::SetFloatPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Fuel Burning Rate")), bpfv__CallFunc_GetValue_ReturnValue6__pf);
	if(IsValid(bpv__Roll_Value__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue4__pf = bpv__Roll_Value__pf->USpinBox::GetValue();
	}
	UKismetSystemLibrary::SetFloatPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Anti-Roll Multiplier")), bpfv__CallFunc_GetValue_ReturnValue4__pf);
	if(IsValid(bpv__Drift_Value__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue5__pf = bpv__Drift_Value__pf->USpinBox::GetValue();
	}
	UKismetSystemLibrary::SetFloatPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Anti-Drift Multiplier")), bpfv__CallFunc_GetValue_ReturnValue5__pf);
	UKismetSystemLibrary::SetObjectPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Paint Material")), CastChecked<UObject>(CastChecked<UDynamicClass>(UVehicle_Debug_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed));
	UKismetSystemLibrary::SetObjectPropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, FName(TEXT("Engine Sound")), CastChecked<UObject>(CastChecked<UDynamicClass>(UVehicle_Debug_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	UKismetMathLibrary::BreakTransform(bpv__SavedxTransform__pfT, /*out*/ b0l__CallFunc_BreakTransform_Location2__pf, /*out*/ b0l__CallFunc_BreakTransform_Rotation2__pf, /*out*/ b0l__CallFunc_BreakTransform_Scale2__pf);
	UKismetMathLibrary::BreakRotator(b0l__CallFunc_BreakTransform_Rotation2__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_Add_VectorVector_ReturnValue2__pf = UKismetMathLibrary::Add_VectorVector(b0l__CallFunc_BreakTransform_Location2__pf, FVector(0.000000,0.000000,100.000000));
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeTransform_ReturnValue2__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_Add_VectorVector_ReturnValue2__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf, b0l__CallFunc_BreakTransform_Scale2__pf);
	bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_Master_Vehicle_C__pf3373537038>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue2__pf), ECastCheckedType::NullAllowed);
	if(IsValid(bpv__Vehicle__pf))
	{
		bpfv__CallFunc_GetController_ReturnValue__pf = bpv__Vehicle__pf->APawn::GetController();
	}
	if(IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
	{
		bpfv__CallFunc_GetController_ReturnValue__pf->Possess(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf);
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->K2_DestroyActor();
	}
	bpv__Vehicle__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__Debug_Widget__pf = this;
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 35);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__SuspensionxStrength__pfT = b0l__K2Node_ComponentBoundEvent_InValue6__pf;
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpf__UpdatexSuspension__pfT();
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 100);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__FuelxBurningxRate__pfTT = b0l__K2Node_ComponentBoundEvent_InValue__pf;
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 38);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__SuspensionxLength__pfT = b0l__K2Node_ComponentBoundEvent_InValue5__pf;
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpf__UpdatexSuspension__pfT();
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 88);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__AutomaticxTransmision__pfT = b0l__K2Node_ComponentBoundEvent_bIsChecked5__pf;
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 51);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__SuspensionxDamping__pfT = b0l__K2Node_ComponentBoundEvent_InValue4__pf;
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpf__UpdatexSuspension__pfT();
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 87);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__AntixDriftxMultiplier__pfGT = b0l__K2Node_ComponentBoundEvent_InValue2__pf;
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 86);
	// optimized KCST_UnconditionalGoto
	if (!bpv__Readyx__pfS)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Vehicle__pf))
	{
		bpv__Vehicle__pf->bpv__AntixRollxMultiplier__pfGT = b0l__K2Node_ComponentBoundEvent_InValue3__pf;
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_17(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_GetTransform_ReturnValue__pf{};
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 63);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Vehicle__pf))
	{
		bpfv__CallFunc_GetTransform_ReturnValue__pf = bpv__Vehicle__pf->AActor::GetTransform();
	}
	UKismetMathLibrary::BreakTransform(bpfv__CallFunc_GetTransform_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakTransform_Location__pf, /*out*/ b0l__CallFunc_BreakTransform_Rotation__pf, /*out*/ b0l__CallFunc_BreakTransform_Scale__pf);
	bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(b0l__CallFunc_BreakTransform_Location__pf, FVector(0.000000,0.000000,200.000000));
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, b0l__CallFunc_BreakTransform_Rotation__pf, b0l__CallFunc_BreakTransform_Scale__pf);
	bpv__SavedxTransform__pfT = bpfv__CallFunc_MakeTransform_ReturnValue__pf;
	if(IsValid(bpv__Respawn_Button__pf))
	{
		bpv__Respawn_Button__pf->SetIsEnabled(true);
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_18(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 61);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Vehicle__pf))
	{
		bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = bpv__Vehicle__pf->AActor::GetActorForwardVector();
	}
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, 0.400000);
	if(IsValid(bpv__Vehicle__pf) && IsValid(bpv__Vehicle__pf->bpv__Mesh__pf))
	{
		bpv__Vehicle__pf->bpv__Mesh__pf->AddAngularImpulse(bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, FName(TEXT("None")), true);
	}
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_19(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 59);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::K2_ClearTimer(this, FString(TEXT("Un-Roll")));
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__ExecuteUbergraph_Vehicle_Debug__pf_20(int32 bpp__EntryPoint__pf)
{
	FTimerHandle bpfv__CallFunc_K2_SetTimer_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 57);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_K2_SetTimer_ReturnValue__pf = UKismetSystemLibrary::K2_SetTimer(this, FString(TEXT("Un-Roll")), 0.010000, true);
	return; // KCST_GotoReturn
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__CheckBox_AirControl_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_8(101);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__FuelBurningValue_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf)
{
	b0l__K2Node_ComponentBoundEvent_InValue__pf = bpp__InValue__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_11(100);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__CheckBox_InfiniteFuel_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked2__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_4(95);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__CheckBox_SmartThrottle_K2Node_ComponentBoundEvent_249_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked3__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_1(92);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__CheckBox_BrakeasReverse_K2Node_ComponentBoundEvent_139_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked4__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_3(89);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__CheckBox_AutoGears_K2Node_ComponentBoundEvent_301_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked5__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_13(88);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__DriftValue_K2Node_ComponentBoundEvent_1013_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf)
{
	b0l__K2Node_ComponentBoundEvent_InValue2__pf = bpp__InValue__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_15(87);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__Roll_Value_K2Node_ComponentBoundEvent_987_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf)
{
	b0l__K2Node_ComponentBoundEvent_InValue3__pf = bpp__InValue__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_16(86);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__Button_42_K2Node_ComponentBoundEvent_1633_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_9(66);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__Button_41_K2Node_ComponentBoundEvent_1536_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_17(63);
}
void UVehicle_Debug_C__pf1863595755::bpf__UnxRoll__pfG()
{
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_18(61);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__UnxRoll_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature__pfG()
{
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_19(59);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__Button_40_K2Node_ComponentBoundEvent_1165_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_20(57);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__SuspensionDampingValue_K2Node_ComponentBoundEvent_1051_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf)
{
	b0l__K2Node_ComponentBoundEvent_InValue4__pf = bpp__InValue__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_14(51);
}
void UVehicle_Debug_C__pf1863595755::bpf__Destruct__pf()
{
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_6(46);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__SuspensionLengthValue_K2Node_ComponentBoundEvent_629_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf)
{
	b0l__K2Node_ComponentBoundEvent_InValue5__pf = bpp__InValue__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_12(38);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__SuspensionStrengthValue_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf)
{
	b0l__K2Node_ComponentBoundEvent_InValue6__pf = bpp__InValue__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_10(35);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__CheckBox_ShowCollisions_K2Node_ComponentBoundEvent_528_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked6__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_5(32);
}
void UVehicle_Debug_C__pf1863595755::bpf__BndEvt__CheckBox_autorotcam_K2Node_ComponentBoundEvent_21_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf)
{
	b0l__K2Node_ComponentBoundEvent_bIsChecked7__pf = bpp__bIsChecked__pf;
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_2(28);
}
void UVehicle_Debug_C__pf1863595755::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_7(13);
}
void UVehicle_Debug_C__pf1863595755::bpf__Timer__pf()
{
	bpf__ExecuteUbergraph_Vehicle_Debug__pf_0(3);
}
void UVehicle_Debug_C__pf1863595755::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Vehicles/00_Master_Vehicle/Materials/M_default.M_default 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundCue /Game/Vehicles/Camaro/Sounds/Opel/Opel_Engine_Cue.Opel_Engine_Cue 
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
void UVehicle_Debug_C__pf1863595755::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.SpinBox 
		{116, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CheckBox 
		{117, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Vehicles/00_Master_Vehicle/BP_Master_Vehicle.BP_Master_Vehicle_C 
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
struct FRegisterHelper__UVehicle_Debug_C__pf1863595755
{
	FRegisterHelper__UVehicle_Debug_C__pf1863595755()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UMG/Vehicle_Debug"), &UVehicle_Debug_C__pf1863595755::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UVehicle_Debug_C__pf1863595755 Instance;
};
FRegisterHelper__UVehicle_Debug_C__pf1863595755 FRegisterHelper__UVehicle_Debug_C__pf1863595755::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
