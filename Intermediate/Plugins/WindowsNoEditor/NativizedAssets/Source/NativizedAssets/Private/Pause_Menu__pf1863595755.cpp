#include "NativizedAssets.h"
#include "Pause_Menu__pf1863595755.h"
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
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "BP_Controller__pf4061722237.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
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
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/UMG/Public/Components/SpinBox.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "Tooltip__pf1863595755.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UPause_Menu_C__pf1863595755::UPause_Menu_C__pf1863595755(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UPause_Menu_C__pf1863595755::StaticClass() == GetClass()))
	{
		UPause_Menu_C__pf1863595755::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
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
	bpv__Time_Text__pf = nullptr;
	bpv__Youtube_Button__pf = nullptr;
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UPause_Menu_C__pf1863595755::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UPause_Menu_C__pf1863595755::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	InDynamicClass->ReferencedConvertedFields.Add(ABP_Controller_C__pf4061722237::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(7);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 7);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Options_Button"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnPressed"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Forum_Button"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Youtube_Button"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Start_Button"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Confirm_Button"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Cancel_Button"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__8 = __Local__0->ComponentDelegateBindings[6];
	__Local__8.ComponentPropertyName = FName(TEXT("Quit_Button"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__9 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(7);
	auto __Local__11 = NewObject<UCanvasPanelSlot>(__Local__9, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_11"));
	__Local__11->LayoutData.Offsets.Right = 438.223938f;
	__Local__11->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__11->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Main_Panel"));
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__13 = TArray<UPanelSlot*> ();
	__Local__13.Reserve(5);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__12, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_12"));
	__Local__14->LayoutData.Offsets.Left = 50.000000f;
	__Local__14->LayoutData.Offsets.Top = -50.000000f;
	__Local__14->LayoutData.Offsets.Right = 260.000000f;
	__Local__14->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__14->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__14->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__14->LayoutData.Alignment = FVector2D(0.000000, 1.000000);
	__Local__14->ZOrder = 1;
	__Local__14->Parent = __Local__12;
	auto __Local__15 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Start_Button"));
	auto& __Local__16 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__15->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__16 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__17 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__15->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__17 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__18 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__15->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__18 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__19 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__15->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__19 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__20 = (*(AccessPrivateProperty<UObject* >(&(__Local__15->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__20 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__21 = (*(AccessPrivateProperty<UObject* >(&(__Local__15->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__21 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__22 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__15), UPanelWidget::__PPO__Slots() )));
	__Local__22 = TArray<UPanelSlot*> ();
	__Local__22.Reserve(1);
	auto __Local__23 = NewObject<UButtonSlot>(__Local__15, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__23->Parent = __Local__15;
	auto __Local__24 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Play_Text"));
	__Local__24->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Resume"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("EA0A5EA942C10633E528FF8F5D5BB762") /* Key */
	);
	__Local__24->Slot = __Local__23;
	__Local__23->Content = __Local__24;
	__Local__22.Add(__Local__23);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__13.Add(__Local__14);
	auto __Local__25 = NewObject<UCanvasPanelSlot>(__Local__12, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_13"));
	__Local__25->LayoutData.Offsets.Left = 50.000000f;
	__Local__25->LayoutData.Offsets.Right = 240.000000f;
	__Local__25->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__25->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__25->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__25->LayoutData.Alignment = FVector2D(0.000000, 0.500000);
	__Local__25->ZOrder = 1;
	__Local__25->Parent = __Local__12;
	auto __Local__26 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Options_Button"));
	auto& __Local__27 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__26->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__27 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__28 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__26->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__28 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__26->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__29 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__26->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__30 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__26->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__26->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__33 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__26), UPanelWidget::__PPO__Slots() )));
	__Local__33 = TArray<UPanelSlot*> ();
	__Local__33.Reserve(1);
	auto __Local__34 = NewObject<UButtonSlot>(__Local__26, UButtonSlot::StaticClass(), TEXT("ButtonSlot_2"));
	__Local__34->Parent = __Local__26;
	auto __Local__35 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Options_Text"));
	__Local__35->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Options"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("4EB9B5D14A89D255BF6F9384E0DF74F1") /* Key */
	);
	__Local__35->Slot = __Local__34;
	__Local__34->Content = __Local__35;
	__Local__33.Add(__Local__34);
	__Local__26->Slot = __Local__25;
	__Local__25->Content = __Local__26;
	__Local__13.Add(__Local__25);
	auto __Local__36 = NewObject<UCanvasPanelSlot>(__Local__12, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_14"));
	__Local__36->LayoutData.Offsets.Left = 50.000000f;
	__Local__36->LayoutData.Offsets.Top = 50.000000f;
	__Local__36->LayoutData.Offsets.Right = 220.000000f;
	__Local__36->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__36->LayoutData.Anchors.Minimum = FVector2D(0.000000, 0.500000);
	__Local__36->LayoutData.Anchors.Maximum = FVector2D(0.000000, 0.500000);
	__Local__36->ZOrder = 1;
	__Local__36->Parent = __Local__12;
	auto __Local__37 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Quit_Button"));
	auto& __Local__38 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__37->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__38 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__39 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__37->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__39 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__40 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__37->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__40 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__41 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__37->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__41 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__42 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__42 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__43 = (*(AccessPrivateProperty<UObject* >(&(__Local__37->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__43 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__44 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__37), UPanelWidget::__PPO__Slots() )));
	__Local__44 = TArray<UPanelSlot*> ();
	__Local__44.Reserve(1);
	auto __Local__45 = NewObject<UButtonSlot>(__Local__37, UButtonSlot::StaticClass(), TEXT("ButtonSlot_3"));
	__Local__45->Parent = __Local__37;
	auto __Local__46 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Quit_Text"));
	__Local__46->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Main Menu"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("450056C444AEE7F1DBD003B117C24E97") /* Key */
	);
	__Local__46->Slot = __Local__45;
	__Local__45->Content = __Local__46;
	__Local__44.Add(__Local__45);
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__13.Add(__Local__36);
	auto __Local__47 = NewObject<UCanvasPanelSlot>(__Local__12, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_15"));
	__Local__47->LayoutData.Offsets.Left = -256.000000f;
	__Local__47->LayoutData.Offsets.Top = -98.098099f;
	__Local__47->LayoutData.Offsets.Right = 600.000000f;
	__Local__47->LayoutData.Offsets.Bottom = -42.042042f;
	__Local__47->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__47->Parent = __Local__12;
	auto __Local__48 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Background"));
	auto& __Local__49 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__48->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__49 = FLinearColor(0.000000, 0.000000, 0.000000, 0.750000);
	__Local__48->bIsVariable = false;
	__Local__48->Slot = __Local__47;
	__Local__48->RenderTransform.Angle = 10.000000f;
	__Local__47->Content = __Local__48;
	__Local__13.Add(__Local__47);
	auto __Local__50 = NewObject<UCanvasPanelSlot>(__Local__12, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__50->LayoutData.Offsets.Left = -4.000000f;
	__Local__50->LayoutData.Offsets.Top = 25.000000f;
	__Local__50->LayoutData.Offsets.Right = 151.000000f;
	__Local__50->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__50->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__50->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__50->LayoutData.Alignment = FVector2D(0.500000, 0.000000);
	__Local__50->bAutoSize = true;
	__Local__50->Parent = __Local__12;
	auto __Local__51 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Time_Text"));
	__Local__51->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Time of Day"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("C267D76C44E49A5A8CE2EAA761B52196") /* Key */
	);
	__Local__51->Font.Size = 32;
	__Local__51->bIsVariable = true;
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__13.Add(__Local__50);
	__Local__12->bIsVariable = true;
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	auto __Local__52 = NewObject<UCanvasPanelSlot>(__Local__9, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_16"));
	__Local__52->LayoutData.Offsets.Top = -50.000000f;
	__Local__52->LayoutData.Offsets.Right = 600.000000f;
	__Local__52->LayoutData.Offsets.Bottom = 150.000000f;
	__Local__52->LayoutData.Anchors.Minimum = FVector2D(0.500000, 1.000000);
	__Local__52->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__52->LayoutData.Alignment = FVector2D(0.500000, 1.000000);
	__Local__52->Parent = __Local__9;
	auto __Local__53 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Confirm_Panel"));
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__53), UPanelWidget::__PPO__Slots() )));
	__Local__54 = TArray<UPanelSlot*> ();
	__Local__54.Reserve(4);
	auto __Local__55 = NewObject<UCanvasPanelSlot>(__Local__53, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_17"));
	__Local__55->LayoutData.Offsets.Right = 0.000000f;
	__Local__55->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__55->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__55->LayoutData.Alignment = FVector2D(0.500000, 1.000000);
	__Local__55->Parent = __Local__53;
	auto __Local__56 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Background_2"));
	auto& __Local__57 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__56->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__57 = FLinearColor(0.000000, 0.000000, 0.000000, 0.750000);
	__Local__56->bIsVariable = false;
	__Local__56->Slot = __Local__55;
	__Local__55->Content = __Local__56;
	__Local__54.Add(__Local__55);
	auto __Local__58 = NewObject<UCanvasPanelSlot>(__Local__53, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_19"));
	__Local__58->LayoutData.Offsets.Left = 20.000000f;
	__Local__58->LayoutData.Offsets.Top = -20.000000f;
	__Local__58->LayoutData.Offsets.Right = 220.000000f;
	__Local__58->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__58->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__58->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__58->LayoutData.Alignment = FVector2D(0.000000, 1.000000);
	__Local__58->ZOrder = 1;
	__Local__58->Parent = __Local__53;
	auto __Local__59 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Confirm_Button"));
	auto& __Local__60 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__59->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__60 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__59->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__62 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__59->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__62 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__63 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__59->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__63 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__64 = (*(AccessPrivateProperty<UObject* >(&(__Local__59->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__64 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__65 = (*(AccessPrivateProperty<UObject* >(&(__Local__59->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__65 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__66 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__59), UPanelWidget::__PPO__Slots() )));
	__Local__66 = TArray<UPanelSlot*> ();
	__Local__66.Reserve(1);
	auto __Local__67 = NewObject<UButtonSlot>(__Local__59, UButtonSlot::StaticClass(), TEXT("ButtonSlot_3"));
	__Local__67->Parent = __Local__59;
	auto __Local__68 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Confirm_Text"));
	__Local__68->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Confirm"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("9BB3DB0B486E58B033BC299FE5EA45C0") /* Key */
	);
	__Local__68->Slot = __Local__67;
	__Local__67->Content = __Local__68;
	__Local__66.Add(__Local__67);
	__Local__59->Slot = __Local__58;
	__Local__58->Content = __Local__59;
	__Local__54.Add(__Local__58);
	auto __Local__69 = NewObject<UCanvasPanelSlot>(__Local__53, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_21"));
	__Local__69->LayoutData.Offsets.Left = -20.000000f;
	__Local__69->LayoutData.Offsets.Top = -20.000000f;
	__Local__69->LayoutData.Offsets.Right = 220.000000f;
	__Local__69->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__69->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__69->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__69->LayoutData.Alignment = FVector2D(1.000000, 1.000000);
	__Local__69->ZOrder = 1;
	__Local__69->Parent = __Local__53;
	auto __Local__70 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Cancel_Button"));
	auto& __Local__71 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__70->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__71 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__72 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__70->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__72 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__73 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__70->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__73 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__74 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__70->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__74 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__75 = (*(AccessPrivateProperty<UObject* >(&(__Local__70->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__75 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__76 = (*(AccessPrivateProperty<UObject* >(&(__Local__70->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__76 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__77 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__70), UPanelWidget::__PPO__Slots() )));
	__Local__77 = TArray<UPanelSlot*> ();
	__Local__77.Reserve(1);
	auto __Local__78 = NewObject<UButtonSlot>(__Local__70, UButtonSlot::StaticClass(), TEXT("ButtonSlot_3"));
	__Local__78->Parent = __Local__70;
	auto __Local__79 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Cancel_Text"));
	__Local__79->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Cancel"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0EBCD06B48370236CB076587844E5F4C") /* Key */
	);
	__Local__79->Slot = __Local__78;
	__Local__78->Content = __Local__79;
	__Local__77.Add(__Local__78);
	__Local__70->Slot = __Local__69;
	__Local__69->Content = __Local__70;
	__Local__54.Add(__Local__69);
	auto __Local__80 = NewObject<UCanvasPanelSlot>(__Local__53, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_22"));
	__Local__80->LayoutData.Offsets.Top = 20.000000f;
	__Local__80->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.000000);
	__Local__80->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.000000);
	__Local__80->LayoutData.Alignment = FVector2D(0.500000, 0.000000);
	__Local__80->bAutoSize = true;
	__Local__80->Parent = __Local__53;
	auto __Local__81 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_70"));
	__Local__81->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Go Back to Main Menu?"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("79EC5E43460A73C975D5DAA9F9C7E8EC") /* Key */
	);
	__Local__81->Slot = __Local__80;
	__Local__80->Content = __Local__81;
	__Local__54.Add(__Local__80);
	__Local__53->bIsVariable = true;
	__Local__53->Slot = __Local__52;
	__Local__53->Visibility = ESlateVisibility::Hidden;
	__Local__52->Content = __Local__53;
	__Local__10.Add(__Local__52);
	auto __Local__82 = NewObject<UCanvasPanelSlot>(__Local__9, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_3"));
	__Local__82->LayoutData.Offsets.Left = -25.000000f;
	__Local__82->LayoutData.Offsets.Top = -25.000000f;
	__Local__82->LayoutData.Offsets.Right = 151.000000f;
	__Local__82->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__82->LayoutData.Anchors.Minimum = FVector2D(1.000000, 1.000000);
	__Local__82->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__82->LayoutData.Alignment = FVector2D(1.000000, 1.000000);
	__Local__82->bAutoSize = true;
	__Local__82->Parent = __Local__9;
	auto __Local__83 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_36"));
	__Local__83->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Physic Vehicle Project v.2.7"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("55B0E2884F857694E59653B7D4E8890B") /* Key */
	);
	__Local__83->Font.OutlineSettings.OutlineSize = 2;
	__Local__83->Slot = __Local__82;
	__Local__82->Content = __Local__83;
	__Local__10.Add(__Local__82);
	auto __Local__84 = NewObject<UCanvasPanelSlot>(__Local__9, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__84->LayoutData.Offsets.Right = 320.000000f;
	__Local__84->LayoutData.Offsets.Bottom = 180.000000f;
	__Local__84->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__84->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__84->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__84->Parent = __Local__9;
	auto __Local__85 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("Links_Panel"));
	auto& __Local__86 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__85), UPanelWidget::__PPO__Slots() )));
	__Local__86 = TArray<UPanelSlot*> ();
	__Local__86.Reserve(3);
	auto __Local__87 = NewObject<UCanvasPanelSlot>(__Local__85, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_5"));
	__Local__87->LayoutData.Offsets.Right = 0.000000f;
	__Local__87->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__87->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__87->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__87->Parent = __Local__85;
	auto __Local__88 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Background3"));
	auto& __Local__89 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__88->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__89 = FLinearColor(0.000000, 0.000000, 0.000000, 0.750000);
	__Local__88->bIsVariable = false;
	__Local__88->Slot = __Local__87;
	__Local__87->Content = __Local__88;
	__Local__86.Add(__Local__87);
	auto __Local__90 = NewObject<UCanvasPanelSlot>(__Local__85, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__90->LayoutData.Offsets.Left = -40.000000f;
	__Local__90->LayoutData.Offsets.Top = 100.000000f;
	__Local__90->LayoutData.Offsets.Right = 240.000000f;
	__Local__90->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__90->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__90->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__90->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__90->ZOrder = 1;
	__Local__90->Parent = __Local__85;
	auto __Local__91 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Forum_Button"));
	auto& __Local__92 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__91->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__92 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__93 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__91->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__93 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__94 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__91->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__94 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__95 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__91->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__95 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__96 = (*(AccessPrivateProperty<UObject* >(&(__Local__91->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__96 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__97 = (*(AccessPrivateProperty<UObject* >(&(__Local__91->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__97 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__98 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__91), UPanelWidget::__PPO__Slots() )));
	__Local__98 = TArray<UPanelSlot*> ();
	__Local__98.Reserve(1);
	auto __Local__99 = NewObject<UButtonSlot>(__Local__91, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__99->Parent = __Local__91;
	auto __Local__100 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Forum_Text"));
	__Local__100->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Forum Page"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F0F5B8AF46F0AE3222DFBF97C72D0F33") /* Key */
	);
	__Local__100->Slot = __Local__99;
	__Local__99->Content = __Local__100;
	__Local__98.Add(__Local__99);
	__Local__91->Slot = __Local__90;
	__Local__90->Content = __Local__91;
	__Local__86.Add(__Local__90);
	auto __Local__101 = NewObject<UCanvasPanelSlot>(__Local__85, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__101->LayoutData.Offsets.Left = -20.000000f;
	__Local__101->LayoutData.Offsets.Top = 20.000000f;
	__Local__101->LayoutData.Offsets.Right = 280.000000f;
	__Local__101->LayoutData.Offsets.Bottom = 60.000000f;
	__Local__101->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.000000);
	__Local__101->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.000000);
	__Local__101->LayoutData.Alignment = FVector2D(1.000000, 0.000000);
	__Local__101->ZOrder = 1;
	__Local__101->Parent = __Local__85;
	auto __Local__102 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Youtube_Button"));
	auto& __Local__103 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__102->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__103 = FLinearColor(0.015625, 0.015625, 0.015625, 1.000000);
	auto& __Local__104 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__102->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__104 = FLinearColor(0.005208, 0.005208, 0.005208, 1.000000);
	auto& __Local__105 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__102->WidgetStyle.Pressed.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__105 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__106 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__102->WidgetStyle.Disabled.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__106 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__107 = (*(AccessPrivateProperty<UObject* >(&(__Local__102->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__107 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__108 = (*(AccessPrivateProperty<UObject* >(&(__Local__102->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__108 = CastChecked<UObject>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__109 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__102), UPanelWidget::__PPO__Slots() )));
	__Local__109 = TArray<UPanelSlot*> ();
	__Local__109.Reserve(1);
	auto __Local__110 = NewObject<UButtonSlot>(__Local__102, UButtonSlot::StaticClass(), TEXT("ButtonSlot_2"));
	__Local__110->Parent = __Local__102;
	auto __Local__111 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Youtube_Text"));
	__Local__111->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Youtube Channel"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("AF0209D44680CD948F73818E74349D1E") /* Key */
	);
	__Local__111->Slot = __Local__110;
	__Local__110->Content = __Local__111;
	__Local__109.Add(__Local__110);
	__Local__102->Slot = __Local__101;
	__Local__101->Content = __Local__102;
	__Local__86.Add(__Local__101);
	__Local__85->bIsVariable = true;
	__Local__85->Slot = __Local__84;
	__Local__84->Content = __Local__85;
	__Local__10.Add(__Local__84);
	auto __Local__112 = NewObject<UCanvasPanelSlot>(__Local__9, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_8"));
	__Local__112->LayoutData.Offsets.Left = -25.000000f;
	__Local__112->LayoutData.Offsets.Top = -15.000000f;
	__Local__112->LayoutData.Offsets.Right = 700.000000f;
	__Local__112->LayoutData.Offsets.Bottom = 935.000000f;
	__Local__112->LayoutData.Anchors.Minimum = FVector2D(1.000000, 0.500000);
	__Local__112->LayoutData.Anchors.Maximum = FVector2D(1.000000, 0.500000);
	__Local__112->LayoutData.Alignment = FVector2D(1.000000, 0.500000);
	__Local__112->ZOrder = 3;
	__Local__112->Parent = __Local__9;
	UOptions_Menu_C__pf1863595755::StaticClass()->GetDefaultObject();
	auto __Local__113 = NewObject<UOptions_Menu_C__pf1863595755>(__Local__1, UOptions_Menu_C__pf1863595755::StaticClass(), TEXT("Options_Panel"));
	__Local__113->Slot = __Local__112;
	__Local__113->Visibility = ESlateVisibility::Hidden;
	__Local__112->Content = __Local__113;
	__Local__10.Add(__Local__112);
	auto __Local__114 = NewObject<UCanvasPanelSlot>(__Local__9, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__114->LayoutData.Offsets.Right = 151.000000f;
	__Local__114->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__114->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__114->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__114->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__114->bAutoSize = true;
	__Local__114->Parent = __Local__9;
	auto __Local__115 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Paused_Text"));
	__Local__115->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Paused"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("424301DF4F0A7A2956DD7590386A40B3") /* Key */
	);
	__Local__115->Font.OutlineSettings.OutlineSize = 5;
	__Local__115->Font.Size = 100;
	__Local__115->Slot = __Local__114;
	__Local__114->Content = __Local__115;
	__Local__10.Add(__Local__114);
	auto __Local__116 = NewObject<UCanvasPanelSlot>(__Local__9, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_5"));
	__Local__116->LayoutData.Offsets.Top = 125.000000f;
	__Local__116->LayoutData.Offsets.Right = 151.000000f;
	__Local__116->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__116->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__116->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__116->LayoutData.Alignment = FVector2D(0.500000, 0.500000);
	__Local__116->bAutoSize = true;
	__Local__116->Parent = __Local__9;
	auto __Local__117 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Pause_Text"));
	__Local__117->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("(Press \"Esc\" to Resume)"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("5B246DF247BE7126705BFAA0C6F818C0") /* Key */
	);
	__Local__117->Font.OutlineSettings.OutlineSize = 5;
	__Local__117->Font.Size = 32;
	__Local__117->Slot = __Local__116;
	__Local__116->Content = __Local__117;
	__Local__10.Add(__Local__116);
	__Local__1->RootWidget = __Local__9;
}
void UPause_Menu_C__pf1863595755::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__118;
	SlotNames.Append(__Local__118);
}
void UPause_Menu_C__pf1863595755::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__119;
	TArray<FDelegateRuntimeBinding>  __Local__120;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UPause_Menu_C__pf1863595755::StaticClass())->MiscConvertedSubobjects[0]), __Local__119, __Local__120);
}
void UPause_Menu_C__pf1863595755::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UPause_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Pause_Menu__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 22);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Options_Panel__pf))
	{
		bpv__Options_Panel__pf->SetVisibility(ESlateVisibility::Hidden);
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
	if(IsValid(bpv__Links_Panel__pf))
	{
		bpv__Links_Panel__pf->SetVisibility(ESlateVisibility::Visible);
	}
	return; // KCST_GotoReturn
}
void UPause_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Pause_Menu__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::OpenLevel(this, FName(TEXT("Menu_Map")), true, FString(TEXT("")));
	return; // KCST_GotoReturn
}
void UPause_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Pause_Menu__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
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
	if(IsValid(bpv__Links_Panel__pf))
	{
		bpv__Links_Panel__pf->SetVisibility(ESlateVisibility::Hidden);
	}
	if(IsValid(bpv__Options_Panel__pf))
	{
		bpv__Options_Panel__pf->bpf__InitializexList__pfT();
	}
	if(IsValid(bpv__Options_Panel__pf))
	{
		bpv__Options_Panel__pf->SetVisibility(ESlateVisibility::Visible);
	}
	b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnClicked_Cancel / Save")));
	if(IsValid(bpv__Options_Panel__pf) && IsValid(bpv__Options_Panel__pf->bpv__Cancel_Button__pf))
	{
		bpv__Options_Panel__pf->bpv__Cancel_Button__pf->OnClicked.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
	}
	if(IsValid(bpv__Options_Panel__pf) && IsValid(bpv__Options_Panel__pf->bpv__Save_Button__pf))
	{
		bpv__Options_Panel__pf->bpv__Save_Button__pf->OnClicked.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
	}
	return; // KCST_GotoReturn
}
void UPause_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Pause_Menu__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::LaunchURL(FString(TEXT("https://www.youtube.com/channel/UCYdncSFRCEOqDRASasGVFcw")));
	return; // KCST_GotoReturn
}
void UPause_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Pause_Menu__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::LaunchURL(FString(TEXT("https://forums.unrealengine.com/showthread.php?129725-Custom-physic-vehicle-simulation-completed!-Project-download-included&p=628460#post628460")));
	return; // KCST_GotoReturn
}
void UPause_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Pause_Menu__pf_5(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf = UUserWidget::GetOwningPlayer();
	b0l__K2Node_DynamicCast_AsBP_Controller__pf = Cast<ABP_Controller_C__pf4061722237>(bpfv__CallFunc_GetOwningPlayer_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBP_Controller__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(b0l__K2Node_DynamicCast_AsBP_Controller__pf))
	{
		b0l__K2Node_DynamicCast_AsBP_Controller__pf->bpf__Hide_PausexMenu__pfT();
	}
	return; // KCST_GotoReturn
}
void UPause_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Pause_Menu__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
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
	return; // KCST_GotoReturn
}
void UPause_Menu_C__pf1863595755::bpf__ExecuteUbergraph_Pause_Menu__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
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
	return; // KCST_GotoReturn
}
void UPause_Menu_C__pf1863595755::bpf__OnClicked_CancelxxxSave__pfTET()
{
	bpf__ExecuteUbergraph_Pause_Menu__pf_0(22);
}
void UPause_Menu_C__pf1863595755::bpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Pause_Menu__pf_2(16);
}
void UPause_Menu_C__pf1863595755::bpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Pause_Menu__pf_4(14);
}
void UPause_Menu_C__pf1863595755::bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Pause_Menu__pf_3(12);
}
void UPause_Menu_C__pf1863595755::bpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Pause_Menu__pf_5(11);
}
void UPause_Menu_C__pf1863595755::bpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Pause_Menu__pf_1(9);
}
void UPause_Menu_C__pf1863595755::bpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Pause_Menu__pf_6(6);
}
void UPause_Menu_C__pf1863595755::bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_Pause_Menu__pf_7(3);
}
void UPause_Menu_C__pf1863595755::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
void UPause_Menu_C__pf1863595755::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{114, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Button 
		{113, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.TextBlock 
		{123, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.CanvasPanel 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/UMG.OnButtonClickedEvent__DelegateSignature 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{125, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/Options_Menu.Options_Menu_C 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Player/BP_Controller.BP_Controller_C 
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
struct FRegisterHelper__UPause_Menu_C__pf1863595755
{
	FRegisterHelper__UPause_Menu_C__pf1863595755()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UMG/Pause_Menu"), &UPause_Menu_C__pf1863595755::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UPause_Menu_C__pf1863595755 Instance;
};
FRegisterHelper__UPause_Menu_C__pf1863595755 FRegisterHelper__UPause_Menu_C__pf1863595755::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
