// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BP_Test__pf2481680385.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Test__pf2481680385() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Test_C__pf2481680385_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Test_C__pf2481680385();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Test_C__pf2481680385_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Test_C__pf2481680385_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FWheel_Structure__pf863842189();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABP_Test_C__pf2481680385_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_Test_C__pf2481680385::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_Test_C__pf2481680385_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Test_C__pf2481680385_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_Test_C__pf2481680385_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Test_C__pf2481680385::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Test_C__pf2481680385_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Test_C__pf2481680385::StaticRegisterNativesABP_Test_C__pf2481680385()
	{
		UClass* Class = ABP_Test_C__pf2481680385::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("ReceiveTick"), (Native)&ABP_Test_C__pf2481680385::execbpf__ReceiveTick__pf },
			{ TEXT("UserConstructionScript"), (Native)&ABP_Test_C__pf2481680385::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_ABP_Test_C__pf2481680385_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Test_C__pf2481680385();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveTick"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(BP_Test_C__pf2481680385_eventbpf__ReceiveTick__pf_Parms));
			UProperty* NewProp_bpp__DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaSeconds__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__DeltaSeconds__pf, BP_Test_C__pf2481680385_eventbpf__ReceiveTick__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Tick"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveTick"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event called every frame"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Test_C__pf2481680385_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Test_C__pf2481680385();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Test_C__pf2481680385_NoRegister()
	{
		return ABP_Test_C__pf2481680385::StaticClass();
	}
	UClass* Z_Construct_UClass_ABP_Test_C__pf2481680385()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Vehicles/Test/BP_Test"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Test_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_APawn();
			OuterClass = ABP_Test_C__pf2481680385::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Test_C__pf2481680385_bpf__ReceiveTick__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Test_C__pf2481680385_bpf__UserConstructionScript__pf());

				UProperty* NewProp_b0l__Temp_int_Loop_Counter_Variable2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_int_Loop_Counter_Variable2"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__Temp_int_Loop_Counter_Variable2__pf, ABP_Test_C__pf2481680385), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_TraceEnd"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_TraceEnd__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_TraceStart"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_TraceStart__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_FaceIndex"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_FaceIndex__pf, ABP_Test_C__pf2481680385), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_HitItem"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_HitItem__pf, ABP_Test_C__pf2481680385), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_HitBoneName"), RF_Public|RF_Transient) UNameProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_HitBoneName__pf, ABP_Test_C__pf2481680385), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_HitComponent"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_HitComponent__pf, ABP_Test_C__pf2481680385), 0x0010000000282008, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_HitActor"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_HitActor__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_PhysMat"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_PhysMat__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, Z_Construct_UClass_UPhysicalMaterial_NoRegister());
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_ImpactNormal"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_ImpactNormal__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_Normal__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_Normal"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_Normal__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_ImpactPoint"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_ImpactPoint__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_Location__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_Location"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_Location__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_Time__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_Time"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakHitResult_Time__pf, ABP_Test_C__pf2481680385), 0x0010000000202000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, ABP_Test_C__pf2481680385);
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_bInitialOverlap"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, ABP_Test_C__pf2481680385), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__CallFunc_BreakHitResult_bBlockingHit__pf, ABP_Test_C__pf2481680385);
				UProperty* NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakHitResult_bBlockingHit"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__CallFunc_BreakHitResult_bBlockingHit__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__CallFunc_BreakHitResult_bBlockingHit__pf, ABP_Test_C__pf2481680385), sizeof(bool), true);
				UProperty* NewProp_b0l__CallFunc_Array_Get_Item2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item2"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_Array_Get_Item2__pf, ABP_Test_C__pf2481680385), 0x0010008000202000, Z_Construct_UScriptStruct_FHitResult());
				UProperty* NewProp_b0l__CallFunc_SphereTraceMulti_OutHits__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_SphereTraceMulti_OutHits"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(b0l__CallFunc_SphereTraceMulti_OutHits__pf, ABP_Test_C__pf2481680385), 0x0010008000202000);
				UProperty* NewProp_b0l__CallFunc_SphereTraceMulti_OutHits__pf_Inner = new(EC_InternalUseOnlyConstructor, NewProp_b0l__CallFunc_SphereTraceMulti_OutHits__pf, TEXT("b0l__CallFunc_SphereTraceMulti_OutHits__pf"), RF_Public|RF_Transient) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000008000000000, Z_Construct_UScriptStruct_FHitResult());
				UProperty* NewProp_b0l__CallFunc_BreakTransform_Scale__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakTransform_Scale"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakTransform_Scale__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_b0l__CallFunc_BreakTransform_Rotation__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakTransform_Rotation"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakTransform_Rotation__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, Z_Construct_UScriptStruct_FRotator());
				UProperty* NewProp_b0l__CallFunc_BreakTransform_Location__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakTransform_Location"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakTransform_Location__pf, ABP_Test_C__pf2481680385), 0x0010000000202000, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_b0l__CallFunc_Array_Get_Item__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_Array_Get_Item__pf, ABP_Test_C__pf2481680385), 0x0010008000202000, Z_Construct_UScriptStruct_FWheel_Structure__pf863842189());
				UProperty* NewProp_b0l__Temp_int_Array_Index_Variable2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_int_Array_Index_Variable2"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__Temp_int_Array_Index_Variable2__pf, ABP_Test_C__pf2481680385), 0x0010000000202000);
				UProperty* NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_int_Loop_Counter_Variable"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__Temp_int_Loop_Counter_Variable__pf, ABP_Test_C__pf2481680385), 0x0010000000202000);
				UProperty* NewProp_b0l__K2Node_Event_DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_DeltaSeconds"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_DeltaSeconds__pf, ABP_Test_C__pf2481680385), 0x0010000000202000);
				UProperty* NewProp_b0l__Temp_int_Array_Index_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_int_Array_Index_Variable"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__Temp_int_Array_Index_Variable__pf, ABP_Test_C__pf2481680385), 0x0010000000202000);
				UProperty* NewProp_b0l__Temp_object_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_object_Variable"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(b0l__Temp_object_Variable__pf, ABP_Test_C__pf2481680385), 0x0010000000202000);
				UProperty* NewProp_b0l__Temp_object_Variable__pf_Inner = new(EC_InternalUseOnlyConstructor, NewProp_b0l__Temp_object_Variable__pf, TEXT("b0l__Temp_object_Variable__pf"), RF_Public|RF_Transient) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_bpv__SuspensionxLength__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Suspension Length"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__SuspensionxLength__pfT, ABP_Test_C__pf2481680385), 0x0010000000010005);
				UProperty* NewProp_bpv__Wheels__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Wheels"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(bpv__Wheels__pf, ABP_Test_C__pf2481680385), 0x0010008000010005);
				UProperty* NewProp_bpv__Wheels__pf_Inner = new(EC_InternalUseOnlyConstructor, NewProp_bpv__Wheels__pf, TEXT("bpv__Wheels__pf"), RF_Public|RF_Transient) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000008000000000, Z_Construct_UScriptStruct_FWheel_Structure__pf863842189());
				UProperty* NewProp_bpv__Scene__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Scene"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Scene__pf, ABP_Test_C__pf2481680385), 0x001000040008000c, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_bpv__SkeletalMesh__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SkeletalMesh"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__SkeletalMesh__pf, ABP_Test_C__pf2481680385), 0x001000040008000c, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Test_C__pf2481680385_bpf__ReceiveTick__pf(), TEXT("ReceiveTick")); // 3361984647
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Test_C__pf2481680385_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 2584942558
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABP_Test_C__pf2481680385> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BP_Test__pf2481680385.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("BP_Test_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Vehicles/Test/BP_Test.BP_Test_C"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Loop_Counter_Variable2__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Loop_Counter_Variable2__pf, TEXT("OverrideNativeName"), TEXT("Temp_int_Loop_Counter_Variable2"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_TraceEnd"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_TraceStart"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_FaceIndex"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_HitItem"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_HitBoneName"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_HitComponent"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_HitActor"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_PhysMat"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_ImpactNormal"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_Normal__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_Normal__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_Normal"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_ImpactPoint"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_Location__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_Location__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_Location"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_Time__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_Time__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_Time"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_bInitialOverlap"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakHitResult_bBlockingHit"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item2__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item2__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item2"));
				MetaData->SetValue(NewProp_b0l__CallFunc_SphereTraceMulti_OutHits__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_SphereTraceMulti_OutHits__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_SphereTraceMulti_OutHits"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakTransform_Scale__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakTransform_Scale__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakTransform_Scale"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakTransform_Rotation__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakTransform_Rotation__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakTransform_Rotation"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakTransform_Location__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakTransform_Location__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakTransform_Location"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Array_Index_Variable2__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Array_Index_Variable2__pf, TEXT("OverrideNativeName"), TEXT("Temp_int_Array_Index_Variable2"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Loop_Counter_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Loop_Counter_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_int_Loop_Counter_Variable"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_DeltaSeconds"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Array_Index_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__Temp_int_Array_Index_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_int_Array_Index_Variable"));
				MetaData->SetValue(NewProp_b0l__Temp_object_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_b0l__Temp_object_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_object_Variable"));
				MetaData->SetValue(NewProp_bpv__SuspensionxLength__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__SuspensionxLength__pfT, TEXT("DisplayName"), TEXT("Suspension Length"));
				MetaData->SetValue(NewProp_bpv__SuspensionxLength__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_bpv__SuspensionxLength__pfT, TEXT("OverrideNativeName"), TEXT("Suspension Length"));
				MetaData->SetValue(NewProp_bpv__Wheels__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Wheels__pf, TEXT("DisplayName"), TEXT("Wheels"));
				MetaData->SetValue(NewProp_bpv__Wheels__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_bpv__Wheels__pf, TEXT("OverrideNativeName"), TEXT("Wheels"));
				MetaData->SetValue(NewProp_bpv__Scene__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Scene__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Scene__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_bpv__Scene__pf, TEXT("OverrideNativeName"), TEXT("Scene"));
				MetaData->SetValue(NewProp_bpv__SkeletalMesh__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__SkeletalMesh__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__SkeletalMesh__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Test__pf2481680385.h"));
				MetaData->SetValue(NewProp_bpv__SkeletalMesh__pf, TEXT("OverrideNativeName"), TEXT("SkeletalMesh"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Test_C__pf2481680385, TEXT("BP_Test_C"), 4016751487);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Test_C__pf2481680385(Z_Construct_UClass_ABP_Test_C__pf2481680385, &ABP_Test_C__pf2481680385::StaticClass, TEXT("/Game/Vehicles/Test/BP_Test"), TEXT("BP_Test_C"), true, TEXT("/Game/Vehicles/Test/BP_Test"), TEXT("/Game/Vehicles/Test/BP_Test.BP_Test_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Test_C__pf2481680385);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
