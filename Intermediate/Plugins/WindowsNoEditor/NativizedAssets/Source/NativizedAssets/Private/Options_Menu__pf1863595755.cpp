#include "NativizedAssets.h"
#include "Options_Menu__pf1863595755.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/SpinBox.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
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
#include "Runtime/UMG/Public/Components/PanelSlot.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Tooltip__pf1863595755.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UOptions_Menu_C__pf1863595755::UOptions_Menu_C__pf1863595755(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UOptions_Menu_C__pf1863595755::StaticClass() == GetClass()))
	{
		UOptions_Menu_C__pf1863595755::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__AntixAliasing_Left__pfG = nullptr;
	bpv__AntixAliasing_Right__pfG = nullptr;
	bpv__AntixAliasing_Text__pfG = nullptr;
	bpv__AntiAliasing__pf = nullptr;
	bpv__Cancel_Button__pf = nullptr;
	bpv__Foliage_Left__pf = nullptr;
	bpv__Foliage_Right__pf = nullptr;
	bpv__Foliage_Text__pf = nullptr;
	bpv__PP_Left__pf = nullptr;
	bpv__PP_Right__pf = nullptr;
	bpv__PP_Text__pf = nullptr;
	bpv__Resolution_Left__pf = nullptr;
	bpv__Resolution_Right__pf = nullptr;
	bpv__Resolution_Text__pf = nullptr;
	bpv__Save_Button__pf = nullptr;
	bpv__Shadows_Left__pf = nullptr;
	bpv__Shadows_Right__pf = nullptr;
	bpv__Shadows_Text__pf = nullptr;
	bpv__SpinBox_95__pf = nullptr;
	bpv__Sync_Left__pf = nullptr;
	bpv__Sync_Right__pf = nullptr;
	bpv__Sync_Text__pf = nullptr;
	bpv__TextBlock_99__pf = nullptr;
	bpv__TextBlock_103__pf = nullptr;
	bpv__VD_Left__pf = nullptr;
	bpv__VD_Right__pf = nullptr;
	bpv__VD_Text__pf = nullptr;
	bpv__VFX_Left__pf = nullptr;
	bpv__VFX_Right__pf = nullptr;
	bpv__VFX_Text__pf = nullptr;
	bpv__Window_Left__pf = nullptr;
	bpv__Window_Right__pf = nullptr;
	bpv__Window_Text__pf = nullptr;
	bpv__Resolutions__pf = TArray<FIntPoint> ();
	bpv__ResolutionxIndex__pfT = 0;
	bpv__ScreenxModexIndex__pfTT = 0;
	bpv__AntixAliasingxIndex__pfGT = 0;
	bpv__ShadowsxIndex__pfT = 0;
	bpv__PostxProcessxIndex__pfGT = 0;
	bpv__ViewxDistancexIndex__pfTT = 0;
	bpv__VisualxEffectxIndex__pfTT = 0;
	bpv__FoliagexAmmount__pfT = 0;
	bpv__Vsync__pf = false;
	bpv__FrameratexLimit__pfT = 120.000000f;
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UOptions_Menu_C__pf1863595755::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UOptions_Menu_C__pf1863595755::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UTooltip_C__pf1863595755::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(20);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 20);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("SpinBox_95"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__SpinBox_95_K2Node_ComponentBoundEvent_2501_OnSpinBoxValueChangedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Window_Left"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Window_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Window_Right"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Window_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Sync_Left"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Sync_Left_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Sync_Right"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Sync_Right_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Resolution_Left"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Resolution_Left_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("Foliage_Right"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__Foliage_Right_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[7];
	__Local__9.ComponentPropertyName = FName(TEXT("Foliage_Left"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__Foliage_Left_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__10 = __Local__0->ComponentDelegateBindings[8];
	__Local__10.ComponentPropertyName = FName(TEXT("Resolution_Right"));
	__Local__10.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__10.FunctionNameToBind = FName(TEXT("BndEvt__Resolution_Right_K2Node_ComponentBoundEvent_127_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__11 = __Local__0->ComponentDelegateBindings[9];
	__Local__11.ComponentPropertyName = FName(TEXT("VFX_Right"));
	__Local__11.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__11.FunctionNameToBind = FName(TEXT("BndEvt__VFX_Right_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__12 = __Local__0->ComponentDelegateBindings[10];
	__Local__12.ComponentPropertyName = FName(TEXT("VFX_Left"));
	__Local__12.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__12.FunctionNameToBind = FName(TEXT("BndEvt__VFX_Left_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__13 = __Local__0->ComponentDelegateBindings[11];
	__Local__13.ComponentPropertyName = FName(TEXT("Anti-Aliasing_Left"));
	__Local__13.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__13.FunctionNameToBind = FName(TEXT("BndEvt__AA_Left_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__14 = __Local__0->ComponentDelegateBindings[12];
	__Local__14.ComponentPropertyName = FName(TEXT("VD_Left"));
	__Local__14.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__14.FunctionNameToBind = FName(TEXT("BndEvt__VD_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__15 = __Local__0->ComponentDelegateBindings[13];
	__Local__15.ComponentPropertyName = FName(TEXT("VD_Right"));
	__Local__15.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__15.FunctionNameToBind = FName(TEXT("BndEvt__VD_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__16 = __Local__0->ComponentDelegateBindings[14];
	__Local__16.ComponentPropertyName = FName(TEXT("PP_Right"));
	__Local__16.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__16.FunctionNameToBind = FName(TEXT("BndEvt__PP_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__17 = __Local__0->ComponentDelegateBindings[15];
	__Local__17.ComponentPropertyName = FName(TEXT("PP_Left"));
	__Local__17.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__17.FunctionNameToBind = FName(TEXT("BndEvt__PP_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__18 = __Local__0->ComponentDelegateBindings[16];
	__Local__18.ComponentPropertyName = FName(TEXT("Anti-Aliasing_Right"));
	__Local__18.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__18.FunctionNameToBind = FName(TEXT("BndEvt__AA_Right_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__19 = __Local__0->ComponentDelegateBindings[17];
	__Local__19.ComponentPropertyName = FName(TEXT("Shadows_Right"));
	__Local__19.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__19.FunctionNameToBind = FName(TEXT("BndEvt__Shadows_Right_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__20 = __Local__0->ComponentDelegateBindings[18];
	__Local__20.ComponentPropertyName = FName(TEXT("Shadows_Left"));
	__Local__20.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__20.FunctionNameToBind = FName(TEXT("BndEvt__Shadows_Left_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__21 = __Local__0->ComponentDelegateBindings[19];
	__Local__21.ComponentPropertyName = FName(TEXT("Save_Button"));
	__Local__21.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__21.FunctionNameToBind = FName(TEXT("BndEvt__Save_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__22 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__22), UPanelWidget::__PPO__Slots() )));
	__Local__23 = TArray<UPanelSlot*> ();
	__Local__23.Reserve(4);
	auto __Local__24 = NewObject<UCanvasPanelSlot>(__Local__22, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__24->LayoutData.Offsets.Right = 0.000000f;
	__Local__24->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__24->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__24->Parent = __Local__22;
	auto __Local__25 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Background"));
	auto& __Local__26 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__25->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__26 = FLinearColor(0.000000, 0.000000, 0.000000, 0.750000);
	__Local__25->bIsVariable = false;
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__23.Add(__Local__24);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__22, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__27->LayoutData.Offsets.Left = 15.000000f;
	__Local__27->LayoutData.Offsets.Top = -15.000000f;
	__Local__27->LayoutData.Offsets.Right = 150.000000f;
	__Local__27->LayoutData.Offsets.Bottom = 50.000000f;
	__Local__27->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__27->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__27->LayoutData.Alignment = FVector2D(0.000000, 1.000000);
	__Local__27->ZOrder = 1;
	__Local__27->Parent = __Local__22;
	auto __Local__28 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Save_Button"));
	auto& __Local__29 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__29 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__30 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__31 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__32 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__33 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__34 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__34 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__28), UPanelWidget::__PPO__Slots() )));
	__Local__35 = TArray<UPanelSlot*> ();
	__Local__35.Reserve(1);
	auto __Local__36 = NewObject<UButtonSlot>(__Local__28, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__36->Parent = __Local__28;
	auto __Local__37 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Save_Text"));
	__Local__37->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Apply"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4B5697234781666797A3FDB109EF4BF2") /* Key */
	);
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__35.Add(__Local__36);
	__Local__28->Slot = __Local__27;
	__Local__28->bIsEnabled = false;
	__Local__27->Content = __Local__28;
	__Local__23.Add(__Local__27);
	auto __Local__38 = NewObject<UCanvasPanelSlot>(__Local__22, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_3"));
	__Local__38->LayoutData.Offsets.Left = -15.000000f;
	__Local__38->LayoutData.Offsets.Top = -15.000000f;
	__Local__38->LayoutData.Offsets.Right = 150.000000f;
	__Local__38->LayoutData.Offsets.Bottom = 50.000000f;
	__Local__38->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__38->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__38->LayoutData.Alignment = FVector2D(1.000000, 1.000000);
	__Local__38->ZOrder = 1;
	__Local__38->Parent = __Local__22;
	auto __Local__39 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Cancel_Button"));
	auto& __Local__40 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__40 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__41 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__42 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__42 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__43 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__39->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__43 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__44 = (*(AccessPrivateProperty<UObject* >(&(__Local__39->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__44 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__45 = (*(AccessPrivateProperty<UObject* >(&(__Local__39->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__45 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__46 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__39), UPanelWidget::__PPO__Slots() )));
	__Local__46 = TArray<UPanelSlot*> ();
	__Local__46.Reserve(1);
	auto __Local__47 = NewObject<UButtonSlot>(__Local__39, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__47->Parent = __Local__39;
	auto __Local__48 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Cancel_Text"));
	__Local__48->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Cancel"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5DC8A2D440335E88A0C832A855FB8038") /* Key */
	);
	__Local__48->Slot = __Local__47;
	__Local__47->Content = __Local__48;
	__Local__46.Add(__Local__47);
	__Local__39->Slot = __Local__38;
	__Local__38->Content = __Local__39;
	__Local__23.Add(__Local__38);
	auto __Local__49 = NewObject<UCanvasPanelSlot>(__Local__22, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__49->LayoutData.Offsets.Left = 15.000000f;
	__Local__49->LayoutData.Offsets.Top = 15.000000f;
	__Local__49->LayoutData.Offsets.Right = 15.000000f;
	__Local__49->LayoutData.Offsets.Bottom = 80.000000f;
	__Local__49->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__49->Parent = __Local__22;
	auto __Local__50 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("List"));
	auto& __Local__51 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__50), UPanelWidget::__PPO__Slots() )));
	__Local__51 = TArray<UPanelSlot*> ();
	__Local__51.Reserve(12);
	auto __Local__52 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_14"));
	__Local__52->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__52->Parent = __Local__50;
	auto __Local__53 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_84"));
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__53), UPanelWidget::__PPO__Slots() )));
	__Local__54 = TArray<UPanelSlot*> ();
	__Local__54.Reserve(1);
	auto __Local__55 = NewObject<UHorizontalBoxSlot>(__Local__53, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_8"));
	__Local__55->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__55->Parent = __Local__53;
	auto __Local__56 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_125"));
	auto& __Local__57 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__56), UPanelWidget::__PPO__Slots() )));
	__Local__57 = TArray<UPanelSlot*> ();
	__Local__57.Reserve(2);
	auto __Local__58 = NewObject<UCanvasPanelSlot>(__Local__56, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__58->LayoutData.Offsets.Right = 0.000000f;
	__Local__58->LayoutData.Offsets.Bottom = 10.000000f;
	__Local__58->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__58->Parent = __Local__56;
	auto __Local__59 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_9"));
	auto& __Local__60 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__59->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__60 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	__Local__59->bIsVariable = false;
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__57.Add(__Local__58);
	auto __Local__61 = NewObject<UCanvasPanelSlot>(__Local__56, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_9"));
	__Local__61->bAutoSize = true;
	__Local__61->Parent = __Local__56;
	auto __Local__62 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_98"));
	__Local__62->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Options :"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A3085B984B0900CAED8B85A59BCF7F5F") /* Key */
	);
	__Local__62->Font.Size = 36;
	auto& __Local__63 = (*(AccessPrivateProperty<FMargin >((__Local__62), UTextLayoutWidget::__PPO__Margin() )));
	__Local__63.Bottom = 15.000000f;
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__57.Add(__Local__61);
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__54.Add(__Local__55);
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__51.Add(__Local__52);
	auto __Local__64 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_0"));
	__Local__64->Padding.Top = 5.000000f;
	__Local__64->Padding.Bottom = 5.000000f;
	__Local__64->Parent = __Local__50;
	auto __Local__65 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("FullScreen_Panel"));
	auto& __Local__66 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__65), UPanelWidget::__PPO__Slots() )));
	__Local__66 = TArray<UPanelSlot*> ();
	__Local__66.Reserve(2);
	auto __Local__67 = NewObject<UCanvasPanelSlot>(__Local__65, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__67->LayoutData.Offsets.Right = 0.000000f;
	__Local__67->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__67->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__67->bAutoSize = true;
	__Local__67->ZOrder = 1;
	__Local__67->Parent = __Local__65;
	auto __Local__68 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_0"));
	auto& __Local__69 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__68), UPanelWidget::__PPO__Slots() )));
	__Local__69 = TArray<UPanelSlot*> ();
	__Local__69.Reserve(4);
	auto __Local__70 = NewObject<UHorizontalBoxSlot>(__Local__68, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__70->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__70->Parent = __Local__68;
	auto __Local__71 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_2"));
	__Local__71->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Screen Mode"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F91EF4F94DAED9229858D6AA8493AF94") /* Key */
	);
	__Local__71->Slot = __Local__70;
	__Local__70->Content = __Local__71;
	__Local__69.Add(__Local__70);
	auto __Local__72 = NewObject<UHorizontalBoxSlot>(__Local__68, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__72->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__72->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__72->Parent = __Local__68;
	auto __Local__73 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Window_Left"));
	auto& __Local__74 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__73->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__74 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__75 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__73->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__75 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__76 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__73->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__76 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__77 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__73->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__77 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__78 = (*(AccessPrivateProperty<UObject* >(&(__Local__73->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__78 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__79 = (*(AccessPrivateProperty<UObject* >(&(__Local__73->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__79 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__80 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__73), UPanelWidget::__PPO__Slots() )));
	__Local__80 = TArray<UPanelSlot*> ();
	__Local__80.Reserve(1);
	auto __Local__81 = NewObject<UButtonSlot>(__Local__73, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__81->Parent = __Local__73;
	auto __Local__82 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_3"));
	__Local__82->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("←"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4B21CD0B4AFC0D2D5E0FF89892B24827") /* Key */
	);
	auto& __Local__83 = (*(AccessPrivateProperty<FMargin >((__Local__82), UTextLayoutWidget::__PPO__Margin() )));
	__Local__83.Top = -5.000000f;
	__Local__82->Slot = __Local__81;
	__Local__81->Content = __Local__82;
	__Local__80.Add(__Local__81);
	__Local__73->Slot = __Local__72;
	__Local__72->Content = __Local__73;
	__Local__69.Add(__Local__72);
	auto __Local__84 = NewObject<UHorizontalBoxSlot>(__Local__68, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__84->Padding.Left = 5.000000f;
	__Local__84->Padding.Right = 5.000000f;
	__Local__84->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__84->Parent = __Local__68;
	auto __Local__85 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Window_Text"));
	__Local__85->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Text Block"), /* Literal Text */
	TEXT("UMG"), /* Namespace */
	TEXT("TextBlockDefaultValue") /* Key */
	);
	__Local__85->bIsVariable = true;
	__Local__85->Slot = __Local__84;
	__Local__84->Content = __Local__85;
	__Local__69.Add(__Local__84);
	auto __Local__86 = NewObject<UHorizontalBoxSlot>(__Local__68, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__86->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__86->Parent = __Local__68;
	auto __Local__87 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Window_Right"));
	auto& __Local__88 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__87->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__88 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__89 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__87->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__89 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__90 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__87->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__90 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__91 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__87->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__91 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__92 = (*(AccessPrivateProperty<UObject* >(&(__Local__87->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__92 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__93 = (*(AccessPrivateProperty<UObject* >(&(__Local__87->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__93 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__94 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__87), UPanelWidget::__PPO__Slots() )));
	__Local__94 = TArray<UPanelSlot*> ();
	__Local__94.Reserve(1);
	auto __Local__95 = NewObject<UButtonSlot>(__Local__87, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__95->Parent = __Local__87;
	auto __Local__96 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_5"));
	__Local__96->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("→"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("431891FE4CCF2E986DBDE7B5A5F88B8A") /* Key */
	);
	auto& __Local__97 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__96), UTextLayoutWidget::__PPO__Justification() )));
	__Local__97 = ETextJustify::Type::Right;
	auto& __Local__98 = (*(AccessPrivateProperty<FMargin >((__Local__96), UTextLayoutWidget::__PPO__Margin() )));
	__Local__98.Top = -5.000000f;
	__Local__96->Slot = __Local__95;
	__Local__95->Content = __Local__96;
	__Local__94.Add(__Local__95);
	__Local__87->Slot = __Local__86;
	__Local__86->Content = __Local__87;
	__Local__69.Add(__Local__86);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__66.Add(__Local__67);
	auto __Local__99 = NewObject<UCanvasPanelSlot>(__Local__65, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__99->LayoutData.Offsets.Right = 0.000000f;
	__Local__99->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__99->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__99->Parent = __Local__65;
	auto __Local__100 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_0"));
	auto& __Local__101 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__100->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__101 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	__Local__100->bIsVariable = false;
	__Local__100->Slot = __Local__99;
	__Local__99->Content = __Local__100;
	__Local__66.Add(__Local__99);
	__Local__65->Slot = __Local__64;
	__Local__64->Content = __Local__65;
	__Local__51.Add(__Local__64);
	auto __Local__102 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"));
	__Local__102->Padding.Top = 5.000000f;
	__Local__102->Padding.Bottom = 5.000000f;
	__Local__102->Parent = __Local__50;
	auto __Local__103 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Resolution_Panel"));
	auto& __Local__104 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__103), UPanelWidget::__PPO__Slots() )));
	__Local__104 = TArray<UPanelSlot*> ();
	__Local__104.Reserve(2);
	auto __Local__105 = NewObject<UCanvasPanelSlot>(__Local__103, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__105->LayoutData.Offsets.Right = 0.000000f;
	__Local__105->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__105->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__105->bAutoSize = true;
	__Local__105->ZOrder = 1;
	__Local__105->Parent = __Local__103;
	auto __Local__106 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_225"));
	auto& __Local__107 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__106), UPanelWidget::__PPO__Slots() )));
	__Local__107 = TArray<UPanelSlot*> ();
	__Local__107.Reserve(4);
	auto __Local__108 = NewObject<UHorizontalBoxSlot>(__Local__106, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__108->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__108->Parent = __Local__106;
	auto __Local__109 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Resolution"));
	__Local__109->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Resolution"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9E5F7AD64A2F63CEB7C51B8F56E7CB17") /* Key */
	);
	__Local__109->Slot = __Local__108;
	__Local__108->Content = __Local__109;
	__Local__107.Add(__Local__108);
	auto __Local__110 = NewObject<UHorizontalBoxSlot>(__Local__106, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__110->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__110->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__110->Parent = __Local__106;
	auto __Local__111 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Resolution_Left"));
	auto& __Local__112 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__111->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__112 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__113 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__111->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__113 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__114 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__111->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__114 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__115 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__111->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__115 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__116 = (*(AccessPrivateProperty<UObject* >(&(__Local__111->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__116 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__117 = (*(AccessPrivateProperty<UObject* >(&(__Local__111->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__117 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__118 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__111), UPanelWidget::__PPO__Slots() )));
	__Local__118 = TArray<UPanelSlot*> ();
	__Local__118.Reserve(1);
	auto __Local__119 = NewObject<UButtonSlot>(__Local__111, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__119->Parent = __Local__111;
	auto __Local__120 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__120->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("←"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4B21CD0B4AFC0D2D5E0FF89892B24827") /* Key */
	);
	auto& __Local__121 = (*(AccessPrivateProperty<FMargin >((__Local__120), UTextLayoutWidget::__PPO__Margin() )));
	__Local__121.Top = -5.000000f;
	__Local__120->Slot = __Local__119;
	__Local__119->Content = __Local__120;
	__Local__118.Add(__Local__119);
	__Local__111->Slot = __Local__110;
	__Local__110->Content = __Local__111;
	__Local__107.Add(__Local__110);
	auto __Local__122 = NewObject<UHorizontalBoxSlot>(__Local__106, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__122->Padding.Left = 5.000000f;
	__Local__122->Padding.Right = 5.000000f;
	__Local__122->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__122->Parent = __Local__106;
	auto __Local__123 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Resolution_Text"));
	__Local__123->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Text Block"), /* Literal Text */
	TEXT("UMG"), /* Namespace */
	TEXT("TextBlockDefaultValue") /* Key */
	);
	__Local__123->bIsVariable = true;
	__Local__123->Slot = __Local__122;
	__Local__122->Content = __Local__123;
	__Local__107.Add(__Local__122);
	auto __Local__124 = NewObject<UHorizontalBoxSlot>(__Local__106, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__124->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__124->Parent = __Local__106;
	auto __Local__125 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Resolution_Right"));
	auto& __Local__126 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__125->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__126 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__127 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__125->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__127 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__128 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__125->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__128 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__129 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__125->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__129 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__130 = (*(AccessPrivateProperty<UObject* >(&(__Local__125->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__130 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__131 = (*(AccessPrivateProperty<UObject* >(&(__Local__125->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__131 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__132 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__125), UPanelWidget::__PPO__Slots() )));
	__Local__132 = TArray<UPanelSlot*> ();
	__Local__132.Reserve(1);
	auto __Local__133 = NewObject<UButtonSlot>(__Local__125, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__133->Parent = __Local__125;
	auto __Local__134 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_1"));
	__Local__134->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("→"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("431891FE4CCF2E986DBDE7B5A5F88B8A") /* Key */
	);
	auto& __Local__135 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__134), UTextLayoutWidget::__PPO__Justification() )));
	__Local__135 = ETextJustify::Type::Right;
	auto& __Local__136 = (*(AccessPrivateProperty<FMargin >((__Local__134), UTextLayoutWidget::__PPO__Margin() )));
	__Local__136.Top = -5.000000f;
	__Local__134->Slot = __Local__133;
	__Local__133->Content = __Local__134;
	__Local__132.Add(__Local__133);
	__Local__125->Slot = __Local__124;
	__Local__124->Content = __Local__125;
	__Local__107.Add(__Local__124);
	__Local__106->Slot = __Local__105;
	__Local__105->Content = __Local__106;
	__Local__104.Add(__Local__105);
	auto __Local__137 = NewObject<UCanvasPanelSlot>(__Local__103, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__137->LayoutData.Offsets.Right = 0.000000f;
	__Local__137->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__137->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__137->Parent = __Local__103;
	auto __Local__138 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Background_01"));
	auto& __Local__139 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__138->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__139 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	__Local__138->bIsVariable = false;
	__Local__138->Slot = __Local__137;
	__Local__137->Content = __Local__138;
	__Local__104.Add(__Local__137);
	__Local__103->Slot = __Local__102;
	__Local__102->Content = __Local__103;
	__Local__51.Add(__Local__102);
	auto __Local__140 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_1"));
	__Local__140->Padding.Top = 5.000000f;
	__Local__140->Padding.Bottom = 5.000000f;
	__Local__140->Parent = __Local__50;
	auto __Local__141 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Anti-Aliasing_Panel"));
	auto& __Local__142 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__141), UPanelWidget::__PPO__Slots() )));
	__Local__142 = TArray<UPanelSlot*> ();
	__Local__142.Reserve(2);
	auto __Local__143 = NewObject<UCanvasPanelSlot>(__Local__141, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__143->LayoutData.Offsets.Right = 0.000000f;
	__Local__143->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__143->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__143->bAutoSize = true;
	__Local__143->ZOrder = 1;
	__Local__143->Parent = __Local__141;
	auto __Local__144 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_1"));
	auto& __Local__145 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__144), UPanelWidget::__PPO__Slots() )));
	__Local__145 = TArray<UPanelSlot*> ();
	__Local__145.Reserve(4);
	auto __Local__146 = NewObject<UHorizontalBoxSlot>(__Local__144, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__146->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__146->Parent = __Local__144;
	auto __Local__147 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("AntiAliasing"));
	__Local__147->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Anti-Aliasing Quality"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0C9A785F4AE998FE5E28538DE6E8CB34") /* Key */
	);
	__Local__147->Slot = __Local__146;
	__Local__146->Content = __Local__147;
	__Local__145.Add(__Local__146);
	auto __Local__148 = NewObject<UHorizontalBoxSlot>(__Local__144, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__148->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__148->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__148->Parent = __Local__144;
	auto __Local__149 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Anti-Aliasing_Left"));
	auto& __Local__150 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__149->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__150 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__151 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__149->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__151 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__152 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__149->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__152 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__153 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__149->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__153 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__154 = (*(AccessPrivateProperty<UObject* >(&(__Local__149->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__154 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__155 = (*(AccessPrivateProperty<UObject* >(&(__Local__149->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__155 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__156 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__149), UPanelWidget::__PPO__Slots() )));
	__Local__156 = TArray<UPanelSlot*> ();
	__Local__156.Reserve(1);
	auto __Local__157 = NewObject<UButtonSlot>(__Local__149, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__157->Parent = __Local__149;
	auto __Local__158 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_8"));
	__Local__158->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("←"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4B21CD0B4AFC0D2D5E0FF89892B24827") /* Key */
	);
	auto& __Local__159 = (*(AccessPrivateProperty<FMargin >((__Local__158), UTextLayoutWidget::__PPO__Margin() )));
	__Local__159.Top = -5.000000f;
	__Local__158->Slot = __Local__157;
	__Local__157->Content = __Local__158;
	__Local__156.Add(__Local__157);
	__Local__149->Slot = __Local__148;
	__Local__148->Content = __Local__149;
	__Local__145.Add(__Local__148);
	auto __Local__160 = NewObject<UHorizontalBoxSlot>(__Local__144, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__160->Padding.Left = 5.000000f;
	__Local__160->Padding.Right = 5.000000f;
	__Local__160->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__160->Parent = __Local__144;
	auto __Local__161 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Anti-Aliasing_Text"));
	__Local__161->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Text Block"), /* Literal Text */
	TEXT("UMG"), /* Namespace */
	TEXT("TextBlockDefaultValue") /* Key */
	);
	__Local__161->bIsVariable = true;
	__Local__161->Slot = __Local__160;
	__Local__160->Content = __Local__161;
	__Local__145.Add(__Local__160);
	auto __Local__162 = NewObject<UHorizontalBoxSlot>(__Local__144, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__162->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__162->Parent = __Local__144;
	auto __Local__163 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Anti-Aliasing_Right"));
	auto& __Local__164 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__163->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__164 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__165 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__163->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__165 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__166 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__163->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__166 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__167 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__163->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__167 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__168 = (*(AccessPrivateProperty<UObject* >(&(__Local__163->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__168 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__169 = (*(AccessPrivateProperty<UObject* >(&(__Local__163->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__169 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__170 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__163), UPanelWidget::__PPO__Slots() )));
	__Local__170 = TArray<UPanelSlot*> ();
	__Local__170.Reserve(1);
	auto __Local__171 = NewObject<UButtonSlot>(__Local__163, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__171->Parent = __Local__163;
	auto __Local__172 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_9"));
	__Local__172->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("→"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("431891FE4CCF2E986DBDE7B5A5F88B8A") /* Key */
	);
	auto& __Local__173 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__172), UTextLayoutWidget::__PPO__Justification() )));
	__Local__173 = ETextJustify::Type::Right;
	auto& __Local__174 = (*(AccessPrivateProperty<FMargin >((__Local__172), UTextLayoutWidget::__PPO__Margin() )));
	__Local__174.Top = -5.000000f;
	__Local__172->Slot = __Local__171;
	__Local__171->Content = __Local__172;
	__Local__170.Add(__Local__171);
	__Local__163->Slot = __Local__162;
	__Local__162->Content = __Local__163;
	__Local__145.Add(__Local__162);
	__Local__144->Slot = __Local__143;
	__Local__143->Content = __Local__144;
	__Local__142.Add(__Local__143);
	auto __Local__175 = NewObject<UCanvasPanelSlot>(__Local__141, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__175->LayoutData.Offsets.Right = 0.000000f;
	__Local__175->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__175->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__175->Parent = __Local__141;
	auto __Local__176 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_1"));
	auto& __Local__177 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__176->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__177 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	__Local__176->bIsVariable = false;
	__Local__176->Slot = __Local__175;
	__Local__175->Content = __Local__176;
	__Local__142.Add(__Local__175);
	__Local__141->Slot = __Local__140;
	__Local__140->Content = __Local__141;
	__Local__51.Add(__Local__140);
	auto __Local__178 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_4"));
	__Local__178->Padding.Top = 5.000000f;
	__Local__178->Padding.Bottom = 5.000000f;
	__Local__178->Parent = __Local__50;
	auto __Local__179 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Shadow_Panel"));
	auto& __Local__180 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__179), UPanelWidget::__PPO__Slots() )));
	__Local__180 = TArray<UPanelSlot*> ();
	__Local__180.Reserve(2);
	auto __Local__181 = NewObject<UCanvasPanelSlot>(__Local__179, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__181->LayoutData.Offsets.Right = 0.000000f;
	__Local__181->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__181->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__181->bAutoSize = true;
	__Local__181->ZOrder = 1;
	__Local__181->Parent = __Local__179;
	auto __Local__182 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_2"));
	auto& __Local__183 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__182), UPanelWidget::__PPO__Slots() )));
	__Local__183 = TArray<UPanelSlot*> ();
	__Local__183.Reserve(4);
	auto __Local__184 = NewObject<UHorizontalBoxSlot>(__Local__182, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__184->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__184->Parent = __Local__182;
	auto __Local__185 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Shadows"));
	__Local__185->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Shadow Quality"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("2EC6459840E235F0CF1323AA86ADC91D") /* Key */
	);
	__Local__185->Slot = __Local__184;
	__Local__184->Content = __Local__185;
	__Local__183.Add(__Local__184);
	auto __Local__186 = NewObject<UHorizontalBoxSlot>(__Local__182, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__186->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__186->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__186->Parent = __Local__182;
	auto __Local__187 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Shadows_Left"));
	auto& __Local__188 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__187->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__188 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__189 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__187->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__189 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__190 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__187->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__190 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__191 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__187->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__191 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__192 = (*(AccessPrivateProperty<UObject* >(&(__Local__187->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__192 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__193 = (*(AccessPrivateProperty<UObject* >(&(__Local__187->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__193 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__194 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__187), UPanelWidget::__PPO__Slots() )));
	__Local__194 = TArray<UPanelSlot*> ();
	__Local__194.Reserve(1);
	auto __Local__195 = NewObject<UButtonSlot>(__Local__187, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__195->Parent = __Local__187;
	auto __Local__196 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_11"));
	__Local__196->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("←"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4B21CD0B4AFC0D2D5E0FF89892B24827") /* Key */
	);
	auto& __Local__197 = (*(AccessPrivateProperty<FMargin >((__Local__196), UTextLayoutWidget::__PPO__Margin() )));
	__Local__197.Top = -5.000000f;
	__Local__196->Slot = __Local__195;
	__Local__195->Content = __Local__196;
	__Local__194.Add(__Local__195);
	__Local__187->Slot = __Local__186;
	__Local__186->Content = __Local__187;
	__Local__183.Add(__Local__186);
	auto __Local__198 = NewObject<UHorizontalBoxSlot>(__Local__182, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__198->Padding.Left = 5.000000f;
	__Local__198->Padding.Right = 5.000000f;
	__Local__198->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__198->Parent = __Local__182;
	auto __Local__199 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Shadows_Text"));
	__Local__199->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Text Block"), /* Literal Text */
	TEXT("UMG"), /* Namespace */
	TEXT("TextBlockDefaultValue") /* Key */
	);
	__Local__199->bIsVariable = true;
	__Local__199->Slot = __Local__198;
	__Local__198->Content = __Local__199;
	__Local__183.Add(__Local__198);
	auto __Local__200 = NewObject<UHorizontalBoxSlot>(__Local__182, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__200->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__200->Parent = __Local__182;
	auto __Local__201 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Shadows_Right"));
	auto& __Local__202 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__201->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__202 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__203 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__201->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__203 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__204 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__201->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__204 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__205 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__201->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__205 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__206 = (*(AccessPrivateProperty<UObject* >(&(__Local__201->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__206 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__207 = (*(AccessPrivateProperty<UObject* >(&(__Local__201->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__207 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__208 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__201), UPanelWidget::__PPO__Slots() )));
	__Local__208 = TArray<UPanelSlot*> ();
	__Local__208.Reserve(1);
	auto __Local__209 = NewObject<UButtonSlot>(__Local__201, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__209->Parent = __Local__201;
	auto __Local__210 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_13"));
	__Local__210->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("→"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("431891FE4CCF2E986DBDE7B5A5F88B8A") /* Key */
	);
	auto& __Local__211 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__210), UTextLayoutWidget::__PPO__Justification() )));
	__Local__211 = ETextJustify::Type::Right;
	auto& __Local__212 = (*(AccessPrivateProperty<FMargin >((__Local__210), UTextLayoutWidget::__PPO__Margin() )));
	__Local__212.Top = -5.000000f;
	__Local__210->Slot = __Local__209;
	__Local__209->Content = __Local__210;
	__Local__208.Add(__Local__209);
	__Local__201->Slot = __Local__200;
	__Local__200->Content = __Local__201;
	__Local__183.Add(__Local__200);
	__Local__182->Slot = __Local__181;
	__Local__181->Content = __Local__182;
	__Local__180.Add(__Local__181);
	auto __Local__213 = NewObject<UCanvasPanelSlot>(__Local__179, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__213->LayoutData.Offsets.Right = 0.000000f;
	__Local__213->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__213->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__213->Parent = __Local__179;
	auto __Local__214 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_2"));
	auto& __Local__215 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__214->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__215 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	__Local__214->bIsVariable = false;
	__Local__214->Slot = __Local__213;
	__Local__213->Content = __Local__214;
	__Local__180.Add(__Local__213);
	__Local__179->Slot = __Local__178;
	__Local__178->Content = __Local__179;
	__Local__51.Add(__Local__178);
	auto __Local__216 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_5"));
	__Local__216->Padding.Top = 5.000000f;
	__Local__216->Padding.Bottom = 5.000000f;
	__Local__216->Parent = __Local__50;
	auto __Local__217 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Post-Process_Panel"));
	auto& __Local__218 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__217), UPanelWidget::__PPO__Slots() )));
	__Local__218 = TArray<UPanelSlot*> ();
	__Local__218.Reserve(2);
	auto __Local__219 = NewObject<UCanvasPanelSlot>(__Local__217, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__219->LayoutData.Offsets.Right = 0.000000f;
	__Local__219->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__219->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__219->bAutoSize = true;
	__Local__219->ZOrder = 1;
	__Local__219->Parent = __Local__217;
	auto __Local__220 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_3"));
	auto& __Local__221 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__220), UPanelWidget::__PPO__Slots() )));
	__Local__221 = TArray<UPanelSlot*> ();
	__Local__221.Reserve(4);
	auto __Local__222 = NewObject<UHorizontalBoxSlot>(__Local__220, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__222->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__222->Parent = __Local__220;
	auto __Local__223 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_4"));
	__Local__223->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Post-Process Quality"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("AB50C41B40F799D519EA4EBCB626CAF6") /* Key */
	);
	__Local__223->Slot = __Local__222;
	__Local__222->Content = __Local__223;
	__Local__221.Add(__Local__222);
	auto __Local__224 = NewObject<UHorizontalBoxSlot>(__Local__220, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__224->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__224->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__224->Parent = __Local__220;
	auto __Local__225 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("PP_Left"));
	auto& __Local__226 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__225->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__226 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__227 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__225->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__227 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__228 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__225->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__228 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__229 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__225->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__229 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__230 = (*(AccessPrivateProperty<UObject* >(&(__Local__225->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__230 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__231 = (*(AccessPrivateProperty<UObject* >(&(__Local__225->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__231 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__232 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__225), UPanelWidget::__PPO__Slots() )));
	__Local__232 = TArray<UPanelSlot*> ();
	__Local__232.Reserve(1);
	auto __Local__233 = NewObject<UButtonSlot>(__Local__225, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__233->Parent = __Local__225;
	auto __Local__234 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_6"));
	__Local__234->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("←"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4B21CD0B4AFC0D2D5E0FF89892B24827") /* Key */
	);
	auto& __Local__235 = (*(AccessPrivateProperty<FMargin >((__Local__234), UTextLayoutWidget::__PPO__Margin() )));
	__Local__235.Top = -5.000000f;
	__Local__234->Slot = __Local__233;
	__Local__233->Content = __Local__234;
	__Local__232.Add(__Local__233);
	__Local__225->Slot = __Local__224;
	__Local__224->Content = __Local__225;
	__Local__221.Add(__Local__224);
	auto __Local__236 = NewObject<UHorizontalBoxSlot>(__Local__220, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__236->Padding.Left = 5.000000f;
	__Local__236->Padding.Right = 5.000000f;
	__Local__236->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__236->Parent = __Local__220;
	auto __Local__237 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("PP_Text"));
	__Local__237->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Text Block"), /* Literal Text */
	TEXT("UMG"), /* Namespace */
	TEXT("TextBlockDefaultValue") /* Key */
	);
	__Local__237->bIsVariable = true;
	__Local__237->Slot = __Local__236;
	__Local__236->Content = __Local__237;
	__Local__221.Add(__Local__236);
	auto __Local__238 = NewObject<UHorizontalBoxSlot>(__Local__220, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__238->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__238->Parent = __Local__220;
	auto __Local__239 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("PP_Right"));
	auto& __Local__240 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__239->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__240 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__241 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__239->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__241 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__242 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__239->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__242 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__243 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__239->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__243 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__244 = (*(AccessPrivateProperty<UObject* >(&(__Local__239->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__244 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__245 = (*(AccessPrivateProperty<UObject* >(&(__Local__239->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__245 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__246 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__239), UPanelWidget::__PPO__Slots() )));
	__Local__246 = TArray<UPanelSlot*> ();
	__Local__246.Reserve(1);
	auto __Local__247 = NewObject<UButtonSlot>(__Local__239, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__247->Parent = __Local__239;
	auto __Local__248 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_10"));
	__Local__248->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("→"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("431891FE4CCF2E986DBDE7B5A5F88B8A") /* Key */
	);
	auto& __Local__249 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__248), UTextLayoutWidget::__PPO__Justification() )));
	__Local__249 = ETextJustify::Type::Right;
	auto& __Local__250 = (*(AccessPrivateProperty<FMargin >((__Local__248), UTextLayoutWidget::__PPO__Margin() )));
	__Local__250.Top = -5.000000f;
	__Local__248->Slot = __Local__247;
	__Local__247->Content = __Local__248;
	__Local__246.Add(__Local__247);
	__Local__239->Slot = __Local__238;
	__Local__238->Content = __Local__239;
	__Local__221.Add(__Local__238);
	__Local__220->Slot = __Local__219;
	__Local__219->Content = __Local__220;
	__Local__218.Add(__Local__219);
	auto __Local__251 = NewObject<UCanvasPanelSlot>(__Local__217, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__251->LayoutData.Offsets.Right = 0.000000f;
	__Local__251->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__251->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__251->Parent = __Local__217;
	auto __Local__252 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_3"));
	auto& __Local__253 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__252->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__253 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	__Local__252->bIsVariable = false;
	__Local__252->Slot = __Local__251;
	__Local__251->Content = __Local__252;
	__Local__218.Add(__Local__251);
	__Local__217->Slot = __Local__216;
	__Local__216->Content = __Local__217;
	__Local__51.Add(__Local__216);
	auto __Local__254 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"));
	__Local__254->Padding.Top = 5.000000f;
	__Local__254->Padding.Bottom = 5.000000f;
	__Local__254->Parent = __Local__50;
	auto __Local__255 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("ViewDistance_Panel"));
	auto& __Local__256 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__255), UPanelWidget::__PPO__Slots() )));
	__Local__256 = TArray<UPanelSlot*> ();
	__Local__256.Reserve(2);
	auto __Local__257 = NewObject<UCanvasPanelSlot>(__Local__255, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__257->LayoutData.Offsets.Right = 0.000000f;
	__Local__257->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__257->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__257->bAutoSize = true;
	__Local__257->ZOrder = 1;
	__Local__257->Parent = __Local__255;
	auto __Local__258 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_4"));
	auto& __Local__259 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__258), UPanelWidget::__PPO__Slots() )));
	__Local__259 = TArray<UPanelSlot*> ();
	__Local__259.Reserve(4);
	auto __Local__260 = NewObject<UHorizontalBoxSlot>(__Local__258, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__260->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__260->Parent = __Local__258;
	auto __Local__261 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_12"));
	__Local__261->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("View Distance"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4E73192641A02EFEDB3C3A97728899C9") /* Key */
	);
	__Local__261->Slot = __Local__260;
	__Local__260->Content = __Local__261;
	__Local__259.Add(__Local__260);
	auto __Local__262 = NewObject<UHorizontalBoxSlot>(__Local__258, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__262->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__262->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__262->Parent = __Local__258;
	auto __Local__263 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("VD_Left"));
	auto& __Local__264 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__263->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__264 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__265 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__263->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__265 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__266 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__263->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__266 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__267 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__263->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__267 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__268 = (*(AccessPrivateProperty<UObject* >(&(__Local__263->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__268 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__269 = (*(AccessPrivateProperty<UObject* >(&(__Local__263->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__269 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__270 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__263), UPanelWidget::__PPO__Slots() )));
	__Local__270 = TArray<UPanelSlot*> ();
	__Local__270.Reserve(1);
	auto __Local__271 = NewObject<UButtonSlot>(__Local__263, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__271->Parent = __Local__263;
	auto __Local__272 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_14"));
	__Local__272->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("←"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4B21CD0B4AFC0D2D5E0FF89892B24827") /* Key */
	);
	auto& __Local__273 = (*(AccessPrivateProperty<FMargin >((__Local__272), UTextLayoutWidget::__PPO__Margin() )));
	__Local__273.Top = -5.000000f;
	__Local__272->Slot = __Local__271;
	__Local__271->Content = __Local__272;
	__Local__270.Add(__Local__271);
	__Local__263->Slot = __Local__262;
	__Local__262->Content = __Local__263;
	__Local__259.Add(__Local__262);
	auto __Local__274 = NewObject<UHorizontalBoxSlot>(__Local__258, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__274->Padding.Left = 5.000000f;
	__Local__274->Padding.Right = 5.000000f;
	__Local__274->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__274->Parent = __Local__258;
	auto __Local__275 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("VD_Text"));
	__Local__275->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Text Block"), /* Literal Text */
	TEXT("UMG"), /* Namespace */
	TEXT("TextBlockDefaultValue") /* Key */
	);
	__Local__275->bIsVariable = true;
	__Local__275->Slot = __Local__274;
	__Local__274->Content = __Local__275;
	__Local__259.Add(__Local__274);
	auto __Local__276 = NewObject<UHorizontalBoxSlot>(__Local__258, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__276->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__276->Parent = __Local__258;
	auto __Local__277 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("VD_Right"));
	auto& __Local__278 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__277->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__278 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__279 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__277->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__279 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__280 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__277->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__280 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__281 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__277->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__281 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__282 = (*(AccessPrivateProperty<UObject* >(&(__Local__277->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__282 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__283 = (*(AccessPrivateProperty<UObject* >(&(__Local__277->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__283 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__284 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__277), UPanelWidget::__PPO__Slots() )));
	__Local__284 = TArray<UPanelSlot*> ();
	__Local__284.Reserve(1);
	auto __Local__285 = NewObject<UButtonSlot>(__Local__277, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__285->Parent = __Local__277;
	auto __Local__286 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_16"));
	__Local__286->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("→"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("431891FE4CCF2E986DBDE7B5A5F88B8A") /* Key */
	);
	auto& __Local__287 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__286), UTextLayoutWidget::__PPO__Justification() )));
	__Local__287 = ETextJustify::Type::Right;
	auto& __Local__288 = (*(AccessPrivateProperty<FMargin >((__Local__286), UTextLayoutWidget::__PPO__Margin() )));
	__Local__288.Top = -5.000000f;
	__Local__286->Slot = __Local__285;
	__Local__285->Content = __Local__286;
	__Local__284.Add(__Local__285);
	__Local__277->Slot = __Local__276;
	__Local__276->Content = __Local__277;
	__Local__259.Add(__Local__276);
	__Local__258->Slot = __Local__257;
	__Local__257->Content = __Local__258;
	__Local__256.Add(__Local__257);
	auto __Local__289 = NewObject<UCanvasPanelSlot>(__Local__255, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__289->LayoutData.Offsets.Right = 0.000000f;
	__Local__289->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__289->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__289->Parent = __Local__255;
	auto __Local__290 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_4"));
	auto& __Local__291 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__290->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__291 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	__Local__290->bIsVariable = false;
	__Local__290->Slot = __Local__289;
	__Local__289->Content = __Local__290;
	__Local__256.Add(__Local__289);
	__Local__255->Slot = __Local__254;
	__Local__254->Content = __Local__255;
	__Local__51.Add(__Local__254);
	auto __Local__292 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__292->Padding.Top = 5.000000f;
	__Local__292->Padding.Bottom = 5.000000f;
	__Local__292->Parent = __Local__50;
	auto __Local__293 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("VisualEffect_Panel"));
	auto& __Local__294 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__293), UPanelWidget::__PPO__Slots() )));
	__Local__294 = TArray<UPanelSlot*> ();
	__Local__294.Reserve(2);
	auto __Local__295 = NewObject<UCanvasPanelSlot>(__Local__293, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__295->LayoutData.Offsets.Right = 0.000000f;
	__Local__295->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__295->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__295->bAutoSize = true;
	__Local__295->ZOrder = 1;
	__Local__295->Parent = __Local__293;
	auto __Local__296 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_5"));
	auto& __Local__297 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__296), UPanelWidget::__PPO__Slots() )));
	__Local__297 = TArray<UPanelSlot*> ();
	__Local__297.Reserve(4);
	auto __Local__298 = NewObject<UHorizontalBoxSlot>(__Local__296, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__298->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__298->Parent = __Local__296;
	auto __Local__299 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_17"));
	__Local__299->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Visual Effect Quality"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("273B0A9D4F5D5491E03358A23C5A2794") /* Key */
	);
	__Local__299->Slot = __Local__298;
	__Local__298->Content = __Local__299;
	__Local__297.Add(__Local__298);
	auto __Local__300 = NewObject<UHorizontalBoxSlot>(__Local__296, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__300->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__300->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__300->Parent = __Local__296;
	auto __Local__301 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("VFX_Left"));
	auto& __Local__302 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__301->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__302 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__303 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__301->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__303 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__304 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__301->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__304 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__305 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__301->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__305 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__306 = (*(AccessPrivateProperty<UObject* >(&(__Local__301->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__306 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__307 = (*(AccessPrivateProperty<UObject* >(&(__Local__301->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__307 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__308 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__301), UPanelWidget::__PPO__Slots() )));
	__Local__308 = TArray<UPanelSlot*> ();
	__Local__308.Reserve(1);
	auto __Local__309 = NewObject<UButtonSlot>(__Local__301, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__309->Parent = __Local__301;
	auto __Local__310 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_18"));
	__Local__310->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("←"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4B21CD0B4AFC0D2D5E0FF89892B24827") /* Key */
	);
	auto& __Local__311 = (*(AccessPrivateProperty<FMargin >((__Local__310), UTextLayoutWidget::__PPO__Margin() )));
	__Local__311.Top = -5.000000f;
	__Local__310->Slot = __Local__309;
	__Local__309->Content = __Local__310;
	__Local__308.Add(__Local__309);
	__Local__301->Slot = __Local__300;
	__Local__300->Content = __Local__301;
	__Local__297.Add(__Local__300);
	auto __Local__312 = NewObject<UHorizontalBoxSlot>(__Local__296, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__312->Padding.Left = 5.000000f;
	__Local__312->Padding.Right = 5.000000f;
	__Local__312->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__312->Parent = __Local__296;
	auto __Local__313 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("VFX_Text"));
	__Local__313->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Text Block"), /* Literal Text */
	TEXT("UMG"), /* Namespace */
	TEXT("TextBlockDefaultValue") /* Key */
	);
	__Local__313->bIsVariable = true;
	__Local__313->Slot = __Local__312;
	__Local__312->Content = __Local__313;
	__Local__297.Add(__Local__312);
	auto __Local__314 = NewObject<UHorizontalBoxSlot>(__Local__296, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__314->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__314->Parent = __Local__296;
	auto __Local__315 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("VFX_Right"));
	auto& __Local__316 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__315->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__316 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__317 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__315->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__317 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__318 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__315->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__318 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__319 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__315->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__319 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__320 = (*(AccessPrivateProperty<UObject* >(&(__Local__315->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__320 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__321 = (*(AccessPrivateProperty<UObject* >(&(__Local__315->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__321 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__322 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__315), UPanelWidget::__PPO__Slots() )));
	__Local__322 = TArray<UPanelSlot*> ();
	__Local__322.Reserve(1);
	auto __Local__323 = NewObject<UButtonSlot>(__Local__315, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__323->Parent = __Local__315;
	auto __Local__324 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_20"));
	__Local__324->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("→"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("431891FE4CCF2E986DBDE7B5A5F88B8A") /* Key */
	);
	auto& __Local__325 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__324), UTextLayoutWidget::__PPO__Justification() )));
	__Local__325 = ETextJustify::Type::Right;
	auto& __Local__326 = (*(AccessPrivateProperty<FMargin >((__Local__324), UTextLayoutWidget::__PPO__Margin() )));
	__Local__326.Top = -5.000000f;
	__Local__324->Slot = __Local__323;
	__Local__323->Content = __Local__324;
	__Local__322.Add(__Local__323);
	__Local__315->Slot = __Local__314;
	__Local__314->Content = __Local__315;
	__Local__297.Add(__Local__314);
	__Local__296->Slot = __Local__295;
	__Local__295->Content = __Local__296;
	__Local__294.Add(__Local__295);
	auto __Local__327 = NewObject<UCanvasPanelSlot>(__Local__293, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__327->LayoutData.Offsets.Right = 0.000000f;
	__Local__327->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__327->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__327->Parent = __Local__293;
	auto __Local__328 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_5"));
	auto& __Local__329 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__328->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__329 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	__Local__328->bIsVariable = false;
	__Local__328->Slot = __Local__327;
	__Local__327->Content = __Local__328;
	__Local__294.Add(__Local__327);
	__Local__293->Slot = __Local__292;
	__Local__292->Content = __Local__293;
	__Local__51.Add(__Local__292);
	auto __Local__330 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_8"));
	__Local__330->Padding.Top = 5.000000f;
	__Local__330->Padding.Bottom = 5.000000f;
	__Local__330->Parent = __Local__50;
	auto __Local__331 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("FoliageAmmount"));
	auto& __Local__332 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__331), UPanelWidget::__PPO__Slots() )));
	__Local__332 = TArray<UPanelSlot*> ();
	__Local__332.Reserve(2);
	auto __Local__333 = NewObject<UCanvasPanelSlot>(__Local__331, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__333->LayoutData.Offsets.Right = 0.000000f;
	__Local__333->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__333->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__333->bAutoSize = true;
	__Local__333->ZOrder = 1;
	__Local__333->Parent = __Local__331;
	auto __Local__334 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_6"));
	auto& __Local__335 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__334), UPanelWidget::__PPO__Slots() )));
	__Local__335 = TArray<UPanelSlot*> ();
	__Local__335.Reserve(4);
	auto __Local__336 = NewObject<UHorizontalBoxSlot>(__Local__334, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__336->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__336->Parent = __Local__334;
	auto __Local__337 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_21"));
	__Local__337->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Foliage Density"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D176C9454A9842F021428E85E5B9E2CF") /* Key */
	);
	__Local__337->Slot = __Local__336;
	__Local__336->Content = __Local__337;
	__Local__335.Add(__Local__336);
	auto __Local__338 = NewObject<UHorizontalBoxSlot>(__Local__334, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__338->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__338->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__338->Parent = __Local__334;
	auto __Local__339 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Foliage_Left"));
	auto& __Local__340 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__339->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__340 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__341 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__339->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__341 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__342 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__339->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__342 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__343 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__339->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__343 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__344 = (*(AccessPrivateProperty<UObject* >(&(__Local__339->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__344 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__345 = (*(AccessPrivateProperty<UObject* >(&(__Local__339->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__345 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__346 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__339), UPanelWidget::__PPO__Slots() )));
	__Local__346 = TArray<UPanelSlot*> ();
	__Local__346.Reserve(1);
	auto __Local__347 = NewObject<UButtonSlot>(__Local__339, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__347->Parent = __Local__339;
	auto __Local__348 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_22"));
	__Local__348->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("←"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4B21CD0B4AFC0D2D5E0FF89892B24827") /* Key */
	);
	auto& __Local__349 = (*(AccessPrivateProperty<FMargin >((__Local__348), UTextLayoutWidget::__PPO__Margin() )));
	__Local__349.Top = -5.000000f;
	__Local__348->Slot = __Local__347;
	__Local__347->Content = __Local__348;
	__Local__346.Add(__Local__347);
	__Local__339->Slot = __Local__338;
	__Local__338->Content = __Local__339;
	__Local__335.Add(__Local__338);
	auto __Local__350 = NewObject<UHorizontalBoxSlot>(__Local__334, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__350->Padding.Left = 5.000000f;
	__Local__350->Padding.Right = 5.000000f;
	__Local__350->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__350->Parent = __Local__334;
	auto __Local__351 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Foliage_Text"));
	__Local__351->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Text Block"), /* Literal Text */
	TEXT("UMG"), /* Namespace */
	TEXT("TextBlockDefaultValue") /* Key */
	);
	__Local__351->bIsVariable = true;
	__Local__351->Slot = __Local__350;
	__Local__350->Content = __Local__351;
	__Local__335.Add(__Local__350);
	auto __Local__352 = NewObject<UHorizontalBoxSlot>(__Local__334, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__352->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__352->Parent = __Local__334;
	auto __Local__353 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Foliage_Right"));
	auto& __Local__354 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__353->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__354 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__355 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__353->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__355 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__356 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__353->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__356 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__357 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__353->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__357 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__358 = (*(AccessPrivateProperty<UObject* >(&(__Local__353->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__358 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__359 = (*(AccessPrivateProperty<UObject* >(&(__Local__353->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__359 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__360 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__353), UPanelWidget::__PPO__Slots() )));
	__Local__360 = TArray<UPanelSlot*> ();
	__Local__360.Reserve(1);
	auto __Local__361 = NewObject<UButtonSlot>(__Local__353, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__361->Parent = __Local__353;
	auto __Local__362 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_24"));
	__Local__362->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("→"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("431891FE4CCF2E986DBDE7B5A5F88B8A") /* Key */
	);
	auto& __Local__363 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__362), UTextLayoutWidget::__PPO__Justification() )));
	__Local__363 = ETextJustify::Type::Right;
	auto& __Local__364 = (*(AccessPrivateProperty<FMargin >((__Local__362), UTextLayoutWidget::__PPO__Margin() )));
	__Local__364.Top = -5.000000f;
	__Local__362->Slot = __Local__361;
	__Local__361->Content = __Local__362;
	__Local__360.Add(__Local__361);
	__Local__353->Slot = __Local__352;
	__Local__352->Content = __Local__353;
	__Local__335.Add(__Local__352);
	__Local__334->Slot = __Local__333;
	__Local__333->Content = __Local__334;
	__Local__332.Add(__Local__333);
	auto __Local__365 = NewObject<UCanvasPanelSlot>(__Local__331, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__365->LayoutData.Offsets.Right = 0.000000f;
	__Local__365->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__365->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__365->Parent = __Local__331;
	auto __Local__366 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_6"));
	auto& __Local__367 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__366->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__367 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	__Local__366->bIsVariable = false;
	__Local__366->Slot = __Local__365;
	__Local__365->Content = __Local__366;
	__Local__332.Add(__Local__365);
	__Local__331->Slot = __Local__330;
	__Local__330->Content = __Local__331;
	__Local__51.Add(__Local__330);
	auto __Local__368 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_10"));
	__Local__368->Padding.Top = 5.000000f;
	__Local__368->Padding.Bottom = 5.000000f;
	__Local__368->Parent = __Local__50;
	auto __Local__369 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Vsync_Panel"));
	auto& __Local__370 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__369), UPanelWidget::__PPO__Slots() )));
	__Local__370 = TArray<UPanelSlot*> ();
	__Local__370.Reserve(2);
	auto __Local__371 = NewObject<UCanvasPanelSlot>(__Local__369, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__371->LayoutData.Offsets.Right = 0.000000f;
	__Local__371->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__371->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__371->bAutoSize = true;
	__Local__371->ZOrder = 1;
	__Local__371->Parent = __Local__369;
	auto __Local__372 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_7"));
	auto& __Local__373 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__372), UPanelWidget::__PPO__Slots() )));
	__Local__373 = TArray<UPanelSlot*> ();
	__Local__373.Reserve(4);
	auto __Local__374 = NewObject<UHorizontalBoxSlot>(__Local__372, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__374->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__374->Parent = __Local__372;
	auto __Local__375 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_99"));
	__Local__375->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Vsync"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("744C37AE4844B2566111B79C5043A186") /* Key */
	);
	__Local__375->Slot = __Local__374;
	__Local__375->ToolTipText = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Vsync is awesome! it prevent tearing in the image."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("7D22A8114E8F0B0B8E5FE29D074A2680") /* Key */
	);
	__Local__374->Content = __Local__375;
	__Local__373.Add(__Local__374);
	auto __Local__376 = NewObject<UHorizontalBoxSlot>(__Local__372, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__376->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__376->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__376->Parent = __Local__372;
	auto __Local__377 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Sync_Left"));
	auto& __Local__378 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__377->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__378 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__379 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__377->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__379 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__380 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__377->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__380 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__381 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__377->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__381 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__382 = (*(AccessPrivateProperty<UObject* >(&(__Local__377->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__382 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__383 = (*(AccessPrivateProperty<UObject* >(&(__Local__377->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__383 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__384 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__377), UPanelWidget::__PPO__Slots() )));
	__Local__384 = TArray<UPanelSlot*> ();
	__Local__384.Reserve(1);
	auto __Local__385 = NewObject<UButtonSlot>(__Local__377, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__385->Parent = __Local__377;
	auto __Local__386 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_100"));
	__Local__386->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("←"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4B21CD0B4AFC0D2D5E0FF89892B24827") /* Key */
	);
	auto& __Local__387 = (*(AccessPrivateProperty<FMargin >((__Local__386), UTextLayoutWidget::__PPO__Margin() )));
	__Local__387.Top = -5.000000f;
	__Local__386->Slot = __Local__385;
	__Local__385->Content = __Local__386;
	__Local__384.Add(__Local__385);
	__Local__377->Slot = __Local__376;
	__Local__376->Content = __Local__377;
	__Local__373.Add(__Local__376);
	auto __Local__388 = NewObject<UHorizontalBoxSlot>(__Local__372, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_3"));
	__Local__388->Padding.Left = 5.000000f;
	__Local__388->Padding.Right = 5.000000f;
	__Local__388->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__388->Parent = __Local__372;
	auto __Local__389 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Sync_Text"));
	__Local__389->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Text Block"), /* Literal Text */
	TEXT("UMG"), /* Namespace */
	TEXT("TextBlockDefaultValue") /* Key */
	);
	__Local__389->bIsVariable = true;
	__Local__389->Slot = __Local__388;
	__Local__388->Content = __Local__389;
	__Local__373.Add(__Local__388);
	auto __Local__390 = NewObject<UHorizontalBoxSlot>(__Local__372, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__390->HorizontalAlignment = EHorizontalAlignment::HAlign_Right;
	__Local__390->Parent = __Local__372;
	auto __Local__391 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Sync_Right"));
	auto& __Local__392 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__391->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__392 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__393 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__391->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__393 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__394 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__391->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__394 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__395 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__391->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__395 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__396 = (*(AccessPrivateProperty<UObject* >(&(__Local__391->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__396 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__397 = (*(AccessPrivateProperty<UObject* >(&(__Local__391->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__397 = CastChecked<UObject>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__398 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__391), UPanelWidget::__PPO__Slots() )));
	__Local__398 = TArray<UPanelSlot*> ();
	__Local__398.Reserve(1);
	auto __Local__399 = NewObject<UButtonSlot>(__Local__391, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__399->Parent = __Local__391;
	auto __Local__400 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_102"));
	__Local__400->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("→"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("431891FE4CCF2E986DBDE7B5A5F88B8A") /* Key */
	);
	auto& __Local__401 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__400), UTextLayoutWidget::__PPO__Justification() )));
	__Local__401 = ETextJustify::Type::Right;
	auto& __Local__402 = (*(AccessPrivateProperty<FMargin >((__Local__400), UTextLayoutWidget::__PPO__Margin() )));
	__Local__402.Top = -5.000000f;
	__Local__400->Slot = __Local__399;
	__Local__399->Content = __Local__400;
	__Local__398.Add(__Local__399);
	__Local__391->Slot = __Local__390;
	__Local__390->Content = __Local__391;
	__Local__373.Add(__Local__390);
	__Local__372->Slot = __Local__371;
	__Local__371->Content = __Local__372;
	__Local__370.Add(__Local__371);
	auto __Local__403 = NewObject<UCanvasPanelSlot>(__Local__369, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__403->LayoutData.Offsets.Right = 0.000000f;
	__Local__403->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__403->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__403->Parent = __Local__369;
	auto __Local__404 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_7"));
	auto& __Local__405 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__404->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__405 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	__Local__404->bIsVariable = false;
	__Local__404->Slot = __Local__403;
	__Local__403->Content = __Local__404;
	__Local__370.Add(__Local__403);
	__Local__369->Slot = __Local__368;
	__Local__368->Content = __Local__369;
	__Local__51.Add(__Local__368);
	auto __Local__406 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_11"));
	__Local__406->Padding.Top = 15.000000f;
	__Local__406->Padding.Bottom = 15.000000f;
	__Local__406->Parent = __Local__50;
	auto __Local__407 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_82"));
	__Local__407->Slot = __Local__406;
	__Local__406->Content = __Local__407;
	__Local__51.Add(__Local__406);
	auto __Local__408 = NewObject<UVerticalBoxSlot>(__Local__50, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_12"));
	__Local__408->Padding.Top = 5.000000f;
	__Local__408->Padding.Bottom = 5.000000f;
	__Local__408->Parent = __Local__50;
	auto __Local__409 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_6"));
	auto& __Local__410 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__409), UPanelWidget::__PPO__Slots() )));
	__Local__410 = TArray<UPanelSlot*> ();
	__Local__410.Reserve(2);
	auto __Local__411 = NewObject<UCanvasPanelSlot>(__Local__409, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__411->LayoutData.Offsets.Right = 0.000000f;
	__Local__411->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__411->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__411->bAutoSize = true;
	__Local__411->ZOrder = 1;
	__Local__411->Parent = __Local__409;
	auto __Local__412 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_83"));
	auto& __Local__413 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__412), UPanelWidget::__PPO__Slots() )));
	__Local__413 = TArray<UPanelSlot*> ();
	__Local__413.Reserve(2);
	auto __Local__414 = NewObject<UHorizontalBoxSlot>(__Local__412, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__414->Size.Value = 3.000000f;
	__Local__414->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__414->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__414->Parent = __Local__412;
	auto __Local__415 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_103"));
	__Local__415->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Frame Rate Limit"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("259E30ED4E059D469B41E4A94F003ADC") /* Key */
	);
	__Local__415->Slot = __Local__414;
	__Local__414->Content = __Local__415;
	__Local__413.Add(__Local__414);
	auto __Local__416 = NewObject<UHorizontalBoxSlot>(__Local__412, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_4"));
	__Local__416->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__416->Parent = __Local__412;
	auto __Local__417 = NewObject<USpinBox>(__Local__1, USpinBox::StaticClass(), TEXT("SpinBox_95"));
	__Local__417->Delta = 1.000000f;
	__Local__417->Font.Size = 24;
	static TWeakObjectPtr<UProperty> __Local__419{};
	const UProperty* __Local__418 = __Local__419.Get();
	if (nullptr == __Local__418)
	{
		__Local__418 = (USpinBox::StaticClass())->FindPropertyByName(FName(TEXT("bOverride_MinValue")));
		check(__Local__418);
		__Local__419 = __Local__418;
	}
	(((UBoolProperty*)__Local__418)->SetPropertyValue_InContainer((__Local__417), true, 0));
	static TWeakObjectPtr<UProperty> __Local__421{};
	const UProperty* __Local__420 = __Local__421.Get();
	if (nullptr == __Local__420)
	{
		__Local__420 = (USpinBox::StaticClass())->FindPropertyByName(FName(TEXT("bOverride_MaxValue")));
		check(__Local__420);
		__Local__421 = __Local__420;
	}
	(((UBoolProperty*)__Local__420)->SetPropertyValue_InContainer((__Local__417), true, 0));
	static TWeakObjectPtr<UProperty> __Local__423{};
	const UProperty* __Local__422 = __Local__423.Get();
	if (nullptr == __Local__422)
	{
		__Local__422 = (USpinBox::StaticClass())->FindPropertyByName(FName(TEXT("bOverride_MinSliderValue")));
		check(__Local__422);
		__Local__423 = __Local__422;
	}
	(((UBoolProperty*)__Local__422)->SetPropertyValue_InContainer((__Local__417), true, 0));
	static TWeakObjectPtr<UProperty> __Local__425{};
	const UProperty* __Local__424 = __Local__425.Get();
	if (nullptr == __Local__424)
	{
		__Local__424 = (USpinBox::StaticClass())->FindPropertyByName(FName(TEXT("bOverride_MaxSliderValue")));
		check(__Local__424);
		__Local__425 = __Local__424;
	}
	(((UBoolProperty*)__Local__424)->SetPropertyValue_InContainer((__Local__417), true, 0));
	auto& __Local__426 = (*(AccessPrivateProperty<float >((__Local__417), USpinBox::__PPO__MaxValue() )));
	__Local__426 = 180.000000f;
	auto& __Local__427 = (*(AccessPrivateProperty<float >((__Local__417), USpinBox::__PPO__MaxSliderValue() )));
	__Local__427 = 180.000000f;
	__Local__417->Slot = __Local__416;
	__Local__416->Content = __Local__417;
	__Local__413.Add(__Local__416);
	__Local__412->Slot = __Local__411;
	__Local__411->Content = __Local__412;
	__Local__410.Add(__Local__411);
	auto __Local__428 = NewObject<UCanvasPanelSlot>(__Local__409, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__428->LayoutData.Offsets.Right = 0.000000f;
	__Local__428->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__428->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__428->Parent = __Local__409;
	auto __Local__429 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_8"));
	auto& __Local__430 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__429->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__430 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	__Local__429->bIsVariable = false;
	__Local__429->Slot = __Local__428;
	__Local__428->Content = __Local__429;
	__Local__410.Add(__Local__428);
	__Local__409->Slot = __Local__408;
	__Local__408->Content = __Local__409;
	__Local__51.Add(__Local__408);
	__Local__50->Slot = __Local__49;
	__Local__49->Content = __Local__50;
	__Local__23.Add(__Local__49);
	__Local__1->RootWidget = __Local__22;
}
void UOptions_Menu_C__pf1863595755::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__431;
	SlotNames.Append(__Local__431);
}
void UOptions_Menu_C__pf1863595755::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__432;
	TArray<FDelegateRuntimeBinding>  __Local__433;
	__Local__433.AddUninitialized(3);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__433.GetData(), 3);
	auto& __Local__434 = __Local__433[0];
	__Local__434.ObjectName = FString(TEXT("TextBlock_99"));
	__Local__434.PropertyName = FName(TEXT("ToolTipWidget"));
	__Local__434.FunctionName = FName(TEXT("Get_TextBlock_99_ToolTipWidget_0"));
	auto& __Local__435 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__434.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__435 = TArray<FPropertyPathSegment> ();
	__Local__435.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__435.GetData(), 1);
	auto& __Local__436 = __Local__435[0];
	__Local__436.Name = FName(TEXT("Vsync_ToolTipWidget"));
	auto& __Local__437 = __Local__433[1];
	__Local__437.ObjectName = FString(TEXT("AntiAliasing"));
	__Local__437.PropertyName = FName(TEXT("ToolTipWidget"));
	__Local__437.FunctionName = FName(TEXT("Get_AntiAliasing_ToolTipWidget_0"));
	auto& __Local__438 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__437.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__438 = TArray<FPropertyPathSegment> ();
	__Local__438.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__438.GetData(), 1);
	auto& __Local__439 = __Local__438[0];
	__Local__439.Name = FName(TEXT("AntiAliasing_ToolTipWidget"));
	auto& __Local__440 = __Local__433[2];
	__Local__440.ObjectName = FString(TEXT("TextBlock_103"));
	__Local__440.PropertyName = FName(TEXT("ToolTipWidget"));
	__Local__440.FunctionName = FName(TEXT("Get_TextBlock_103_ToolTipWidget_0"));
	auto& __Local__441 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__440.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__441 = TArray<FPropertyPathSegment> ();
	__Local__441.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__441.GetData(), 1);
	auto& __Local__442 = __Local__441[0];
	__Local__442.Name = FName(TEXT("Frame Rate Limit_ToolTipWidget"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->MiscConvertedSubobjects[0]), __Local__432, __Local__433);
}
void UOptions_Menu_C__pf1863595755::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_0(int32 bpp__EntryPoint__pf)
{
	UGameUserSettings* bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 32);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf = UGameUserSettings::GetGameUserSettings();
	bpf__InitializexResolution__pfT(bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf);
	bpf__InitializexScreenxMode__pfTT(bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf);
	bpf__InitializexAntixAliasing__pfTG(bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf);
	bpf__InitializexShadows__pfT(bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf);
	bpf__InitializexPostxProcess__pfTG(bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf);
	bpf__InitializexViewxDistance__pfTT(bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf);
	bpf__InitializexVisualxEffect__pfTT(bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf);
	bpf__InitializexFoliage__pfT(bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf);
	bpf__InitializexVsync__pfT(bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf);
	bpf__InitializexFrameratexLimit__pfTT(bpfv__CallFunc_GetGameUserSettings_ReturnValue2__pf);
	if(IsValid(bpv__Save_Button__pf))
	{
		bpv__Save_Button__pf->SetIsEnabled(false);
	}
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 63);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Save_Button__pf))
	{
		bpv__Save_Button__pf->SetIsEnabled(true);
	}
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 62);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexScreenxMode__pfTT(((UGameUserSettings*)nullptr), false);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 61);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexScreenxMode__pfTT(((UGameUserSettings*)nullptr), true);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 59);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexVsync__pfT(((UGameUserSettings*)nullptr), false);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 57);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexVsync__pfT(((UGameUserSettings*)nullptr), true);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 56);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexResolution__pfT(((UGameUserSettings*)nullptr), false);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 54);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexFoliage__pfT(((UGameUserSettings*)nullptr), true);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 52);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexFoliage__pfT(((UGameUserSettings*)nullptr), false);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_9(int32 bpp__EntryPoint__pf)
{
	UGameUserSettings* bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf = UGameUserSettings::GetGameUserSettings();
	bpf__ApplyxResolution__pfT(bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf);
	bpf__ApplyxScreenxMode__pfTT(bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf);
	bpf__ApplyxAntixAliasing__pfTG(bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf);
	bpf__ApplyxShadows__pfT(bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf);
	bpf__ApplyxPostxProcess__pfTG(bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf);
	bpf__ApplyxViewxDistance__pfTT(bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf);
	bpf__ApplyxVisualxEffect__pfTT(bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf);
	bpf__ApplyxFoliage__pfT(bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf);
	bpf__ApplyxVsync__pfT(bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf);
	bpf__ApplyxFrameratexLimit__pfTT(bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf);
	if(IsValid(bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf))
	{
		bpfv__CallFunc_GetGameUserSettings_ReturnValue__pf->ApplySettings(false);
	}
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 49);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexResolution__pfT(((UGameUserSettings*)nullptr), true);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 47);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexVisualxEffect__pfTT(((UGameUserSettings*)nullptr), true);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 45);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexVisualxEffect__pfTT(((UGameUserSettings*)nullptr), false);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 29);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexViewxDistance__pfTT(((UGameUserSettings*)nullptr), false);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 27);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexViewxDistance__pfTT(((UGameUserSettings*)nullptr), true);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 31);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexAntixAliasing__pfTG(((UGameUserSettings*)nullptr), false);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexPostxProcess__pfTG(((UGameUserSettings*)nullptr), true);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 22);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexPostxProcess__pfTG(((UGameUserSettings*)nullptr), false);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_18(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexAntixAliasing__pfTG(((UGameUserSettings*)nullptr), true);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_19(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexShadows__pfT(((UGameUserSettings*)nullptr), true);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Options_Menu__pf_20(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	bpf__BrowsexShadows__pfT(((UGameUserSettings*)nullptr), false);
	return; // KCST_GotoReturn
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__SpinBox_95_K2Node_ComponentBoundEvent_2501_OnSpinBoxValueChangedEvent__DelegateSignature__pf(float bpp__InValue__pf)
{
	b0l__K2Node_ComponentBoundEvent_InValue__pf = bpp__InValue__pf;
	bpf__ExecuteUbergraph_Options_Menu__pf_1(63);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__Sync_Left_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_4(59);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__Sync_Right_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_5(57);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__Resolution_Left_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_6(56);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__Foliage_Right_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_7(54);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__Foliage_Left_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_8(52);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__Resolution_Right_K2Node_ComponentBoundEvent_127_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_10(49);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__VFX_Right_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_11(47);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__VFX_Left_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_12(45);
}
void UOptions_Menu_C__pf1863595755::bpf__InitializexList__pfT()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_0(32);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__VD_Left_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_13(29);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__VD_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_14(27);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__PP_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_16(24);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__PP_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_17(22);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__Shadows_Right_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_19(16);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__Shadows_Left_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_20(14);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__Save_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_9(1);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__AA_Right_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_18(21);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__AA_Left_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_15(31);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__Window_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_3(61);
}
void UOptions_Menu_C__pf1863595755::bpf__BndEvt__Window_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Options_Menu__pf_2(62);
}
void UOptions_Menu_C__pf1863595755::bpf__InitializexResolution__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	FIntPoint bpfv__CallFunc_GetScreenResolution_ReturnValue__pf(EForceInit::ForceInit);
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Find_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	TArray<FIntPoint> bpfv__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf{};
	bool bpfv__CallFunc_GetSupportedFullscreenResolutions_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				(bpfv__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf).Reset();
				bpfv__CallFunc_GetSupportedFullscreenResolutions_ReturnValue__pf = UKismetSystemLibrary::GetSupportedFullscreenResolutions(/*out*/ bpfv__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf);
			}
		case 2:
			{
				bpv__Resolutions__pf = bpfv__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf;
			}
		case 3:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_GetScreenResolution_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::GetScreenResolution();
				}
				bpfv__CallFunc_Array_Find_ReturnValue__pf = FCustomThunkTemplates::Array_Find(bpv__Resolutions__pf, bpfv__CallFunc_GetScreenResolution_ReturnValue__pf);
				bpv__ResolutionxIndex__pfT = bpfv__CallFunc_Array_Find_ReturnValue__pf;
			}
		case 4:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_GetScreenResolution_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::GetScreenResolution();
				}
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_GetScreenResolution_ReturnValue__pf.Y);
				bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_GetScreenResolution_ReturnValue__pf.X);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf, FString(TEXT("x")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf);
				if(IsValid(bpv__Resolution_Text__pf))
				{
					bpv__Resolution_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ResolutionxIndex__pfT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__Resolution_Left__pf))
				{
					bpv__Resolution_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpfv__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ResolutionxIndex__pfT, bpfv__CallFunc_Array_LastIndex_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 8:
			{
				if(IsValid(bpv__Resolution_Right__pf))
				{
					bpv__Resolution_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__BrowsexResolution__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf)
{
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	TArray<FIntPoint> bpfv__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf{};
	bool bpfv__CallFunc_GetSupportedFullscreenResolutions_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue__pf{};
	FString bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__Save_Button__pf))
				{
					bpv__Save_Button__pf->SetIsEnabled(true);
				}
			}
		case 2:
			{
				(bpfv__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf).Reset();
				bpfv__CallFunc_GetSupportedFullscreenResolutions_ReturnValue__pf = UKismetSystemLibrary::GetSupportedFullscreenResolutions(/*out*/ bpfv__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf);
			}
		case 3:
			{
				if (!bpp__Increase__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__ResolutionxIndex__pfT, 1);
				bpv__ResolutionxIndex__pfT = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 5:
			{
				bpfv__CallFunc_Conv_IntToString_ReturnValue__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf[bpv__ResolutionxIndex__pfT].Y);
				bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf = UKismetStringLibrary::Conv_IntToString(bpfv__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf[bpv__ResolutionxIndex__pfT].X);
				bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Conv_IntToString_ReturnValue2__pf, FString(TEXT("x")));
				bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf = UKismetStringLibrary::Concat_StrStr(bpfv__CallFunc_Concat_StrStr_ReturnValue__pf, bpfv__CallFunc_Conv_IntToString_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(bpfv__CallFunc_Concat_StrStr_ReturnValue2__pf);
				if(IsValid(bpv__Resolution_Text__pf))
				{
					bpv__Resolution_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 6:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ResolutionxIndex__pfT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 7:
			{
				if(IsValid(bpv__Resolution_Left__pf))
				{
					bpv__Resolution_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__ResolutionxIndex__pfT, 1);
				bpv__ResolutionxIndex__pfT = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpfv__CallFunc_GetSupportedFullscreenResolutions_Resolutions__pf);
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ResolutionxIndex__pfT, bpfv__CallFunc_Array_LastIndex_ReturnValue__pf);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 10:
			{
				if(IsValid(bpv__Resolution_Right__pf))
				{
					bpv__Resolution_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				if(IsValid(bpv__Resolution_Left__pf))
				{
					bpv__Resolution_Left__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__Resolution_Right__pf))
				{
					bpv__Resolution_Right__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__ApplyxResolution__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	if(IsValid(bpp__GamexUserxSettings__pfTT))
	{
		bpp__GamexUserxSettings__pfTT->UGameUserSettings::SetScreenResolution(bpv__Resolutions__pf[bpv__ResolutionxIndex__pfT]);
	}
}
void UOptions_Menu_C__pf1863595755::bpf__InitializexScreenxMode__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	TEnumAsByte<EWindowMode::Type> bpfv__Temp_byte_Variable__pf{};
	TEnumAsByte<EWindowMode::Type> bpfv__CallFunc_GetFullscreenMode_ReturnValue__pf{};
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_GetFullscreenMode_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::GetFullscreenMode();
				}
				bpv__ScreenxModexIndex__pfTT = static_cast<uint8>(bpfv__CallFunc_GetFullscreenMode_ReturnValue__pf);
			}
		case 2:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_GetFullscreenMode_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::GetFullscreenMode();
				}
				bpfv__Temp_byte_Variable__pf = bpfv__CallFunc_GetFullscreenMode_ReturnValue__pf;
				bpfv__Temp_string_Variable__pf = FString(TEXT("Windowed"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Windowed Fullscreen"));
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Fullscreen"));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<TEnumAsByte<EWindowMode::Type> , FString >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<TEnumAsByte<EWindowMode::Type> , FString >(EWindowMode::Fullscreen, bpfv__Temp_string_Variable3__pf), TSwitchPair<TEnumAsByte<EWindowMode::Type> , FString >(EWindowMode::WindowedFullscreen, bpfv__Temp_string_Variable2__pf), TSwitchPair<TEnumAsByte<EWindowMode::Type> , FString >(EWindowMode::Windowed, bpfv__Temp_string_Variable__pf)));
				if(IsValid(bpv__Window_Text__pf))
				{
					bpv__Window_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_ByteByte(bpv__ScreenxModexIndex__pfTT, 0);
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue2__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__Window_Left__pf))
				{
					bpv__Window_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(bpv__ScreenxModexIndex__pfTT, 2);
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__Window_Right__pf))
				{
					bpv__Window_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(IsValid(bpv__Window_Left__pf))
				{
					bpv__Window_Left__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__Window_Right__pf))
				{
					bpv__Window_Right__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__BrowsexScreenxMode__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf)
{
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue2__pf{};
	TEnumAsByte<EWindowMode::Type> bpfv__Temp_byte_Variable__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	uint8 bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	uint8 bpfv__CallFunc_Add_ByteByte_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__Save_Button__pf))
				{
					bpv__Save_Button__pf->SetIsEnabled(true);
				}
			}
		case 2:
			{
				if (!bpp__Increase__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Add_ByteByte_ReturnValue__pf = UKismetMathLibrary::Add_ByteByte(bpv__ScreenxModexIndex__pfTT, 1);
				bpv__ScreenxModexIndex__pfTT = bpfv__CallFunc_Add_ByteByte_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__Temp_string_Variable__pf = FString(TEXT("Windowed Fullscreen"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Fullscreen"));
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Windowed"));
				bpfv__CallFunc_GetValidValue_ReturnValue__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpv__ScreenxModexIndex__pfTT);
				bpfv__Temp_byte_Variable__pf = static_cast<EWindowMode::Type>(bpfv__CallFunc_GetValidValue_ReturnValue__pf);
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<TEnumAsByte<EWindowMode::Type> , FString >(bpfv__Temp_byte_Variable__pf, bpfv__K2Node_Select_Default__pf, 3, TSwitchPair<TEnumAsByte<EWindowMode::Type> , FString >(EWindowMode::Fullscreen, bpfv__Temp_string_Variable2__pf), TSwitchPair<TEnumAsByte<EWindowMode::Type> , FString >(EWindowMode::WindowedFullscreen, bpfv__Temp_string_Variable__pf), TSwitchPair<TEnumAsByte<EWindowMode::Type> , FString >(EWindowMode::Windowed, bpfv__Temp_string_Variable3__pf)));
				if(IsValid(bpv__Window_Text__pf))
				{
					bpv__Window_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_ByteByte(bpv__ScreenxModexIndex__pfTT, 0);
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue2__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__Window_Left__pf))
				{
					bpv__Window_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf = UKismetMathLibrary::Subtract_ByteByte(bpv__ScreenxModexIndex__pfTT, 1);
				bpv__ScreenxModexIndex__pfTT = bpfv__CallFunc_Subtract_ByteByte_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(bpv__ScreenxModexIndex__pfTT, 2);
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpv__Window_Right__pf))
				{
					bpv__Window_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(IsValid(bpv__Window_Left__pf))
				{
					bpv__Window_Left__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__Window_Right__pf))
				{
					bpv__Window_Right__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__ApplyxScreenxMode__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	uint8 bpfv__CallFunc_GetValidValue_ReturnValue__pf{};
	bpfv__CallFunc_GetValidValue_ReturnValue__pf = UKismetNodeHelperLibrary::GetValidValue(CastChecked<UEnum>(CastChecked<UDynamicClass>(UOptions_Menu_C__pf1863595755::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), bpv__ScreenxModexIndex__pfTT);
	if(IsValid(bpp__GamexUserxSettings__pfTT))
	{
		bpp__GamexUserxSettings__pfTT->UGameUserSettings::SetFullscreenMode(static_cast<EWindowMode::Type>(bpfv__CallFunc_GetValidValue_ReturnValue__pf));
	}
}
void UOptions_Menu_C__pf1863595755::bpf__InitializexAntixAliasing__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__CallFunc_GetAntiAliasingQuality_ReturnValue__pf{};
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_GetAntiAliasingQuality_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::GetAntiAliasingQuality();
				}
				bpv__AntixAliasingxIndex__pfGT = bpfv__CallFunc_GetAntiAliasingQuality_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__Temp_string_Variable__pf = FString(TEXT("High"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Low"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("None"));
				bpfv__Temp_int_Variable__pf = bpv__AntixAliasingxIndex__pfGT;
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable4__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable__pf)));
				if(IsValid(bpv__AntixAliasing_Text__pfG))
				{
					bpv__AntixAliasing_Text__pfG->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__AntixAliasingxIndex__pfGT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__AntixAliasing_Left__pfG))
				{
					bpv__AntixAliasing_Left__pfG->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__AntixAliasingxIndex__pfGT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__AntixAliasing_Right__pfG))
				{
					bpv__AntixAliasing_Right__pfG->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(IsValid(bpv__AntixAliasing_Right__pfG))
				{
					bpv__AntixAliasing_Right__pfG->SetIsEnabled(true);
				}
				if(IsValid(bpv__AntixAliasing_Left__pfG))
				{
					bpv__AntixAliasing_Left__pfG->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__BrowsexAntixAliasing__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf)
{
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__Save_Button__pf))
				{
					bpv__Save_Button__pf->SetIsEnabled(true);
				}
			}
		case 2:
			{
				if (!bpp__Increase__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__AntixAliasingxIndex__pfGT, 1);
				bpv__AntixAliasingxIndex__pfGT = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__Temp_string_Variable__pf = FString(TEXT("Low"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("None"));
				bpfv__Temp_int_Variable__pf = bpv__AntixAliasingxIndex__pfGT;
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("High"));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable4__pf)));
				if(IsValid(bpv__AntixAliasing_Text__pfG))
				{
					bpv__AntixAliasing_Text__pfG->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__AntixAliasingxIndex__pfGT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__AntixAliasing_Left__pfG))
				{
					bpv__AntixAliasing_Left__pfG->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__AntixAliasingxIndex__pfGT, 1);
				bpv__AntixAliasingxIndex__pfGT = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__AntixAliasingxIndex__pfGT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpv__AntixAliasing_Right__pfG))
				{
					bpv__AntixAliasing_Right__pfG->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(IsValid(bpv__AntixAliasing_Right__pfG))
				{
					bpv__AntixAliasing_Right__pfG->SetIsEnabled(true);
				}
				if(IsValid(bpv__AntixAliasing_Left__pfG))
				{
					bpv__AntixAliasing_Left__pfG->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__ApplyxAntixAliasing__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	if(IsValid(bpp__GamexUserxSettings__pfTT))
	{
		bpp__GamexUserxSettings__pfTT->UGameUserSettings::SetAntiAliasingQuality(bpv__AntixAliasingxIndex__pfGT);
	}
}
void UOptions_Menu_C__pf1863595755::bpf__InitializexShadows__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	int32 bpfv__CallFunc_GetShadowQuality_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_GetShadowQuality_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::GetShadowQuality();
				}
				bpv__ShadowsxIndex__pfT = bpfv__CallFunc_GetShadowQuality_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__Temp_int_Variable__pf = bpv__ShadowsxIndex__pfT;
				bpfv__Temp_string_Variable__pf = FString(TEXT("High"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Low"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("None"));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable4__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable__pf)));
				if(IsValid(bpv__Shadows_Text__pf))
				{
					bpv__Shadows_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ShadowsxIndex__pfT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__Shadows_Left__pf))
				{
					bpv__Shadows_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ShadowsxIndex__pfT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__Shadows_Right__pf))
				{
					bpv__Shadows_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(IsValid(bpv__Shadows_Right__pf))
				{
					bpv__Shadows_Right__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__Shadows_Left__pf))
				{
					bpv__Shadows_Left__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__BrowsexShadows__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf)
{
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__Save_Button__pf))
				{
					bpv__Save_Button__pf->SetIsEnabled(true);
				}
			}
		case 2:
			{
				if (!bpp__Increase__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__ShadowsxIndex__pfT, 1);
				bpv__ShadowsxIndex__pfT = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__Temp_string_Variable__pf = FString(TEXT("Low"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("None"));
				bpfv__Temp_int_Variable__pf = bpv__ShadowsxIndex__pfT;
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("High"));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable4__pf)));
				if(IsValid(bpv__Shadows_Text__pf))
				{
					bpv__Shadows_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ShadowsxIndex__pfT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__Shadows_Left__pf))
				{
					bpv__Shadows_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__ShadowsxIndex__pfT, 1);
				bpv__ShadowsxIndex__pfT = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ShadowsxIndex__pfT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpv__Shadows_Right__pf))
				{
					bpv__Shadows_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(IsValid(bpv__Shadows_Right__pf))
				{
					bpv__Shadows_Right__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__Shadows_Left__pf))
				{
					bpv__Shadows_Left__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__ApplyxShadows__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	if(IsValid(bpp__GamexUserxSettings__pfTT))
	{
		bpp__GamexUserxSettings__pfTT->UGameUserSettings::SetShadowQuality(bpv__ShadowsxIndex__pfT);
	}
}
void UOptions_Menu_C__pf1863595755::bpf__InitializexPostxProcess__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	int32 bpfv__CallFunc_GetPostProcessingQuality_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_GetPostProcessingQuality_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::GetPostProcessingQuality();
				}
				bpv__PostxProcessxIndex__pfGT = bpfv__CallFunc_GetPostProcessingQuality_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__Temp_int_Variable__pf = bpv__PostxProcessxIndex__pfGT;
				bpfv__Temp_string_Variable__pf = FString(TEXT("High"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Low"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("Very Low"));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable4__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable__pf)));
				if(IsValid(bpv__PP_Text__pf))
				{
					bpv__PP_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__PostxProcessxIndex__pfGT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__PP_Left__pf))
				{
					bpv__PP_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__PostxProcessxIndex__pfGT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__PP_Right__pf))
				{
					bpv__PP_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(IsValid(bpv__PP_Left__pf))
				{
					bpv__PP_Left__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__PP_Right__pf))
				{
					bpv__PP_Right__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__BrowsexPostxProcess__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf)
{
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__Save_Button__pf))
				{
					bpv__Save_Button__pf->SetIsEnabled(true);
				}
			}
		case 2:
			{
				if (!bpp__Increase__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__PostxProcessxIndex__pfGT, 1);
				bpv__PostxProcessxIndex__pfGT = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__Temp_string_Variable__pf = FString(TEXT("Low"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Very Low"));
				bpfv__Temp_int_Variable__pf = bpv__PostxProcessxIndex__pfGT;
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("High"));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable4__pf)));
				if(IsValid(bpv__PP_Text__pf))
				{
					bpv__PP_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__PostxProcessxIndex__pfGT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__PP_Left__pf))
				{
					bpv__PP_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__PostxProcessxIndex__pfGT, 1);
				bpv__PostxProcessxIndex__pfGT = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__PostxProcessxIndex__pfGT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpv__PP_Right__pf))
				{
					bpv__PP_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(IsValid(bpv__PP_Left__pf))
				{
					bpv__PP_Left__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__PP_Right__pf))
				{
					bpv__PP_Right__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__ApplyxPostxProcess__pfTG(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	if(IsValid(bpp__GamexUserxSettings__pfTT))
	{
		bpp__GamexUserxSettings__pfTT->UGameUserSettings::SetPostProcessingQuality(bpv__PostxProcessxIndex__pfGT);
	}
}
void UOptions_Menu_C__pf1863595755::bpf__InitializexViewxDistance__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__CallFunc_GetViewDistanceQuality_ReturnValue__pf{};
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_GetViewDistanceQuality_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::GetViewDistanceQuality();
				}
				bpv__ViewxDistancexIndex__pfTT = bpfv__CallFunc_GetViewDistanceQuality_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__Temp_string_Variable__pf = FString(TEXT("Far"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Short"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("Very Short"));
				bpfv__Temp_int_Variable__pf = bpv__ViewxDistancexIndex__pfTT;
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable4__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable__pf)));
				if(IsValid(bpv__VD_Text__pf))
				{
					bpv__VD_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ViewxDistancexIndex__pfTT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__VD_Left__pf))
				{
					bpv__VD_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ViewxDistancexIndex__pfTT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__VD_Right__pf))
				{
					bpv__VD_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(IsValid(bpv__VD_Left__pf))
				{
					bpv__VD_Left__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__VD_Right__pf))
				{
					bpv__VD_Right__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__BrowsexViewxDistance__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf)
{
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__Save_Button__pf))
				{
					bpv__Save_Button__pf->SetIsEnabled(true);
				}
			}
		case 2:
			{
				if (!bpp__Increase__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__ViewxDistancexIndex__pfTT, 1);
				bpv__ViewxDistancexIndex__pfTT = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__Temp_string_Variable__pf = FString(TEXT("Short"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Very Short"));
				bpfv__Temp_int_Variable__pf = bpv__ViewxDistancexIndex__pfTT;
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("Far"));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable4__pf)));
				if(IsValid(bpv__VD_Text__pf))
				{
					bpv__VD_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ViewxDistancexIndex__pfTT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__VD_Left__pf))
				{
					bpv__VD_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__ViewxDistancexIndex__pfTT, 1);
				bpv__ViewxDistancexIndex__pfTT = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__ViewxDistancexIndex__pfTT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpv__VD_Right__pf))
				{
					bpv__VD_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(IsValid(bpv__VD_Left__pf))
				{
					bpv__VD_Left__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__VD_Right__pf))
				{
					bpv__VD_Right__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__ApplyxViewxDistance__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	if(IsValid(bpp__GamexUserxSettings__pfTT))
	{
		bpp__GamexUserxSettings__pfTT->UGameUserSettings::SetViewDistanceQuality(bpv__ViewxDistancexIndex__pfTT);
	}
}
void UOptions_Menu_C__pf1863595755::bpf__InitializexVisualxEffect__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	int32 bpfv__CallFunc_GetVisualEffectQuality_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_GetVisualEffectQuality_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::GetVisualEffectQuality();
				}
				bpv__VisualxEffectxIndex__pfTT = bpfv__CallFunc_GetVisualEffectQuality_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__Temp_int_Variable__pf = bpv__VisualxEffectxIndex__pfTT;
				bpfv__Temp_string_Variable__pf = FString(TEXT("High"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Low"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("None"));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable4__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable__pf)));
				if(IsValid(bpv__VFX_Text__pf))
				{
					bpv__VFX_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__VisualxEffectxIndex__pfTT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__VFX_Left__pf))
				{
					bpv__VFX_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__VisualxEffectxIndex__pfTT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__VFX_Right__pf))
				{
					bpv__VFX_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(IsValid(bpv__VFX_Left__pf))
				{
					bpv__VFX_Left__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__VFX_Right__pf))
				{
					bpv__VFX_Right__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__BrowsexVisualxEffect__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf)
{
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__Save_Button__pf))
				{
					bpv__Save_Button__pf->SetIsEnabled(true);
				}
			}
		case 2:
			{
				if (!bpp__Increase__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__VisualxEffectxIndex__pfTT, 1);
				bpv__VisualxEffectxIndex__pfTT = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__Temp_string_Variable__pf = FString(TEXT("Low"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Very Low"));
				bpfv__Temp_int_Variable__pf = bpv__VisualxEffectxIndex__pfTT;
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("High"));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable4__pf)));
				if(IsValid(bpv__VFX_Text__pf))
				{
					bpv__VFX_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__VisualxEffectxIndex__pfTT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__VFX_Left__pf))
				{
					bpv__VFX_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__VisualxEffectxIndex__pfTT, 1);
				bpv__VisualxEffectxIndex__pfTT = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__VisualxEffectxIndex__pfTT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpv__VFX_Right__pf))
				{
					bpv__VFX_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(IsValid(bpv__VFX_Right__pf))
				{
					bpv__VFX_Right__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__VFX_Left__pf))
				{
					bpv__VFX_Left__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__ApplyxVisualxEffect__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	if(IsValid(bpp__GamexUserxSettings__pfTT))
	{
		bpp__GamexUserxSettings__pfTT->UGameUserSettings::SetVisualEffectQuality(bpv__VisualxEffectxIndex__pfTT);
	}
}
void UOptions_Menu_C__pf1863595755::bpf__InitializexFoliage__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__CallFunc_GetFoliageQuality_ReturnValue__pf{};
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_GetFoliageQuality_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::GetFoliageQuality();
				}
				bpv__FoliagexAmmount__pfT = bpfv__CallFunc_GetFoliageQuality_ReturnValue__pf;
			}
		case 2:
			{
				bpfv__Temp_string_Variable__pf = FString(TEXT("High"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Low"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("None"));
				bpfv__Temp_int_Variable__pf = bpv__FoliagexAmmount__pfT;
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable4__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable__pf)));
				if(IsValid(bpv__Foliage_Text__pf))
				{
					bpv__Foliage_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__FoliagexAmmount__pfT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__Foliage_Left__pf))
				{
					bpv__Foliage_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__FoliagexAmmount__pfT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__Foliage_Right__pf))
				{
					bpv__Foliage_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(IsValid(bpv__Foliage_Right__pf))
				{
					bpv__Foliage_Right__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__Foliage_Left__pf))
				{
					bpv__Foliage_Left__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__BrowsexFoliage__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf)
{
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	FString bpfv__Temp_string_Variable3__pf{};
	FString bpfv__Temp_string_Variable4__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__Save_Button__pf))
				{
					bpv__Save_Button__pf->SetIsEnabled(true);
				}
			}
		case 2:
			{
				if (!bpp__Increase__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpv__FoliagexAmmount__pfT, 1);
				bpv__FoliagexAmmount__pfT = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
			}
		case 4:
			{
				bpfv__Temp_string_Variable__pf = FString(TEXT("Low"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("None"));
				bpfv__Temp_int_Variable__pf = bpv__FoliagexAmmount__pfT;
				bpfv__Temp_string_Variable3__pf = FString(TEXT("Medium"));
				bpfv__Temp_string_Variable4__pf = FString(TEXT("High"));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<int32 , FString >(bpfv__Temp_int_Variable__pf, bpfv__K2Node_Select_Default__pf, 4, TSwitchPair<int32 , FString >(0, bpfv__Temp_string_Variable2__pf), TSwitchPair<int32 , FString >(1, bpfv__Temp_string_Variable__pf), TSwitchPair<int32 , FString >(2, bpfv__Temp_string_Variable3__pf), TSwitchPair<int32 , FString >(3, bpfv__Temp_string_Variable4__pf)));
				if(IsValid(bpv__Foliage_Text__pf))
				{
					bpv__Foliage_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__FoliagexAmmount__pfT, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__Foliage_Left__pf))
				{
					bpv__Foliage_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpv__FoliagexAmmount__pfT, 1);
				bpv__FoliagexAmmount__pfT = bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__FoliagexAmmount__pfT, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpv__Foliage_Right__pf))
				{
					bpv__Foliage_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(IsValid(bpv__Foliage_Right__pf))
				{
					bpv__Foliage_Right__pf->SetIsEnabled(true);
				}
				if(IsValid(bpv__Foliage_Left__pf))
				{
					bpv__Foliage_Left__pf->SetIsEnabled(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__ApplyxFoliage__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	if(IsValid(bpp__GamexUserxSettings__pfTT))
	{
		bpp__GamexUserxSettings__pfTT->UGameUserSettings::SetFoliageQuality(bpv__FoliagexAmmount__pfT);
	}
}
void UOptions_Menu_C__pf1863595755::bpf__InitializexVsync__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	bool bpfv__Temp_bool_Variable__pf{};
	bool bpfv__CallFunc_IsVSyncEnabled_ReturnValue__pf{};
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_IsVSyncEnabled_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::IsVSyncEnabled();
				}
				bpv__Vsync__pf = bpfv__CallFunc_IsVSyncEnabled_ReturnValue__pf;
			}
		case 2:
			{
				if(IsValid(bpp__GamexUserxSettings__pfTT))
				{
					bpfv__CallFunc_IsVSyncEnabled_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::IsVSyncEnabled();
				}
				bpfv__Temp_bool_Variable__pf = bpfv__CallFunc_IsVSyncEnabled_ReturnValue__pf;
				bpfv__Temp_string_Variable__pf = FString(TEXT("Enabled"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Disabled"));
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<bool , FString >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , FString >(false, bpfv__Temp_string_Variable2__pf), TSwitchPair<bool , FString >(true, bpfv__Temp_string_Variable__pf)));
				if(IsValid(bpv__Sync_Text__pf))
				{
					bpv__Sync_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
			}
		case 3:
			{
				if (!bpv__Vsync__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__Sync_Left__pf))
				{
					bpv__Sync_Left__pf->SetIsEnabled(true);
				}
			}
		case 5:
			{
				if(IsValid(bpv__Sync_Right__pf))
				{
					bpv__Sync_Right__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				if(IsValid(bpv__Sync_Right__pf))
				{
					bpv__Sync_Right__pf->SetIsEnabled(true);
				}
			}
		case 7:
			{
				if(IsValid(bpv__Sync_Left__pf))
				{
					bpv__Sync_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__BrowsexVsync__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT, bool bpp__Increase__pf)
{
	FString bpfv__Temp_string_Variable__pf{};
	FString bpfv__Temp_string_Variable2__pf{};
	bool bpfv__Temp_bool_Variable__pf{};
	FString bpfv__K2Node_Select_Default__pf{};
	FText bpfv__CallFunc_Conv_StringToText_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__Save_Button__pf))
				{
					bpv__Save_Button__pf->SetIsEnabled(true);
				}
			}
		case 2:
			{
				if (!bpp__Increase__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 3:
			{
				bpv__Vsync__pf = true;
			}
		case 4:
			{
				if (!bpv__Vsync__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 5:
			{
				if(IsValid(bpv__Sync_Left__pf))
				{
					bpv__Sync_Left__pf->SetIsEnabled(true);
				}
			}
		case 6:
			{
				if(IsValid(bpv__Sync_Right__pf))
				{
					bpv__Sync_Right__pf->SetIsEnabled(false);
				}
			}
		case 7:
			{
				bpfv__Temp_string_Variable__pf = FString(TEXT("Disabled"));
				bpfv__Temp_string_Variable2__pf = FString(TEXT("Enabled"));
				bpfv__Temp_bool_Variable__pf = bpv__Vsync__pf;
				bpfv__CallFunc_Conv_StringToText_ReturnValue__pf = UKismetTextLibrary::Conv_StringToText(TSwitchValue<bool , FString >(bpfv__Temp_bool_Variable__pf, bpfv__K2Node_Select_Default__pf, 2, TSwitchPair<bool , FString >(false, bpfv__Temp_string_Variable__pf), TSwitchPair<bool , FString >(true, bpfv__Temp_string_Variable2__pf)));
				if(IsValid(bpv__Sync_Text__pf))
				{
					bpv__Sync_Text__pf->SetText(bpfv__CallFunc_Conv_StringToText_ReturnValue__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				bpv__Vsync__pf = false;
				__CurrentState = 4;
				break;
			}
		case 9:
			{
				if(IsValid(bpv__Sync_Right__pf))
				{
					bpv__Sync_Right__pf->SetIsEnabled(true);
				}
			}
		case 10:
			{
				if(IsValid(bpv__Sync_Left__pf))
				{
					bpv__Sync_Left__pf->SetIsEnabled(false);
				}
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UOptions_Menu_C__pf1863595755::bpf__ApplyxVsync__pfT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	if(IsValid(bpp__GamexUserxSettings__pfTT))
	{
		bpp__GamexUserxSettings__pfTT->UGameUserSettings::SetVSyncEnabled(bpv__Vsync__pf);
	}
}
UWidget*  UOptions_Menu_C__pf1863595755::bpf__Vsync_ToolTipWidget__pf()
{
	UWidget* bpp__ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UTooltip_C__pf1863595755* bpfv__CallFunc_Create_ReturnValue__pf{};
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UTooltip_C__pf1863595755>(UWidgetBlueprintLibrary::Create(this, UTooltip_C__pf1863595755::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
	if(IsValid(bpfv__CallFunc_Create_ReturnValue__pf) && IsValid(bpfv__CallFunc_Create_ReturnValue__pf->bpv__TextZonne__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->bpv__TextZonne__pf->SetText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("V-Sync is locking the game’s frame rate to your monitor’s refresh rate. By keeping the frame rate and refresh rate in sync, screen tearing is eliminated.\r\n\r\n*In some cases, Vsync can cause input lag. If this happen, use the \"FrameRate Limiter\"."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0B449B4D40C3ADC464CCBFB4B1484298") /* Key */
	));
	}
	bpp__ReturnValue__pf = bpfv__CallFunc_Create_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
UWidget*  UOptions_Menu_C__pf1863595755::bpf__AntiAliasing_ToolTipWidget__pf()
{
	UWidget* bpp__ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UTooltip_C__pf1863595755* bpfv__CallFunc_Create_ReturnValue__pf{};
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UTooltip_C__pf1863595755>(UWidgetBlueprintLibrary::Create(this, UTooltip_C__pf1863595755::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
	if(IsValid(bpfv__CallFunc_Create_ReturnValue__pf) && IsValid(bpfv__CallFunc_Create_ReturnValue__pf->bpv__TextZonne__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->bpv__TextZonne__pf->SetText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Anti-aliasing smooths out the jaged edges of curved objects by blending the colors of the pixels around them to create the illusion of smoothness.\r\n\r\n* Aliasing is much less noticeable on a higher resolution, try to max-out the resolution before activa")
		TEXT("ting the Anti-aliasing."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9C2CFD2447B6E71BB3CD7485A1B2E241") /* Key */
	));
	}
	bpp__ReturnValue__pf = bpfv__CallFunc_Create_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
void UOptions_Menu_C__pf1863595755::bpf__InitializexFrameratexLimit__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	float bpfv__CallFunc_GetFrameRateLimit_ReturnValue__pf{};
	if(IsValid(bpp__GamexUserxSettings__pfTT))
	{
		bpfv__CallFunc_GetFrameRateLimit_ReturnValue__pf = bpp__GamexUserxSettings__pfTT->UGameUserSettings::GetFrameRateLimit();
	}
	bpv__FrameratexLimit__pfT = bpfv__CallFunc_GetFrameRateLimit_ReturnValue__pf;
}
void UOptions_Menu_C__pf1863595755::bpf__ApplyxFrameratexLimit__pfTT(UGameUserSettings* bpp__GamexUserxSettings__pfTT)
{
	float bpfv__CallFunc_GetValue_ReturnValue__pf{};
	if(IsValid(bpv__SpinBox_95__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__SpinBox_95__pf->USpinBox::GetValue();
	}
	if(IsValid(bpp__GamexUserxSettings__pfTT))
	{
		bpp__GamexUserxSettings__pfTT->UGameUserSettings::SetFrameRateLimit(bpfv__CallFunc_GetValue_ReturnValue__pf);
	}
}
UWidget*  UOptions_Menu_C__pf1863595755::bpf__FramexRatexLimit_ToolTipWidget__pfTT()
{
	UWidget* bpp__ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UTooltip_C__pf1863595755* bpfv__CallFunc_Create_ReturnValue__pf{};
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UTooltip_C__pf1863595755>(UWidgetBlueprintLibrary::Create(this, UTooltip_C__pf1863595755::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
	if(IsValid(bpfv__CallFunc_Create_ReturnValue__pf) && IsValid(bpfv__CallFunc_Create_ReturnValue__pf->bpv__TextZonne__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->bpv__TextZonne__pf->SetText(FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("The Frame Rate Limit defines the ammount of FPS (Frame Per Second) you will get in-game. Just like Vsync, it will prevent image tearing if set properly.\r\n\r\n* A value of 0 mean the Frame Rate won\'t be limited."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("7AC89C834F927265D7590DBD627F9606") /* Key */
	));
	}
	bpp__ReturnValue__pf = bpfv__CallFunc_Create_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
void UOptions_Menu_C__pf1863595755::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/UMG/Sounds/SW_Click.SW_Click 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/UMG/Sounds/SW_Hover.SW_Hover 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EWindowMode 
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
void UOptions_Menu_C__pf1863595755::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{115, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.SpinBox 
		{127, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameUserSettings 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{128, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetNodeHelperLibrary 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{129, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{130, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/Tooltip.Tooltip_C 
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
struct FRegisterHelper__UOptions_Menu_C__pf1863595755
{
	FRegisterHelper__UOptions_Menu_C__pf1863595755()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UMG/Options_Menu"), &UOptions_Menu_C__pf1863595755::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UOptions_Menu_C__pf1863595755 Instance;
};
FRegisterHelper__UOptions_Menu_C__pf1863595755 FRegisterHelper__UOptions_Menu_C__pf1863595755::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
