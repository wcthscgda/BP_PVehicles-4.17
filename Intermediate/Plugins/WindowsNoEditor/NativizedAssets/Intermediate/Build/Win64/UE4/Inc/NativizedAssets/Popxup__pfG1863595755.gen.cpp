// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Popxup__pfG1863595755.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePopxup__pfG1863595755() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UPopxup_C__pfG1863595755_bpf__Construct__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPopxup_C__pfG1863595755();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_UPopxup_C__pfG1863595755_bpf__ExecuteUbergraph_Popxup__pfG_0();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPopxup_C__pfG1863595755_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	static FName NAME_UPopxup_C__pfG1863595755_bpf__Construct__pf = FName(TEXT("Construct"));
	void UPopxup_C__pfG1863595755::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPopxup_C__pfG1863595755_bpf__Construct__pf),NULL);
	}
	void UPopxup_C__pfG1863595755::StaticRegisterNativesUPopxup_C__pfG1863595755()
	{
		UClass* Class = UPopxup_C__pfG1863595755::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("Construct"), (Native)&UPopxup_C__pfG1863595755::execbpf__Construct__pf },
			{ TEXT("ExecuteUbergraph_Pop-up_0"), (Native)&UPopxup_C__pfG1863595755::execbpf__ExecuteUbergraph_Popxup__pfG_0 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_UPopxup_C__pfG1863595755_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UPopxup_C__pfG1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Construct") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Construct"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C09, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("User Interface"));
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Begin Play"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Popxup__pfG1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Construct"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPopxup_C__pfG1863595755_bpf__ExecuteUbergraph_Popxup__pfG_0()
	{
		struct Popxup_C__pfG1863595755_eventbpf__ExecuteUbergraph_Popxup__pfG_0_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		UObject* Outer = Z_Construct_UClass_UPopxup_C__pfG1863595755();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ExecuteUbergraph_Pop-up_0") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ExecuteUbergraph_Pop-up_0"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(Popxup_C__pfG1863595755_eventbpf__ExecuteUbergraph_Popxup__pfG_0_Parms));
			UProperty* NewProp_bpp__EntryPoint__pf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bpp__EntryPoint__pf"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpp__EntryPoint__pf, Popxup_C__pfG1863595755_eventbpf__ExecuteUbergraph_Popxup__pfG_0_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Popxup__pfG1863595755.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ExecuteUbergraph_Pop-up_0"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPopxup_C__pfG1863595755_NoRegister()
	{
		return UPopxup_C__pfG1863595755::StaticClass();
	}
	UClass* Z_Construct_UClass_UPopxup_C__pfG1863595755()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UMG/Pop-up"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Pop-up_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_UUserWidget();
			OuterClass = UPopxup_C__pfG1863595755::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A01080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UPopxup_C__pfG1863595755_bpf__Construct__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_UPopxup_C__pfG1863595755_bpf__ExecuteUbergraph_Popxup__pfG_0());

				UProperty* NewProp_bpv__Text__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Text"), RF_Public|RF_Transient) UTextProperty(CPP_PROPERTY_BASE(bpv__Text__pf, UPopxup_C__pfG1863595755), 0x0011000000000005);
				UProperty* NewProp_bpv__Duration__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Duration"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Duration__pf, UPopxup_C__pfG1863595755), 0x0011000000000005);
				UProperty* NewProp_bpv__Popup_Text__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Popup_Text"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Popup_Text__pf, UPopxup_C__pfG1863595755), 0x001000000008000c, Z_Construct_UClass_UEditableText_NoRegister());
				UProperty* NewProp_bpv__Border_86__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Border_86"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Border_86__pf, UPopxup_C__pfG1863595755), 0x001000000008000c, Z_Construct_UClass_UBorder_NoRegister());
				UProperty* NewProp_bpv__Fadexin__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Fade in"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Fadexin__pfT, UPopxup_C__pfG1863595755), 0x001000000008001c, Z_Construct_UClass_UWidgetAnimation_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPopxup_C__pfG1863595755_bpf__Construct__pf(), TEXT("Construct")); // 868031800
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPopxup_C__pfG1863595755_bpf__ExecuteUbergraph_Popxup__pfG_0(), TEXT("ExecuteUbergraph_Pop-up_0")); // 2551178735
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UPopxup_C__pfG1863595755> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Popxup__pfG1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Popxup__pfG1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("Pop-up_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/UMG/Pop-up.Pop-up_C"));
				MetaData->SetValue(NewProp_bpv__Text__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Text__pf, TEXT("DisplayName"), TEXT("Text"));
				MetaData->SetValue(NewProp_bpv__Text__pf, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Text__pf, TEXT("ModuleRelativePath"), TEXT("Public/Popxup__pfG1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Text__pf, TEXT("OverrideNativeName"), TEXT("Text"));
				MetaData->SetValue(NewProp_bpv__Duration__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Duration__pf, TEXT("DisplayName"), TEXT("Duration"));
				MetaData->SetValue(NewProp_bpv__Duration__pf, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Duration__pf, TEXT("ModuleRelativePath"), TEXT("Public/Popxup__pfG1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Duration__pf, TEXT("OverrideNativeName"), TEXT("Duration"));
				MetaData->SetValue(NewProp_bpv__Popup_Text__pf, TEXT("Category"), TEXT("Pop-up"));
				MetaData->SetValue(NewProp_bpv__Popup_Text__pf, TEXT("DisplayName"), TEXT("Popup_Text"));
				MetaData->SetValue(NewProp_bpv__Popup_Text__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Popup_Text__pf, TEXT("ModuleRelativePath"), TEXT("Public/Popxup__pfG1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Popup_Text__pf, TEXT("OverrideNativeName"), TEXT("Popup_Text"));
				MetaData->SetValue(NewProp_bpv__Border_86__pf, TEXT("Category"), TEXT("Pop-up"));
				MetaData->SetValue(NewProp_bpv__Border_86__pf, TEXT("DisplayName"), TEXT("Border_86"));
				MetaData->SetValue(NewProp_bpv__Border_86__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Border_86__pf, TEXT("ModuleRelativePath"), TEXT("Public/Popxup__pfG1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Border_86__pf, TEXT("OverrideNativeName"), TEXT("Border_86"));
				MetaData->SetValue(NewProp_bpv__Fadexin__pfT, TEXT("Category"), TEXT("Animations"));
				MetaData->SetValue(NewProp_bpv__Fadexin__pfT, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Fadexin__pfT, TEXT("ModuleRelativePath"), TEXT("Public/Popxup__pfG1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Fadexin__pfT, TEXT("OverrideNativeName"), TEXT("Fade in"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UPopxup_C__pfG1863595755, TEXT("Pop-up_C"), 2540750571);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPopxup_C__pfG1863595755(Z_Construct_UClass_UPopxup_C__pfG1863595755, &UPopxup_C__pfG1863595755::StaticClass, TEXT("/Game/UMG/Pop-up"), TEXT("Pop-up_C"), true, TEXT("/Game/UMG/Pop-up"), TEXT("/Game/UMG/Pop-up.Pop-up_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPopxup_C__pfG1863595755);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
