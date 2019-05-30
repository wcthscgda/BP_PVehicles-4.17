// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Loading_Screen__pf1863595755.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoading_Screen__pf1863595755() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ULoading_Screen_C__pf1863595755_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ULoading_Screen_C__pf1863595755();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void ULoading_Screen_C__pf1863595755::StaticRegisterNativesULoading_Screen_C__pf1863595755()
	{
	}
	UClass* Z_Construct_UClass_ULoading_Screen_C__pf1863595755_NoRegister()
	{
		return ULoading_Screen_C__pf1863595755::StaticClass();
	}
	UClass* Z_Construct_UClass_ULoading_Screen_C__pf1863595755()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UMG/Loading_Screen"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Loading_Screen_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_UUserWidget();
			OuterClass = ULoading_Screen_C__pf1863595755::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A01080u;


				UProperty* NewProp_bpv__Image_102__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Image_102"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Image_102__pf, ULoading_Screen_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UImage_NoRegister());
				UProperty* NewProp_bpv__Image_64__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Image_64"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Image_64__pf, ULoading_Screen_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UImage_NoRegister());
				UProperty* NewProp_bpv__Image_23__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Image_23"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Image_23__pf, ULoading_Screen_C__pf1863595755), 0x001000000008000c, Z_Construct_UClass_UImage_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ULoading_Screen_C__pf1863595755> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Loading_Screen__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Loading_Screen__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("Loading_Screen_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/UMG/Loading_Screen.Loading_Screen_C"));
				MetaData->SetValue(NewProp_bpv__Image_102__pf, TEXT("Category"), TEXT("Loading_Screen"));
				MetaData->SetValue(NewProp_bpv__Image_102__pf, TEXT("DisplayName"), TEXT("Image_102"));
				MetaData->SetValue(NewProp_bpv__Image_102__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Image_102__pf, TEXT("ModuleRelativePath"), TEXT("Public/Loading_Screen__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Image_102__pf, TEXT("OverrideNativeName"), TEXT("Image_102"));
				MetaData->SetValue(NewProp_bpv__Image_64__pf, TEXT("Category"), TEXT("Loading_Screen"));
				MetaData->SetValue(NewProp_bpv__Image_64__pf, TEXT("DisplayName"), TEXT("Image_64"));
				MetaData->SetValue(NewProp_bpv__Image_64__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Image_64__pf, TEXT("ModuleRelativePath"), TEXT("Public/Loading_Screen__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Image_64__pf, TEXT("OverrideNativeName"), TEXT("Image_64"));
				MetaData->SetValue(NewProp_bpv__Image_23__pf, TEXT("Category"), TEXT("Loading_Screen"));
				MetaData->SetValue(NewProp_bpv__Image_23__pf, TEXT("DisplayName"), TEXT("Image_23"));
				MetaData->SetValue(NewProp_bpv__Image_23__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Image_23__pf, TEXT("ModuleRelativePath"), TEXT("Public/Loading_Screen__pf1863595755.h"));
				MetaData->SetValue(NewProp_bpv__Image_23__pf, TEXT("OverrideNativeName"), TEXT("Image_23"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ULoading_Screen_C__pf1863595755, TEXT("Loading_Screen_C"), 2649322465);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoading_Screen_C__pf1863595755(Z_Construct_UClass_ULoading_Screen_C__pf1863595755, &ULoading_Screen_C__pf1863595755::StaticClass, TEXT("/Game/UMG/Loading_Screen"), TEXT("Loading_Screen_C"), true, TEXT("/Game/UMG/Loading_Screen"), TEXT("/Game/UMG/Loading_Screen.Loading_Screen_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoading_Screen_C__pf1863595755);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
