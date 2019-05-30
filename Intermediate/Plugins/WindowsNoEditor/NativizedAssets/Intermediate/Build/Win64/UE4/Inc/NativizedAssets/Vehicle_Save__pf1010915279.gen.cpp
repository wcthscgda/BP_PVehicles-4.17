// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Vehicle_Save__pf1010915279.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicle_Save__pf1010915279() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UVehicle_Save_C__pf1010915279_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UVehicle_Save_C__pf1010915279();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
// End Cross Module References
	void UVehicle_Save_C__pf1010915279::StaticRegisterNativesUVehicle_Save_C__pf1010915279()
	{
	}
	UClass* Z_Construct_UClass_UVehicle_Save_C__pf1010915279_NoRegister()
	{
		return UVehicle_Save_C__pf1010915279::StaticClass();
	}
	UClass* Z_Construct_UClass_UVehicle_Save_C__pf1010915279()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Vehicle_Save"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Vehicle_Save_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_USaveGame();
			OuterClass = UVehicle_Save_C__pf1010915279::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;


				UProperty* NewProp_bpv__FuelxAmmount__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Fuel Ammount"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__FuelxAmmount__pfT, UVehicle_Save_C__pf1010915279), 0x0010000000010005);
				UProperty* NewProp_bpv__Mileage__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mileage"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Mileage__pf, UVehicle_Save_C__pf1010915279), 0x0010000000010005);
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UVehicle_Save_C__pf1010915279> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Vehicle_Save__pf1010915279.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Vehicle_Save__pf1010915279.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("Vehicle_Save_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Vehicle_Save.Vehicle_Save_C"));
				MetaData->SetValue(NewProp_bpv__FuelxAmmount__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__FuelxAmmount__pfT, TEXT("DisplayName"), TEXT("Fuel Ammount"));
				MetaData->SetValue(NewProp_bpv__FuelxAmmount__pfT, TEXT("ModuleRelativePath"), TEXT("Public/Vehicle_Save__pf1010915279.h"));
				MetaData->SetValue(NewProp_bpv__FuelxAmmount__pfT, TEXT("OverrideNativeName"), TEXT("Fuel Ammount"));
				MetaData->SetValue(NewProp_bpv__Mileage__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Mileage__pf, TEXT("DisplayName"), TEXT("Mileage"));
				MetaData->SetValue(NewProp_bpv__Mileage__pf, TEXT("ModuleRelativePath"), TEXT("Public/Vehicle_Save__pf1010915279.h"));
				MetaData->SetValue(NewProp_bpv__Mileage__pf, TEXT("OverrideNativeName"), TEXT("Mileage"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UVehicle_Save_C__pf1010915279, TEXT("Vehicle_Save_C"), 2264096942);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicle_Save_C__pf1010915279(Z_Construct_UClass_UVehicle_Save_C__pf1010915279, &UVehicle_Save_C__pf1010915279::StaticClass, TEXT("/Game/Vehicle_Save"), TEXT("Vehicle_Save_C"), true, TEXT("/Game/Vehicle_Save"), TEXT("/Game/Vehicle_Save.Vehicle_Save_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicle_Save_C__pf1010915279);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
