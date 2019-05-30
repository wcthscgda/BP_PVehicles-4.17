// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BP_Passenger__pf3373537038.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Passenger__pf3373537038() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ExitxVehicle__pfT();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Passenger_C__pf3373537038();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__LookxAround__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ReceivePossessed__pf();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__Server_ExitxVehicle__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Passenger_C__pf3373537038_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABP_Passenger_C__pf3373537038_bpf__ReceivePossessed__pf = FName(TEXT("ReceivePossessed"));
	void ABP_Passenger_C__pf3373537038::eventbpf__ReceivePossessed__pf(AController* bpp__NewController__pf)
	{
		BP_Passenger_C__pf3373537038_eventbpf__ReceivePossessed__pf_Parms Parms;
		Parms.bpp__NewController__pf=bpp__NewController__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Passenger_C__pf3373537038_bpf__ReceivePossessed__pf),&Parms);
	}
	static FName NAME_ABP_Passenger_C__pf3373537038_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_Passenger_C__pf3373537038::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_Passenger_C__pf3373537038_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Passenger_C__pf3373537038_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_Passenger_C__pf3373537038_bpf__Server_ExitxVehicle__pfT = FName(TEXT("Server_Exit Vehicle"));
	void ABP_Passenger_C__pf3373537038::bpf__Server_ExitxVehicle__pfT()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Passenger_C__pf3373537038_bpf__Server_ExitxVehicle__pfT),NULL);
	}
	static FName NAME_ABP_Passenger_C__pf3373537038_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Passenger_C__pf3373537038::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Passenger_C__pf3373537038_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Passenger_C__pf3373537038::StaticRegisterNativesABP_Passenger_C__pf3373537038()
	{
		UClass* Class = ABP_Passenger_C__pf3373537038::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("Exit Vehicle"), (Native)&ABP_Passenger_C__pf3373537038::execbpf__ExitxVehicle__pfT },
			{ TEXT("InpActEvt_Interact_K2Node_InputActionEvent_1"), (Native)&ABP_Passenger_C__pf3373537038::execbpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf },
			{ TEXT("Look Around"), (Native)&ABP_Passenger_C__pf3373537038::execbpf__LookxAround__pfT },
			{ TEXT("ReceivePossessed"), (Native)&ABP_Passenger_C__pf3373537038::execbpf__ReceivePossessed__pf },
			{ TEXT("ReceiveTick"), (Native)&ABP_Passenger_C__pf3373537038::execbpf__ReceiveTick__pf },
			{ TEXT("Server_Exit Vehicle"), (Native)&ABP_Passenger_C__pf3373537038::execbpf__Server_ExitxVehicle__pfT },
			{ TEXT("UserConstructionScript"), (Native)&ABP_Passenger_C__pf3373537038::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ExitxVehicle__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Passenger_C__pf3373537038();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Exit Vehicle") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Exit Vehicle"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Exit Vehicle"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf()
	{
		struct BP_Passenger_C__pf3373537038_eventbpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		UObject* Outer = Z_Construct_UClass_ABP_Passenger_C__pf3373537038();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Interact_K2Node_InputActionEvent_1") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InpActEvt_Interact_K2Node_InputActionEvent_1"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535, sizeof(BP_Passenger_C__pf3373537038_eventbpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf_Parms));
			UProperty* NewProp_bpp__Key__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__Key__pf"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpp__Key__pf, BP_Passenger_C__pf3373537038_eventbpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FKey());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("InpActEvt_Interact_K2Node_InputActionEvent_1"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__LookxAround__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Passenger_C__pf3373537038();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Look Around") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Look Around"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Look Around"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ReceivePossessed__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Passenger_C__pf3373537038();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceivePossessed") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceivePossessed"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(BP_Passenger_C__pf3373537038_eventbpf__ReceivePossessed__pf_Parms));
			UProperty* NewProp_bpp__NewController__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__NewController__pf"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpp__NewController__pf, BP_Passenger_C__pf3373537038_eventbpf__ReceivePossessed__pf_Parms), 0x0010000000000080, Z_Construct_UClass_AController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Possessed"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceivePossessed"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event called when the Pawn is possessed by a Controller (normally only occurs on the server/standalone)."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Passenger_C__pf3373537038();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveTick"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(BP_Passenger_C__pf3373537038_eventbpf__ReceiveTick__pf_Parms));
			UProperty* NewProp_bpp__DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaSeconds__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__DeltaSeconds__pf, BP_Passenger_C__pf3373537038_eventbpf__ReceiveTick__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Tick"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveTick"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event called every frame"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__Server_ExitxVehicle__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Passenger_C__pf3373537038();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Server_Exit Vehicle") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Server_Exit Vehicle"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04220CC0, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Server_Exit Vehicle"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Passenger_C__pf3373537038();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Passenger_C__pf3373537038_NoRegister()
	{
		return ABP_Passenger_C__pf3373537038::StaticClass();
	}
	UClass* Z_Construct_UClass_ABP_Passenger_C__pf3373537038()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Vehicles/00_Master_Vehicle/BP_Passenger"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Passenger_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_APawn();
			OuterClass = ABP_Passenger_C__pf3373537038::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ExitxVehicle__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__LookxAround__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ReceivePossessed__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ReceiveTick__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__Server_ExitxVehicle__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__UserConstructionScript__pf());

				UProperty* NewProp_b0l__K2Node_Event_NewController__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_NewController"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_NewController__pf, ABP_Passenger_C__pf3373537038), 0x0010000000202000, Z_Construct_UClass_AController_NoRegister());
				UProperty* NewProp_b0l__K2Node_InputActionEvent_Key__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_InputActionEvent_Key"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__K2Node_InputActionEvent_Key__pf, ABP_Passenger_C__pf3373537038), 0x0010000000202000, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_b0l__K2Node_Event_DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_DeltaSeconds"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_DeltaSeconds__pf, ABP_Passenger_C__pf3373537038), 0x0010000000202000);
				UProperty* NewProp_bpv__CollisionxExtent__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Collision Extent"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__CollisionxExtent__pfT, ABP_Passenger_C__pf3373537038), 0x0011000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_bpv__CollisionxOffset__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Collision Offset"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__CollisionxOffset__pfT, ABP_Passenger_C__pf3373537038), 0x0011000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_bpv__Box__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Box"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Box__pf, ABP_Passenger_C__pf3373537038), 0x001000040008000c, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_bpv__SpringArm__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpringArm"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__SpringArm__pf, ABP_Passenger_C__pf3373537038), 0x001000040008000c, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_bpv__Camera__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Camera__pf, ABP_Passenger_C__pf3373537038), 0x001000040008000c, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_bpv__PlayerxLocation__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Player Location"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__PlayerxLocation__pfT, ABP_Passenger_C__pf3373537038), 0x001000040008000c, Z_Construct_UClass_UArrowComponent_NoRegister());
				UProperty* NewProp_bpv__SkeletalMesh__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SkeletalMesh"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__SkeletalMesh__pf, ABP_Passenger_C__pf3373537038), 0x001000040008000c, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ExitxVehicle__pfT(), TEXT("Exit Vehicle")); // 1062239592
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__InpActEvt_Interact_K2Node_InputActionEvent_1__pf(), TEXT("InpActEvt_Interact_K2Node_InputActionEvent_1")); // 619917776
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__LookxAround__pfT(), TEXT("Look Around")); // 2265627578
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ReceivePossessed__pf(), TEXT("ReceivePossessed")); // 4785884
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__ReceiveTick__pf(), TEXT("ReceiveTick")); // 2526919750
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__Server_ExitxVehicle__pfT(), TEXT("Server_Exit Vehicle")); // 3836396411
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Passenger_C__pf3373537038_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 2680672388
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABP_Passenger_C__pf3373537038> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("BP_Passenger_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Vehicles/00_Master_Vehicle/BP_Passenger.BP_Passenger_C"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_NewController__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_NewController__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_NewController"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputActionEvent_Key__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputActionEvent_Key__pf, TEXT("OverrideNativeName"), TEXT("K2Node_InputActionEvent_Key"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_DeltaSeconds"));
				MetaData->SetValue(NewProp_bpv__CollisionxExtent__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__CollisionxExtent__pfT, TEXT("DisplayName"), TEXT("Collision Extent"));
				MetaData->SetValue(NewProp_bpv__CollisionxExtent__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__CollisionxExtent__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(NewProp_bpv__CollisionxExtent__pfT, TEXT("OverrideNativeName"), TEXT("Collision Extent"));
				MetaData->SetValue(NewProp_bpv__CollisionxOffset__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__CollisionxOffset__pfT, TEXT("DisplayName"), TEXT("Collision Offset"));
				MetaData->SetValue(NewProp_bpv__CollisionxOffset__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__CollisionxOffset__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(NewProp_bpv__CollisionxOffset__pfT, TEXT("OverrideNativeName"), TEXT("Collision Offset"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(NewProp_bpv__Box__pf, TEXT("OverrideNativeName"), TEXT("Box"));
				MetaData->SetValue(NewProp_bpv__SpringArm__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__SpringArm__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__SpringArm__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(NewProp_bpv__SpringArm__pf, TEXT("OverrideNativeName"), TEXT("SpringArm"));
				MetaData->SetValue(NewProp_bpv__Camera__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Camera__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Camera__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(NewProp_bpv__Camera__pf, TEXT("OverrideNativeName"), TEXT("Camera"));
				MetaData->SetValue(NewProp_bpv__PlayerxLocation__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__PlayerxLocation__pfT, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__PlayerxLocation__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(NewProp_bpv__PlayerxLocation__pfT, TEXT("OverrideNativeName"), TEXT("Player Location"));
				MetaData->SetValue(NewProp_bpv__SkeletalMesh__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__SkeletalMesh__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__SkeletalMesh__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Passenger__pf3373537038.h"));
				MetaData->SetValue(NewProp_bpv__SkeletalMesh__pf, TEXT("OverrideNativeName"), TEXT("SkeletalMesh"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Passenger_C__pf3373537038, TEXT("BP_Passenger_C"), 2969975612);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Passenger_C__pf3373537038(Z_Construct_UClass_ABP_Passenger_C__pf3373537038, &ABP_Passenger_C__pf3373537038::StaticClass, TEXT("/Game/Vehicles/00_Master_Vehicle/BP_Passenger"), TEXT("BP_Passenger_C"), true, TEXT("/Game/Vehicles/00_Master_Vehicle/BP_Passenger"), TEXT("/Game/Vehicles/00_Master_Vehicle/BP_Passenger.BP_Passenger_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Passenger_C__pf3373537038);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
