// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Camaro_Driver_AnimBlueprint__pf2913349635.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamaro_Driver_AnimBlueprint__pf2913349635() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UCamaro_Driver_AnimBlueprint_C__pf2913349635_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UCamaro_Driver_AnimBlueprint_C__pf2913349635();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UCamaro_Driver_AnimBlueprint_C__pf2913349635_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
// End Cross Module References
	void UCamaro_Driver_AnimBlueprint_C__pf2913349635::StaticRegisterNativesUCamaro_Driver_AnimBlueprint_C__pf2913349635()
	{
		UClass* Class = UCamaro_Driver_AnimBlueprint_C__pf2913349635::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4"), (Native)&UCamaro_Driver_AnimBlueprint_C__pf2913349635::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_UCamaro_Driver_AnimBlueprint_C__pf2913349635_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4__pf()
	{
		UObject* Outer = Z_Construct_UClass_UCamaro_Driver_AnimBlueprint_C__pf2913349635();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Camaro_Driver_AnimBlueprint__pf2913349635.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCamaro_Driver_AnimBlueprint_C__pf2913349635_NoRegister()
	{
		return UCamaro_Driver_AnimBlueprint_C__pf2913349635::StaticClass();
	}
	UClass* Z_Construct_UClass_UCamaro_Driver_AnimBlueprint_C__pf2913349635()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Vehicles/Camaro/Anims/Camaro_Driver_AnimBlueprint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Camaro_Driver_AnimBlueprint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_UAnimInstance();
			OuterClass = UCamaro_Driver_AnimBlueprint_C__pf2913349635::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800088u;

				OuterClass->LinkChild(Z_Construct_UFunction_UCamaro_Driver_AnimBlueprint_C__pf2913349635_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4__pf());

				UProperty* NewProp_bpv__SteeringxAngle__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Steering Angle"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__SteeringxAngle__pfT, UCamaro_Driver_AnimBlueprint_C__pf2913349635), 0x0010000000010005);
				UProperty* NewProp_bpv__AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4__pf, UCamaro_Driver_AnimBlueprint_C__pf2913349635), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator());
				UProperty* NewProp_bpv__AnimGraphNode_Root_5C5B4B924CF3F36170D230A78953D2E4__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnimGraphNode_Root_5C5B4B924CF3F36170D230A78953D2E4"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__AnimGraphNode_Root_5C5B4B924CF3F36170D230A78953D2E4__pf, UCamaro_Driver_AnimBlueprint_C__pf2913349635), 0x0010000000000000, Z_Construct_UScriptStruct_FAnimNode_Root());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCamaro_Driver_AnimBlueprint_C__pf2913349635_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4__pf(), TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_Camaro_Driver_AnimBlueprint_AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4")); // 2954700322
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UCamaro_Driver_AnimBlueprint_C__pf2913349635> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("AnimInstance"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Camaro_Driver_AnimBlueprint__pf2913349635.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Camaro_Driver_AnimBlueprint__pf2913349635.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("Camaro_Driver_AnimBlueprint_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Vehicles/Camaro/Anims/Camaro_Driver_AnimBlueprint.Camaro_Driver_AnimBlueprint_C"));
				MetaData->SetValue(NewProp_bpv__SteeringxAngle__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__SteeringxAngle__pfT, TEXT("DisplayName"), TEXT("Steering Angle"));
				MetaData->SetValue(NewProp_bpv__SteeringxAngle__pfT, TEXT("ModuleRelativePath"), TEXT("Public/Camaro_Driver_AnimBlueprint__pf2913349635.h"));
				MetaData->SetValue(NewProp_bpv__SteeringxAngle__pfT, TEXT("OverrideNativeName"), TEXT("Steering Angle"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4__pf, TEXT("ModuleRelativePath"), TEXT("Public/Camaro_Driver_AnimBlueprint__pf2913349635.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_SequenceEvaluator_C2FD187D4E41AE11C8AD71B7A78734A4"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_Root_5C5B4B924CF3F36170D230A78953D2E4__pf, TEXT("ModuleRelativePath"), TEXT("Public/Camaro_Driver_AnimBlueprint__pf2913349635.h"));
				MetaData->SetValue(NewProp_bpv__AnimGraphNode_Root_5C5B4B924CF3F36170D230A78953D2E4__pf, TEXT("OverrideNativeName"), TEXT("AnimGraphNode_Root_5C5B4B924CF3F36170D230A78953D2E4"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UCamaro_Driver_AnimBlueprint_C__pf2913349635, TEXT("Camaro_Driver_AnimBlueprint_C"), 1396157038);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCamaro_Driver_AnimBlueprint_C__pf2913349635(Z_Construct_UClass_UCamaro_Driver_AnimBlueprint_C__pf2913349635, &UCamaro_Driver_AnimBlueprint_C__pf2913349635::StaticClass, TEXT("/Game/Vehicles/Camaro/Anims/Camaro_Driver_AnimBlueprint"), TEXT("Camaro_Driver_AnimBlueprint_C"), true, TEXT("/Game/Vehicles/Camaro/Anims/Camaro_Driver_AnimBlueprint"), TEXT("/Game/Vehicles/Camaro/Anims/Camaro_Driver_AnimBlueprint.Camaro_Driver_AnimBlueprint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCamaro_Driver_AnimBlueprint_C__pf2913349635);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
