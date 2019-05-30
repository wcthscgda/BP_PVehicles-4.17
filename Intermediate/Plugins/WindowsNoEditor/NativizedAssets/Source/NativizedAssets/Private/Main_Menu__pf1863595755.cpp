#include "NativizedAssets.h"
#include "Main_Menu__pf1863595755.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Options_Menu__pf1863595755.h"
#include "About_Menu__pf1863595755.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
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
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
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
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Loading_Screen__pf1863595755.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
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
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/UMG/Public/Components/SpinBox.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Tooltip__pf1863595755.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UMain_Menu_C__pf1863595755::UMain_Menu_C__pf1863595755(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UMain_Menu_C__pf1863595755::StaticClass() == GetClass()))
	{
		UMain_Menu_C__pf1863595755::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__About_Button__pf = nullptr;
	bpv__About_Menu__pf = nullptr;
	bpv__Cancel_Button__pf = nullptr;
	bpv__Confirm_Button__pf = nullptr;
	bpv__Confirm_Panel__pf = nullptr;
	bpv__Forum_Button__pf = nullptr;
	bpv__Links_Panel__pf = nullptr;
	bpv__Main_Panel__pf = nullptr;
	bpv__Options_Button__pf = nullptr;
	bpv__Options_Panel__pf = nullptr;
	bpv__Quit_Button__pf = nullptr;
	bpv__Start_Button__pf = nullptr;
	bpv__ThankYou__pf = nullptr;
	bpv__Youtube_Button__pf = nullptr;
	bpv__Cameras__pf = TArray<ACameraActor*> ();
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UMain_Menu_C__pf1863595755::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UMain_Menu_C__pf1863595755::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(UOptions_Menu_C__pf1863595755::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UAbout_Menu_C__pf1863595755::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ULoading_Screen_C__pf1863595755::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(8);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 8);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("About_Button"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Options_Button"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Forum_Button"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Youtube_Button"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Start_Button"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Confirm_Button"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("Cancel_Button"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__9 = __Local__0->ComponentDelegateBindings[7];
	__Local__9.ComponentPropertyName = FName(TEXT("Quit_Button"));
	__Local__9.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__9.FunctionNameToBind = FName(TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__10 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__11 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__10), UPanelWidget::__PPO__Slots() )));
	__Local__11 = TArray<UPanelSlot*> ();
	__Local__11.Reserve(7);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_11"));
	__Local__12->LayoutData.Offsets.Right = 500.000000f;
	__Local__12->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__12->Parent = __Local__10;
	auto __Local__13 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Main_Panel"));
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__13), UPanelWidget::__PPO__Slots() )));
	__Local__14 = TArray<UPanelSlot*> ();
	__Local__14.Reserve(4);
	auto __Local__15 = NewObject<UCanvasPanelSlot>(__Local__13, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_12"));
	__Local__15->LayoutData.Offsets.Left = 50.000000f;
	__Local__15->LayoutData.Offsets.Top = -50.000000f;
	__Local__15->LayoutData.Offsets.Right = 260.000000f;
	__Local__15->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__15->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__15->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__15->LayoutData.Alignment = FVector2D(0.000000, 1.000000);
	__Local__15->ZOrder = 1;
	__Local__15->Parent = __Local__13;
	auto __Local__16 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Start_Button"));
	auto& __Local__17 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__16->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__17 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__18 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__16->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__18 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__19 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__16->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__19 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__20 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__16->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__20 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__21 = (*(AccessPrivateProperty<UObject* >(&(__Local__16->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__21 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__22 = (*(AccessPrivateProperty<UObject* >(&(__Local__16->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__22 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__16), UPanelWidget::__PPO__Slots() )));
	__Local__23 = TArray<UPanelSlot*> ();
	__Local__23.Reserve(1);
	auto __Local__24 = NewObject<UButtonSlot>(__Local__16, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__24->Parent = __Local__16;
	auto __Local__25 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Play_Text"));
	__Local__25->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Let me Drive!"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("569C7B73410BFBEDD0B334BA9DD05108") /* Key */
	);
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__23.Add(__Local__24);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__14.Add(__Local__15);
	auto __Local__26 = NewObject<UCanvasPanelSlot>(__Local__13, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_13"));
	__Local__26->LayoutData.Offsets.Left = 50.000000f;
	__Local__26->LayoutData.Offsets.Right = 240.000000f;
	__Local__26->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__26->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__26->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__26->LayoutData.Alignment = FVector2D(0.000000, 0.500000);
	__Local__26->ZOrder = 1;
	__Local__26->Parent = __Local__13;
	auto __Local__27 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Options_Button"));
	auto& __Local__28 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__27->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__28 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__27->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__29 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__27->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__30 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__27->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__31 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__27->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__33 = (*(AccessPrivateProperty<UObject* >(&(__Local__27->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__33 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__34 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__27), UPanelWidget::__PPO__Slots() )));
	__Local__34 = TArray<UPanelSlot*> ();
	__Local__34.Reserve(1);
	auto __Local__35 = NewObject<UButtonSlot>(__Local__27, UButtonSlot::StaticClass(), TEXT("ButtonSlot_2"));
	__Local__35->Parent = __Local__27;
	auto __Local__36 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Options_Text"));
	__Local__36->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Options"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("D7F0E5D94F483A68A3C90C9D8509AFFE") /* Key */
	);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__34.Add(__Local__35);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__14.Add(__Local__26);
	auto __Local__37 = NewObject<UCanvasPanelSlot>(__Local__13, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_14"));
	__Local__37->LayoutData.Offsets.Left = 50.000000f;
	__Local__37->LayoutData.Offsets.Top = 50.000000f;
	__Local__37->LayoutData.Offsets.Right = 220.000000f;
	__Local__37->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__37->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__37->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__37->ZOrder = 1;
	__Local__37->Parent = __Local__13;
	auto __Local__38 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Quit_Button"));
	auto& __Local__39 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__38->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__39 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__40 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__38->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__40 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__38->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__41 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__42 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__38->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__42 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__43 = (*(AccessPrivateProperty<UObject* >(&(__Local__38->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__43 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__44 = (*(AccessPrivateProperty<UObject* >(&(__Local__38->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__44 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__38), UPanelWidget::__PPO__Slots() )));
	__Local__45 = TArray<UPanelSlot*> ();
	__Local__45.Reserve(1);
	auto __Local__46 = NewObject<UButtonSlot>(__Local__38, UButtonSlot::StaticClass(), TEXT("ButtonSlot_3"));
	__Local__46->Parent = __Local__38;
	auto __Local__47 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Quit_Text"));
	__Local__47->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Quit"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("B78BBB984E59CF1F722344958D344AE4") /* Key */
	);
	__Local__47->Slot = __Local__46;
	__Local__46->Content = __Local__47;
	__Local__45.Add(__Local__46);
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__14.Add(__Local__37);
	auto __Local__48 = NewObject<UCanvasPanelSlot>(__Local__13, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_15"));
	__Local__48->LayoutData.Offsets.Left = -256.000000f;
	__Local__48->LayoutData.Offsets.Top = -98.098099f;
	__Local__48->LayoutData.Offsets.Right = 600.000000f;
	__Local__48->LayoutData.Offsets.Bottom = -42.042042f;
	__Local__48->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__48->Parent = __Local__13;
	auto __Local__49 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Background"));
	auto& __Local__50 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__49->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__50 = FLinearColor(0.000000, 0.000000, 0.000000, 0.750000);
	__Local__49->bIsVariable = false;
	__Local__49->Slot = __Local__48;
	__Local__49->RenderTransform.Angle = 10.000000f;
	__Local__48->Content = __Local__49;
	__Local__14.Add(__Local__48);
	__Local__13->bIsVariable = true;
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__11.Add(__Local__12);
	auto __Local__51 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_16"));
	__Local__51->LayoutData.Offsets.Top = -50.000000f;
	__Local__51->LayoutData.Offsets.Right = 600.000000f;
	__Local__51->LayoutData.Offsets.Bottom = 150.000000f;
	__Local__51->LayoutData.Anchors.Minimum = FVector2D(0.500000, 1.000000);
	__Local__51->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__51->LayoutData.Alignment = FVector2D(0.500000, 1.000000);
	__Local__51->Parent = __Local__10;
	auto __Local__52 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Confirm_Panel"));
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__52), UPanelWidget::__PPO__Slots() )));
	__Local__53 = TArray<UPanelSlot*> ();
	__Local__53.Reserve(4);
	auto __Local__54 = NewObject<UCanvasPanelSlot>(__Local__52, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_17"));
	__Local__54->LayoutData.Offsets.Right = 0.000000f;
	__Local__54->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__54->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__54->LayoutData.Alignment = FVector2D(0.500000, 1.000000);
	__Local__54->Parent = __Local__52;
	auto __Local__55 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Background_2"));
	auto& __Local__56 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__55->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__56 = FLinearColor(0.000000, 0.000000, 0.000000, 0.750000);
	__Local__55->bIsVariable = false;
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__53.Add(__Local__54);
	auto __Local__57 = NewObject<UCanvasPanelSlot>(__Local__52, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_19"));
	__Local__57->LayoutData.Offsets.Left = 20.000000f;
	__Local__57->LayoutData.Offsets.Top = -20.000000f;
	__Local__57->LayoutData.Offsets.Right = 220.000000f;
	__Local__57->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__57->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__57->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__57->LayoutData.Alignment = FVector2D(0.000000, 1.000000);
	__Local__57->ZOrder = 1;
	__Local__57->Parent = __Local__52;
	auto __Local__58 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Confirm_Button"));
	auto& __Local__59 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__58->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__59 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__60 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__58->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__60 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__58->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__62 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__58->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__62 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__63 = (*(AccessPrivateProperty<UObject* >(&(__Local__58->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__63 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__64 = (*(AccessPrivateProperty<UObject* >(&(__Local__58->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__64 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__65 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__58), UPanelWidget::__PPO__Slots() )));
	__Local__65 = TArray<UPanelSlot*> ();
	__Local__65.Reserve(1);
	auto __Local__66 = NewObject<UButtonSlot>(__Local__58, UButtonSlot::StaticClass(), TEXT("ButtonSlot_3"));
	__Local__66->Parent = __Local__58;
	auto __Local__67 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Confirm_Text"));
	__Local__67->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Confirm"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("E62160C94CFB9505C57603B15256E045") /* Key */
	);
	__Local__67->Slot = __Local__66;
	__Local__66->Content = __Local__67;
	__Local__65.Add(__Local__66);
	__Local__58->Slot = __Local__57;
	__Local__57->Content = __Local__58;
	__Local__53.Add(__Local__57);
	auto __Local__68 = NewObject<UCanvasPanelSlot>(__Local__52, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_21"));
	__Local__68->LayoutData.Offsets.Left = -20.000000f;
	__Local__68->LayoutData.Offsets.Top = -20.000000f;
	__Local__68->LayoutData.Offsets.Right = 220.000000f;
	__Local__68->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__68->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__68->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__68->LayoutData.Alignment = FVector2D(1.000000, 1.000000);
	__Local__68->ZOrder = 1;
	__Local__68->Parent = __Local__52;
	auto __Local__69 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Cancel_Button"));
	auto& __Local__70 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__69->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__70 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__71 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__69->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__71 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__72 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__69->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__72 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__73 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__69->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__73 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__74 = (*(AccessPrivateProperty<UObject* >(&(__Local__69->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__74 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__75 = (*(AccessPrivateProperty<UObject* >(&(__Local__69->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__75 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__76 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__69), UPanelWidget::__PPO__Slots() )));
	__Local__76 = TArray<UPanelSlot*> ();
	__Local__76.Reserve(1);
	auto __Local__77 = NewObject<UButtonSlot>(__Local__69, UButtonSlot::StaticClass(), TEXT("ButtonSlot_3"));
	__Local__77->Parent = __Local__69;
	auto __Local__78 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Cancel_Text"));
	__Local__78->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Cancel"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("BEFB436743F814CD4D62919C8E827D45") /* Key */
	);
	__Local__78->Slot = __Local__77;
	__Local__77->Content = __Local__78;
	__Local__76.Add(__Local__77);
	__Local__69->Slot = __Local__68;
	__Local__68->Content = __Local__69;
	__Local__53.Add(__Local__68);
	auto __Local__79 = NewObject<UCanvasPanelSlot>(__Local__52, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_22"));
	__Local__79->LayoutData.Offsets.Top = 20.000000f;
	__Local__79->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__79->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__79->LayoutData.Alignment = FVector2D(0.500000, 0.000000);
	__Local__79->bAutoSize = true;
	__Local__79->Parent = __Local__52;
	auto __Local__80 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_70"));
	__Local__80->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Are you sure you want to leave?"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("FDD4975B45E1F943145A748033DC7C04") /* Key */
	);
	__Local__80->Slot = __Local__79;
	__Local__79->Content = __Local__80;
	__Local__53.Add(__Local__79);
	__Local__52->bIsVariable = true;
	__Local__52->Slot = __Local__51;
	__Local__52->Visibility = ESlateVisibility::Hidden;
	__Local__51->Content = __Local__52;
	__Local__11.Add(__Local__51);
	auto __Local__81 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_3"));
	__Local__81->LayoutData.Offsets.Left = -25.000000f;
	__Local__81->LayoutData.Offsets.Top = -25.000000f;
	__Local__81->LayoutData.Offsets.Right = 151.000000f;
	__Local__81->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__81->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__81->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__81->LayoutData.Alignment = FVector2D(1.000000, 1.000000);
	__Local__81->bAutoSize = true;
	__Local__81->Parent = __Local__10;
	auto __Local__82 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_36"));
	__Local__82->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Physic Vehicle Project v.2.7"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F94A3C46445810D7C76139A63CEF0097") /* Key */
	);
	__Local__82->Font.OutlineSettings.OutlineSize = 2;
	__Local__82->Slot = __Local__81;
	__Local__81->Content = __Local__82;
	__Local__11.Add(__Local__81);
	auto __Local__83 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__83->LayoutData.Offsets.Right = 320.000000f;
	__Local__83->LayoutData.Offsets.Bottom = 260.000000f;
	__Local__83->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__83->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__83->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__83->Parent = __Local__10;
	auto __Local__84 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Links_Panel"));
	auto& __Local__85 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__84), UPanelWidget::__PPO__Slots() )));
	__Local__85 = TArray<UPanelSlot*> ();
	__Local__85.Reserve(4);
	auto __Local__86 = NewObject<UCanvasPanelSlot>(__Local__84, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_5"));
	__Local__86->LayoutData.Offsets.Right = 0.000000f;
	__Local__86->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__86->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__86->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__86->Parent = __Local__84;
	auto __Local__87 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Background3"));
	auto& __Local__88 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__87->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__88 = FLinearColor(0.000000, 0.000000, 0.000000, 0.750000);
	__Local__87->bIsVariable = false;
	__Local__87->Slot = __Local__86;
	__Local__86->Content = __Local__87;
	__Local__85.Add(__Local__86);
	auto __Local__89 = NewObject<UCanvasPanelSlot>(__Local__84, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__89->LayoutData.Offsets.Left = -40.000000f;
	__Local__89->LayoutData.Offsets.Top = 100.000000f;
	__Local__89->LayoutData.Offsets.Right = 240.000000f;
	__Local__89->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__89->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__89->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__89->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__89->ZOrder = 1;
	__Local__89->Parent = __Local__84;
	auto __Local__90 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Forum_Button"));
	auto& __Local__91 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__90->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__91 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__92 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__90->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__92 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__93 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__90->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__93 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__94 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__90->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__94 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__95 = (*(AccessPrivateProperty<UObject* >(&(__Local__90->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__95 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__96 = (*(AccessPrivateProperty<UObject* >(&(__Local__90->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__96 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__97 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__90), UPanelWidget::__PPO__Slots() )));
	__Local__97 = TArray<UPanelSlot*> ();
	__Local__97.Reserve(1);
	auto __Local__98 = NewObject<UButtonSlot>(__Local__90, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__98->Parent = __Local__90;
	auto __Local__99 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Forum_Text"));
	__Local__99->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Forum Page"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5DDD1B734D666AF2C1260FB3838B80AD") /* Key */
	);
	__Local__99->Slot = __Local__98;
	__Local__98->Content = __Local__99;
	__Local__97.Add(__Local__98);
	__Local__90->Slot = __Local__89;
	__Local__89->Content = __Local__90;
	__Local__85.Add(__Local__89);
	auto __Local__100 = NewObject<UCanvasPanelSlot>(__Local__84, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__100->LayoutData.Offsets.Left = -20.000000f;
	__Local__100->LayoutData.Offsets.Top = 20.000000f;
	__Local__100->LayoutData.Offsets.Right = 280.000000f;
	__Local__100->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__100->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__100->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__100->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__100->ZOrder = 1;
	__Local__100->Parent = __Local__84;
	auto __Local__101 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Youtube_Button"));
	auto& __Local__102 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__101->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__102 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__103 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__101->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__103 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__104 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__101->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__104 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__105 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__101->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__105 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__106 = (*(AccessPrivateProperty<UObject* >(&(__Local__101->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__106 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__107 = (*(AccessPrivateProperty<UObject* >(&(__Local__101->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__107 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__108 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__101), UPanelWidget::__PPO__Slots() )));
	__Local__108 = TArray<UPanelSlot*> ();
	__Local__108.Reserve(1);
	auto __Local__109 = NewObject<UButtonSlot>(__Local__101, UButtonSlot::StaticClass(), TEXT("ButtonSlot_2"));
	__Local__109->Parent = __Local__101;
	auto __Local__110 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Youtube_Text"));
	__Local__110->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Youtube Channel"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("1C92E3A24ECA17A6B5CF23A721FB9FC3") /* Key */
	);
	__Local__110->Slot = __Local__109;
	__Local__109->Content = __Local__110;
	__Local__108.Add(__Local__109);
	__Local__101->Slot = __Local__100;
	__Local__100->Content = __Local__101;
	__Local__85.Add(__Local__100);
	auto __Local__111 = NewObject<UCanvasPanelSlot>(__Local__84, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__111->LayoutData.Offsets.Left = -20.000000f;
	__Local__111->LayoutData.Offsets.Top = 180.000000f;
	__Local__111->LayoutData.Offsets.Right = 280.000000f;
	__Local__111->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__111->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__111->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__111->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__111->ZOrder = 1;
	__Local__111->Parent = __Local__84;
	auto __Local__112 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("About_Button"));
	auto& __Local__113 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__112->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__113 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__114 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__112->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__114 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__115 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__112->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__115 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__116 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__112->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__116 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__117 = (*(AccessPrivateProperty<UObject* >(&(__Local__112->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__117 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__118 = (*(AccessPrivateProperty<UObject* >(&(__Local__112->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__118 = CastChecked<UObject>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__119 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__112), UPanelWidget::__PPO__Slots() )));
	__Local__119 = TArray<UPanelSlot*> ();
	__Local__119.Reserve(1);
	auto __Local__120 = NewObject<UButtonSlot>(__Local__112, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__120->Parent = __Local__112;
	auto __Local__121 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__121->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("About the project"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("8BECE880473B84023AB261A4E19DD965") /* Key */
	);
	__Local__121->Slot = __Local__120;
	__Local__120->Content = __Local__121;
	__Local__119.Add(__Local__120);
	__Local__112->Slot = __Local__111;
	__Local__111->Content = __Local__112;
	__Local__85.Add(__Local__111);
	__Local__84->bIsVariable = true;
	__Local__84->Slot = __Local__83;
	__Local__83->Content = __Local__84;
	__Local__11.Add(__Local__83);
	auto __Local__122 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_8"));
	__Local__122->LayoutData.Offsets.Right = 800.000000f;
	__Local__122->LayoutData.Offsets.Bottom = 935.000000f;
	__Local__122->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__122->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__122->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__122->ZOrder = 3;
	__Local__122->Parent = __Local__10;
	UOptions_Menu_C__pf1863595755::StaticClass()->GetDefaultObject();
	auto __Local__123 = NewObject<UOptions_Menu_C__pf1863595755>(__Local__1, UOptions_Menu_C__pf1863595755::StaticClass(), TEXT("Options_Panel"));
	__Local__123->Slot = __Local__122;
	__Local__123->Visibility = ESlateVisibility::Hidden;
	__Local__122->Content = __Local__123;
	__Local__11.Add(__Local__122);
	auto __Local__124 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__124->LayoutData.Offsets.Right = 800.000000f;
	__Local__124->LayoutData.Offsets.Bottom = 900.000000f;
	__Local__124->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__124->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__124->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__124->Parent = __Local__10;
	UAbout_Menu_C__pf1863595755::StaticClass()->GetDefaultObject();
	auto __Local__125 = NewObject<UAbout_Menu_C__pf1863595755>(__Local__1, UAbout_Menu_C__pf1863595755::StaticClass(), TEXT("About_Menu"));
	__Local__125->Slot = __Local__124;
	__Local__125->Visibility = ESlateVisibility::Hidden;
	__Local__124->Content = __Local__125;
	__Local__11.Add(__Local__124);
	auto __Local__126 = NewObject<UCanvasPanelSlot>(__Local__10, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__126->LayoutData.Offsets.Left = -32.000000f;
	__Local__126->LayoutData.Offsets.Top = 300.000000f;
	__Local__126->LayoutData.Offsets.Right = 151.000000f;
	__Local__126->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__126->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__126->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__126->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__126->bAutoSize = true;
	__Local__126->Parent = __Local__10;
	auto __Local__127 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("ThankYou"));
	__Local__127->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Thanks to all of you\r\n who are subscribed to\r\nmy youtube channel!\r\n\r\nYour suggestions and help are always a pleasure, and this project would not be what it is without you."), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("500432C54BD175C427D7CCB513F1C249") /* Key */
	);
	__Local__127->Font.OutlineSettings.OutlineSize = 2;
	auto& __Local__128 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__127), UTextLayoutWidget::__PPO__Justification() )));
	__Local__128 = ETextJustify::Type::Center;
	auto& __Local__129 = (*(AccessPrivateProperty<bool >((__Local__127), UTextLayoutWidget::__PPO__AutoWrapText() )));
	__Local__129 = true;
	auto& __Local__130 = (*(AccessPrivateProperty<float >((__Local__127), UTextLayoutWidget::__PPO__WrapTextAt() )));
	__Local__130 = 250.000000f;
	__Local__127->bIsVariable = true;
	__Local__127->Slot = __Local__126;
	__Local__126->Content = __Local__127;
	__Local__11.Add(__Local__126);
	__Local__1->RootWidget = __Local__10;
}
void UMain_Menu_C__pf1863595755::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__131;
	SlotNames.Append(__Local__131);
}
void UMain_Menu_C__pf1863595755::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__132;
	TArray<FDelegateRuntimeBinding>  __Local__133;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UMain_Menu_C__pf1863595755::StaticClass())->MiscConvertedSubobjects[0]), __Local__132, __Local__133);
}
void UMain_Menu_C__pf1863595755::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UMain_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Main_Menu__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 16:
			{
				__CurrentState = 17;
				break;
			}
		case 17:
			{
				if(IsValid(bpv__Main_Panel__pf))
				{
					bpv__Main_Panel__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(IsValid(bpv__Links_Panel__pf))
				{
					bpv__Links_Panel__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(IsValid(bpv__ThankYou__pf))
				{
					bpv__ThankYou__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = -1;
				break;
			}
		case 46:
			{
				__CurrentState = 47;
				break;
			}
		case 47:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue5__pf = UUserWidget::GetOwningPlayer();
				FCustomThunkTemplates::Array_Get(bpv__Cameras__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item4__pf);
				if(IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue5__pf))
				{
					bpfv__CallFunc_GetOwningPlayer_ReturnValue5__pf->SetViewTargetWithBlend(b0l__CallFunc_Array_Get_Item4__pf, 1.000000, EViewTargetBlendFunction::VTBlend_Cubic, 0.000000, false);
				}
			}
		case 48:
			{
				if(IsValid(bpv__About_Menu__pf))
				{
					bpv__About_Menu__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 49:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(16, 1760272813, TEXT("ExecuteUbergraph_Main_Menu_0"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMain_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Main_Menu__pf_1(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 11:
			{
				__CurrentState = 12;
				break;
			}
		case 12:
			{
				if(IsValid(bpv__Main_Panel__pf))
				{
					bpv__Main_Panel__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(IsValid(bpv__Links_Panel__pf))
				{
					bpv__Links_Panel__pf->SetVisibility(ESlateVisibility::Visible);
				}
				if(IsValid(bpv__ThankYou__pf))
				{
					bpv__ThankYou__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = -1;
				break;
			}
		case 38:
			{
				__CurrentState = 39;
				break;
			}
		case 39:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue3__pf = UUserWidget::GetOwningPlayer();
				FCustomThunkTemplates::Array_Get(bpv__Cameras__pf, 0, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue3__pf))
				{
					bpfv__CallFunc_GetOwningPlayer_ReturnValue3__pf->SetViewTargetWithBlend(b0l__CallFunc_Array_Get_Item2__pf, 1.000000, EViewTargetBlendFunction::VTBlend_Cubic, 0.000000, false);
				}
			}
		case 40:
			{
				if(IsValid(bpv__Options_Panel__pf))
				{
					bpv__Options_Panel__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 41:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(11, 1029956846, TEXT("ExecuteUbergraph_Main_Menu_1"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMain_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Main_Menu__pf_2(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue2__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 7:
			{
				__CurrentState = 8;
				break;
			}
		case 8:
			{
				if(IsValid(bpv__Options_Panel__pf))
				{
					bpv__Options_Panel__pf->bpf__InitializexList__pfT();
				}
			}
		case 9:
			{
				if(IsValid(bpv__Options_Panel__pf))
				{
					bpv__Options_Panel__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 10:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate2__pf.BindUFunction(this,FName(TEXT("OnClicked_Cancel / Save")));
				if(IsValid(bpv__Options_Panel__pf) && IsValid(bpv__Options_Panel__pf->bpv__Save_Button__pf))
				{
					bpv__Options_Panel__pf->bpv__Save_Button__pf->OnClicked.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate2__pf);
				}
				if(IsValid(bpv__Options_Panel__pf) && IsValid(bpv__Options_Panel__pf->bpv__Cancel_Button__pf))
				{
					bpv__Options_Panel__pf->bpv__Cancel_Button__pf->OnClicked.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate2__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 34:
			{
				__CurrentState = 35;
				break;
			}
		case 35:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue2__pf = UUserWidget::GetOwningPlayer();
				FCustomThunkTemplates::Array_Get(bpv__Cameras__pf, 3, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue2__pf))
				{
					bpfv__CallFunc_GetOwningPlayer_ReturnValue2__pf->SetViewTargetWithBlend(b0l__CallFunc_Array_Get_Item__pf, 1.000000, EViewTargetBlendFunction::VTBlend_Linear, 0.000000, false);
				}
			}
		case 36:
			{
				if(IsValid(bpv__Main_Panel__pf))
				{
					bpv__Main_Panel__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(IsValid(bpv__Links_Panel__pf))
				{
					bpv__Links_Panel__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(IsValid(bpv__ThankYou__pf))
				{
					bpv__ThankYou__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 37:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(7, 1848665472, TEXT("ExecuteUbergraph_Main_Menu_2"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMain_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Main_Menu__pf_3(int32 bpp__EntryPoint__pf)
{
	ULoading_Screen_C__pf1863595755* bpfv__CallFunc_Create_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue6__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<ULoading_Screen_C__pf1863595755>(UWidgetBlueprintLibrary::Create(this, ULoading_Screen_C__pf1863595755::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 3:
			{
				if(IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
				{
					bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(2);
				}
			}
		case 4:
			{
				UKismetSystemLibrary::Delay(this, 2.000000, FLatentActionInfo(5, 716814337, TEXT("ExecuteUbergraph_Main_Menu_3"), this));
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				__CurrentState = 6;
				break;
			}
		case 6:
			{
				UGameplayStatics::OpenLevel(this, FName(TEXT("Default_Map")), true, FString(TEXT("")));
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				__CurrentState = 27;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue6__pf = UUserWidget::GetOwningPlayer();
				FCustomThunkTemplates::Array_Get(bpv__Cameras__pf, 1, /*out*/ b0l__CallFunc_Array_Get_Item5__pf);
				if(IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue6__pf))
				{
					bpfv__CallFunc_GetOwningPlayer_ReturnValue6__pf->SetViewTargetWithBlend(b0l__CallFunc_Array_Get_Item5__pf, 1.000000, EViewTargetBlendFunction::VTBlend_Linear, 0.000000, false);
				}
			}
		case 28:
			{
				RemoveFromParent();
			}
		case 29:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(1, -251487900, TEXT("ExecuteUbergraph_Main_Menu_3"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMain_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Main_Menu__pf_4(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue4__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 13:
			{
				__CurrentState = 14;
				break;
			}
		case 14:
			{
				if(IsValid(bpv__About_Menu__pf))
				{
					bpv__About_Menu__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 15:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("Close \"About\"")));
				if(IsValid(bpv__About_Menu__pf) && IsValid(bpv__About_Menu__pf->bpv__Cancel_Button__pf))
				{
					bpv__About_Menu__pf->bpv__Cancel_Button__pf->OnClicked.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				__CurrentState = -1;
				break;
			}
		case 42:
			{
				__CurrentState = 43;
				break;
			}
		case 43:
			{
				bpfv__CallFunc_GetOwningPlayer_ReturnValue4__pf = UUserWidget::GetOwningPlayer();
				FCustomThunkTemplates::Array_Get(bpv__Cameras__pf, 2, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				if(IsValid(bpfv__CallFunc_GetOwningPlayer_ReturnValue4__pf))
				{
					bpfv__CallFunc_GetOwningPlayer_ReturnValue4__pf->SetViewTargetWithBlend(b0l__CallFunc_Array_Get_Item3__pf, 1.000000, EViewTargetBlendFunction::VTBlend_Linear, 0.000000, false);
				}
			}
		case 44:
			{
				if(IsValid(bpv__Links_Panel__pf))
				{
					bpv__Links_Panel__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(IsValid(bpv__Main_Panel__pf))
				{
					bpv__Main_Panel__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(IsValid(bpv__ThankYou__pf))
				{
					bpv__ThankYou__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 45:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(13, 2147483647, TEXT("ExecuteUbergraph_Main_Menu_4"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UMain_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Main_Menu__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Confirm_Panel__pf))
	{
		bpv__Confirm_Panel__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(IsValid(bpv__Start_Button__pf))
	{
		bpv__Start_Button__pf->SetIsEnabled(true);
	}
	if(IsValid(bpv__Options_Button__pf))
	{
		bpv__Options_Button__pf->SetIsEnabled(true);
	}
	if(IsValid(bpv__Quit_Button__pf))
	{
		bpv__Quit_Button__pf->SetIsEnabled(true);
	}
	if(IsValid(bpv__Forum_Button__pf))
	{
		bpv__Forum_Button__pf->SetIsEnabled(true);
	}
	if(IsValid(bpv__About_Button__pf))
	{
		bpv__About_Button__pf->SetIsEnabled(true);
	}
	if(IsValid(bpv__Youtube_Button__pf))
	{
		bpv__Youtube_Button__pf->SetIsEnabled(true);
	}
	return; //KCST_EndOfThread
}
void UMain_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Main_Menu__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 18);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Confirm_Panel__pf))
	{
		bpv__Confirm_Panel__pf->SetVisibility(ESlateVisibility::Visible);
	}
	if(IsValid(bpv__Start_Button__pf))
	{
		bpv__Start_Button__pf->SetIsEnabled(false);
	}
	if(IsValid(bpv__Options_Button__pf))
	{
		bpv__Options_Button__pf->SetIsEnabled(false);
	}
	if(IsValid(bpv__Quit_Button__pf))
	{
		bpv__Quit_Button__pf->SetIsEnabled(false);
	}
	if(IsValid(bpv__Forum_Button__pf))
	{
		bpv__Forum_Button__pf->SetIsEnabled(false);
	}
	if(IsValid(bpv__About_Button__pf))
	{
		bpv__About_Button__pf->SetIsEnabled(false);
	}
	if(IsValid(bpv__Youtube_Button__pf))
	{
		bpv__Youtube_Button__pf->SetIsEnabled(false);
	}
	return; //KCST_EndOfThread
}
void UMain_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Main_Menu__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 30);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::LaunchURL(FString(TEXT("https://www.youtube.com/channel/UCYdncSFRCEOqDRASasGVFcw")));
	return; //KCST_EndOfThread
}
void UMain_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Main_Menu__pf_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 32);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::LaunchURL(FString(TEXT("https://forums.unrealengine.com/showthread.php?129725-Custom-physic-vehicle-simulation-completed!-Project-download-included&p=628460#post628460")));
	return; //KCST_EndOfThread
}
void UMain_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Main_Menu__pf_9(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = UUserWidget::GetOwningPlayer();
	UKismetSystemLibrary::QuitGame(this, bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf, EQuitPreference::Quit);
	return; //KCST_EndOfThread
}
void UMain_Menu_C__pf1863595755::bpf__ClosexxAboutx__pfTRR()
{
	bpf__ExecuteUbergraph_Main_Menu__pf_0(46);
}
void UMain_Menu_C__pf1863595755::bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Main_Menu__pf_4(42);
}
void UMain_Menu_C__pf1863595755::bpf__OnClicked_CancelxxxSave__pfTET()
{
	bpf__ExecuteUbergraph_Main_Menu__pf_1(38);
}
void UMain_Menu_C__pf1863595755::bpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Main_Menu__pf_2(34);
}
void UMain_Menu_C__pf1863595755::bpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Main_Menu__pf_8(32);
}
void UMain_Menu_C__pf1863595755::bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Main_Menu__pf_7(30);
}
void UMain_Menu_C__pf1863595755::bpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Main_Menu__pf_3(26);
}
void UMain_Menu_C__pf1863595755::bpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Main_Menu__pf_9(24);
}
void UMain_Menu_C__pf1863595755::bpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Main_Menu__pf_5(21);
}
void UMain_Menu_C__pf1863595755::bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Main_Menu__pf_6(18);
}
void UMain_Menu_C__pf1863595755::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{121, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/UMG/Sounds/SW_Click.SW_Click 
		{122, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/UMG/Sounds/SW_Hover.SW_Hover 
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
void UMain_Menu_C__pf1863595755::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraActor 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanel 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UMG.OnButtonClickedEvent__DelegateSignature 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/Options_Menu.Options_Menu_C 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/About_Menu.About_Menu_C 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/Loading_Screen.Loading_Screen_C 
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
struct FRegisterHelper__UMain_Menu_C__pf1863595755
{
	FRegisterHelper__UMain_Menu_C__pf1863595755()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UMG/Main_Menu"), &UMain_Menu_C__pf1863595755::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UMain_Menu_C__pf1863595755 Instance;
};
FRegisterHelper__UMain_Menu_C__pf1863595755 FRegisterHelper__UMain_Menu_C__pf1863595755::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
