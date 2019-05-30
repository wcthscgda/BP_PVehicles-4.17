// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/BP_Vehicle_Waypoint__pf1689870207.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Vehicle_Waypoint__pf1689870207() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ABP_Vehicle_Waypoint_C__pf1689870207_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Vehicle_Waypoint_C__pf1689870207();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Vehicle_Waypoint_C__pf1689870207_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABP_Vehicle_Waypoint_C__pf1689870207_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_Vehicle_Waypoint_C__pf1689870207::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_Vehicle_Waypoint_C__pf1689870207_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_Vehicle_Waypoint_C__pf1689870207::StaticRegisterNativesABP_Vehicle_Waypoint_C__pf1689870207()
	{
		UClass* Class = ABP_Vehicle_Waypoint_C__pf1689870207::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("UserConstructionScript"), (Native)&ABP_Vehicle_Waypoint_C__pf1689870207::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_ABP_Vehicle_Waypoint_C__pf1689870207_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_Vehicle_Waypoint_C__pf1689870207();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BP_Vehicle_Waypoint__pf1689870207.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_Vehicle_Waypoint_C__pf1689870207_NoRegister()
	{
		return ABP_Vehicle_Waypoint_C__pf1689870207::StaticClass();
	}
	UClass* Z_Construct_UClass_ABP_Vehicle_Waypoint_C__pf1689870207()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Vehicles/BP_Vehicle_Waypoint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_Vehicle_Waypoint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_AActor();
			OuterClass = ABP_Vehicle_Waypoint_C__pf1689870207::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABP_Vehicle_Waypoint_C__pf1689870207_bpf__UserConstructionScript__pf());

				UProperty* NewProp_bpv__DesiredxSpeed__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Desired Speed"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__DesiredxSpeed__pfT, ABP_Vehicle_Waypoint_C__pf1689870207), 0x0011000000000005);
				UProperty* NewProp_bpv__AcceptablexRadius__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Acceptable Radius"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__AcceptablexRadius__pfT, ABP_Vehicle_Waypoint_C__pf1689870207), 0x0011000000000005);
				UProperty* NewProp_bpv__Index__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Index"), RF_Public|RF_Transient) UIntProperty(CPP_PROPERTY_BASE(bpv__Index__pf, ABP_Vehicle_Waypoint_C__pf1689870207), 0x0011000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__HiddenxInxGame__pfTG, ABP_Vehicle_Waypoint_C__pf1689870207);
				UProperty* NewProp_bpv__HiddenxInxGame__pfTG = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Hidden In-Game"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__HiddenxInxGame__pfTG, ABP_Vehicle_Waypoint_C__pf1689870207), 0x0011000000000005, CPP_BOOL_PROPERTY_BITMASK(bpv__HiddenxInxGame__pfTG, ABP_Vehicle_Waypoint_C__pf1689870207), sizeof(bool), true);
				UProperty* NewProp_bpv__Cylinder__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Cylinder"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Cylinder__pf, ABP_Vehicle_Waypoint_C__pf1689870207), 0x001000040008000c, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABP_Vehicle_Waypoint_C__pf1689870207_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 2368402570
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ABP_Vehicle_Waypoint_C__pf1689870207> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BP_Vehicle_Waypoint__pf1689870207.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BP_Vehicle_Waypoint__pf1689870207.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("BP_Vehicle_Waypoint_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Vehicles/BP_Vehicle_Waypoint.BP_Vehicle_Waypoint_C"));
				MetaData->SetValue(NewProp_bpv__DesiredxSpeed__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__DesiredxSpeed__pfT, TEXT("DisplayName"), TEXT("Desired Speed"));
				MetaData->SetValue(NewProp_bpv__DesiredxSpeed__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__DesiredxSpeed__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Vehicle_Waypoint__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__DesiredxSpeed__pfT, TEXT("OverrideNativeName"), TEXT("Desired Speed"));
				MetaData->SetValue(NewProp_bpv__AcceptablexRadius__pfT, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__AcceptablexRadius__pfT, TEXT("DisplayName"), TEXT("Acceptable Radius"));
				MetaData->SetValue(NewProp_bpv__AcceptablexRadius__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__AcceptablexRadius__pfT, TEXT("ModuleRelativePath"), TEXT("Public/BP_Vehicle_Waypoint__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__AcceptablexRadius__pfT, TEXT("OverrideNativeName"), TEXT("Acceptable Radius"));
				MetaData->SetValue(NewProp_bpv__Index__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Index__pf, TEXT("DisplayName"), TEXT("Index"));
				MetaData->SetValue(NewProp_bpv__Index__pf, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Index__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Vehicle_Waypoint__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__Index__pf, TEXT("OverrideNativeName"), TEXT("Index"));
				MetaData->SetValue(NewProp_bpv__HiddenxInxGame__pfTG, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__HiddenxInxGame__pfTG, TEXT("DisplayName"), TEXT("Hidden in- Game"));
				MetaData->SetValue(NewProp_bpv__HiddenxInxGame__pfTG, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__HiddenxInxGame__pfTG, TEXT("ModuleRelativePath"), TEXT("Public/BP_Vehicle_Waypoint__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__HiddenxInxGame__pfTG, TEXT("OverrideNativeName"), TEXT("Hidden In-Game"));
				MetaData->SetValue(NewProp_bpv__Cylinder__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Cylinder__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Cylinder__pf, TEXT("ModuleRelativePath"), TEXT("Public/BP_Vehicle_Waypoint__pf1689870207.h"));
				MetaData->SetValue(NewProp_bpv__Cylinder__pf, TEXT("OverrideNativeName"), TEXT("Cylinder"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_Vehicle_Waypoint_C__pf1689870207, TEXT("BP_Vehicle_Waypoint_C"), 592309298);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_Vehicle_Waypoint_C__pf1689870207(Z_Construct_UClass_ABP_Vehicle_Waypoint_C__pf1689870207, &ABP_Vehicle_Waypoint_C__pf1689870207::StaticClass, TEXT("/Game/Vehicles/BP_Vehicle_Waypoint"), TEXT("BP_Vehicle_Waypoint_C"), true, TEXT("/Game/Vehicles/BP_Vehicle_Waypoint"), TEXT("/Game/Vehicles/BP_Vehicle_Waypoint.BP_Vehicle_Waypoint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Vehicle_Waypoint_C__pf1689870207);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
