// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BP_Controller__pf4061722237.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Controller__pf4061722237() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Hide_PausexMenu__pfT();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Controller_C__pf4061722237();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Hide_PlayerxHUD__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__ReceiveTick__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Show_PausexMenu__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Show_PlayerxHUD__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Controller_C__pf4061722237_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Physic_Pawn_C__pf4061722237_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPause_Menu_C__pf1863595755_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPlayer_HUD_C__pf1863595755_NoRegister();
// End Cross Module References
	static FName NAME_ABP_Controller_C__pf4061722237_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_Controller_C__pf4061722237::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_Controller_C__pf4061722237_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_Controller_C__pf4061722237_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_Controller_C__pf4061722237_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Controller_C__pf4061722237::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Controller_C__pf4061722237_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Controller_C__pf4061722237::StaticRegisterNativesABP_Controller_C__pf4061722237()
	{
		UClass* Class = ABP_Controller_C__pf4061722237::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("Hide_Pause Menu"), (Native)&ABP_Controller_C__pf4061722237::execbpf__Hide_PausexMenu__pfT },
			{ TEXT("Hide_Player HUD"), (Native)&ABP_Controller_C__pf4061722237::execbpf__Hide_PlayerxHUD__pfT },
			{ TEXT("InpActEvt_Escape_K2Node_InputKeyEvent_1"), (Native)&ABP_Controller_C__pf4061722237::execbpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf },
			{ TEXT("ReceiveTick"), (Native)&ABP_Controller_C__pf4061722237::execbpf__ReceiveTick__pf },
			{ TEXT("Show_Pause Menu"), (Native)&ABP_Controller_C__pf4061722237::execbpf__Show_PausexMenu__pfT },
			{ TEXT("Show_Player HUD"), (Native)&ABP_Controller_C__pf4061722237::execbpf__Show_PlayerxHUD__pfT },
			{ TEXT("UserConstructionScript"), (Native)&ABP_Controller_C__pf4061722237::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Hide_PausexMenu__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Controller_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Hide_Pause Menu") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Hide_Pause Menu"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Hide_Pause Menu"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Hide_PlayerxHUD__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Controller_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Hide_Player HUD") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Hide_Player HUD"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Hide_Player HUD"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf()
	{
		struct BP_Controller_C__pf4061722237_eventbpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		UObject* Outer = Z_Construct_UClass_ABP_Controller_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_Escape_K2Node_InputKeyEvent_1") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InpActEvt_Escape_K2Node_InputKeyEvent_1"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535, sizeof(BP_Controller_C__pf4061722237_eventbpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf_Parms));
			UProperty* NewProp_bpp__Key__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__Key__pf"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpp__Key__pf, BP_Controller_C__pf4061722237_eventbpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FKey());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("InpActEvt_Escape_K2Node_InputKeyEvent_1"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Controller_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveTick"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535, sizeof(BP_Controller_C__pf4061722237_eventbpf__ReceiveTick__pf_Parms));
			UProperty* NewProp_bpp__DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__DeltaSeconds__pf"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpp__DeltaSeconds__pf, BP_Controller_C__pf4061722237_eventbpf__ReceiveTick__pf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Tick"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveTick"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event called every frame"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Show_PausexMenu__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Controller_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Show_Pause Menu") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Show_Pause Menu"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Show_Pause Menu"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Show_PlayerxHUD__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Controller_C__pf4061722237();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Show_Player HUD") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Show_Player HUD"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Show_Player HUD"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Controller_C__pf4061722237();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Controller_C__pf4061722237_NoRegister()
	{
		return ABP_Controller_C__pf4061722237::StaticClass();
	}
	UClass* Z_Construct_UClass_ABP_Controller_C__pf4061722237()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Player/BP_Controller"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Controller_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_APlayerController();
			OuterClass = ABP_Controller_C__pf4061722237::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800284u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Hide_PausexMenu__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Hide_PlayerxHUD__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__ReceiveTick__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Show_PausexMenu__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Show_PlayerxHUD__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__UserConstructionScript__pf());

				UProperty* NewProp_b0l__CallFunc_BreakDateTime_Millisecond__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakDateTime_Millisecond"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakDateTime_Millisecond__pf, ABP_Controller_C__pf4061722237), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakDateTime_Second__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakDateTime_Second"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakDateTime_Second__pf, ABP_Controller_C__pf4061722237), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakDateTime_Minute__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakDateTime_Minute"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakDateTime_Minute__pf, ABP_Controller_C__pf4061722237), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakDateTime_Hour__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakDateTime_Hour"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakDateTime_Hour__pf, ABP_Controller_C__pf4061722237), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakDateTime_Day__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakDateTime_Day"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakDateTime_Day__pf, ABP_Controller_C__pf4061722237), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakDateTime_Month__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakDateTime_Month"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakDateTime_Month__pf, ABP_Controller_C__pf4061722237), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakDateTime_Year__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakDateTime_Year"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakDateTime_Year__pf, ABP_Controller_C__pf4061722237), 0x0010000000202000);
				UProperty* NewProp_b0l__K2Node_Event_DeltaSeconds__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_Event_DeltaSeconds"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__K2Node_Event_DeltaSeconds__pf, ABP_Controller_C__pf4061722237), 0x0010000000202000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__K2Node_DynamicCast_bSuccess__pf, ABP_Controller_C__pf4061722237);
				UProperty* NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_bSuccess"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__K2Node_DynamicCast_bSuccess__pf, ABP_Controller_C__pf4061722237), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__K2Node_DynamicCast_bSuccess__pf, ABP_Controller_C__pf4061722237), sizeof(bool), true);
				UProperty* NewProp_b0l__K2Node_DynamicCast_AsBP_Physic_Pawn__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_AsBP_Physic_Pawn"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_DynamicCast_AsBP_Physic_Pawn__pf, ABP_Controller_C__pf4061722237), 0x0010000000202000, Z_Construct_UClass_ABP_Physic_Pawn_C__pf4061722237_NoRegister());
				UProperty* NewProp_b0l__K2Node_InputKeyEvent_Key__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_InputKeyEvent_Key"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__K2Node_InputKeyEvent_Key__pf, ABP_Controller_C__pf4061722237), 0x0010000000202000, Z_Construct_UScriptStruct_FKey());
				UProperty* NewProp_bpv__PausexMenu__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Pause Menu"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__PausexMenu__pfT, ABP_Controller_C__pf4061722237), 0x001000000009000d, Z_Construct_UClass_UPause_Menu_C__pf1863595755_NoRegister());
				UProperty* NewProp_bpv__PlayerxHUD__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Player HUD"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__PlayerxHUD__pfT, ABP_Controller_C__pf4061722237), 0x001000000009000d, Z_Construct_UClass_UPlayer_HUD_C__pf1863595755_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Hide_PausexMenu__pfT(), TEXT("Hide_Pause Menu")); // 2049469372
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Hide_PlayerxHUD__pfT(), TEXT("Hide_Player HUD")); // 1408619818
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__InpActEvt_Escape_K2Node_InputKeyEvent_1__pf(), TEXT("InpActEvt_Escape_K2Node_InputKeyEvent_1")); // 1110271605
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__ReceiveTick__pf(), TEXT("ReceiveTick")); // 698846001
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Show_PausexMenu__pfT(), TEXT("Show_Pause Menu")); // 4023887579
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__Show_PlayerxHUD__pfT(), TEXT("Show_Player HUD")); // 3322550349
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Controller_C__pf4061722237_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 1139473636
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABP_Controller_C__pf4061722237> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BP_Controller__pf4061722237.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("BP_Controller_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Player/BP_Controller.BP_Controller_C"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Millisecond__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Millisecond__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakDateTime_Millisecond"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Second__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Second__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakDateTime_Second"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Minute__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Minute__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakDateTime_Minute"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Hour__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Hour__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakDateTime_Hour"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Day__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Day__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakDateTime_Day"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Month__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Month__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakDateTime_Month"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Year__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakDateTime_Year__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakDateTime_Year"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_Event_DeltaSeconds__pf, TEXT("OverrideNativeName"), TEXT("K2Node_Event_DeltaSeconds"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_bSuccess"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsBP_Physic_Pawn__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsBP_Physic_Pawn__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_AsBP_Physic_Pawn"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputKeyEvent_Key__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_InputKeyEvent_Key__pf, TEXT("OverrideNativeName"), TEXT("K2Node_InputKeyEvent_Key"));
				MetaData->SetValue(NewProp_bpv__PausexMenu__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__PausexMenu__pfT, TEXT("DisplayName"), TEXT("Pause Menu"));
				MetaData->SetValue(NewProp_bpv__PausexMenu__pfT, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__PausexMenu__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_bpv__PausexMenu__pfT, TEXT("OverrideNativeName"), TEXT("Pause Menu"));
				MetaData->SetValue(NewProp_bpv__PlayerxHUD__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__PlayerxHUD__pfT, TEXT("DisplayName"), TEXT("Player HUD"));
				MetaData->SetValue(NewProp_bpv__PlayerxHUD__pfT, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__PlayerxHUD__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Controller__pf4061722237.h"));
				MetaData->SetValue(NewProp_bpv__PlayerxHUD__pfT, TEXT("OverrideNativeName"), TEXT("Player HUD"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Controller_C__pf4061722237, TEXT("BP_Controller_C"), 2125734038);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Controller_C__pf4061722237(Z_Construct_UClass_ABP_Controller_C__pf4061722237, &ABP_Controller_C__pf4061722237::StaticClass, TEXT("/Game/Player/BP_Controller"), TEXT("BP_Controller_C"), true, TEXT("/Game/Player/BP_Controller"), TEXT("/Game/Player/BP_Controller.BP_Controller_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Controller_C__pf4061722237);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
