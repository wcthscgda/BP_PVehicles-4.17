// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BP_Water_Volume__pf3286898353.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Water_Volume__pf3286898353() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Water_Volume_C__pf3286898353();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__FloatxActors__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__UprightxActors__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Water_Volume_C__pf3286898353_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABP_Water_Volume_C__pf3286898353_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_Water_Volume_C__pf3286898353::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_Water_Volume_C__pf3286898353_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Water_Volume_C__pf3286898353_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_Water_Volume_C__pf3286898353_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Water_Volume_C__pf3286898353::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Water_Volume_C__pf3286898353_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Water_Volume_C__pf3286898353::StaticRegisterNativesABP_Water_Volume_C__pf3286898353()
	{
		UClass* Class = ABP_Water_Volume_C__pf3286898353::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"), (Native)&ABP_Water_Volume_C__pf3286898353::execbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf },
			{ TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"), (Native)&ABP_Water_Volume_C__pf3286898353::execbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf },
			{ TEXT("Float Actors"), (Native)&ABP_Water_Volume_C__pf3286898353::execbpf__FloatxActors__pfT },
			{ TEXT("ReceiveTick"), (Native)&ABP_Water_Volume_C__pf3286898353::execbpf__ReceiveTick__pf },
			{ TEXT("Upright Actors"), (Native)&ABP_Water_Volume_C__pf3286898353::execbpf__UprightxActors__pfT },
			{ TEXT("UserConstructionScript"), (Native)&ABP_Water_Volume_C__pf3286898353::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf()
	{
		struct BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__OverlappedComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			int32 bpp__OtherBodyIndex__pf;
			bool bpp__bFromSweep__pf;
			FHitResult bpp__SweepResult__pf__const;
		};
		UObject* Outer = Z_Construct_UClass_ABP_Water_Volume_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00420400, 65535, sizeof(BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms));
			UProperty* NewProp_bpp__SweepResult__pf__const = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__SweepResult__pf__const"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpp__SweepResult__pf__const, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpp__bFromSweep__pf, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms);
			UProperty* NewProp_bpp__bFromSweep__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__bFromSweep__pf"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpp__bFromSweep__pf, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bpp__bFromSweep__pf, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), sizeof(bool), true);
			UProperty* NewProp_bpp__OtherBodyIndex__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherBodyIndex__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__OtherBodyIndex__pf, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000000080);
			UProperty* NewProp_bpp__OtherComp__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherComp__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OtherComp__pf, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_bpp__OtherActor__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherActor__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OtherActor__pf, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_bpp__OverlappedComponent__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OverlappedComponent__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OverlappedComponent__pf, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("out"));
			MetaData->SetValue(NewProp_bpp__SweepResult__pf__const, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_bpp__OtherComp__pf, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_bpp__OverlappedComponent__pf, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf()
	{
		struct BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__OverlappedComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			int32 bpp__OtherBodyIndex__pf;
		};
		UObject* Outer = Z_Construct_UClass_ABP_Water_Volume_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535, sizeof(BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms));
			UProperty* NewProp_bpp__OtherBodyIndex__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherBodyIndex__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__OtherBodyIndex__pf, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000000080);
			UProperty* NewProp_bpp__OtherComp__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherComp__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OtherComp__pf, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_bpp__OtherActor__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OtherActor__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OtherActor__pf, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_bpp__OverlappedComponent__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__OverlappedComponent__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__OverlappedComponent__pf, BP_Water_Volume_C__pf3286898353_eventbpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
			MetaData->SetValue(NewProp_bpp__OtherComp__pf, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_bpp__OverlappedComponent__pf, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__FloatxActors__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Water_Volume_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Float Actors") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Float Actors"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Float Actors"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Water_Volume_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveTick"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(BP_Water_Volume_C__pf3286898353_eventbpf__ReceiveTick__pf_Parms));
			UProperty* NewProp_bpp__DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaSeconds__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__DeltaSeconds__pf, BP_Water_Volume_C__pf3286898353_eventbpf__ReceiveTick__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Tick"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveTick"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event called every frame"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__UprightxActors__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Water_Volume_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Upright Actors") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Upright Actors"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Upright Actors"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Water_Volume_C__pf3286898353();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Water_Volume_C__pf3286898353_NoRegister()
	{
		return ABP_Water_Volume_C__pf3286898353::StaticClass();
	}
	UClass* Z_Construct_UClass_ABP_Water_Volume_C__pf3286898353()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Environment/BP_Water_Volume"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Water_Volume_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_AActor();
			OuterClass = ABP_Water_Volume_C__pf3286898353::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__FloatxActors__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__ReceiveTick__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__UprightxActors__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__UserConstructionScript__pf());

				UProperty* NewProp_b0l__K2Node_Event_DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_DeltaSeconds"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_DeltaSeconds__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000202000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__K2Node_DynamicCast_bSuccess__pf, ABP_Water_Volume_C__pf3286898353);
				UProperty* NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_bSuccess"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__K2Node_DynamicCast_bSuccess__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__K2Node_DynamicCast_bSuccess__pf, ABP_Water_Volume_C__pf3286898353), sizeof(bool), true);
				UProperty* NewProp_b0l__K2Node_DynamicCast_AsPawn__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_AsPawn"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_DynamicCast_AsPawn__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000202000, Z_Construct_UClass_APawn_NoRegister());
				UProperty* NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OtherBodyIndex"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000202000);
				UProperty* NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OtherComp"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_ComponentBoundEvent_OtherComp__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000282008, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				UProperty* NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OtherActor"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_ComponentBoundEvent_OtherActor__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000202000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OverlappedComponent"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000282008, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				UProperty* NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_SweepResult"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__K2Node_ComponentBoundEvent_SweepResult__pf, ABP_Water_Volume_C__pf3286898353), 0x0010008000202000, Z_Construct_UScriptStruct_FHitResult());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__K2Node_ComponentBoundEvent_bFromSweep__pf, ABP_Water_Volume_C__pf3286898353);
				UProperty* NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_bFromSweep"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__K2Node_ComponentBoundEvent_bFromSweep__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__K2Node_ComponentBoundEvent_bFromSweep__pf, ABP_Water_Volume_C__pf3286898353), sizeof(bool), true);
				UProperty* NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OtherBodyIndex2"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000202000);
				UProperty* NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OtherComp2"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_ComponentBoundEvent_OtherComp2__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000282008, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				UProperty* NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OtherActor2"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_ComponentBoundEvent_OtherActor2__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000202000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_ComponentBoundEvent_OverlappedComponent2"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf, ABP_Water_Volume_C__pf3286898353), 0x0010000000282008, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				UProperty* NewProp_bpv__OverlapxComponents__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Overlap Components"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(bpv__OverlapxComponents__pfT, ABP_Water_Volume_C__pf3286898353), 0x001000800001000d);
				UProperty* NewProp_bpv__OverlapxComponents__pfT_Inner = new(EC_InternalUseOnlyConstructor, NewProp_bpv__OverlapxComponents__pfT, TEXT("bpv__OverlapxComponents__pfT"), RF_Public|RF_Transient) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080008, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
				UProperty* NewProp_bpv__FloatxOffset__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Float Offset"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__FloatxOffset__pfT, ABP_Water_Volume_C__pf3286898353), 0x0010000000010005);
				UProperty* NewProp_bpv__WaterxColorxShallow__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Water Color Shallow"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__WaterxColorxShallow__pfTT, ABP_Water_Volume_C__pf3286898353), 0x0011000000000005, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_bpv__WaterxColorxDeep__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Water Color Deep"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__WaterxColorxDeep__pfTT, ABP_Water_Volume_C__pf3286898353), 0x0011000000000005, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_bpv__WaterxColorxB__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Water Color B"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__WaterxColorxB__pfTT, ABP_Water_Volume_C__pf3286898353), 0x0011000000000005, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_bpv__WaterxColorxA__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Water Color A"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__WaterxColorxA__pfTT, ABP_Water_Volume_C__pf3286898353), 0x0011000000000005, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_bpv__WaterxDepth__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Water Depth"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__WaterxDepth__pfT, ABP_Water_Volume_C__pf3286898353), 0x0011000000000005);
				UProperty* NewProp_bpv__VariationxAmmount__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Variation Ammount"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__VariationxAmmount__pfT, ABP_Water_Volume_C__pf3286898353), 0x0011000000000005);
				UProperty* NewProp_bpv__WaterxScale__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Water Scale"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__WaterxScale__pfT, ABP_Water_Volume_C__pf3286898353), 0x0011000000000005);
				UProperty* NewProp_bpv__BasexOpacity__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Base Opacity"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__BasexOpacity__pfT, ABP_Water_Volume_C__pf3286898353), 0x0011000000000005);
				UProperty* NewProp_bpv__WavexSpeed__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Wave Speed"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__WavexSpeed__pfT, ABP_Water_Volume_C__pf3286898353), 0x0011000000000005);
				UProperty* NewProp_bpv__ShorexDepth__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Shore Depth"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__ShorexDepth__pfT, ABP_Water_Volume_C__pf3286898353), 0x0011000000000005);
				UProperty* NewProp_bpv__VolumexExtent__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Volume Extent"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__VolumexExtent__pfT, ABP_Water_Volume_C__pf3286898353), 0x0011000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_bpv__WaterxMaterial__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Water Material"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__WaterxMaterial__pfT, ABP_Water_Volume_C__pf3286898353), 0x0010000000010005, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister());
				UProperty* NewProp_bpv__Box__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Box"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Box__pf, ABP_Water_Volume_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_bpv__WaterPlane__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaterPlane"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__WaterPlane__pf, ABP_Water_Volume_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_bpv__PostProcess__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PostProcess"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__PostProcess__pf, ABP_Water_Volume_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_UPostProcessComponent_NoRegister());
				UProperty* NewProp_bpv__Decal__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Decal"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Decal__pf, ABP_Water_Volume_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_UDecalComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(), TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature")); // 835789192
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(), TEXT("BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature")); // 3539210749
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__FloatxActors__pfT(), TEXT("Float Actors")); // 1829614860
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__ReceiveTick__pf(), TEXT("ReceiveTick")); // 4032099581
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__UprightxActors__pfT(), TEXT("Upright Actors")); // 3997430151
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Water_Volume_C__pf3286898353_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 2071372266
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABP_Water_Volume_C__pf3286898353> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("BP_Water_Volume_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Environment/BP_Water_Volume.BP_Water_Volume_C"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_DeltaSeconds"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_bSuccess"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsPawn__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsPawn__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_AsPawn"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OtherBodyIndex"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OtherComp"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OtherActor"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OverlappedComponent"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_SweepResult"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_bFromSweep"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OtherBodyIndex2"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp2__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp2__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp2__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OtherComp2"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor2__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor2__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OtherActor2"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf, TEXT("OverrideNativeName"), TEXT("K2Node_ComponentBoundEvent_OverlappedComponent2"));
				MetaData->SetValue(NewProp_bpv__OverlapxComponents__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__OverlapxComponents__pfT, TEXT("DisplayName"), TEXT("Overlap Components"));
				MetaData->SetValue(NewProp_bpv__OverlapxComponents__pfT, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__OverlapxComponents__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__OverlapxComponents__pfT, TEXT("OverrideNativeName"), TEXT("Overlap Components"));
				MetaData->SetValue(NewProp_bpv__FloatxOffset__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__FloatxOffset__pfT, TEXT("DisplayName"), TEXT("Float Offset"));
				MetaData->SetValue(NewProp_bpv__FloatxOffset__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__FloatxOffset__pfT, TEXT("OverrideNativeName"), TEXT("Float Offset"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxShallow__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxShallow__pfTT, TEXT("DisplayName"), TEXT("Water Color Shallow"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxShallow__pfTT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxShallow__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxShallow__pfTT, TEXT("OverrideNativeName"), TEXT("Water Color Shallow"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxDeep__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxDeep__pfTT, TEXT("DisplayName"), TEXT("Water Color Deep"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxDeep__pfTT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxDeep__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxDeep__pfTT, TEXT("OverrideNativeName"), TEXT("Water Color Deep"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxB__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxB__pfTT, TEXT("DisplayName"), TEXT("Water Color B"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxB__pfTT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxB__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxB__pfTT, TEXT("OverrideNativeName"), TEXT("Water Color B"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxA__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxA__pfTT, TEXT("DisplayName"), TEXT("Water Color A"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxA__pfTT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxA__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__WaterxColorxA__pfTT, TEXT("OverrideNativeName"), TEXT("Water Color A"));
				MetaData->SetValue(NewProp_bpv__WaterxDepth__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__WaterxDepth__pfT, TEXT("DisplayName"), TEXT("Water Depth"));
				MetaData->SetValue(NewProp_bpv__WaterxDepth__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__WaterxDepth__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__WaterxDepth__pfT, TEXT("OverrideNativeName"), TEXT("Water Depth"));
				MetaData->SetValue(NewProp_bpv__VariationxAmmount__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__VariationxAmmount__pfT, TEXT("DisplayName"), TEXT("Variation Ammount"));
				MetaData->SetValue(NewProp_bpv__VariationxAmmount__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__VariationxAmmount__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__VariationxAmmount__pfT, TEXT("OverrideNativeName"), TEXT("Variation Ammount"));
				MetaData->SetValue(NewProp_bpv__WaterxScale__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__WaterxScale__pfT, TEXT("DisplayName"), TEXT("Water Scale"));
				MetaData->SetValue(NewProp_bpv__WaterxScale__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__WaterxScale__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__WaterxScale__pfT, TEXT("OverrideNativeName"), TEXT("Water Scale"));
				MetaData->SetValue(NewProp_bpv__BasexOpacity__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__BasexOpacity__pfT, TEXT("DisplayName"), TEXT("Base Opacity"));
				MetaData->SetValue(NewProp_bpv__BasexOpacity__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__BasexOpacity__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__BasexOpacity__pfT, TEXT("OverrideNativeName"), TEXT("Base Opacity"));
				MetaData->SetValue(NewProp_bpv__WavexSpeed__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__WavexSpeed__pfT, TEXT("DisplayName"), TEXT("Wave Speed"));
				MetaData->SetValue(NewProp_bpv__WavexSpeed__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__WavexSpeed__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__WavexSpeed__pfT, TEXT("OverrideNativeName"), TEXT("Wave Speed"));
				MetaData->SetValue(NewProp_bpv__ShorexDepth__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__ShorexDepth__pfT, TEXT("DisplayName"), TEXT("Shore Depth"));
				MetaData->SetValue(NewProp_bpv__ShorexDepth__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__ShorexDepth__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__ShorexDepth__pfT, TEXT("OverrideNativeName"), TEXT("Shore Depth"));
				MetaData->SetValue(NewProp_bpv__VolumexExtent__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__VolumexExtent__pfT, TEXT("DisplayName"), TEXT("Volume Extent"));
				MetaData->SetValue(NewProp_bpv__VolumexExtent__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__VolumexExtent__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__VolumexExtent__pfT, TEXT("OverrideNativeName"), TEXT("Volume Extent"));
				MetaData->SetValue(NewProp_bpv__WaterxMaterial__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__WaterxMaterial__pfT, TEXT("DisplayName"), TEXT("Water Material"));
				MetaData->SetValue(NewProp_bpv__WaterxMaterial__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__WaterxMaterial__pfT, TEXT("OverrideNativeName"), TEXT("Water Material"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("OverrideNativeName"), TEXT("Box"));
				MetaData->SetValue(NewProp_bpv__WaterPlane__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__WaterPlane__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__WaterPlane__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__WaterPlane__pf, TEXT("OverrideNativeName"), TEXT("WaterPlane"));
				MetaData->SetValue(NewProp_bpv__PostProcess__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__PostProcess__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__PostProcess__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__PostProcess__pf, TEXT("OverrideNativeName"), TEXT("PostProcess"));
				MetaData->SetValue(NewProp_bpv__Decal__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Decal__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Decal__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Water_Volume__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Decal__pf, TEXT("OverrideNativeName"), TEXT("Decal"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Water_Volume_C__pf3286898353, TEXT("BP_Water_Volume_C"), 3618654354);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Water_Volume_C__pf3286898353(Z_Construct_UClass_ABP_Water_Volume_C__pf3286898353, &ABP_Water_Volume_C__pf3286898353::StaticClass, TEXT("/Game/Environment/BP_Water_Volume"), TEXT("BP_Water_Volume_C"), true, TEXT("/Game/Environment/BP_Water_Volume"), TEXT("/Game/Environment/BP_Water_Volume.BP_Water_Volume_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Water_Volume_C__pf3286898353);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
