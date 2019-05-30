// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Environment_BP__pf3286898353.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironment_BP__pf3286898353() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__OnRep_Time__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AEnvironment_BP_C__pf3286898353();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__SetxTime__pfT();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__Time_Flow__FinishedFunc__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__Time_Flow__UpdateFunc__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__UserConstructionScript__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AEnvironment_BP_C__pf3286898353_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
// End Cross Module References
	static FName NAME_AEnvironment_BP_C__pf3286898353_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AEnvironment_BP_C__pf3286898353::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnvironment_BP_C__pf3286898353_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AEnvironment_BP_C__pf3286898353_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AEnvironment_BP_C__pf3286898353::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnvironment_BP_C__pf3286898353_bpf__UserConstructionScript__pf),NULL);
	}
	void AEnvironment_BP_C__pf3286898353::StaticRegisterNativesAEnvironment_BP_C__pf3286898353()
	{
		UClass* Class = AEnvironment_BP_C__pf3286898353::StaticClass();
		static const TNameNativePtrPair<TCHAR> TCharFuncs[] = {
			{ TEXT("OnRep_Time"), (Native)&AEnvironment_BP_C__pf3286898353::execbpf__OnRep_Time__pf },
			{ TEXT("ReceiveBeginPlay"), (Native)&AEnvironment_BP_C__pf3286898353::execbpf__ReceiveBeginPlay__pf },
			{ TEXT("Set Time"), (Native)&AEnvironment_BP_C__pf3286898353::execbpf__SetxTime__pfT },
			{ TEXT("Time_Flow__FinishedFunc"), (Native)&AEnvironment_BP_C__pf3286898353::execbpf__Time_Flow__FinishedFunc__pf },
			{ TEXT("Time_Flow__UpdateFunc"), (Native)&AEnvironment_BP_C__pf3286898353::execbpf__Time_Flow__UpdateFunc__pf },
			{ TEXT("UserConstructionScript"), (Native)&AEnvironment_BP_C__pf3286898353::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, TCharFuncs, ARRAY_COUNT(TCharFuncs));
	}
	UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__OnRep_Time__pf()
	{
		UObject* Outer = Z_Construct_UClass_AEnvironment_BP_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("OnRep_Time") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnRep_Time"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("OnRep_Time"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AEnvironment_BP_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReceiveBeginPlay"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020C01, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("CppFromBpEvent"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("BeginPlay"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("ReceiveBeginPlay"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Event when play begins for this actor."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__SetxTime__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AEnvironment_BP_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Set Time") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Set Time"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT(""));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Set Time"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__Time_Flow__FinishedFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_AEnvironment_BP_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Time_Flow__FinishedFunc") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Time_Flow__FinishedFunc"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Time_Flow__FinishedFunc"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__Time_Flow__UpdateFunc__pf()
	{
		UObject* Outer = Z_Construct_UClass_AEnvironment_BP_C__pf3286898353();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("Time_Flow__UpdateFunc") ));
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Time_Flow__UpdateFunc"), RF_Public|RF_Transient) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("Time_Flow__UpdateFunc"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AEnvironment_BP_C__pf3286898353();
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
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
			MetaData->SetValue(ReturnFunction, TEXT("OverrideNativeName"), TEXT("UserConstructionScript"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnvironment_BP_C__pf3286898353_NoRegister()
	{
		return AEnvironment_BP_C__pf3286898353::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnvironment_BP_C__pf3286898353()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Environment/Environment_BP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Environment_BP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_AActor();
			OuterClass = AEnvironment_BP_C__pf3286898353::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__OnRep_Time__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__ReceiveBeginPlay__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__SetxTime__pfT());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__Time_Flow__FinishedFunc__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__Time_Flow__UpdateFunc__pf());
				OuterClass->LinkChild(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__UserConstructionScript__pf());

				UProperty* NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakRotator_Yaw"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakRotator_Yaw__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakRotator_Pitch"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakRotator_Pitch__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_BreakRotator_Roll__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_BreakRotator_Roll"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(b0l__CallFunc_BreakRotator_Roll__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000202000);
				UProperty* NewProp_b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CallFunc_K2_SetWorldRotation_SweepHitResult"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, AEnvironment_BP_C__pf3286898353), 0x0010008000202000, Z_Construct_UScriptStruct_FHitResult());
				UProperty* NewProp_bpv__Time__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Time__pf, AEnvironment_BP_C__pf3286898353), 0x0010000100010025);
				NewProp_bpv__Time__pf->RepNotifyFunc = FName(TEXT("OnRep_Time"));
				UProperty* NewProp_bpv__StartxTime__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Start Time"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__StartxTime__pfT, AEnvironment_BP_C__pf3286898353), 0x0011000000000005);
				UProperty* NewProp_bpv__Starsxbrightness__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Stars brightness"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Starsxbrightness__pfT, AEnvironment_BP_C__pf3286898353), 0x0011000000000005);
				UProperty* NewProp_bpv__Cloudxspeed__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Cloud speed"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Cloudxspeed__pfT, AEnvironment_BP_C__pf3286898353), 0x0011000000000005);
				UProperty* NewProp_bpv__Sunxbrightness__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sun brightness"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Sunxbrightness__pfT, AEnvironment_BP_C__pf3286898353), 0x0011000000000005);
				UProperty* NewProp_bpv__Skyxmaterial__pfT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sky material"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Skyxmaterial__pfT, AEnvironment_BP_C__pf3286898353), 0x0010000000010005, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister());
				UProperty* NewProp_bpv__Time_Flow__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Time_Flow__pf, AEnvironment_BP_C__pf3286898353), 0x001000000008000c, Z_Construct_UClass_UTimelineComponent_NoRegister());
				UProperty* NewProp_bpv__Time_Flow__Direction_C8ACAA514EF486185222D2B3D8685635__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow__Direction_C8ACAA514EF486185222D2B3D8685635"), RF_Public|RF_Transient) UByteProperty(CPP_PROPERTY_BASE(bpv__Time_Flow__Direction_C8ACAA514EF486185222D2B3D8685635__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000000000, Z_Construct_UEnum_Engine_ETimelineDirection());
				UProperty* NewProp_bpv__Time_Flow_Sun_Light_Pitch_C8ACAA514EF486185222D2B3D8685635__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow_Sun_Light_Pitch_C8ACAA514EF486185222D2B3D8685635"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Time_Flow_Sun_Light_Pitch_C8ACAA514EF486185222D2B3D8685635__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000000000);
				UProperty* NewProp_bpv__Time_Flow_Sun_Light_Yaw_C8ACAA514EF486185222D2B3D8685635__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow_Sun_Light_Yaw_C8ACAA514EF486185222D2B3D8685635"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Time_Flow_Sun_Light_Yaw_C8ACAA514EF486185222D2B3D8685635__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000000000);
				UProperty* NewProp_bpv__Time_Flow_Sky_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow_Sky_Light_Intensity_C8ACAA514EF486185222D2B3D8685635"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Time_Flow_Sky_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000000000);
				UProperty* NewProp_bpv__Time_Flow_Sun_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow_Sun_Light_Intensity_C8ACAA514EF486185222D2B3D8685635"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Time_Flow_Sun_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000000000);
				UProperty* NewProp_bpv__Time_Flow_Cloud_Opacity_C8ACAA514EF486185222D2B3D8685635__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow_Cloud_Opacity_C8ACAA514EF486185222D2B3D8685635"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Time_Flow_Cloud_Opacity_C8ACAA514EF486185222D2B3D8685635__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000000000);
				UProperty* NewProp_bpv__Time_Flow_Horizon_Falloff_C8ACAA514EF486185222D2B3D8685635__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow_Horizon_Falloff_C8ACAA514EF486185222D2B3D8685635"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Time_Flow_Horizon_Falloff_C8ACAA514EF486185222D2B3D8685635__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000000000);
				UProperty* NewProp_bpv__Time_Flow_TimeofDay_C8ACAA514EF486185222D2B3D8685635__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow_TimeofDay_C8ACAA514EF486185222D2B3D8685635"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Time_Flow_TimeofDay_C8ACAA514EF486185222D2B3D8685635__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000000000);
				UProperty* NewProp_bpv__Time_Flow_Horizon_Color_C8ACAA514EF486185222D2B3D8685635__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow_Horizon_Color_C8ACAA514EF486185222D2B3D8685635"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__Time_Flow_Horizon_Color_C8ACAA514EF486185222D2B3D8685635__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000000000, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_bpv__Time_Flow_Zenith_Color_C8ACAA514EF486185222D2B3D8685635__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow_Zenith_Color_C8ACAA514EF486185222D2B3D8685635"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__Time_Flow_Zenith_Color_C8ACAA514EF486185222D2B3D8685635__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000000000, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_bpv__Time_Flow_Cloud_Color_C8ACAA514EF486185222D2B3D8685635__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Time_Flow_Cloud_Color_C8ACAA514EF486185222D2B3D8685635"), RF_Public|RF_Transient) UStructProperty(CPP_PROPERTY_BASE(bpv__Time_Flow_Cloud_Color_C8ACAA514EF486185222D2B3D8685635__pf, AEnvironment_BP_C__pf3286898353), 0x0010000000000000, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_bpv__Base__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Base"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Base__pf, AEnvironment_BP_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_bpv__SkyxSpherexmesh__pfTT = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sky Sphere mesh"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__SkyxSpherexmesh__pfTT, AEnvironment_BP_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_bpv__Sun_Light__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sun_Light"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Sun_Light__pf, AEnvironment_BP_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_UDirectionalLightComponent_NoRegister());
				UProperty* NewProp_bpv__Sky_Light__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sky_Light"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__Sky_Light__pf, AEnvironment_BP_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_USkyLightComponent_NoRegister());
				UProperty* NewProp_bpv__PostProcess__pf = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PostProcess"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__PostProcess__pf, AEnvironment_BP_C__pf3286898353), 0x001000040008000c, Z_Construct_UClass_UPostProcessComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__OnRep_Time__pf(), TEXT("OnRep_Time")); // 1237339448
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__ReceiveBeginPlay__pf(), TEXT("ReceiveBeginPlay")); // 394466062
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__SetxTime__pfT(), TEXT("Set Time")); // 2788495067
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__Time_Flow__FinishedFunc__pf(), TEXT("Time_Flow__FinishedFunc")); // 4063954015
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__Time_Flow__UpdateFunc__pf(), TEXT("Time_Flow__UpdateFunc")); // 599358225
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AEnvironment_BP_C__pf3286898353_bpf__UserConstructionScript__pf(), TEXT("UserConstructionScript")); // 3858418690
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AEnvironment_BP_C__pf3286898353> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Environment_BP__pf3286898353.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("Environment_BP_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/Environment/Environment_BP.Environment_BP_C"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Yaw__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Yaw__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakRotator_Yaw"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Pitch__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Pitch__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakRotator_Pitch"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Roll__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_BreakRotator_Roll__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_BreakRotator_Roll"));
				MetaData->SetValue(NewProp_b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, TEXT("OverrideNativeName"), TEXT("CallFunc_K2_SetWorldRotation_SweepHitResult"));
				MetaData->SetValue(NewProp_bpv__Time__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Time__pf, TEXT("DisplayName"), TEXT("Time"));
				MetaData->SetValue(NewProp_bpv__Time__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time__pf, TEXT("OverrideNativeName"), TEXT("Time"));
				MetaData->SetValue(NewProp_bpv__StartxTime__pfT, TEXT("Category"), TEXT("Override Settings"));
				MetaData->SetValue(NewProp_bpv__StartxTime__pfT, TEXT("ClampMax"), TEXT("24"));
				MetaData->SetValue(NewProp_bpv__StartxTime__pfT, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_bpv__StartxTime__pfT, TEXT("DisplayName"), TEXT("Start Time"));
				MetaData->SetValue(NewProp_bpv__StartxTime__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__StartxTime__pfT, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__StartxTime__pfT, TEXT("OverrideNativeName"), TEXT("Start Time"));
				MetaData->SetValue(NewProp_bpv__StartxTime__pfT, TEXT("UIMax"), TEXT("24"));
				MetaData->SetValue(NewProp_bpv__StartxTime__pfT, TEXT("UIMin"), TEXT("0"));
				MetaData->SetValue(NewProp_bpv__Starsxbrightness__pfT, TEXT("Category"), TEXT("Override Settings"));
				MetaData->SetValue(NewProp_bpv__Starsxbrightness__pfT, TEXT("DisplayName"), TEXT("Stars Brightness"));
				MetaData->SetValue(NewProp_bpv__Starsxbrightness__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Starsxbrightness__pfT, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Starsxbrightness__pfT, TEXT("OverrideNativeName"), TEXT("Stars brightness"));
				MetaData->SetValue(NewProp_bpv__Starsxbrightness__pfT, TEXT("Tooltip"), TEXT("Multiplier for the brightness of the stars when the sun is below the horizon"));
				MetaData->SetValue(NewProp_bpv__Cloudxspeed__pfT, TEXT("Category"), TEXT("Override Settings"));
				MetaData->SetValue(NewProp_bpv__Cloudxspeed__pfT, TEXT("DisplayName"), TEXT("Cloud Speed"));
				MetaData->SetValue(NewProp_bpv__Cloudxspeed__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Cloudxspeed__pfT, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Cloudxspeed__pfT, TEXT("OverrideNativeName"), TEXT("Cloud speed"));
				MetaData->SetValue(NewProp_bpv__Cloudxspeed__pfT, TEXT("Tooltip"), TEXT("Panning speed for the clouds"));
				MetaData->SetValue(NewProp_bpv__Sunxbrightness__pfT, TEXT("Category"), TEXT("Override Settings"));
				MetaData->SetValue(NewProp_bpv__Sunxbrightness__pfT, TEXT("DisplayName"), TEXT("Sun Brightness"));
				MetaData->SetValue(NewProp_bpv__Sunxbrightness__pfT, TEXT("ExposeOnSpawn"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Sunxbrightness__pfT, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Sunxbrightness__pfT, TEXT("OverrideNativeName"), TEXT("Sun brightness"));
				MetaData->SetValue(NewProp_bpv__Sunxbrightness__pfT, TEXT("Tooltip"), TEXT("Brightness multiplier for the sun disk"));
				MetaData->SetValue(NewProp_bpv__Skyxmaterial__pfT, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_bpv__Skyxmaterial__pfT, TEXT("DisplayName"), TEXT("Sky Material"));
				MetaData->SetValue(NewProp_bpv__Skyxmaterial__pfT, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Skyxmaterial__pfT, TEXT("OverrideNativeName"), TEXT("Sky material"));
				MetaData->SetValue(NewProp_bpv__Time_Flow__pf, TEXT("Category"), TEXT("Environment_BP"));
				MetaData->SetValue(NewProp_bpv__Time_Flow__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Time_Flow__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow"));
				MetaData->SetValue(NewProp_bpv__Time_Flow__Direction_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow__Direction_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow__Direction_C8ACAA514EF486185222D2B3D8685635"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Sun_Light_Pitch_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Sun_Light_Pitch_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow_Sun_Light_Pitch_C8ACAA514EF486185222D2B3D8685635"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Sun_Light_Yaw_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Sun_Light_Yaw_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow_Sun_Light_Yaw_C8ACAA514EF486185222D2B3D8685635"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Sky_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Sky_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow_Sky_Light_Intensity_C8ACAA514EF486185222D2B3D8685635"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Sun_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Sun_Light_Intensity_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow_Sun_Light_Intensity_C8ACAA514EF486185222D2B3D8685635"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Cloud_Opacity_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Cloud_Opacity_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow_Cloud_Opacity_C8ACAA514EF486185222D2B3D8685635"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Horizon_Falloff_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Horizon_Falloff_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow_Horizon_Falloff_C8ACAA514EF486185222D2B3D8685635"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_TimeofDay_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_TimeofDay_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow_TimeofDay_C8ACAA514EF486185222D2B3D8685635"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Horizon_Color_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Horizon_Color_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow_Horizon_Color_C8ACAA514EF486185222D2B3D8685635"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Zenith_Color_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Zenith_Color_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow_Zenith_Color_C8ACAA514EF486185222D2B3D8685635"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Cloud_Color_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Time_Flow_Cloud_Color_C8ACAA514EF486185222D2B3D8685635__pf, TEXT("OverrideNativeName"), TEXT("Time_Flow_Cloud_Color_C8ACAA514EF486185222D2B3D8685635"));
				MetaData->SetValue(NewProp_bpv__Base__pf, TEXT("Category"), TEXT("BP_Skydome"));
				MetaData->SetValue(NewProp_bpv__Base__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Base__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Base__pf, TEXT("OverrideNativeName"), TEXT("Base"));
				MetaData->SetValue(NewProp_bpv__SkyxSpherexmesh__pfTT, TEXT("Category"), TEXT("BP_Skydome"));
				MetaData->SetValue(NewProp_bpv__SkyxSpherexmesh__pfTT, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__SkyxSpherexmesh__pfTT, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__SkyxSpherexmesh__pfTT, TEXT("OverrideNativeName"), TEXT("Sky Sphere mesh"));
				MetaData->SetValue(NewProp_bpv__Sun_Light__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Sun_Light__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Sun_Light__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Sun_Light__pf, TEXT("OverrideNativeName"), TEXT("Sun_Light"));
				MetaData->SetValue(NewProp_bpv__Sky_Light__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__Sky_Light__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__Sky_Light__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__Sky_Light__pf, TEXT("OverrideNativeName"), TEXT("Sky_Light"));
				MetaData->SetValue(NewProp_bpv__PostProcess__pf, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_bpv__PostProcess__pf, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_bpv__PostProcess__pf, TEXT("ModuleRelativePath"), TEXT("Public/Environment_BP__pf3286898353.h"));
				MetaData->SetValue(NewProp_bpv__PostProcess__pf, TEXT("OverrideNativeName"), TEXT("PostProcess"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AEnvironment_BP_C__pf3286898353, TEXT("Environment_BP_C"), 3762092668);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnvironment_BP_C__pf3286898353(Z_Construct_UClass_AEnvironment_BP_C__pf3286898353, &AEnvironment_BP_C__pf3286898353::StaticClass, TEXT("/Game/Environment/Environment_BP"), TEXT("Environment_BP_C"), true, TEXT("/Game/Environment/Environment_BP"), TEXT("/Game/Environment/Environment_BP.Environment_BP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnvironment_BP_C__pf3286898353);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
