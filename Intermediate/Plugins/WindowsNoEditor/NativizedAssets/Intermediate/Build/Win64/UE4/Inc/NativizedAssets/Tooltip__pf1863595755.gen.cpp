// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Tooltip__pf1863595755.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTooltip__pf1863595755() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTooltip_C__pf1863595755_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTooltip_C__pf1863595755();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UTooltip_C__pf1863595755::StaticRegisterNativesUTooltip_C__pf1863595755()
	{
	}
	UClass* Z_Construct_UClass_UTooltip_C__pf1863595755_NoRegister()
	{
		return UTooltip_C__pf1863595755::StaticClass();
	}
	UClass* Z_Construct_UClass_UTooltip_C__pf1863595755()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UMG/Tooltip"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Tooltip_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_UUserWidget();
			OuterClass = UTooltip_C__pf1863595755::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A01080u;


				UProperty* NewProp_bpv__TextZonne__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TextZonne"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__TextZonne__pf, UTooltip_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UTextBlock_NoRegister());
				UProperty* NewProp_bpv__Image_66__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Image_66"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Image_66__pf, UTooltip_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UImage_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UTooltip_C__pf1863595755> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Tooltip__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Tooltip__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("Tooltip_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/UMG/Tooltip.Tooltip_C"));
				MetaData->SetValue(NewProp_bpv__TextZonne__pf, TEXT("Category"), TEXT("Tooltip"));
				MetaData->SetValue(NewProp_bpv__TextZonne__pf, TEXT("DisplayName"), TEXT("TextZonne"));
				MetaData->SetValue(NewProp_bpv__TextZonne__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__TextZonne__pf, TEXT("ModuleRelativePath"), TEXT("Public/Tooltip__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__TextZonne__pf, TEXT("OverrideNativeName"), TEXT("TextZonne"));
				MetaData->SetValue(NewProp_bpv__Image_66__pf, TEXT("Category"), TEXT("Tooltip"));
				MetaData->SetValue(NewProp_bpv__Image_66__pf, TEXT("DisplayName"), TEXT("Image_66"));
				MetaData->SetValue(NewProp_bpv__Image_66__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Image_66__pf, TEXT("ModuleRelativePath"), TEXT("Public/Tooltip__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Image_66__pf, TEXT("OverrideNativeName"), TEXT("Image_66"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UTooltip_C__pf1863595755, TEXT("Tooltip_C"), 4137106902);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTooltip_C__pf1863595755(Z_Construct_UClass_UTooltip_C__pf1863595755, &UTooltip_C__pf1863595755::StaticClass, TEXT("/Game/UMG/Tooltip"), TEXT("Tooltip_C"), true, TEXT("/Game/UMG/Tooltip"), TEXT("/Game/UMG/Tooltip.Tooltip_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTooltip_C__pf1863595755);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
