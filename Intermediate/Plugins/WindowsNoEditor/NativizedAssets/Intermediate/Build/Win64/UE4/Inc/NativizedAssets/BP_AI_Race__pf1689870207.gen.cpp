// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BP_AI_Race__pf1689870207.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_AI_Race__pf1689870207() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__Begin__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__CalculatexDesiredxSpeed__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__DetectxDrifting__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ExecuteUbergraph_BP_AI_Race__pf_1();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexSpeed__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexSteeringxAngle__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexTargetxWaypoint__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__PrintxDebugxVariables__pfTT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_AI_Race_C__pf1689870207_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Vehicle_Waypoint_C__pf1689870207_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Master_Vehicle_C__pf3373537038_NoRegister();
// End Cross Module References
	static FName NAME_ABP_AI_Race_C__pf1689870207_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_AI_Race_C__pf1689870207::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_AI_Race_C__pf1689870207_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABP_AI_Race_C__pf1689870207_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_AI_Race_C__pf1689870207::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_AI_Race_C__pf1689870207_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_AI_Race_C__pf1689870207_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_AI_Race_C__pf1689870207_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_AI_Race_C__pf1689870207::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_AI_Race_C__pf1689870207_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_AI_Race_C__pf1689870207::StaticRegisterNativesABP_AI_Race_C__pf1689870207()
	{
		UClass* Class = ABP_AI_Race_C__pf1689870207::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("Begin"), (Native)&ABP_AI_Race_C__pf1689870207::execbpf__Begin__pf },
			{ TEXT("Calculate Desired Speed"), (Native)&ABP_AI_Race_C__pf1689870207::execbpf__CalculatexDesiredxSpeed__pfTT },
			{ TEXT("Detect Drifting"), (Native)&ABP_AI_Race_C__pf1689870207::execbpf__DetectxDrifting__pfT },
			{ TEXT("ExecuteUbergraph_BP_AI_Race_1"), (Native)&ABP_AI_Race_C__pf1689870207::execbpf__ExecuteUbergraph_BP_AI_Race__pf_1 },
			{ TEXT("Handle Speed"), (Native)&ABP_AI_Race_C__pf1689870207::execbpf__HandlexSpeed__pfT },
			{ TEXT("Handle Steering Angle"), (Native)&ABP_AI_Race_C__pf1689870207::execbpf__HandlexSteeringxAngle__pfTT },
			{ TEXT("Handle Target Waypoint"), (Native)&ABP_AI_Race_C__pf1689870207::execbpf__HandlexTargetxWaypoint__pfTT },
			{ TEXT("Print Debug Variables"), (Native)&ABP_AI_Race_C__pf1689870207::execbpf__PrintxDebugxVariables__pfTT },
			{ TEXT("ReceiveBeginPlay"), (Native)&ABP_AI_Race_C__pf1689870207::execbpf__ReceiveBeginPlay__pf },
			{ TEXT("ReceiveTick"), (Native)&ABP_AI_Race_C__pf1689870207::execbpf__ReceiveTick__pf },
			{ TEXT("UserConstructionScript"), (Native)&ABP_AI_Race_C__pf1689870207::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__Begin__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Begin") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Begin"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Begin"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__CalculatexDesiredxSpeed__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Calculate Desired Speed") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Calculate Desired Speed"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Calculate Desired Speed"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__DetectxDrifting__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Detect Drifting") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Detect Drifting"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Detect Drifting"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ExecuteUbergraph_BP_AI_Race__pf_1()
	{
		struct BP_AI_Race_C__pf1689870207_eventbpf__ExecuteUbergraph_BP_AI_Race__pf_1_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_BP_AI_Race_1") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExecuteUbergraph_BP_AI_Race_1"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(BP_AI_Race_C__pf1689870207_eventbpf__ExecuteUbergraph_BP_AI_Race__pf_1_Parms));
			UProperty* NewProp_bpp__EntryPoint__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__EntryPoint__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__EntryPoint__pf, BP_AI_Race_C__pf1689870207_eventbpf__ExecuteUbergraph_BP_AI_Race__pf_1_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ExecuteUbergraph_BP_AI_Race_1"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexSpeed__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Handle Speed") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Handle Speed"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Handle Speed"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexSteeringxAngle__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Handle Steering Angle") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Handle Steering Angle"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Handle Steering Angle"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexTargetxWaypoint__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Handle Target Waypoint") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Handle Target Waypoint"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Handle Target Waypoint"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__PrintxDebugxVariables__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Print Debug Variables") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Print Debug Variables"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Print Debug Variables"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveBeginPlay"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("BeginPlay"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveBeginPlay"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event when play begins for this actor."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveTick"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(BP_AI_Race_C__pf1689870207_eventbpf__ReceiveTick__pf_Parms));
			UProperty* NewProp_bpp__DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaSeconds__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__DeltaSeconds__pf, BP_AI_Race_C__pf1689870207_eventbpf__ReceiveTick__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Tick"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveTick"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event called every frame"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_AI_Race_C__pf1689870207();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_AI_Race_C__pf1689870207_NoRegister()
	{
		return ABP_AI_Race_C__pf1689870207::StaticClass();
	}
	UClass* Z_Construct_UClass_ABP_AI_Race_C__pf1689870207()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Vehicles/BP_AI_Race"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_AI_Race_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_AAIController();
			OuterClass = ABP_AI_Race_C__pf1689870207::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800280u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__Begin__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__CalculatexDesiredxSpeed__pfTT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__DetectxDrifting__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ExecuteUbergraph_BP_AI_Race__pf_1());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexSpeed__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexSteeringxAngle__pfTT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexTargetxWaypoint__pfTT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__PrintxDebugxVariables__pfTT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ReceiveBeginPlay__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ReceiveTick__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__UserConstructionScript__pf());

				UProperty* NewProp_b0l__K2Node_Event_DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_DeltaSeconds"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_DeltaSeconds__pf, ABP_AI_Race_C__pf1689870207), 0x0010000000202000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__IsxDrifting__pfT, ABP_AI_Race_C__pf1689870207);
				UProperty* NewProp_bpv__IsxDrifting__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Is Drifting"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__IsxDrifting__pfT, ABP_AI_Race_C__pf1689870207), 0x0010000000010005, CPP_BOOL_PROPERTY_BITMASK(bpv__IsxDrifting__pfT, ABP_AI_Race_C__pf1689870207), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__IsxBraking__pfT, ABP_AI_Race_C__pf1689870207);
				UProperty* NewProp_bpv__IsxBraking__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Is Braking"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__IsxBraking__pfT, ABP_AI_Race_C__pf1689870207), 0x0010000000010005, CPP_BOOL_PROPERTY_BITMASK(bpv__IsxBraking__pfT, ABP_AI_Race_C__pf1689870207), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__IsxAccelerating__pfT, ABP_AI_Race_C__pf1689870207);
				UProperty* NewProp_bpv__IsxAccelerating__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Is Accelerating"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__IsxAccelerating__pfT, ABP_AI_Race_C__pf1689870207), 0x0010000000010005, CPP_BOOL_PROPERTY_BITMASK(bpv__IsxAccelerating__pfT, ABP_AI_Race_C__pf1689870207), sizeof(bool), true);
				UProperty* NewProp_bpv__DesiredxSpeed__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Desired Speed"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__DesiredxSpeed__pfT, ABP_AI_Race_C__pf1689870207), 0x0010000000010005);
				UProperty* NewProp_bpv__SteeringxAngle__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Steering Angle"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__SteeringxAngle__pfT, ABP_AI_Race_C__pf1689870207), 0x0010000000010005);
				UProperty* NewProp_bpv__MaximumxSteering__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Maximum Steering"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__MaximumxSteering__pfT, ABP_AI_Race_C__pf1689870207), 0x0010000000010005);
				UProperty* NewProp_bpv__WaypointxTargetxIndex__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Waypoint Target Index"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpv__WaypointxTargetxIndex__pfTT, ABP_AI_Race_C__pf1689870207), 0x0010000000010005);
				UProperty* NewProp_bpv__TargetxWaypoint__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Target Waypoint"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__TargetxWaypoint__pfT, ABP_AI_Race_C__pf1689870207), 0x0010000000010005, Z_Construct_UClass_ABP_Vehicle_Waypoint_C__pf1689870207_NoRegister());
				UProperty* NewProp_bpv__PreviousxWaypoint__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Previous Waypoint"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__PreviousxWaypoint__pfT, ABP_AI_Race_C__pf1689870207), 0x0010000000010005, Z_Construct_UClass_ABP_Vehicle_Waypoint_C__pf1689870207_NoRegister());
				UProperty* NewProp_bpv__WaypointxList__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Waypoint List"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(bpv__WaypointxList__pfT, ABP_AI_Race_C__pf1689870207), 0x0010000000010005);
				UProperty* NewProp_bpv__WaypointxList__pfT_Inner = new(EC_InternalUseOnlyConstructor, NewProp_bpv__WaypointxList__pfT, TEXT("bpv__WaypointxList__pfT"), RF_Public|RF_Transient) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_ABP_Vehicle_Waypoint_C__pf1689870207_NoRegister());
				UProperty* NewProp_bpv__Vehicle__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Vehicle"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Vehicle__pf, ABP_AI_Race_C__pf1689870207), 0x0010000000010005, Z_Construct_UClass_ABP_Master_Vehicle_C__pf3373537038_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__Begin__pf(), TEXT("Begin")); // 393880840
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__CalculatexDesiredxSpeed__pfTT(), TEXT("Calculate Desired Speed")); // 2330447288
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__DetectxDrifting__pfT(), TEXT("Detect Drifting")); // 4146798689
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ExecuteUbergraph_BP_AI_Race__pf_1(), TEXT("ExecuteUbergraph_BP_AI_Race_1")); // 3366598204
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexSpeed__pfT(), TEXT("Handle Speed")); // 2032437519
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexSteeringxAngle__pfTT(), TEXT("Handle Steering Angle")); // 3216524085
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__HandlexTargetxWaypoint__pfTT(), TEXT("Handle Target Waypoint")); // 3162811418
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__PrintxDebugxVariables__pfTT(), TEXT("Print Debug Variables")); // 1546259123
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ReceiveBeginPlay__pf(), TEXT("ReceiveBeginPlay")); // 3482465836
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__ReceiveTick__pf(), TEXT("ReceiveTick")); // 2149119180
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_AI_Race_C__pf1689870207_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 1542534991
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABP_AI_Race_C__pf1689870207> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("BP_AI_Race_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Vehicles/BP_AI_Race.BP_AI_Race_C"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_DeltaSeconds"));
				MetaData->SetValue(NewProp_bpv__IsxDrifting__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__IsxDrifting__pfT, TEXT("DisplayName"), TEXT("Is Drifting"));
				MetaData->SetValue(NewProp_bpv__IsxDrifting__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__IsxDrifting__pfT, TEXT("OverrideNativeName"), TEXT("Is Drifting"));
				MetaData->SetValue(NewProp_bpv__IsxBraking__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__IsxBraking__pfT, TEXT("DisplayName"), TEXT("Is Braking"));
				MetaData->SetValue(NewProp_bpv__IsxBraking__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__IsxBraking__pfT, TEXT("OverrideNativeName"), TEXT("Is Braking"));
				MetaData->SetValue(NewProp_bpv__IsxAccelerating__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__IsxAccelerating__pfT, TEXT("DisplayName"), TEXT("Is Accelerating"));
				MetaData->SetValue(NewProp_bpv__IsxAccelerating__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__IsxAccelerating__pfT, TEXT("OverrideNativeName"), TEXT("Is Accelerating"));
				MetaData->SetValue(NewProp_bpv__DesiredxSpeed__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__DesiredxSpeed__pfT, TEXT("DisplayName"), TEXT("Desired Speed"));
				MetaData->SetValue(NewProp_bpv__DesiredxSpeed__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__DesiredxSpeed__pfT, TEXT("OverrideNativeName"), TEXT("Desired Speed"));
				MetaData->SetValue(NewProp_bpv__SteeringxAngle__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__SteeringxAngle__pfT, TEXT("DisplayName"), TEXT("Steering Angle"));
				MetaData->SetValue(NewProp_bpv__SteeringxAngle__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__SteeringxAngle__pfT, TEXT("OverrideNativeName"), TEXT("Steering Angle"));
				MetaData->SetValue(NewProp_bpv__MaximumxSteering__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__MaximumxSteering__pfT, TEXT("DisplayName"), TEXT("Maximum Steering"));
				MetaData->SetValue(NewProp_bpv__MaximumxSteering__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__MaximumxSteering__pfT, TEXT("OverrideNativeName"), TEXT("Maximum Steering"));
				MetaData->SetValue(NewProp_bpv__WaypointxTargetxIndex__pfTT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__WaypointxTargetxIndex__pfTT, TEXT("DisplayName"), TEXT("Waypoint Target Index"));
				MetaData->SetValue(NewProp_bpv__WaypointxTargetxIndex__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__WaypointxTargetxIndex__pfTT, TEXT("OverrideNativeName"), TEXT("Waypoint Target Index"));
				MetaData->SetValue(NewProp_bpv__TargetxWaypoint__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__TargetxWaypoint__pfT, TEXT("DisplayName"), TEXT("Target Waypoint"));
				MetaData->SetValue(NewProp_bpv__TargetxWaypoint__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__TargetxWaypoint__pfT, TEXT("OverrideNativeName"), TEXT("Target Waypoint"));
				MetaData->SetValue(NewProp_bpv__PreviousxWaypoint__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__PreviousxWaypoint__pfT, TEXT("DisplayName"), TEXT("Previous Waypoint"));
				MetaData->SetValue(NewProp_bpv__PreviousxWaypoint__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__PreviousxWaypoint__pfT, TEXT("OverrideNativeName"), TEXT("Previous Waypoint"));
				MetaData->SetValue(NewProp_bpv__WaypointxList__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__WaypointxList__pfT, TEXT("DisplayName"), TEXT("Waypoint List"));
				MetaData->SetValue(NewProp_bpv__WaypointxList__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__WaypointxList__pfT, TEXT("OverrideNativeName"), TEXT("Waypoint List"));
				MetaData->SetValue(NewProp_bpv__Vehicle__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Vehicle__pf, TEXT("DisplayName"), TEXT("Vehicle"));
				MetaData->SetValue(NewProp_bpv__Vehicle__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_AI_Race__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__Vehicle__pf, TEXT("OverrideNativeName"), TEXT("Vehicle"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_AI_Race_C__pf1689870207, TEXT("BP_AI_Race_C"), 839125735);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_AI_Race_C__pf1689870207(Z_Construct_UClass_ABP_AI_Race_C__pf1689870207, &ABP_AI_Race_C__pf1689870207::StaticClass, TEXT("/Game/Vehicles/BP_AI_Race"), TEXT("BP_AI_Race_C"), true, TEXT("/Game/Vehicles/BP_AI_Race"), TEXT("/Game/Vehicles/BP_AI_Race.BP_AI_Race_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_AI_Race_C__pf1689870207);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
