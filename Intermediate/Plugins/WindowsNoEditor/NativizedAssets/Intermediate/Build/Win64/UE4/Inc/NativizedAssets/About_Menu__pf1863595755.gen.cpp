// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/About_Menu__pf1863595755.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbout_Menu__pf1863595755() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAbout_Menu_C__pf1863595755_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAbout_Menu_C__pf1863595755();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UAbout_Menu_C__pf1863595755::StaticRegisterNativesUAbout_Menu_C__pf1863595755()
	{
	}
	UClass* Z_Construct_UClass_UAbout_Menu_C__pf1863595755_NoRegister()
	{
		return UAbout_Menu_C__pf1863595755::StaticClass();
	}
	UClass* Z_Construct_UClass_UAbout_Menu_C__pf1863595755()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UMG/About_Menu"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("About_Menu_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_UUserWidget();
			OuterClass = UAbout_Menu_C__pf1863595755::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A01080u;


				UProperty* NewProp_bpv__Cancel_Button__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Cancel_Button"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Cancel_Button__pf, UAbout_Menu_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UButton_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UAbout_Menu_C__pf1863595755> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("About_Menu__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/About_Menu__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("About_Menu_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/UMG/About_Menu.About_Menu_C"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("Category"), TEXT("About_Menu"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("DisplayName"), TEXT("Cancel_Button"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("ModuleRelativePath"), TEXT("Public/About_Menu__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Cancel_Button__pf, TEXT("OverrideNativeName"), TEXT("Cancel_Button"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UAbout_Menu_C__pf1863595755, TEXT("About_Menu_C"), 3567031598);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbout_Menu_C__pf1863595755(Z_Construct_UClass_UAbout_Menu_C__pf1863595755, &UAbout_Menu_C__pf1863595755::StaticClass, TEXT("/Game/UMG/About_Menu"), TEXT("About_Menu_C"), true, TEXT("/Game/UMG/About_Menu"), TEXT("/Game/UMG/About_Menu.About_Menu_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbout_Menu_C__pf1863595755);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
