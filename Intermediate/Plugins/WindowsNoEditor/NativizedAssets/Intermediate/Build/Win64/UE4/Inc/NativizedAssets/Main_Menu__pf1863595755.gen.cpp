// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Main_Menu__pf1863595755.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain_Menu__pf1863595755() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UDelegateFunction_UMain_Menu_C__pf1863595755___OnButtonClickedEvent__DelegateSignature__SC_0__DelegateSignature();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMain_Menu_C__pf1863595755();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ClosexxAboutx__pfTRR();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_0();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_1();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_2();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_3();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_4();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__OnClicked_CancelxxxSave__pfTET();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMain_Menu_C__pf1863595755_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UOptions_Menu_C__pf1863595755_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAbout_Menu_C__pf1863595755_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMain_Menu_C__pf1863595755___OnButtonClickedEvent__DelegateSignature__SC_0__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00120000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	void UMain_Menu_C__pf1863595755::StaticRegisterNativesUMain_Menu_C__pf1863595755()
	{
		UClass* Class = UMain_Menu_C__pf1863595755::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature"), (Native)&UMain_Menu_C__pf1863595755::execbpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature"), (Native)&UMain_Menu_C__pf1863595755::execbpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"), (Native)&UMain_Menu_C__pf1863595755::execbpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"), (Native)&UMain_Menu_C__pf1863595755::execbpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"), (Native)&UMain_Menu_C__pf1863595755::execbpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"), (Native)&UMain_Menu_C__pf1863595755::execbpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature"), (Native)&UMain_Menu_C__pf1863595755::execbpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"), (Native)&UMain_Menu_C__pf1863595755::execbpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf },
			{ TEXT("Close "About"), (Native)&UMain_Menu_C__pf1863595755::execbpf__ClosexxAboutx__pfTRR },
			{ TEXT("ExecuteUbergraph_Main_Menu_0"), (Native)&UMain_Menu_C__pf1863595755::execbpf__ExecuteUbergraph_Main_Menu__pf_0 },
			{ TEXT("ExecuteUbergraph_Main_Menu_1"), (Native)&UMain_Menu_C__pf1863595755::execbpf__ExecuteUbergraph_Main_Menu__pf_1 },
			{ TEXT("ExecuteUbergraph_Main_Menu_2"), (Native)&UMain_Menu_C__pf1863595755::execbpf__ExecuteUbergraph_Main_Menu__pf_2 },
			{ TEXT("ExecuteUbergraph_Main_Menu_3"), (Native)&UMain_Menu_C__pf1863595755::execbpf__ExecuteUbergraph_Main_Menu__pf_3 },
			{ TEXT("ExecuteUbergraph_Main_Menu_4"), (Native)&UMain_Menu_C__pf1863595755::execbpf__ExecuteUbergraph_Main_Menu__pf_4 },
			{ TEXT("OnClicked_Cancel / Save"), (Native)&UMain_Menu_C__pf1863595755::execbpf__OnClicked_CancelxxxSave__pfTET },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ClosexxAboutx__pfTRR()
	{
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Close "About") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Close \"About"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Close \"About"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_0()
	{
		struct Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_0_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_Main_Menu_0") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExecuteUbergraph_Main_Menu_0"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_0_Parms));
			UProperty* NewProp_bpp__EntryPoint__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__EntryPoint__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__EntryPoint__pf, Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_0_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ExecuteUbergraph_Main_Menu_0"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_1()
	{
		struct Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_1_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_Main_Menu_1") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExecuteUbergraph_Main_Menu_1"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_1_Parms));
			UProperty* NewProp_bpp__EntryPoint__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__EntryPoint__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__EntryPoint__pf, Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_1_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ExecuteUbergraph_Main_Menu_1"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_2()
	{
		struct Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_2_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_Main_Menu_2") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExecuteUbergraph_Main_Menu_2"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_2_Parms));
			UProperty* NewProp_bpp__EntryPoint__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__EntryPoint__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__EntryPoint__pf, Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_2_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ExecuteUbergraph_Main_Menu_2"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_3()
	{
		struct Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_3_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_Main_Menu_3") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExecuteUbergraph_Main_Menu_3"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_3_Parms));
			UProperty* NewProp_bpp__EntryPoint__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__EntryPoint__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__EntryPoint__pf, Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_3_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ExecuteUbergraph_Main_Menu_3"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_4()
	{
		struct Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_4_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_Main_Menu_4") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExecuteUbergraph_Main_Menu_4"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_4_Parms));
			UProperty* NewProp_bpp__EntryPoint__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__EntryPoint__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__EntryPoint__pf, Main_Menu_C__pf1863595755_eventbpf__ExecuteUbergraph_Main_Menu__pf_4_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ExecuteUbergraph_Main_Menu_4"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__OnClicked_CancelxxxSave__pfTET()
	{
		UObject* Outer = Z_Construct_UClass_UMain_Menu_C__pf1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("OnClicked_Cancel / Save") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnClicked_Cancel / Save"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("OnClicked_Cancel / Save"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMain_Menu_C__pf1863595755_NoRegister()
	{
		return UMain_Menu_C__pf1863595755::StaticClass();
	}
	UClass* Z_Construct_UClass_UMain_Menu_C__pf1863595755()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UMG/Main_Menu"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Main_Menu_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_UUserWidget();
			OuterClass = UMain_Menu_C__pf1863595755::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A01080u;

				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UMain_Menu_C__pf1863595755___OnButtonClickedEvent__DelegateSignature__SC_0__DelegateSignature());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ClosexxAboutx__pfTRR());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_0());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_1());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_2());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_3());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_4());
				OuterClass->LinkChild(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__OnClicked_CancelxxxSave__pfTET());

				UProperty* NewProp_b0l__CallFunc_Array_Get_Item5__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item5"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__CallFunc_Array_Get_Item5__pf, UMain_Menu_C__pf1863595755), 0x0010000000202000, Z_Construct_UClass_ACameraActor_NoRegister());
				UProperty* NewProp_b0l__K2Node_CreateDelegate_OutputDelegate2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_CreateDelegate_OutputDelegate2"), RF_Public|RF_Transient) UDelegateProperty(CPP_PROPERTY_BASE(b0l__K2Node_CreateDelegate_OutputDelegate2__pf, UMain_Menu_C__pf1863595755), 0x0010000000282000, Z_Construct_UDelegateFunction_UMain_Menu_C__pf1863595755___OnButtonClickedEvent__DelegateSignature__SC_0__DelegateSignature());
				UProperty* NewProp_b0l__CallFunc_Array_Get_Item4__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item4"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__CallFunc_Array_Get_Item4__pf, UMain_Menu_C__pf1863595755), 0x0010000000202000, Z_Construct_UClass_ACameraActor_NoRegister());
				UProperty* NewProp_b0l__CallFunc_Array_Get_Item3__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item3"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__CallFunc_Array_Get_Item3__pf, UMain_Menu_C__pf1863595755), 0x0010000000202000, Z_Construct_UClass_ACameraActor_NoRegister());
				UProperty* NewProp_b0l__CallFunc_Array_Get_Item2__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item2"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__CallFunc_Array_Get_Item2__pf, UMain_Menu_C__pf1863595755), 0x0010000000202000, Z_Construct_UClass_ACameraActor_NoRegister());
				UProperty* NewProp_b0l__CallFunc_Array_Get_Item__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_Array_Get_Item"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(b0l__CallFunc_Array_Get_Item__pf, UMain_Menu_C__pf1863595755), 0x0010000000202000, Z_Construct_UClass_ACameraActor_NoRegister());
				UProperty* NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("K2Node_CreateDelegate_OutputDelegate"), RF_Public|RF_Transient) UDelegateProperty(CPP_PROPERTY_BASE(b0l__K2Node_CreateDelegate_OutputDelegate__pf, UMain_Menu_C__pf1863595755), 0x0010000000282000, Z_Construct_UDelegateFunction_UMain_Menu_C__pf1863595755___OnButtonClickedEvent__DelegateSignature__SC_0__DelegateSignature());
				UProperty* NewProp_bpv__Cameras__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Cameras"), RF_Public|RF_Transient) UArrayProperty(CPP_PROPERTY_BASE(bpv__Cameras__pf, UMain_Menu_C__pf1863595755), 0x0010000000010005);
				UProperty* NewProp_bpv__Cameras__pf_Inner = new(EC_InternalUseOnlyConstructor, NewProp_bpv__Cameras__pf, TEXT("bpv__Cameras__pf"), RF_Public|RF_Transient) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_ACameraActor_NoRegister());
				UProperty* NewProp_bpv__Youtube_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Youtube_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Youtube_Button__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__ThankYou__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ThankYou"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__ThankYou__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UTextBlock_NoRegister());
				UProperty* NewProp_bpv__Start_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Start_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Start_Button__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__Quit_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Quit_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Quit_Button__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__Options_Panel__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Options_Panel"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Options_Panel__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UOptions_Menu_C__pf1863595755_NoRegister());
				UProperty* NewProp_bpv__Options_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Options_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Options_Button__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__Main_Panel__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Main_Panel"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Main_Panel__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UCanvasPanel_NoRegister());
				UProperty* NewProp_bpv__Links_Panel__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Links_Panel"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Links_Panel__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UCanvasPanel_NoRegister());
				UProperty* NewProp_bpv__Forum_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Forum_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Forum_Button__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__Confirm_Panel__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Confirm_Panel"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Confirm_Panel__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UCanvasPanel_NoRegister());
				UProperty* NewProp_bpv__Confirm_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Confirm_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Confirm_Button__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__Cancel_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Cancel_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Cancel_Button__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				UProperty* NewProp_bpv__About_Menu__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("About_Menu"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__About_Menu__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UAbout_Menu_C__pf1863595755_NoRegister());
				UProperty* NewProp_bpv__About_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("About_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__About_Button__pf, UMain_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UMain_Menu_C__pf1863595755___OnButtonClickedEvent__DelegateSignature__SC_0__DelegateSignature(), TEXT("OnButtonClickedEvent__DelegateSignature")); // 278304213
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature")); // 4294439840
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Button_1_K2Node_ComponentBoundEvent_238_OnButtonClickedEvent__DelegateSignature")); // 1664255788
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Cancel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature")); // 1036263284
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Confirm_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature")); // 3571117775
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Forum_Button_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature")); // 1923767045
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature__pf(), TEXT("BndEvt__Options_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature")); // 3038234475
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Quit_Button_K2Node_ComponentBoundEvent_530_OnButtonClickedEvent__DelegateSignature")); // 2736185060
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf(), TEXT("BndEvt__Start_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature")); // 4233663313
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ClosexxAboutx__pfTRR(), TEXT("Close "About")); // 1328328560
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_0(), TEXT("ExecuteUbergraph_Main_Menu_0")); // 2244871357
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_1(), TEXT("ExecuteUbergraph_Main_Menu_1")); // 2292350658
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_2(), TEXT("ExecuteUbergraph_Main_Menu_2")); // 2669080643
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_3(), TEXT("ExecuteUbergraph_Main_Menu_3")); // 2457504316
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__ExecuteUbergraph_Main_Menu__pf_4(), TEXT("ExecuteUbergraph_Main_Menu_4")); // 2961173825
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMain_Menu_C__pf1863595755_bpf__OnClicked_CancelxxxSave__pfTET(), TEXT("OnClicked_Cancel / Save")); // 1369092134
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UMain_Menu_C__pf1863595755> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Main_Menu__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("Main_Menu_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/UMG/Main_Menu.Main_Menu_C"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item5__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item5__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item5"));
				MetaData->SetValue(NewProp_b0l__K2Node_CreateDelegate_OutputDelegate2__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_CreateDelegate_OutputDelegate2__pf, TEXT("OverrideNativeName"), TEXT("K2Node_CreateDelegate_OutputDelegate2"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item4__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item4__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item4"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item3__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item3__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item3"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item2__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item2__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item2"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_Array_Get_Item__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_Array_Get_Item"));
				MetaData->SetValue(NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf, TEXT("OverrideNativeName"), TEXT("K2Node_CreateDelegate_OutputDelegate"));
				MetaData->SetValue(NewProp_bpv__Cameras__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Cameras__pf, TEXT("DisplayName"), TEXT("Cameras"));
				MetaData->SetValue(NewProp_bpv__Cameras__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Cameras__pf, TEXT("OverrideNativeName"), TEXT("Cameras"));
				MetaData->SetValue(NewProp_bpv__Youtube_Button__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__Youtube_Button__pf, TEXT("DisplayName"), TEXT("Youtube_Button"));
				MetaData->SetValue(NewProp_bpv__Youtube_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Youtube_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Youtube_Button__pf, TEXT("OverrideNativeName"), TEXT("Youtube_Button"));
				MetaData->SetValue(NewProp_bpv__ThankYou__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__ThankYou__pf, TEXT("DisplayName"), TEXT("Thank You"));
				MetaData->SetValue(NewProp_bpv__ThankYou__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__ThankYou__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__ThankYou__pf, TEXT("OverrideNativeName"), TEXT("ThankYou"));
				MetaData->SetValue(NewProp_bpv__Start_Button__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__Start_Button__pf, TEXT("DisplayName"), TEXT("Start_Button"));
				MetaData->SetValue(NewProp_bpv__Start_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Start_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Start_Button__pf, TEXT("OverrideNativeName"), TEXT("Start_Button"));
				MetaData->SetValue(NewProp_bpv__Quit_Button__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__Quit_Button__pf, TEXT("DisplayName"), TEXT("Quit_Button"));
				MetaData->SetValue(NewProp_bpv__Quit_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Quit_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Quit_Button__pf, TEXT("OverrideNativeName"), TEXT("Quit_Button"));
				MetaData->SetValue(NewProp_bpv__Options_Panel__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__Options_Panel__pf, TEXT("DisplayName"), TEXT("Options_Panel"));
				MetaData->SetValue(NewProp_bpv__Options_Panel__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Options_Panel__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Options_Panel__pf, TEXT("OverrideNativeName"), TEXT("Options_Panel"));
				MetaData->SetValue(NewProp_bpv__Options_Button__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__Options_Button__pf, TEXT("DisplayName"), TEXT("Options_Button"));
				MetaData->SetValue(NewProp_bpv__Options_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Options_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Options_Button__pf, TEXT("OverrideNativeName"), TEXT("Options_Button"));
				MetaData->SetValue(NewProp_bpv__Main_Panel__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__Main_Panel__pf, TEXT("DisplayName"), TEXT("Main_Panel"));
				MetaData->SetValue(NewProp_bpv__Main_Panel__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Main_Panel__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Main_Panel__pf, TEXT("OverrideNativeName"), TEXT("Main_Panel"));
				MetaData->SetValue(NewProp_bpv__Links_Panel__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__Links_Panel__pf, TEXT("DisplayName"), TEXT("Links_Panel"));
				MetaData->SetValue(NewProp_bpv__Links_Panel__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Links_Panel__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Links_Panel__pf, TEXT("OverrideNativeName"), TEXT("Links_Panel"));
				MetaData->SetValue(NewProp_bpv__Forum_Button__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__Forum_Button__pf, TEXT("DisplayName"), TEXT("Forum_Button"));
				MetaData->SetValue(NewProp_bpv__Forum_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Forum_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Forum_Button__pf, TEXT("OverrideNativeName"), TEXT("Forum_Button"));
				MetaData->SetValue(NewProp_bpv__Confirm_Panel__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__Confirm_Panel__pf, TEXT("DisplayName"), TEXT("Confirm_Panel"));
				MetaData->SetValue(NewProp_bpv__Confirm_Panel__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Confirm_Panel__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Confirm_Panel__pf, TEXT("OverrideNativeName"), TEXT("Confirm_Panel"));
				MetaData->SetValue(NewProp_bpv__Confirm_Button__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__Confirm_Button__pf, TEXT("DisplayName"), TEXT("Confirm_Button"));
				MetaData->SetValue(NewProp_bpv__Confirm_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Confirm_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Confirm_Button__pf, TEXT("OverrideNativeName"), TEXT("Confirm_Button"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("DisplayName"), TEXT("Cancel_Button"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("OverrideNativeName"), TEXT("Cancel_Button"));
				MetaData->SetValue(NewProp_bpv__About_Menu__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__About_Menu__pf, TEXT("DisplayName"), TEXT("About_Menu"));
				MetaData->SetValue(NewProp_bpv__About_Menu__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__About_Menu__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__About_Menu__pf, TEXT("OverrideNativeName"), TEXT("About_Menu"));
				MetaData->SetValue(NewProp_bpv__About_Button__pf, TEXT("Category"), TEXT("Main_Menu"));
				MetaData->SetValue(NewProp_bpv__About_Button__pf, TEXT("DisplayName"), TEXT("About_Button"));
				MetaData->SetValue(NewProp_bpv__About_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__About_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/Main_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__About_Button__pf, TEXT("OverrideNativeName"), TEXT("About_Button"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UMain_Menu_C__pf1863595755, TEXT("Main_Menu_C"), 3995401999);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMain_Menu_C__pf1863595755(Z_Construct_UClass_UMain_Menu_C__pf1863595755, &UMain_Menu_C__pf1863595755::StaticClass, TEXT("/Game/UMG/Main_Menu"), TEXT("Main_Menu_C"), true, TEXT("/Game/UMG/Main_Menu"), TEXT("/Game/UMG/Main_Menu.Main_Menu_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMain_Menu_C__pf1863595755);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
