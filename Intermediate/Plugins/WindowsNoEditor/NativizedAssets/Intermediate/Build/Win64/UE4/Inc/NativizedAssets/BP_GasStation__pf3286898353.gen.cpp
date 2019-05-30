// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BP_GasStation__pf3286898353.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_GasStation__pf3286898353() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_GasStation_C__pf3286898353();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__ClosexGate__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__OpenxGate__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__Use__pf();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_GasStation_C__pf3286898353_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AInteractable_Master_C__pf1010915279();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Master_Vehicle_C__pf3373537038_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABP_GasStation_C__pf3286898353_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_GasStation_C__pf3286898353::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_GasStation_C__pf3286898353_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_GasStation_C__pf3286898353_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_GasStation_C__pf3286898353_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_GasStation_C__pf3286898353::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_GasStation_C__pf3286898353_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_GasStation_C__pf3286898353::StaticRegisterNativesABP_GasStation_C__pf3286898353()
	{
		UClass* Class = ABP_GasStation_C__pf3286898353::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature"), (Native)&ABP_GasStation_C__pf3286898353::execbpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf },
			{ TEXT("Close Gate"), (Native)&ABP_GasStation_C__pf3286898353::execbpf__ClosexGate__pfT },
			{ TEXT("Open Gate"), (Native)&ABP_GasStation_C__pf3286898353::execbpf__OpenxGate__pfT },
			{ TEXT("ReceiveTick"), (Native)&ABP_GasStation_C__pf3286898353::execbpf__ReceiveTick__pf },
			{ TEXT("Use"), (Native)&ABP_GasStation_C__pf3286898353::execbpf__Use__pf },
			{ TEXT("UserConstructionScript"), (Native)&ABP_GasStation_C__pf3286898353::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf()
	{
		struct BP_GasStation_C__pf3286898353_eventbpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__OverlappedComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			int32 bpp__OtherBodyIndex__pf;
		};
		UObject* Outer = Z_Construct_UClass_ABP_GasStation_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535, sizeof(BP_GasStation_C__pf3286898353_eventbpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf_Parms));
			UProperty* NewProp_bpp__OtherBodyIndex__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherBodyIndex__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__OtherBodyIndex__pf, BP_GasStation_C__pf3286898353_eventbpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000000080);
			UProperty* NewProp_bpp__OtherComp__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherComp__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OtherComp__pf, BP_GasStation_C__pf3286898353_eventbpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_bpp__OtherActor__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherActor__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OtherActor__pf, BP_GasStation_C__pf3286898353_eventbpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_bpp__OverlappedComponent__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OverlappedComponent__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OverlappedComponent__pf, BP_GasStation_C__pf3286898353_eventbpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature"));
			MetaData->SetValue(NewProp_bpp__OtherComp__pf, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_bpp__OverlappedComponent__pf, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__ClosexGate__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_GasStation_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Close Gate") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Close Gate"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Close Gate"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__OpenxGate__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_GasStation_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Open Gate") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Open Gate"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Open Gate"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_GasStation_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveTick"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(BP_GasStation_C__pf3286898353_eventbpf__ReceiveTick__pf_Parms));
			UProperty* NewProp_bpp__DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaSeconds__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__DeltaSeconds__pf, BP_GasStation_C__pf3286898353_eventbpf__ReceiveTick__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Tick"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveTick"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event called every frame"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__Use__pf()
	{
		struct BP_GasStation_C__pf3286898353_eventbpf__Use__pf_Parms
		{
			UActorComponent* bpp__Component__pf;
		};
		UObject* Outer = Z_Construct_UClass_ABP_GasStation_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Use") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Use"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535, sizeof(BP_GasStation_C__pf3286898353_eventbpf__Use__pf_Parms));
			UProperty* NewProp_bpp__Component__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__Component__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__Component__pf, BP_GasStation_C__pf3286898353_eventbpf__Use__pf_Parms), 0x0010000000080080, Z_Construct_UClass_UActorComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Use"));
			MetaData->SetValue(NewProp_bpp__Component__pf, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_GasStation_C__pf3286898353();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_GasStation_C__pf3286898353_NoRegister()
	{
		return ABP_GasStation_C__pf3286898353::StaticClass();
	}
	UClass* Z_Construct_UClass_ABP_GasStation_C__pf3286898353()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Environment/BP_GasStation"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_GasStation_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_AInteractable_Master_C__pf1010915279();
			OuterClass = ABP_GasStation_C__pf3286898353::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__ClosexGate__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__OpenxGate__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__ReceiveTick__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__Use__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__UserConstructionScript__pf());

				UProperty* NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OtherBodyIndex"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf, ABP_GasStation_C__pf3286898353), 0x0010000000202000);
				UProperty* NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OtherComp"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b1l__K2Node_ComponentBoundEvent_OtherComp__pf, ABP_GasStation_C__pf3286898353), 0x0010000000282008, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				UProperty* NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OtherActor"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b1l__K2Node_ComponentBoundEvent_OtherActor__pf, ABP_GasStation_C__pf3286898353), 0x0010000000202000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OverlappedComponent"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf, ABP_GasStation_C__pf3286898353), 0x0010000000282008, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b1l__K2Node_DynamicCast_bSuccess__pf, ABP_GasStation_C__pf3286898353);
				UProperty* NewProp_b1l__K2Node_DynamicCast_bSuccess__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_bSuccess"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b1l__K2Node_DynamicCast_bSuccess__pf, ABP_GasStation_C__pf3286898353), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b1l__K2Node_DynamicCast_bSuccess__pf, ABP_GasStation_C__pf3286898353), sizeof(bool), true);
				UProperty* NewProp_b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_AsBP_Master_Vehicle"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf, ABP_GasStation_C__pf3286898353), 0x0010000000202000, Z_Construct_UClass_ABP_Master_Vehicle_C__pf3373537038_NoRegister());
				UProperty* NewProp_b1l__K2Node_Event_DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_DeltaSeconds"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b1l__K2Node_Event_DeltaSeconds__pf, ABP_GasStation_C__pf3286898353), 0x0010000000202000);
				UProperty* NewProp_b1l__CallFunc_Array_Get_Item__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b1l__CallFunc_Array_Get_Item__pf, ABP_GasStation_C__pf3286898353), 0x0010000000202000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_GetOverlappingActors_OverlappingActors"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, ABP_GasStation_C__pf3286898353), 0x0010000000202000);
				UProperty* NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner = new(EC_InternalUseOnlyConstructor, NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, TEXT("b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf"), RF_Public|RF_Transient) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_b1l__K2Node_Event_Component__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_Component"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b1l__K2Node_Event_Component__pf, ABP_GasStation_C__pf3286898353), 0x0010000000282008, Z_Construct_UClass_UActorComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b1l__Temp_bool_IsClosed_Variable__pf, ABP_GasStation_C__pf3286898353);
				UProperty* NewProp_b1l__Temp_bool_IsClosed_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_bool_IsClosed_Variable"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b1l__Temp_bool_IsClosed_Variable__pf, ABP_GasStation_C__pf3286898353), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b1l__Temp_bool_IsClosed_Variable__pf, ABP_GasStation_C__pf3286898353), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b1l__Temp_bool_Has_Been_Initd_Variable__pf, ABP_GasStation_C__pf3286898353);
				UProperty* NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_bool_Has_Been_Initd_Variable"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b1l__Temp_bool_Has_Been_Initd_Variable__pf, ABP_GasStation_C__pf3286898353), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b1l__Temp_bool_Has_Been_Initd_Variable__pf, ABP_GasStation_C__pf3286898353), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b1l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf, ABP_GasStation_C__pf3286898353);
				UProperty* NewProp_b1l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b1l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf, ABP_GasStation_C__pf3286898353), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b1l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf, ABP_GasStation_C__pf3286898353), sizeof(bool), true);
				UProperty* NewProp_bpv__StaticMesh__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StaticMesh"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__StaticMesh__pf, ABP_GasStation_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_bpv__Box__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Box"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Box__pf, ABP_GasStation_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_bpv__Box1__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Box1"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Box1__pf, ABP_GasStation_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_bpv__TextRender__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TextRender"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__TextRender__pf, ABP_GasStation_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_UTextRenderComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature__pf(), TEXT("BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature")); // 561005062
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__ClosexGate__pfT(), TEXT("Close Gate")); // 3973338579
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__OpenxGate__pfT(), TEXT("Open Gate")); // 3474977566
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__ReceiveTick__pf(), TEXT("ReceiveTick")); // 739596731
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__Use__pf(), TEXT("Use")); // 152653052
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_GasStation_C__pf3286898353_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 830186027
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABP_GasStation_C__pf3286898353> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("BP_GasStation_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Environment/BP_GasStation.BP_GasStation_C"));
				MetaData->SetValue(NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OtherBodyIndex"));
				MetaData->SetValue(NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OtherComp"));
				MetaData->SetValue(NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OtherActor"));
				MetaData->SetValue(NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OverlappedComponent"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_bSuccess__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_bSuccess__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_bSuccess"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_DynamicCast_AsBP_Master_Vehicle__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_AsBP_Master_Vehicle"));
				MetaData->SetValue(NewProp_b1l__K2Node_Event_DeltaSeconds__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_Event_DeltaSeconds__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_DeltaSeconds"));
				MetaData->SetValue(NewProp_b1l__CallFunc_Array_Get_Item__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__CallFunc_Array_Get_Item__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item"));
				MetaData->SetValue(NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_GetOverlappingActors_OverlappingActors"));
				MetaData->SetValue(NewProp_b1l__K2Node_Event_Component__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_b1l__K2Node_Event_Component__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__K2Node_Event_Component__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_Component"));
				MetaData->SetValue(NewProp_b1l__Temp_bool_IsClosed_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__Temp_bool_IsClosed_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_bool_IsClosed_Variable"));
				MetaData->SetValue(NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__Temp_bool_Has_Been_Initd_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_bool_Has_Been_Initd_Variable"));
				MetaData->SetValue(NewProp_b1l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_b1l__Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable__pf, TEXT("OverrideNativeName"), TEXT("Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable"));
				MetaData->SetValue(NewProp_bpv__StaticMesh__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__StaticMesh__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__StaticMesh__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__StaticMesh__pf, TEXT("OverrideNativeName"), TEXT("StaticMesh"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("OverrideNativeName"), TEXT("Box"));
				MetaData->SetValue(NewProp_bpv__Box1__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Box1__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Box1__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Box1__pf, TEXT("OverrideNativeName"), TEXT("Box1"));
				MetaData->SetValue(NewProp_bpv__TextRender__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__TextRender__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__TextRender__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_GasStation__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__TextRender__pf, TEXT("OverrideNativeName"), TEXT("TextRender"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_GasStation_C__pf3286898353, TEXT("BP_GasStation_C"), 2440056675);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_GasStation_C__pf3286898353(Z_Construct_UClass_ABP_GasStation_C__pf3286898353, &ABP_GasStation_C__pf3286898353::StaticClass, TEXT("/Game/Environment/BP_GasStation"), TEXT("BP_GasStation_C"), true, TEXT("/Game/Environment/BP_GasStation"), TEXT("/Game/Environment/BP_GasStation.BP_GasStation_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_GasStation_C__pf3286898353);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
