// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Wheel_Structure__pf863842189.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheel_Structure__pf863842189() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FWheel_Structure__pf863842189();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FWheel_Structure__pf863842189::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Vehicles/00_Master_Vehicle/Structs/Wheel_Structure"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("Wheel_Structure")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FWheel_Structure__pf863842189_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheel_Structure__pf863842189, StructPackage, TEXT("Wheel_Structure"), sizeof(FWheel_Structure__pf863842189), Get_Z_Construct_UScriptStruct_FWheel_Structure__pf863842189_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWheel_Structure__pf863842189(FWheel_Structure__pf863842189::StaticStruct, TEXT("/Script/NativizedAssets"), TEXT("Wheel_Structure"), true, TEXT("/Game/Vehicles/00_Master_Vehicle/Structs/Wheel_Structure"), TEXT("/Game/Vehicles/00_Master_Vehicle/Structs/Wheel_Structure.Wheel_Structure"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFWheel_Structure__pf863842189
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFWheel_Structure__pf863842189()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Wheel_Structure")),new UScriptStruct::TCppStructOps<FWheel_Structure__pf863842189>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFWheel_Structure__pf863842189;
	UScriptStruct* Z_Construct_UScriptStruct_FWheel_Structure__pf863842189()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Vehicles/00_Master_Vehicle/Structs/Wheel_Structure"));
		extern uint32 Get_Z_Construct_UScriptStruct_FWheel_Structure__pf863842189_CRC();
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Wheel_Structure"), sizeof(FWheel_Structure__pf863842189), Get_Z_Construct_UScriptStruct_FWheel_Structure__pf863842189_CRC(), true);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Wheel_Structure"), RF_Public|RF_Transient) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FWheel_Structure__pf863842189>, EStructFlags(0x00000005));
			UProperty* NewProp_bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E"), RF_Public|RF_Transient) UObjectProperty(CPP_PROPERTY_BASE(bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf, FWheel_Structure__pf863842189), 0x001000000008000d, Z_Construct_UClass_UParticleSystemComponent_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf, FWheel_Structure__pf863842189);
			UProperty* NewProp_bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IsDrifting_38_966D437D487EA024956950ABA5F36739"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf, FWheel_Structure__pf863842189), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf, FWheel_Structure__pf863842189), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf, FWheel_Structure__pf863842189);
			UProperty* NewProp_bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IsonGround_40_1ACC8C104300A881FEE05DA9F2855688"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf, FWheel_Structure__pf863842189), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf, FWheel_Structure__pf863842189), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf, FWheel_Structure__pf863842189);
			UProperty* NewProp_bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf, FWheel_Structure__pf863842189), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf, FWheel_Structure__pf863842189), sizeof(bool), true);
			UProperty* NewProp_bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf, FWheel_Structure__pf863842189), 0x0010000000000005);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf, FWheel_Structure__pf863842189);
			UProperty* NewProp_bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ApplyTorque_8_65363D5440228F6F36C13DACF12AB372"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf, FWheel_Structure__pf863842189), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf, FWheel_Structure__pf863842189), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf, FWheel_Structure__pf863842189);
			UProperty* NewProp_bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE"), RF_Public|RF_Transient) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf, FWheel_Structure__pf863842189), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf, FWheel_Structure__pf863842189), sizeof(bool), true);
			UProperty* NewProp_bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, FWheel_Structure__pf863842189), 0x0010000000000005);
			UProperty* NewProp_bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Radius_36_8EC73E4F4E9E454B04359EA77C200ACD"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf, FWheel_Structure__pf863842189), 0x0010000000000005);
			UProperty* NewProp_bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BoneName_2_35CDCFD344E30F08729520B904EF9495"), RF_Public|RF_Transient) UNameProperty(CPP_PROPERTY_BASE(bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, FWheel_Structure__pf863842189), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Wheel_Structure__pf863842189.h"));
			MetaData->SetValue(ReturnStruct, TEXT("OverrideNativeName"), TEXT("Wheel_Structure"));
			MetaData->SetValue(ReturnStruct, TEXT("ReplaceConverted"), TEXT("/Game/Vehicles/00_Master_Vehicle/Structs/Wheel_Structure.Wheel_Structure"));
			MetaData->SetValue(NewProp_bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf, TEXT("Category"), TEXT("Wheel_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf, TEXT("DisplayName"), TEXT("Skid Emitter"));
			MetaData->SetValue(NewProp_bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf, TEXT("ModuleRelativePath"), TEXT("Public/Wheel_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf, TEXT("OverrideNativeName"), TEXT("SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E"));
			MetaData->SetValue(NewProp_bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf, TEXT("Tooltip"), TEXT(""));
			MetaData->SetValue(NewProp_bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf, TEXT("Category"), TEXT("Wheel_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf, TEXT("DisplayName"), TEXT("Is Drifting"));
			MetaData->SetValue(NewProp_bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf, TEXT("ModuleRelativePath"), TEXT("Public/Wheel_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf, TEXT("OverrideNativeName"), TEXT("IsDrifting_38_966D437D487EA024956950ABA5F36739"));
			MetaData->SetValue(NewProp_bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf, TEXT("Tooltip"), TEXT(""));
			MetaData->SetValue(NewProp_bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf, TEXT("Category"), TEXT("Wheel_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf, TEXT("DisplayName"), TEXT("Is on Ground"));
			MetaData->SetValue(NewProp_bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf, TEXT("ModuleRelativePath"), TEXT("Public/Wheel_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf, TEXT("OverrideNativeName"), TEXT("IsonGround_40_1ACC8C104300A881FEE05DA9F2855688"));
			MetaData->SetValue(NewProp_bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf, TEXT("Tooltip"), TEXT(""));
			MetaData->SetValue(NewProp_bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf, TEXT("Category"), TEXT("Wheel_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf, TEXT("DisplayName"), TEXT("Apply HandBrake"));
			MetaData->SetValue(NewProp_bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf, TEXT("ModuleRelativePath"), TEXT("Public/Wheel_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf, TEXT("OverrideNativeName"), TEXT("ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56"));
			MetaData->SetValue(NewProp_bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf, TEXT("Tooltip"), TEXT(""));
			MetaData->SetValue(NewProp_bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf, TEXT("Category"), TEXT("Wheel_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf, TEXT("DisplayName"), TEXT("Brake Strength Multiplier"));
			MetaData->SetValue(NewProp_bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf, TEXT("ModuleRelativePath"), TEXT("Public/Wheel_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf, TEXT("OverrideNativeName"), TEXT("BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9"));
			MetaData->SetValue(NewProp_bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf, TEXT("Tooltip"), TEXT(""));
			MetaData->SetValue(NewProp_bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf, TEXT("Category"), TEXT("Wheel_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf, TEXT("DisplayName"), TEXT("Apply Torque"));
			MetaData->SetValue(NewProp_bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf, TEXT("ModuleRelativePath"), TEXT("Public/Wheel_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf, TEXT("OverrideNativeName"), TEXT("ApplyTorque_8_65363D5440228F6F36C13DACF12AB372"));
			MetaData->SetValue(NewProp_bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf, TEXT("Tooltip"), TEXT(""));
			MetaData->SetValue(NewProp_bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf, TEXT("Category"), TEXT("Wheel_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf, TEXT("DisplayName"), TEXT("Mirror Steering"));
			MetaData->SetValue(NewProp_bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf, TEXT("ModuleRelativePath"), TEXT("Public/Wheel_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf, TEXT("OverrideNativeName"), TEXT("MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE"));
			MetaData->SetValue(NewProp_bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf, TEXT("Tooltip"), TEXT(""));
			MetaData->SetValue(NewProp_bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, TEXT("Category"), TEXT("Wheel_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, TEXT("DisplayName"), TEXT("Steering Angle"));
			MetaData->SetValue(NewProp_bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, TEXT("ModuleRelativePath"), TEXT("Public/Wheel_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, TEXT("OverrideNativeName"), TEXT("SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5"));
			MetaData->SetValue(NewProp_bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf, TEXT("Tooltip"), TEXT(""));
			MetaData->SetValue(NewProp_bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf, TEXT("Category"), TEXT("Wheel_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf, TEXT("DisplayName"), TEXT("Radius"));
			MetaData->SetValue(NewProp_bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf, TEXT("ModuleRelativePath"), TEXT("Public/Wheel_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf, TEXT("OverrideNativeName"), TEXT("Radius_36_8EC73E4F4E9E454B04359EA77C200ACD"));
			MetaData->SetValue(NewProp_bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf, TEXT("Tooltip"), TEXT(""));
			MetaData->SetValue(NewProp_bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, TEXT("Category"), TEXT("Wheel_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, TEXT("DisplayName"), TEXT("Bone Name"));
			MetaData->SetValue(NewProp_bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, TEXT("ModuleRelativePath"), TEXT("Public/Wheel_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, TEXT("OverrideNativeName"), TEXT("BoneName_2_35CDCFD344E30F08729520B904EF9495"));
			MetaData->SetValue(NewProp_bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf, TEXT("Tooltip"), TEXT(""));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWheel_Structure__pf863842189_CRC() { return 2676431930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
