// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Pause_Menu__pf1863595755.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePause_Menu__pf1863595755() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UDelegateFunction_UPause_Menu_C__pf1863595755___OnButtonClickedEvent__DelegateSignature__SC_0__DelegateSignature();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPause_Menu_C__pf1863595755();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__OnClicked_CancelxxxSave__pfTET();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPause_Menu_C__pf1863595755_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Controller_C__pf4061722237_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UOptions_Menu_C__pf1863595755_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UPause_Menu_C__pf1863595755___OnButtonClickedEvent__DelegateSignature__SC_0__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_UPause_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00120000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	void UPause_Menu_C__pf1863595755::StaticRegisterNativesUPause_Menu_C__pf1863595755()
	{
		UClass* Class = UPause_Menu_C__pf1863595755::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature"), (Native)&UPause_Menu_C__pf1863595755::execbpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"), (Native)&UPause_Menu_C__pf1863595755::execbpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"), (Native)&UPause_Menu_C__pf1863595755::execbpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"), (Native)&UPause_Menu_C__pf1863595755::execbpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"), (Native)&UPause_Menu_C__pf1863595755::execbpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature"), (Native)&UPause_Menu_C__pf1863595755::execbpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"), (Native)&UPause_Menu_C__pf1863595755::execbpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("OnClicked_Cancel / Save"), (Native)&UPause_Menu_C__pf1863595755::execbpf__OnClicked_CancelxxxSave__pfTET },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UPause_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UPause_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UPause_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UPause_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UPause_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UPause_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UPause_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__OnClicked_CancelxxxSave__pfTET()
	{
		UObject* Outer = Z_Construct_UClass_UPause_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("OnClicked_Cancel / Save") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnClicked_Cancel / Save"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("OnClicked_Cancel / Save"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPause_Menu_C__pf1863595755_NoRegister()
	{
		return UPause_Menu_C__pf1863595755::StaticClass();
	}
	UClass* Z_Construct_UClass_UPause_Menu_C__pf1863595755()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UMG/Pause_Menu"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Pause_Menu_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_UUserWidget();
			OuterClass = UPause_Menu_C__pf1863595755::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A01080u;

				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UPause_Menu_C__pf1863595755___OnButtonClickedEvent__DelegateSignature__SC_0__DelegateSignature());
				OuterClass->LinkChild(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__OnClicked_CancelxxxSave__pfTET());

				UProperty* NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_CreateDelegate_OutputDelegate"), RF_Public|RF_Transient) UDelegateProperty(CPP_PROPERTY_BASE(b0l__K2Node_CreateDelegate_OutputDelegate__pf, UPause_Menu_C__pf1863595755), 0x0010000000282000, Z_Construct_UDelegateFunction_UPause_Menu_C__pf1863595755___OnButtonClickedEvent__DelegateSignature__SC_0__DelegateSignature());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(b0l__K2Node_DynamicCast_bSuccess__pf, UPause_Menu_C__pf1863595755);
				UProperty* NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_bSuccess"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(b0l__K2Node_DynamicCast_bSuccess__pf, UPause_Menu_C__pf1863595755), 0x0010000000202000, CPP_BOOL_PROPERTY_BITMASK(b0l__K2Node_DynamicCast_bSuccess__pf, UPause_Menu_C__pf1863595755), sizeof(bool), true);
				UProperty* NewProp_b0l__K2Node_DynamicCast_AsBP_Controller__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_DynamicCast_AsBP_Controller"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__K2Node_DynamicCast_AsBP_Controller__pf, UPause_Menu_C__pf1863595755), 0x0010000000202000, Z_Construct_UClass_ABP_Controller_C__pf4061722237_NoRegister());
				UProperty* NewProp_bpv__Youtube_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Youtube_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Youtube_Button__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__Time_Text__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Text"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Time_Text__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UTextBlock_NoRegister());
				UProperty* NewProp_bpv__Start_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Start_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Start_Button__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__Quit_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Quit_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Quit_Button__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__Options_Panel__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Options_Panel"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Options_Panel__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UOptions_Menu_C__pf1863595755_NoRegister());
				UProperty* NewProp_bpv__Options_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Options_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Options_Button__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__Main_Panel__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Main_Panel"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Main_Panel__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UCanvasPanel_NoRegister());
				UProperty* NewProp_bpv__Links_Panel__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Links_Panel"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Links_Panel__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UCanvasPanel_NoRegister());
				UProperty* NewProp_bpv__Forum_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Forum_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Forum_Button__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__Confirm_Panel__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Confirm_Panel"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Confirm_Panel__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UCanvasPanel_NoRegister());
				UProperty* NewProp_bpv__Confirm_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Confirm_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Confirm_Button__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__Cancel_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Cancel_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Cancel_Button__pf, UPause_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UPause_Menu_C__pf1863595755___OnButtonClickedEvent__DelegateSignature__SC_0__DelegateSignature(), TEXT("OnButtonClickedEvent__DelegateSignature")); // 2927616740
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature")); // 720931207
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature")); // 3172021191
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature")); // 537363066
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature")); // 3859053900
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf(), TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature")); // 3947893488
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature")); // 3400182512
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature")); // 3985360650
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPause_Menu_C__pf1863595755_bpf__OnClicked_CancelxxxSave__pfTET(), TEXT("OnClicked_Cancel / Save")); // 1278386110
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UPause_Menu_C__pf1863595755> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("Pause_Menu_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/UMG/Pause_Menu.Pause_Menu_C"));
				MetaData->SetValue(NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf, TEXT("OverrideNativeName"), TEXT("K2Node_CreateDelegate_OutputDelegate"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_bSuccess__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_bSuccess"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsBP_Controller__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_DynamicCast_AsBP_Controller__pf, TEXT("OverrideNativeName"), TEXT("K2Node_DynamicCast_AsBP_Controller"));
				MetaData->SetValue(NewProp_bpv__Youtube_Button__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Youtube_Button__pf, TEXT("DisplayName"), TEXT("Youtube_Button"));
				MetaData->SetValue(NewProp_bpv__Youtube_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Youtube_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Youtube_Button__pf, TEXT("OverrideNativeName"), TEXT("Youtube_Button"));
				MetaData->SetValue(NewProp_bpv__Time_Text__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Time_Text__pf, TEXT("DisplayName"), TEXT("Time_Text"));
				MetaData->SetValue(NewProp_bpv__Time_Text__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Time_Text__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Time_Text__pf, TEXT("OverrideNativeName"), TEXT("Time_Text"));
				MetaData->SetValue(NewProp_bpv__Start_Button__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Start_Button__pf, TEXT("DisplayName"), TEXT("Start_Button"));
				MetaData->SetValue(NewProp_bpv__Start_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Start_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Start_Button__pf, TEXT("OverrideNativeName"), TEXT("Start_Button"));
				MetaData->SetValue(NewProp_bpv__Quit_Button__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Quit_Button__pf, TEXT("DisplayName"), TEXT("Quit_Button"));
				MetaData->SetValue(NewProp_bpv__Quit_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Quit_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Quit_Button__pf, TEXT("OverrideNativeName"), TEXT("Quit_Button"));
				MetaData->SetValue(NewProp_bpv__Options_Panel__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Options_Panel__pf, TEXT("DisplayName"), TEXT("Options_Panel"));
				MetaData->SetValue(NewProp_bpv__Options_Panel__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Options_Panel__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Options_Panel__pf, TEXT("OverrideNativeName"), TEXT("Options_Panel"));
				MetaData->SetValue(NewProp_bpv__Options_Button__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Options_Button__pf, TEXT("DisplayName"), TEXT("Options_Button"));
				MetaData->SetValue(NewProp_bpv__Options_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Options_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Options_Button__pf, TEXT("OverrideNativeName"), TEXT("Options_Button"));
				MetaData->SetValue(NewProp_bpv__Main_Panel__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Main_Panel__pf, TEXT("DisplayName"), TEXT("Main_Panel"));
				MetaData->SetValue(NewProp_bpv__Main_Panel__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Main_Panel__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Main_Panel__pf, TEXT("OverrideNativeName"), TEXT("Main_Panel"));
				MetaData->SetValue(NewProp_bpv__Links_Panel__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Links_Panel__pf, TEXT("DisplayName"), TEXT("Links_Panel"));
				MetaData->SetValue(NewProp_bpv__Links_Panel__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Links_Panel__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Links_Panel__pf, TEXT("OverrideNativeName"), TEXT("Links_Panel"));
				MetaData->SetValue(NewProp_bpv__Forum_Button__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Forum_Button__pf, TEXT("DisplayName"), TEXT("Forum_Button"));
				MetaData->SetValue(NewProp_bpv__Forum_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Forum_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Forum_Button__pf, TEXT("OverrideNativeName"), TEXT("Forum_Button"));
				MetaData->SetValue(NewProp_bpv__Confirm_Panel__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Confirm_Panel__pf, TEXT("DisplayName"), TEXT("Confirm_Panel"));
				MetaData->SetValue(NewProp_bpv__Confirm_Panel__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Confirm_Panel__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Confirm_Panel__pf, TEXT("OverrideNativeName"), TEXT("Confirm_Panel"));
				MetaData->SetValue(NewProp_bpv__Confirm_Button__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Confirm_Button__pf, TEXT("DisplayName"), TEXT("Confirm_Button"));
				MetaData->SetValue(NewProp_bpv__Confirm_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Confirm_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Confirm_Button__pf, TEXT("OverrideNativeName"), TEXT("Confirm_Button"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("Category"), TEXT("Pause_Menu"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("DisplayName"), TEXT("Cancel_Button"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Pause_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("OverrideNativeName"), TEXT("Cancel_Button"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UPause_Menu_C__pf1863595755, TEXT("Pause_Menu_C"), 2412787582);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPause_Menu_C__pf1863595755(Z_Construct_UClass_UPause_Menu_C__pf1863595755, &UPause_Menu_C__pf1863595755::StaticClass, TEXT("/Game/UMG/Pause_Menu"), TEXT("Pause_Menu_C"), true, TEXT("/Game/UMG/Pause_Menu"), TEXT("/Game/UMG/Pause_Menu.Pause_Menu_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPause_Menu_C__pf1863595755);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
