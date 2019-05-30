#include "NativizedAssets.h"
#include "Popxup__pfG1863595755.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/BorderSlot.h"
#include "Runtime/UMG/Public/Components/EditableText.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
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
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneVectorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneVectorSection.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/UMG/Private/Animation/MovieScene2DTransformTemplate.h"
#include "Runtime/MovieSceneTracks/Private/Evaluation/MovieScenePropertyTemplates.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UPopxup_C__pfG1863595755::UPopxup_C__pfG1863595755(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UPopxup_C__pfG1863595755::StaticClass() == GetClass()))
	{
		UPopxup_C__pfG1863595755::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Fadexin__pfT = nullptr;
	bpv__Border_86__pf = nullptr;
	bpv__Popup_Text__pf = nullptr;
	bpv__Duration__pf = 3.000000f;
	bpv__Text__pf = FText::GetEmpty();
	bCanEverTick = false;
	bCanEverPaint = false;
}
void UPopxup_C__pfG1863595755::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UPopxup_C__pfG1863595755::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("Fade in_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__3 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__2), UPanelWidget::__PPO__Slots() )));
	__Local__3 = TArray<UPanelSlot*> ();
	__Local__3.Reserve(1);
	auto __Local__4 = NewObject<UCanvasPanelSlot>(__Local__2, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_8"));
	__Local__4->LayoutData.Offsets.Right = 602.724976f;
	__Local__4->LayoutData.Offsets.Bottom = 204.609055f;
	__Local__4->LayoutData.Anchors.Minimum = FVector2D(0.500000, 1.000000);
	__Local__4->LayoutData.Anchors.Maximum = FVector2D(0.500000, 1.000000);
	__Local__4->LayoutData.Alignment = FVector2D(0.500000, 1.000000);
	__Local__4->bAutoSize = true;
	__Local__4->Parent = __Local__2;
	auto __Local__5 = NewObject<UBorder>(__Local__0, UBorder::StaticClass(), TEXT("Border_86"));
	__Local__5->Padding.Left = 5.000000f;
	__Local__5->Padding.Top = 5.000000f;
	__Local__5->Padding.Right = 5.000000f;
	__Local__5->Padding.Bottom = 5.000000f;
	auto& __Local__6 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__5->Background.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__6 = FLinearColor(0.020000, 0.020000, 0.020000, 1.000000);
	__Local__5->DesiredSizeScale = FVector2D(0.000000, 1.000000);
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__5), UPanelWidget::__PPO__Slots() )));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(1);
	auto __Local__8 = NewObject<UBorderSlot>(__Local__5, UBorderSlot::StaticClass(), TEXT("BorderSlot_1"));
	auto& __Local__9 = (*(AccessPrivateProperty<FMargin >((__Local__8), UBorderSlot::__PPO__Padding() )));
	__Local__9.Left = 5.000000f;
	__Local__9.Top = 5.000000f;
	__Local__9.Right = 5.000000f;
	__Local__9.Bottom = 5.000000f;
	__Local__8->Parent = __Local__5;
	auto __Local__10 = NewObject<UEditableText>(__Local__0, UEditableText::StaticClass(), TEXT("Popup_Text"));
	__Local__10->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("this is a test blablabla"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("A6EE791947E19AE71A29CDB6532F8D0F") /* Key */
	);
	__Local__10->WidgetStyle.Font.Size = 18;
	auto& __Local__11 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__10->WidgetStyle.ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__11 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<TEnumAsByte<ESlateColorStylingMode::Type> >(&(__Local__10->WidgetStyle.ColorAndOpacity), FSlateColor::__PPO__ColorUseRule() )));
	__Local__12 = ESlateColorStylingMode::Type::UseColor_Specified;
	__Local__10->Slot = __Local__8;
	__Local__8->Content = __Local__10;
	__Local__7.Add(__Local__8);
	__Local__5->bIsVariable = true;
	__Local__5->Slot = __Local__4;
	__Local__4->Content = __Local__5;
	__Local__3.Add(__Local__4);
	__Local__0->RootWidget = __Local__2;
	auto __Local__13 = NewObject<UMovieScene>(__Local__1, UMovieScene::StaticClass(), TEXT("Fade in"));
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__13), UMovieScene::__PPO__Possessables() )));
	__Local__14 = TArray<FMovieScenePossessable> ();
	__Local__14.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__14.GetData(), 1);
	auto& __Local__15 = __Local__14[0];
	auto& __Local__16 = (*(AccessPrivateProperty<FGuid >(&(__Local__15), FMovieScenePossessable::__PPO__Guid() )));
	__Local__16 = FGuid(0xA707BA6D, 0x4C763232, 0x9F276193, 0xC5AF6C55);
	auto& __Local__17 = (*(AccessPrivateProperty<FString >(&(__Local__15), FMovieScenePossessable::__PPO__Name() )));
	__Local__17 = FString(TEXT("Border_86"));
	auto& __Local__18 = (*(AccessPrivateProperty<UClass* >(&(__Local__15), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__18 = UBorder::StaticClass();
	auto& __Local__19 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__13), UMovieScene::__PPO__ObjectBindings() )));
	__Local__19 = TArray<FMovieSceneBinding> ();
	__Local__19.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__19.GetData(), 1);
	auto& __Local__20 = __Local__19[0];
	auto& __Local__21 = (*(AccessPrivateProperty<FGuid >(&(__Local__20), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__21 = FGuid(0xA707BA6D, 0x4C763232, 0x9F276193, 0xC5AF6C55);
	auto& __Local__22 = (*(AccessPrivateProperty<FString >(&(__Local__20), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__22 = FString(TEXT("Border_86"));
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__20), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__23 = TArray<UMovieSceneTrack*> ();
	__Local__23.Reserve(2);
	auto __Local__24 = NewObject<UMovieScene2DTransformTrack>(__Local__13, UMovieScene2DTransformTrack::StaticClass(), TEXT("MovieScene2DTransformTrack_0"));
	auto& __Local__25 = (*(AccessPrivateProperty<FName >((__Local__24), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__25 = FName(TEXT("RenderTransform"));
	auto& __Local__26 = (*(AccessPrivateProperty<FString >((__Local__24), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__26 = FString(TEXT("RenderTransform"));
	auto& __Local__27 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__24), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__27 = TArray<UMovieSceneSection*> ();
	__Local__27.Reserve(1);
	auto __Local__28 = NewObject<UMovieScene2DTransformSection>(__Local__24, UMovieScene2DTransformSection::StaticClass(), TEXT("MovieScene2DTransformSection_0"));
	auto& __Local__29 = (*(AccessPrivateProperty<FRichCurve >((__Local__28), UMovieScene2DTransformSection::__PPO__Translation() )));
	__Local__29.Keys = TArray<FRichCurveKey> ();
	__Local__29.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__29.Keys.GetData(), 1);
	auto& __Local__30 = __Local__29.Keys[0];
	__Local__30.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__31 = (*(AccessPrivateProperty<FRichCurve >((__Local__28), UMovieScene2DTransformSection::__PPO__Translation() , sizeof(FRichCurve ), 1)));
	__Local__31.Keys = TArray<FRichCurveKey> ();
	__Local__31.Keys.AddUninitialized(3);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__31.Keys.GetData(), 3);
	auto& __Local__32 = __Local__31.Keys[0];
	__Local__32.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__32.Value = 45.000000f;
	auto& __Local__33 = __Local__31.Keys[1];
	__Local__33.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__33.Time = 0.300000f;
	__Local__33.Value = -15.000000f;
	__Local__33.ArriveTangent = -64.285721f;
	__Local__33.LeaveTangent = -64.285721f;
	auto& __Local__34 = __Local__31.Keys[2];
	__Local__34.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__34.Time = 0.700000f;
	auto& __Local__35 = (*(AccessPrivateProperty<FRichCurve >((__Local__28), UMovieScene2DTransformSection::__PPO__Rotation() )));
	__Local__35.Keys = TArray<FRichCurveKey> ();
	__Local__35.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__35.Keys.GetData(), 1);
	auto& __Local__36 = __Local__35.Keys[0];
	__Local__36.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__37 = (*(AccessPrivateProperty<FRichCurve >((__Local__28), UMovieScene2DTransformSection::__PPO__Scale() )));
	__Local__37.Keys = TArray<FRichCurveKey> ();
	__Local__37.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__37.Keys.GetData(), 1);
	auto& __Local__38 = __Local__37.Keys[0];
	__Local__38.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__38.Value = 1.000000f;
	auto& __Local__39 = (*(AccessPrivateProperty<FRichCurve >((__Local__28), UMovieScene2DTransformSection::__PPO__Scale() , sizeof(FRichCurve ), 1)));
	__Local__39.Keys = TArray<FRichCurveKey> ();
	__Local__39.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__39.Keys.GetData(), 1);
	auto& __Local__40 = __Local__39.Keys[0];
	__Local__40.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__40.Value = 1.000000f;
	auto& __Local__41 = (*(AccessPrivateProperty<FRichCurve >((__Local__28), UMovieScene2DTransformSection::__PPO__Shear() )));
	__Local__41.Keys = TArray<FRichCurveKey> ();
	__Local__41.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__41.Keys.GetData(), 1);
	auto& __Local__42 = __Local__41.Keys[0];
	__Local__42.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__43 = (*(AccessPrivateProperty<FRichCurve >((__Local__28), UMovieScene2DTransformSection::__PPO__Shear() , sizeof(FRichCurve ), 1)));
	__Local__43.Keys = TArray<FRichCurveKey> ();
	__Local__43.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__43.Keys.GetData(), 1);
	auto& __Local__44 = __Local__43.Keys[0];
	__Local__44.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__28->EvalOptions.CompletionMode = EMovieSceneCompletionMode::KeepState;
	__Local__28->Easing.EaseIn = TScriptInterface<IMovieSceneEasingFunction>(LoadObject<UObject>(nullptr, TEXT("/Temp/__TEMP_BP__/Game/UMG/Pop-up.Pop-up_C:Fade in_INST.Fade in.MovieScene2DTransformTrack_0.MovieScene2DTransformSection_0.EaseInFunction")));
	__Local__28->Easing.EaseOut = TScriptInterface<IMovieSceneEasingFunction>(LoadObject<UObject>(nullptr, TEXT("/Temp/__TEMP_BP__/Game/UMG/Pop-up.Pop-up_C:Fade in_INST.Fade in.MovieScene2DTransformTrack_0.MovieScene2DTransformSection_0.EaseOutFunction")));
	auto& __Local__45 = (*(AccessPrivateProperty<float >((__Local__28), UMovieSceneSection::__PPO__EndTime() )));
	__Local__45 = 1.000000f;
	auto& __Local__46 = (*(AccessPrivateProperty<FGuid >((__Local__28), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__46 = FGuid(0x6D959713, 0x47F8C06B, 0xE63FBEA6, 0xB02BA46E);
	__Local__27.Add(__Local__28);
	__Local__24->EvalOptions.bEvalNearestSection = true;
	auto& __Local__47 = (*(AccessPrivateProperty<FGuid >((__Local__24), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__47 = FGuid(0xEEACE7DF, 0x496EF07C, 0x3E7B329E, 0xF5A395B4);
	__Local__23.Add(__Local__24);
	auto __Local__48 = NewObject<UMovieSceneVectorTrack>(__Local__13, UMovieSceneVectorTrack::StaticClass(), TEXT("MovieSceneVectorTrack_1"));
	auto& __Local__49 = (*(AccessPrivateProperty<int32 >((__Local__48), UMovieSceneVectorTrack::__PPO__NumChannelsUsed() )));
	__Local__49 = 2;
	auto& __Local__50 = (*(AccessPrivateProperty<FName >((__Local__48), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__50 = FName(TEXT("DesiredSizeScale"));
	auto& __Local__51 = (*(AccessPrivateProperty<FString >((__Local__48), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__51 = FString(TEXT("DesiredSizeScale"));
	auto& __Local__52 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__48), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__52 = TArray<UMovieSceneSection*> ();
	__Local__52.Reserve(1);
	auto __Local__53 = NewObject<UMovieSceneVectorSection>(__Local__48, UMovieSceneVectorSection::StaticClass(), TEXT("MovieSceneVectorSection_0"));
	auto& __Local__54 = (*(AccessPrivateProperty<FRichCurve >((__Local__53), UMovieSceneVectorSection::__PPO__Curves() )));
	__Local__54.Keys = TArray<FRichCurveKey> ();
	__Local__54.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__54.Keys.GetData(), 1);
	auto& __Local__55 = __Local__54.Keys[0];
	__Local__55.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__55.Value = 1.000000f;
	auto& __Local__56 = (*(AccessPrivateProperty<FRichCurve >((__Local__53), UMovieSceneVectorSection::__PPO__Curves() , sizeof(FRichCurve ), 1)));
	__Local__56.Keys = TArray<FRichCurveKey> ();
	__Local__56.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__56.Keys.GetData(), 1);
	auto& __Local__57 = __Local__56.Keys[0];
	__Local__57.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__57.Value = 1.000000f;
	auto& __Local__58 = (*(AccessPrivateProperty<int32 >((__Local__53), UMovieSceneVectorSection::__PPO__ChannelsUsed() )));
	__Local__58 = 2;
	__Local__53->EvalOptions.CompletionMode = EMovieSceneCompletionMode::KeepState;
	__Local__53->Easing.EaseIn = TScriptInterface<IMovieSceneEasingFunction>(LoadObject<UObject>(nullptr, TEXT("/Temp/__TEMP_BP__/Game/UMG/Pop-up.Pop-up_C:Fade in_INST.Fade in.MovieSceneVectorTrack_1.MovieSceneVectorSection_0.EaseInFunction")));
	__Local__53->Easing.EaseOut = TScriptInterface<IMovieSceneEasingFunction>(LoadObject<UObject>(nullptr, TEXT("/Temp/__TEMP_BP__/Game/UMG/Pop-up.Pop-up_C:Fade in_INST.Fade in.MovieSceneVectorTrack_1.MovieSceneVectorSection_0.EaseOutFunction")));
	auto& __Local__59 = (*(AccessPrivateProperty<FGuid >((__Local__53), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__59 = FGuid(0x84CE1608, 0x4F4F5026, 0x3829649B, 0x475F31DC);
	__Local__52.Add(__Local__53);
	__Local__48->EvalOptions.bEvalNearestSection = true;
	auto& __Local__60 = (*(AccessPrivateProperty<FGuid >((__Local__48), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__60 = FGuid(0xDE07ADFC, 0x4A4AACED, 0xBD723E9F, 0xE9951676);
	__Local__23.Add(__Local__48);
	auto& __Local__61 = (*(AccessPrivateProperty<FFloatRange >((__Local__13), UMovieScene::__PPO__PlaybackRange() )));
	__Local__61 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(1.000000));
	auto& __Local__62 = (*(AccessPrivateProperty<float >((__Local__13), UMovieScene::__PPO__FixedFrameInterval() )));
	__Local__62 = 0.050000f;
	auto& __Local__63 = (*(AccessPrivateProperty<FGuid >((__Local__13), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__63 = FGuid(0x45F744F3, 0x49DDBCD1, 0xB24BD0BD, 0xF3318176);
	__Local__1->MovieScene = __Local__13;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	auto& __Local__64 = __Local__1->AnimationBindings[0];
	__Local__64.WidgetName = FName(TEXT("Border_86"));
	__Local__64.AnimationGuid = FGuid(0xA707BA6D, 0x4C763232, 0x9F276193, 0xC5AF6C55);
	auto& __Local__65 = (*(AccessPrivateProperty<TMap<uint32,FMovieSceneEvaluationTrack> >(&(__Local__1->EvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__Tracks() )));
	__Local__65 = {};
	__Local__65.Reserve(2);
	static TWeakObjectPtr<UProperty> __Local__68{};
	const UProperty* __Local__67 = __Local__68.Get();
	if (nullptr == __Local__67)
	{
		__Local__67 = (FMovieSceneEvaluationTemplate::StaticStruct())->FindPropertyByName(FName(TEXT("Tracks")));
		check(__Local__67);
		__Local__68 = __Local__67;
	}
	FScriptMapHelper __Local__66(CastChecked<UMapProperty>(__Local__67), &__Local__65);
	TMap<uint32,FMovieSceneEvaluationTrack>::ElementType& __Local__69 = *(TMap<uint32,FMovieSceneEvaluationTrack>::ElementType*)__Local__66.GetPairPtr(__Local__66.AddDefaultValue_Invalid_NeedsRehash());
	__Local__69.Key = 0;
	auto& __Local__70 = (*(AccessPrivateProperty<FGuid >(&(__Local__69.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__70 = FGuid(0xA707BA6D, 0x4C763232, 0x9F276193, 0xC5AF6C55);
	auto& __Local__71 = (*(AccessPrivateProperty<uint16 >(&(__Local__69.Value), FMovieSceneEvaluationTrack::__PPO__EvaluationPriority() )));
	__Local__71 = 1000;
	auto& __Local__72 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__69.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	__Local__72 = TArray<FMovieSceneSegment> ();
	__Local__72.Reserve(3);
	__Local__72.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Open(), FFloatRangeBound::Exclusive(0.000000)), {FSectionEvaluationData(0, 0.000000)}));
	__Local__72.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(1.000000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	__Local__72.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Exclusive(1.000000), FFloatRangeBound::Open()), {FSectionEvaluationData(0, 1.000000)}));
	auto& __Local__73 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__69.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__73 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__73.Reserve(1);
	__Local__73.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieScene2DTransformSectionTemplate::StaticStruct()));
	auto& __Local__74 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__73[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Translation() )));
	__Local__74.Keys = TArray<FRichCurveKey> ();
	__Local__74.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__74.Keys.GetData(), 1);
	auto& __Local__75 = __Local__74.Keys[0];
	__Local__75.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__76 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__73[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Translation() , sizeof(FRichCurve ), 1)));
	__Local__76.Keys = TArray<FRichCurveKey> ();
	__Local__76.Keys.AddUninitialized(3);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__76.Keys.GetData(), 3);
	auto& __Local__77 = __Local__76.Keys[0];
	__Local__77.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__77.Value = 45.000000f;
	auto& __Local__78 = __Local__76.Keys[1];
	__Local__78.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__78.Time = 0.300000f;
	__Local__78.Value = -15.000000f;
	__Local__78.ArriveTangent = -64.285721f;
	__Local__78.LeaveTangent = -64.285721f;
	auto& __Local__79 = __Local__76.Keys[2];
	__Local__79.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__79.Time = 0.700000f;
	auto& __Local__80 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__73[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Rotation() )));
	__Local__80.Keys = TArray<FRichCurveKey> ();
	__Local__80.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__80.Keys.GetData(), 1);
	auto& __Local__81 = __Local__80.Keys[0];
	__Local__81.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__82 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__73[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() )));
	__Local__82.Keys = TArray<FRichCurveKey> ();
	__Local__82.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__82.Keys.GetData(), 1);
	auto& __Local__83 = __Local__82.Keys[0];
	__Local__83.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__83.Value = 1.000000f;
	auto& __Local__84 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__73[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Scale() , sizeof(FRichCurve ), 1)));
	__Local__84.Keys = TArray<FRichCurveKey> ();
	__Local__84.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__84.Keys.GetData(), 1);
	auto& __Local__85 = __Local__84.Keys[0];
	__Local__85.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__85.Value = 1.000000f;
	auto& __Local__86 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__73[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Shear() )));
	__Local__86.Keys = TArray<FRichCurveKey> ();
	__Local__86.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__86.Keys.GetData(), 1);
	auto& __Local__87 = __Local__86.Keys[0];
	__Local__87.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__88 = (*(AccessPrivateProperty<FRichCurve >((((FMovieScene2DTransformSectionTemplate*)__Local__73[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__Shear() , sizeof(FRichCurve ), 1)));
	__Local__88.Keys = TArray<FRichCurveKey> ();
	__Local__88.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__88.Keys.GetData(), 1);
	auto& __Local__89 = __Local__88.Keys[0];
	__Local__89.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__90 = (*(AccessPrivateProperty<EMovieSceneBlendType >((((FMovieScene2DTransformSectionTemplate*)__Local__73[0].GetPtr())), FMovieScene2DTransformSectionTemplate::__PPO__BlendType() )));
	__Local__90 = EMovieSceneBlendType::Absolute;
	auto& __Local__91 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieScene2DTransformSectionTemplate*)__Local__73[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__91.PropertyName = FName(TEXT("RenderTransform"));
	__Local__91.PropertyPath = FString(TEXT("RenderTransform"));
	auto& __Local__92 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieScene2DTransformSectionTemplate*)__Local__73[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__92 = __Local__28;
	TMap<uint32,FMovieSceneEvaluationTrack>::ElementType& __Local__93 = *(TMap<uint32,FMovieSceneEvaluationTrack>::ElementType*)__Local__66.GetPairPtr(__Local__66.AddDefaultValue_Invalid_NeedsRehash());
	__Local__93.Key = 1;
	auto& __Local__94 = (*(AccessPrivateProperty<FGuid >(&(__Local__93.Value), FMovieSceneEvaluationTrack::__PPO__ObjectBindingID() )));
	__Local__94 = FGuid(0xA707BA6D, 0x4C763232, 0x9F276193, 0xC5AF6C55);
	auto& __Local__95 = (*(AccessPrivateProperty<uint16 >(&(__Local__93.Value), FMovieSceneEvaluationTrack::__PPO__EvaluationPriority() )));
	__Local__95 = 1000;
	auto& __Local__96 = (*(AccessPrivateProperty<TArray<FMovieSceneSegment> >(&(__Local__93.Value), FMovieSceneEvaluationTrack::__PPO__Segments() )));
	__Local__96 = TArray<FMovieSceneSegment> ();
	__Local__96.Reserve(3);
	__Local__96.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Open(), FFloatRangeBound::Exclusive(0.000000)), {FSectionEvaluationData(0, 0.000000)}));
	__Local__96.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.000000)), {FSectionEvaluationData(0, -340282346638528859811704183484516925440.000000)}));
	__Local__96.Add(FMovieSceneSegment(FFloatRange(FFloatRangeBound::Exclusive(0.000000), FFloatRangeBound::Open()), {FSectionEvaluationData(0, 0.000000)}));
	auto& __Local__97 = (*(AccessPrivateProperty<TArray<FMovieSceneEvalTemplatePtr> >(&(__Local__93.Value), FMovieSceneEvaluationTrack::__PPO__ChildTemplates() )));
	__Local__97 = TArray<FMovieSceneEvalTemplatePtr> ();
	__Local__97.Reserve(1);
	__Local__97.Add(ConstructTInlineValue<FMovieSceneEvalTemplatePtr>(FMovieSceneVectorPropertySectionTemplate::StaticStruct()));
	auto& __Local__98 = (*(AccessPrivateProperty<FRichCurve >((((FMovieSceneVectorPropertySectionTemplate*)__Local__97[0].GetPtr())), FMovieSceneVectorPropertySectionTemplate::__PPO__ComponentCurves() )));
	__Local__98.Keys = TArray<FRichCurveKey> ();
	__Local__98.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__98.Keys.GetData(), 1);
	auto& __Local__99 = __Local__98.Keys[0];
	__Local__99.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__99.Value = 1.000000f;
	auto& __Local__100 = (*(AccessPrivateProperty<FRichCurve >((((FMovieSceneVectorPropertySectionTemplate*)__Local__97[0].GetPtr())), FMovieSceneVectorPropertySectionTemplate::__PPO__ComponentCurves() , sizeof(FRichCurve ), 1)));
	__Local__100.Keys = TArray<FRichCurveKey> ();
	__Local__100.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__100.Keys.GetData(), 1);
	auto& __Local__101 = __Local__100.Keys[0];
	__Local__101.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__101.Value = 1.000000f;
	auto& __Local__102 = (*(AccessPrivateProperty<int32 >((((FMovieSceneVectorPropertySectionTemplate*)__Local__97[0].GetPtr())), FMovieSceneVectorPropertySectionTemplate::__PPO__NumChannelsUsed() )));
	__Local__102 = 2;
	auto& __Local__103 = (*(AccessPrivateProperty<EMovieSceneBlendType >((((FMovieSceneVectorPropertySectionTemplate*)__Local__97[0].GetPtr())), FMovieSceneVectorPropertySectionTemplate::__PPO__BlendType() )));
	__Local__103 = EMovieSceneBlendType::Absolute;
	auto& __Local__104 = (*(AccessPrivateProperty<FMovieScenePropertySectionData >((((FMovieSceneVectorPropertySectionTemplate*)__Local__97[0].GetPtr())), FMovieScenePropertySectionTemplate::__PPO__PropertyData() )));
	__Local__104.PropertyName = FName(TEXT("DesiredSizeScale"));
	__Local__104.PropertyPath = FString(TEXT("DesiredSizeScale"));
	auto& __Local__105 = (*(AccessPrivateProperty<UMovieSceneSection* >((((FMovieSceneVectorPropertySectionTemplate*)__Local__97[0].GetPtr())), FMovieSceneEvalTemplate::__PPO__SourceSection() )));
	__Local__105 = __Local__53;
	__Local__66.Rehash();
	__Local__1->EvaluationTemplate.EvaluationField.Ranges = TArray<FFloatRange> ();
	__Local__1->EvaluationTemplate.EvaluationField.Ranges.Reserve(4);
	__Local__1->EvaluationTemplate.EvaluationField.Ranges.Add(FFloatRange(FFloatRangeBound::Open(), FFloatRangeBound::Exclusive(0.000000)));
	__Local__1->EvaluationTemplate.EvaluationField.Ranges.Add(FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(0.000000)));
	__Local__1->EvaluationTemplate.EvaluationField.Ranges.Add(FFloatRange(FFloatRangeBound::Exclusive(0.000000), FFloatRangeBound::Inclusive(1.000000)));
	__Local__1->EvaluationTemplate.EvaluationField.Ranges.Add(FFloatRange(FFloatRangeBound::Exclusive(1.000000), FFloatRangeBound::Open()));
	__Local__1->EvaluationTemplate.EvaluationField.Groups = TArray<FMovieSceneEvaluationGroup> ();
	__Local__1->EvaluationTemplate.EvaluationField.Groups.AddUninitialized(4);
	FMovieSceneEvaluationGroup::StaticStruct()->InitializeStruct(__Local__1->EvaluationTemplate.EvaluationField.Groups.GetData(), 4);
	auto& __Local__106 = __Local__1->EvaluationTemplate.EvaluationField.Groups[0];
	__Local__106.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__106.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__106.LUTIndices.GetData(), 1);
	auto& __Local__107 = __Local__106.LUTIndices[0];
	__Local__107.NumEvalPtrs = 2;
	__Local__106.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__106.SegmentPtrLUT.AddUninitialized(2);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__106.SegmentPtrLUT.GetData(), 2);
	auto& __Local__108 = __Local__106.SegmentPtrLUT[0];
	auto& __Local__109 = (*(AccessPrivateProperty<uint32 >(&(__Local__108.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__109 = 0;
	auto& __Local__110 = (*(AccessPrivateProperty<uint32 >(&(__Local__108.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__110 = 1;
	auto& __Local__111 = __Local__106.SegmentPtrLUT[1];
	auto& __Local__112 = (*(AccessPrivateProperty<uint32 >(&(__Local__111.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__112 = 0;
	auto& __Local__113 = (*(AccessPrivateProperty<uint32 >(&(__Local__111.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__113 = 0;
	auto& __Local__114 = __Local__1->EvaluationTemplate.EvaluationField.Groups[1];
	__Local__114.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__114.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__114.LUTIndices.GetData(), 1);
	auto& __Local__115 = __Local__114.LUTIndices[0];
	__Local__115.NumEvalPtrs = 2;
	__Local__114.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__114.SegmentPtrLUT.AddUninitialized(2);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__114.SegmentPtrLUT.GetData(), 2);
	auto& __Local__116 = __Local__114.SegmentPtrLUT[0];
	__Local__116.SegmentIndex = 1;
	auto& __Local__117 = (*(AccessPrivateProperty<uint32 >(&(__Local__116.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__117 = 0;
	auto& __Local__118 = (*(AccessPrivateProperty<uint32 >(&(__Local__116.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__118 = 1;
	auto& __Local__119 = __Local__114.SegmentPtrLUT[1];
	__Local__119.SegmentIndex = 1;
	auto& __Local__120 = (*(AccessPrivateProperty<uint32 >(&(__Local__119.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__120 = 0;
	auto& __Local__121 = (*(AccessPrivateProperty<uint32 >(&(__Local__119.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__121 = 0;
	auto& __Local__122 = __Local__1->EvaluationTemplate.EvaluationField.Groups[2];
	__Local__122.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__122.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__122.LUTIndices.GetData(), 1);
	auto& __Local__123 = __Local__122.LUTIndices[0];
	__Local__123.NumEvalPtrs = 2;
	__Local__122.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__122.SegmentPtrLUT.AddUninitialized(2);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__122.SegmentPtrLUT.GetData(), 2);
	auto& __Local__124 = __Local__122.SegmentPtrLUT[0];
	__Local__124.SegmentIndex = 2;
	auto& __Local__125 = (*(AccessPrivateProperty<uint32 >(&(__Local__124.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__125 = 0;
	auto& __Local__126 = (*(AccessPrivateProperty<uint32 >(&(__Local__124.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__126 = 1;
	auto& __Local__127 = __Local__122.SegmentPtrLUT[1];
	__Local__127.SegmentIndex = 1;
	auto& __Local__128 = (*(AccessPrivateProperty<uint32 >(&(__Local__127.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__128 = 0;
	auto& __Local__129 = (*(AccessPrivateProperty<uint32 >(&(__Local__127.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__129 = 0;
	auto& __Local__130 = __Local__1->EvaluationTemplate.EvaluationField.Groups[3];
	__Local__130.LUTIndices = TArray<FMovieSceneEvaluationGroupLUTIndex> ();
	__Local__130.LUTIndices.AddUninitialized(1);
	FMovieSceneEvaluationGroupLUTIndex::StaticStruct()->InitializeStruct(__Local__130.LUTIndices.GetData(), 1);
	auto& __Local__131 = __Local__130.LUTIndices[0];
	__Local__131.NumEvalPtrs = 2;
	__Local__130.SegmentPtrLUT = TArray<FMovieSceneEvaluationFieldSegmentPtr> ();
	__Local__130.SegmentPtrLUT.AddUninitialized(2);
	FMovieSceneEvaluationFieldSegmentPtr::StaticStruct()->InitializeStruct(__Local__130.SegmentPtrLUT.GetData(), 2);
	auto& __Local__132 = __Local__130.SegmentPtrLUT[0];
	__Local__132.SegmentIndex = 2;
	auto& __Local__133 = (*(AccessPrivateProperty<uint32 >(&(__Local__132.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__133 = 0;
	auto& __Local__134 = (*(AccessPrivateProperty<uint32 >(&(__Local__132.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__134 = 0;
	auto& __Local__135 = __Local__130.SegmentPtrLUT[1];
	__Local__135.SegmentIndex = 2;
	auto& __Local__136 = (*(AccessPrivateProperty<uint32 >(&(__Local__135.SequenceID), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__136 = 0;
	auto& __Local__137 = (*(AccessPrivateProperty<uint32 >(&(__Local__135.TrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__137 = 1;
	__Local__1->EvaluationTemplate.EvaluationField.MetaData = TArray<FMovieSceneEvaluationMetaData> ();
	__Local__1->EvaluationTemplate.EvaluationField.MetaData.AddUninitialized(4);
	FMovieSceneEvaluationMetaData::StaticStruct()->InitializeStruct(__Local__1->EvaluationTemplate.EvaluationField.MetaData.GetData(), 4);
	auto& __Local__138 = __Local__1->EvaluationTemplate.EvaluationField.MetaData[0];
	__Local__138.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__138.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__138.ActiveSequences.GetData(), 1);
	auto& __Local__139 = __Local__138.ActiveSequences[0];
	auto& __Local__140 = (*(AccessPrivateProperty<uint32 >(&(__Local__139), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__140 = 0;
	__Local__138.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__138.ActiveEntities.AddUninitialized(4);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__138.ActiveEntities.GetData(), 4);
	auto& __Local__141 = __Local__138.ActiveEntities[0];
	__Local__141.EvaluationIndex = 3;
	auto& __Local__142 = __Local__138.ActiveEntities[1];
	__Local__142.EvaluationIndex = 2;
	auto& __Local__143 = __Local__138.ActiveEntities[2];
	__Local__143.EvaluationIndex = 1;
	auto& __Local__144 = __Local__138.ActiveEntities[3];
	auto& __Local__145 = __Local__1->EvaluationTemplate.EvaluationField.MetaData[1];
	__Local__145.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__145.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__145.ActiveSequences.GetData(), 1);
	auto& __Local__146 = __Local__145.ActiveSequences[0];
	auto& __Local__147 = (*(AccessPrivateProperty<uint32 >(&(__Local__146), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__147 = 0;
	__Local__145.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__145.ActiveEntities.AddUninitialized(4);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__145.ActiveEntities.GetData(), 4);
	auto& __Local__148 = __Local__145.ActiveEntities[0];
	__Local__148.EvaluationIndex = 3;
	auto& __Local__149 = __Local__145.ActiveEntities[1];
	__Local__149.EvaluationIndex = 2;
	auto& __Local__150 = __Local__145.ActiveEntities[2];
	__Local__150.EvaluationIndex = 1;
	auto& __Local__151 = __Local__145.ActiveEntities[3];
	auto& __Local__152 = __Local__1->EvaluationTemplate.EvaluationField.MetaData[2];
	__Local__152.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__152.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__152.ActiveSequences.GetData(), 1);
	auto& __Local__153 = __Local__152.ActiveSequences[0];
	auto& __Local__154 = (*(AccessPrivateProperty<uint32 >(&(__Local__153), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__154 = 0;
	__Local__152.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__152.ActiveEntities.AddUninitialized(4);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__152.ActiveEntities.GetData(), 4);
	auto& __Local__155 = __Local__152.ActiveEntities[0];
	__Local__155.EvaluationIndex = 3;
	auto& __Local__156 = __Local__152.ActiveEntities[1];
	__Local__156.EvaluationIndex = 2;
	auto& __Local__157 = __Local__152.ActiveEntities[2];
	__Local__157.EvaluationIndex = 1;
	auto& __Local__158 = __Local__152.ActiveEntities[3];
	auto& __Local__159 = __Local__1->EvaluationTemplate.EvaluationField.MetaData[3];
	__Local__159.ActiveSequences = TArray<FMovieSceneSequenceID> ();
	__Local__159.ActiveSequences.AddUninitialized(1);
	FMovieSceneSequenceID::StaticStruct()->InitializeStruct(__Local__159.ActiveSequences.GetData(), 1);
	auto& __Local__160 = __Local__159.ActiveSequences[0];
	auto& __Local__161 = (*(AccessPrivateProperty<uint32 >(&(__Local__160), FMovieSceneSequenceID::__PPO__Value() )));
	__Local__161 = 0;
	__Local__159.ActiveEntities = TArray<FMovieSceneOrderedEvaluationKey> ();
	__Local__159.ActiveEntities.AddUninitialized(4);
	FMovieSceneOrderedEvaluationKey::StaticStruct()->InitializeStruct(__Local__159.ActiveEntities.GetData(), 4);
	auto& __Local__162 = __Local__159.ActiveEntities[0];
	__Local__162.EvaluationIndex = 1;
	auto& __Local__163 = __Local__159.ActiveEntities[1];
	auto& __Local__164 = __Local__159.ActiveEntities[2];
	__Local__164.EvaluationIndex = 3;
	auto& __Local__165 = __Local__159.ActiveEntities[3];
	__Local__165.EvaluationIndex = 2;
	auto& __Local__166 = (*(AccessPrivateProperty<FMovieSceneTemplateGenerationLedger >(&(__Local__1->EvaluationTemplate), FMovieSceneEvaluationTemplate::__PPO__TemplateLedger() )));
	auto& __Local__167 = (*(AccessPrivateProperty<uint32 >(&(__Local__166.LastTrackIdentifier), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__167 = 1;
	__Local__166.TrackReferenceCounts = {};
	__Local__166.TrackReferenceCounts.Reserve(2);
	static TWeakObjectPtr<UProperty> __Local__170{};
	const UProperty* __Local__169 = __Local__170.Get();
	if (nullptr == __Local__169)
	{
		__Local__169 = (FMovieSceneTemplateGenerationLedger::StaticStruct())->FindPropertyByName(FName(TEXT("TrackReferenceCounts")));
		check(__Local__169);
		__Local__170 = __Local__169;
	}
	FScriptMapHelper __Local__168(CastChecked<UMapProperty>(__Local__169), &__Local__166.TrackReferenceCounts);
	TMap<FMovieSceneTrackIdentifier,int32>::ElementType& __Local__171 = *(TMap<FMovieSceneTrackIdentifier,int32>::ElementType*)__Local__168.GetPairPtr(__Local__168.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__172 = (*(AccessPrivateProperty<uint32 >(&(__Local__171.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__172 = 0;
	__Local__171.Value = 0;
	TMap<FMovieSceneTrackIdentifier,int32>::ElementType& __Local__173 = *(TMap<FMovieSceneTrackIdentifier,int32>::ElementType*)__Local__168.GetPairPtr(__Local__168.AddDefaultValue_Invalid_NeedsRehash());
	auto& __Local__174 = (*(AccessPrivateProperty<uint32 >(&(__Local__173.Key), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__174 = 1;
	__Local__173.Value = 1;
	__Local__168.Rehash();
	__Local__166.TrackSignatureToTrackIdentifier = {};
	__Local__166.TrackSignatureToTrackIdentifier.Reserve(2);
	static TWeakObjectPtr<UProperty> __Local__177{};
	const UProperty* __Local__176 = __Local__177.Get();
	if (nullptr == __Local__176)
	{
		__Local__176 = (FMovieSceneTemplateGenerationLedger::StaticStruct())->FindPropertyByName(FName(TEXT("TrackSignatureToTrackIdentifier")));
		check(__Local__176);
		__Local__177 = __Local__176;
	}
	FScriptMapHelper __Local__175(CastChecked<UMapProperty>(__Local__176), &__Local__166.TrackSignatureToTrackIdentifier);
	TMap<FGuid,FMovieSceneTrackIdentifiers>::ElementType& __Local__178 = *(TMap<FGuid,FMovieSceneTrackIdentifiers>::ElementType*)__Local__175.GetPairPtr(__Local__175.AddDefaultValue_Invalid_NeedsRehash());
	__Local__178.Key.A = -290658337;
	__Local__178.Key.B = 1232007292;
	__Local__178.Key.C = 1048261278;
	__Local__178.Key.D = -173828684;
	__Local__178.Value.Data = TArray<FMovieSceneTrackIdentifier> ();
	__Local__178.Value.Data.AddUninitialized(1);
	FMovieSceneTrackIdentifier::StaticStruct()->InitializeStruct(__Local__178.Value.Data.GetData(), 1);
	auto& __Local__179 = __Local__178.Value.Data[0];
	auto& __Local__180 = (*(AccessPrivateProperty<uint32 >(&(__Local__179), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__180 = 0;
	TMap<FGuid,FMovieSceneTrackIdentifiers>::ElementType& __Local__181 = *(TMap<FGuid,FMovieSceneTrackIdentifiers>::ElementType*)__Local__175.GetPairPtr(__Local__175.AddDefaultValue_Invalid_NeedsRehash());
	__Local__181.Key.A = -569922052;
	__Local__181.Key.B = 1246407917;
	__Local__181.Key.C = -1116586337;
	__Local__181.Key.D = -376105354;
	__Local__181.Value.Data = TArray<FMovieSceneTrackIdentifier> ();
	__Local__181.Value.Data.AddUninitialized(1);
	FMovieSceneTrackIdentifier::StaticStruct()->InitializeStruct(__Local__181.Value.Data.GetData(), 1);
	auto& __Local__182 = __Local__181.Value.Data[0];
	auto& __Local__183 = (*(AccessPrivateProperty<uint32 >(&(__Local__182), FMovieSceneTrackIdentifier::__PPO__Value() )));
	__Local__183 = 1;
	__Local__175.Rehash();
	auto& __Local__184 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__184 = FGuid(0xDCF16352, 0x45890915, 0x0E036284, 0x522DE382);
}
void UPopxup_C__pfG1863595755::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__185;
	SlotNames.Append(__Local__185);
}
void UPopxup_C__pfG1863595755::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__186;
	__Local__186.Reserve(1);
	__Local__186.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UPopxup_C__pfG1863595755::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  __Local__187;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UPopxup_C__pfG1863595755::StaticClass())->MiscConvertedSubobjects[0]), __Local__186, __Local__187);
}
void UPopxup_C__pfG1863595755::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UPopxup_C__pfG1863595755::bpf__ExecuteUbergraph_Popxup__pfG_0(int32 bpp__EntryPoint__pf)
{
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
				RemoveFromParent();
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				if(IsValid(bpv__Popup_Text__pf))
				{
					bpv__Popup_Text__pf->UEditableText::SetText(bpv__Text__pf);
				}
			}
		case 5:
			{
				UUserWidget::PlayAnimation(bpv__Fadexin__pfT, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
			}
		case 6:
			{
				UKismetSystemLibrary::Delay(this, bpv__Duration__pf, FLatentActionInfo(1, 1053218581, TEXT("ExecuteUbergraph_Pop-up_0"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UPopxup_C__pfG1863595755::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_Popxup__pfG_0(3);
}
void UPopxup_C__pfG1863595755::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void UPopxup_C__pfG1863595755::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{112, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{118, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.Border 
		{119, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.EditableText 
		{120, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/UMG.WidgetAnimation 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
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
struct FRegisterHelper__UPopxup_C__pfG1863595755
{
	FRegisterHelper__UPopxup_C__pfG1863595755()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UMG/Pop-up"), &UPopxup_C__pfG1863595755::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UPopxup_C__pfG1863595755 Instance;
};
FRegisterHelper__UPopxup_C__pfG1863595755 FRegisterHelper__UPopxup_C__pfG1863595755::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
