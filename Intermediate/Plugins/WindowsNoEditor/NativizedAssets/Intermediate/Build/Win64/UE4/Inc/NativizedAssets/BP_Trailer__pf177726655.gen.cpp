// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BP_Trailer__pf177726655.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Trailer__pf177726655() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Attach__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Trailer_C__pf177726655();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Detach__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Popxup__pfG();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__ReleasexCargo__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Secure_Cargo__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Use__pf();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Trailer_C__pf177726655_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AInteractable_Master_C__pf1010915279();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Master_Vehicle_C__pf3373537038_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABP_Trailer_C__pf177726655_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Trailer_C__pf177726655::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Trailer_C__pf177726655_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Trailer_C__pf177726655::StaticRegisterNativesABP_Trailer_C__pf177726655()
	{
		UClass* Class = ABP_Trailer_C__pf177726655::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("Attach"), (Native)&ABP_Trailer_C__pf177726655::execbpf__Attach__pf },
			{ TEXT("Detach"), (Native)&ABP_Trailer_C__pf177726655::execbpf__Detach__pf },
			{ TEXT("Pop-up"), (Native)&ABP_Trailer_C__pf177726655::execbpf__Popxup__pfG },
			{ TEXT("Release Cargo"), (Native)&ABP_Trailer_C__pf177726655::execbpf__ReleasexCargo__pfT },
			{ TEXT("Secure_Cargo"), (Native)&ABP_Trailer_C__pf177726655::execbpf__Secure_Cargo__pf },
			{ TEXT("Use"), (Native)&ABP_Trailer_C__pf177726655::execbpf__Use__pf },
			{ TEXT("UserConstructionScript"), (Native)&ABP_Trailer_C__pf177726655::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Attach__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Trailer_C__pf177726655();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Attach") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Attach"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Attach"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Detach__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Trailer_C__pf177726655();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Detach") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Detach"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Detach"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Popxup__pfG()
	{
		struct BP_Trailer_C__pf177726655_eventbpf__Popxup__pfG_Parms
		{
			float bpp__Duration__pf;
			FText bpp__Text__pf__const;
		};
		UObject* Outer = Z_Construct_UClass_ABP_Trailer_C__pf177726655();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Pop-up") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Pop-up"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420400, 65535, sizeof(BP_Trailer_C__pf177726655_eventbpf__Popxup__pfG_Parms));
			UProperty* NewProp_bpp__Text__pf__const = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__Text__pf__const"), RF_Public|RF_Transient) UTextProperty(CPP_PROPERTY_BASE(bpp__Text__pf__const, BP_Trailer_C__pf177726655_eventbpf__Popxup__pfG_Parms), 0x0010000008000182);
			UProperty* NewProp_bpp__Duration__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__Duration__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__Duration__pf, BP_Trailer_C__pf177726655_eventbpf__Popxup__pfG_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Pop-up"));
			MetaData->SetValue(NewProp_bpp__Text__pf__const, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__ReleasexCargo__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Trailer_C__pf177726655();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Release Cargo") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Release Cargo"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Release Cargo"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Secure_Cargo__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Trailer_C__pf177726655();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Secure_Cargo") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Secure_Cargo"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Secure_Cargo"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Use__pf()
	{
		struct BP_Trailer_C__pf177726655_eventbpf__Use__pf_Parms
		{
			UActorComponent* bpp__Component__pf;
		};
		UObject* Outer = Z_Construct_UClass_ABP_Trailer_C__pf177726655();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Use") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Use"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(BP_Trailer_C__pf177726655_eventbpf__Use__pf_Parms));
			UProperty* NewProp_bpp__Component__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__Component__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__Component__pf, BP_Trailer_C__pf177726655_eventbpf__Use__pf_Parms), 0x0010000000080080, Z_Construct_UClass_UActorComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Use"));
			MetaData->SetValue(NewProp_bpp__Component__pf, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Trailer_C__pf177726655();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("UserConstructionScript") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UserConstructionScript"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020C01, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("BlueprintInternalUseOnly"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Construction Script"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Trailer_C__pf177726655_NoRegister()
	{
		return ABP_Trailer_C__pf177726655::StaticClass();
	}
	UClass* Z_Construct_UClass_ABP_Trailer_C__pf177726655()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Vehicles/Trailer/BP_Trailer"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Trailer_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_AInteractable_Master_C__pf1010915279();
			OuterClass = ABP_Trailer_C__pf177726655::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Attach__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Detach__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Popxup__pfG());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__ReleasexCargo__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Secure_Cargo__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Use__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__UserConstructionScript__pf());

				UProperty* NewProp_b1l__Temp_name_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_name_Variable"), RF_Public|RF_Transient) UNameProperty(CPP_PROPERTY_BASE(b1l__Temp_name_Variable__pf, ABP_Trailer_C__pf177726655), 0x0010000000202000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b1l__K2Node_DynamicCast_bSuccess2__pf, ABP_Trailer_C__pf177726655);
				UProperty* NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_bSuccess2"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b1l__K2Node_DynamicCast_bSuccess2__pf, ABP_Trailer_C__pf177726655), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b1l__K2Node_DynamicCast_bSuccess2__pf, ABP_Trailer_C__pf177726655), sizeof(bool), true);
				UProperty* NewProp_b1l__K2Node_DynamicCast_AsBP_Master_Vehicle2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_AsBP_Master_Vehicle2"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b1l__K2Node_DynamicCast_AsBP_Master_Vehicle2__pf, ABP_Trailer_C__pf177726655), 0x0010000000202000, Z_Construct_UClass_ABP_Master_Vehicle_C__pf3373537038_NoRegister());
				UProperty* NewProp_b1l__CallFunc_Array_Get_Item2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item2"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b1l__CallFunc_Array_Get_Item2__pf, ABP_Trailer_C__pf177726655), 0x0010000000202000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_GetOverlappingActors_OverlappingActors"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, ABP_Trailer_C__pf177726655), 0x0010000000202000);
				UProperty* NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner = new(EC_InternalUseOnlyConstructor, NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, TEXT("b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf"), RF_Public|RF_Transient) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_b1l__CallFunc_K2_SetWorldTransform_SweepHitResult__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_K2_SetWorldTransform_SweepHitResult"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b1l__CallFunc_K2_SetWorldTransform_SweepHitResult__pf, ABP_Trailer_C__pf177726655), 0x0010008000202000, Z_Construct_UScriptStruct_FHitResult());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b1l__K2Node_DynamicCast_bSuccess__pf, ABP_Trailer_C__pf177726655);
				UProperty* NewProp_b1l__K2Node_DynamicCast_bSuccess__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_bSuccess"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b1l__K2Node_DynamicCast_bSuccess__pf, ABP_Trailer_C__pf177726655), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b1l__K2Node_DynamicCast_bSuccess__pf, ABP_Trailer_C__pf177726655), sizeof(bool), true);
				UProperty* NewProp_b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_AsBP_Master_Vehicle"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf, ABP_Trailer_C__pf177726655), 0x0010000000202000, Z_Construct_UClass_ABP_Master_Vehicle_C__pf3373537038_NoRegister());
				UProperty* NewProp_b1l__CallFunc_Array_Get_Item__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b1l__CallFunc_Array_Get_Item__pf, ABP_Trailer_C__pf177726655), 0x0010000000282008, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				UProperty* NewProp_b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_GetOverlappingComponents_InOverlappingComponents"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, ABP_Trailer_C__pf177726655), 0x0010008000202008);
				UProperty* NewProp_b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf_Inner = new(EC_InternalUseOnlyConstructor, NewProp_b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, TEXT("b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf"), RF_Public|RF_Transient) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080008, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				UProperty* NewProp_b1l__K2Node_Event_Component__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_Component"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b1l__K2Node_Event_Component__pf, ABP_Trailer_C__pf177726655), 0x0010000000282008, Z_Construct_UClass_UActorComponent_NoRegister());
				UProperty* NewProp_b1l__Temp_int_Loop_Counter_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_int_Loop_Counter_Variable"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b1l__Temp_int_Loop_Counter_Variable__pf, ABP_Trailer_C__pf177726655), 0x0010000000202000);
				UProperty* NewProp_b1l__Temp_int_Array_Index_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_int_Array_Index_Variable"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b1l__Temp_int_Array_Index_Variable__pf, ABP_Trailer_C__pf177726655), 0x0010000000202000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b1l__Temp_bool_True_if_break_was_hit_Variable__pf, ABP_Trailer_C__pf177726655);
				UProperty* NewProp_b1l__Temp_bool_True_if_break_was_hit_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_bool_True_if_break_was_hit_Variable"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b1l__Temp_bool_True_if_break_was_hit_Variable__pf, ABP_Trailer_C__pf177726655), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b1l__Temp_bool_True_if_break_was_hit_Variable__pf, ABP_Trailer_C__pf177726655), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__IsxCargoxSecured__pfTT, ABP_Trailer_C__pf177726655);
				UProperty* NewProp_bpv__IsxCargoxSecured__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Is Cargo Secured"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__IsxCargoxSecured__pfTT, ABP_Trailer_C__pf177726655), 0x0010000000010025, CPP_BOOL_PROPERTY_BITMASK(bpv__IsxCargoxSecured__pfTT, ABP_Trailer_C__pf177726655), sizeof(bool), true);
				UProperty* NewProp_bpv__TargetxComponent__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Target Component"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__TargetxComponent__pfT, ABP_Trailer_C__pf177726655), 0x001000000009000d, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__IsxAttached__pfT, ABP_Trailer_C__pf177726655);
				UProperty* NewProp_bpv__IsxAttached__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Is Attached"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__IsxAttached__pfT, ABP_Trailer_C__pf177726655), 0x0010000000010025, CPP_BOOL_PROPERTY_BITMASK(bpv__IsxAttached__pfT, ABP_Trailer_C__pf177726655), sizeof(bool), true);
				UProperty* NewProp_bpv__Mesh__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Mesh__pf, ABP_Trailer_C__pf177726655), 0x001000040008000c, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_bpv__Box__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Box"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Box__pf, ABP_Trailer_C__pf177726655), 0x001000040008000c, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_bpv__PhysicsConstraint__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PhysicsConstraint"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__PhysicsConstraint__pf, ABP_Trailer_C__pf177726655), 0x001000040008000c, Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister());
				UProperty* NewProp_bpv__Cargo__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Cargo"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Cargo__pf, ABP_Trailer_C__pf177726655), 0x001000040008000c, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_bpv__PhysicsConstraint1__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PhysicsConstraint1"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__PhysicsConstraint1__pf, ABP_Trailer_C__pf177726655), 0x001000040008000c, Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Attach__pf(), TEXT("Attach")); // 92274025
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Detach__pf(), TEXT("Detach")); // 147394184
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Popxup__pfG(), TEXT("Pop-up")); // 1007287971
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__ReleasexCargo__pfT(), TEXT("Release Cargo")); // 3695035688
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Secure_Cargo__pf(), TEXT("Secure_Cargo")); // 2501524246
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__Use__pf(), TEXT("Use")); // 2480772359
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Trailer_C__pf177726655_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 190435927
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABP_Trailer_C__pf177726655> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BP_Trailer__pf177726655.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("BP_Trailer_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Vehicles/Trailer/BP_Trailer.BP_Trailer_C"));
				MetaData->SetValue(NewProp_b1l__Temp_name_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__Temp_name_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_name_Variable"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_bSuccess2__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_bSuccess2"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_AsBP_Master_Vehicle2__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_AsBP_Master_Vehicle2__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_AsBP_Master_Vehicle2"));
				MetaData->SetValue(NewProp_b1l__CallFunc_Array_Get_Item2__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__CallFunc_Array_Get_Item2__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item2"));
				MetaData->SetValue(NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_GetOverlappingActors_OverlappingActors"));
				MetaData->SetValue(NewProp_b1l__CallFunc_K2_SetWorldTransform_SweepHitResult__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__CallFunc_K2_SetWorldTransform_SweepHitResult__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_K2_SetWorldTransform_SweepHitResult"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_bSuccess__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_bSuccess__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_bSuccess"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_AsBP_Master_Vehicle"));
				MetaData->SetValue(NewProp_b1l__CallFunc_Array_Get_Item__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_b1l__CallFunc_Array_Get_Item__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__CallFunc_Array_Get_Item__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item"));
				MetaData->SetValue(NewProp_b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__CallFunc_GetOverlappingComponents_InOverlappingComponents__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_GetOverlappingComponents_InOverlappingComponents"));
				MetaData->SetValue(NewProp_b1l__K2Node_Event_Component__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_b1l__K2Node_Event_Component__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_Event_Component__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_Component"));
				MetaData->SetValue(NewProp_b1l__Temp_int_Loop_Counter_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__Temp_int_Loop_Counter_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_int_Loop_Counter_Variable"));
				MetaData->SetValue(NewProp_b1l__Temp_int_Array_Index_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__Temp_int_Array_Index_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_int_Array_Index_Variable"));
				MetaData->SetValue(NewProp_b1l__Temp_bool_True_if_break_was_hit_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_b1l__Temp_bool_True_if_break_was_hit_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_bool_True_if_break_was_hit_Variable"));
				MetaData->SetValue(NewProp_bpv__IsxCargoxSecured__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__IsxCargoxSecured__pfTT, TEXT("DisplayName"), TEXT("Is Cargo Secured"));
				MetaData->SetValue(NewProp_bpv__IsxCargoxSecured__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_bpv__IsxCargoxSecured__pfTT, TEXT("OverrideNativeName"), TEXT("Is Cargo Secured"));
				MetaData->SetValue(NewProp_bpv__TargetxComponent__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__TargetxComponent__pfT, TEXT("DisplayName"), TEXT("Target Component"));
				MetaData->SetValue(NewProp_bpv__TargetxComponent__pfT, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__TargetxComponent__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_bpv__TargetxComponent__pfT, TEXT("OverrideNativeName"), TEXT("Target Component"));
				MetaData->SetValue(NewProp_bpv__IsxAttached__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__IsxAttached__pfT, TEXT("DisplayName"), TEXT("Is Attached"));
				MetaData->SetValue(NewProp_bpv__IsxAttached__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_bpv__IsxAttached__pfT, TEXT("OverrideNativeName"), TEXT("Is Attached"));
				MetaData->SetValue(NewProp_bpv__Mesh__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Mesh__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Mesh__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_bpv__Mesh__pf, TEXT("OverrideNativeName"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("OverrideNativeName"), TEXT("Box"));
				MetaData->SetValue(NewProp_bpv__PhysicsConstraint__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__PhysicsConstraint__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__PhysicsConstraint__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_bpv__PhysicsConstraint__pf, TEXT("OverrideNativeName"), TEXT("PhysicsConstraint"));
				MetaData->SetValue(NewProp_bpv__Cargo__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Cargo__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Cargo__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_bpv__Cargo__pf, TEXT("OverrideNativeName"), TEXT("Cargo"));
				MetaData->SetValue(NewProp_bpv__PhysicsConstraint1__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__PhysicsConstraint1__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__PhysicsConstraint1__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Trailer__pf177726655.h"));
				MetaData->SetValue(NewProp_bpv__PhysicsConstraint1__pf, TEXT("OverrideNativeName"), TEXT("PhysicsConstraint1"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Trailer_C__pf177726655, TEXT("BP_Trailer_C"), 1128864523);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Trailer_C__pf177726655(Z_Construct_UClass_ABP_Trailer_C__pf177726655, &ABP_Trailer_C__pf177726655::StaticClass, TEXT("/Game/Vehicles/Trailer/BP_Trailer"), TEXT("BP_Trailer_C"), true, TEXT("/Game/Vehicles/Trailer/BP_Trailer"), TEXT("/Game/Vehicles/Trailer/BP_Trailer.BP_Trailer_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Trailer_C__pf177726655);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
