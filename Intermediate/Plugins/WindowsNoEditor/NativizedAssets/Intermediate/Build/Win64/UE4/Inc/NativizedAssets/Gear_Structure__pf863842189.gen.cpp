// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Gear_Structure__pf863842189.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGear_Structure__pf863842189() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FGear_Structure__pf863842189();
// End Cross Module References
class UScriptStruct* FGear_Structure__pf863842189::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Vehicles/00_Master_Vehicle/Structs/Gear_Structure"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("Gear_Structure")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FGear_Structure__pf863842189_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGear_Structure__pf863842189, StructPackage, TEXT("Gear_Structure"), sizeof(FGear_Structure__pf863842189), Get_Z_Construct_UScriptStruct_FGear_Structure__pf863842189_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGear_Structure__pf863842189(FGear_Structure__pf863842189::StaticStruct, TEXT("/Script/NativizedAssets"), TEXT("Gear_Structure"), true, TEXT("/Game/Vehicles/00_Master_Vehicle/Structs/Gear_Structure"), TEXT("/Game/Vehicles/00_Master_Vehicle/Structs/Gear_Structure.Gear_Structure"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFGear_Structure__pf863842189
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFGear_Structure__pf863842189()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Gear_Structure")),new UScriptStruct::TCppStructOps<FGear_Structure__pf863842189>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFGear_Structure__pf863842189;
	UScriptStruct* Z_Construct_UScriptStruct_FGear_Structure__pf863842189()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Vehicles/00_Master_Vehicle/Structs/Gear_Structure"));
		extern uint32 Get_Z_Construct_UScriptStruct_FGear_Structure__pf863842189_CRC();
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Gear_Structure"), sizeof(FGear_Structure__pf863842189), Get_Z_Construct_UScriptStruct_FGear_Structure__pf863842189_CRC(), true);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Gear_Structure"), RF_Public|RF_Transient) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FGear_Structure__pf863842189>, EStructFlags(0x00000001));
			UProperty* NewProp_bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf, FGear_Structure__pf863842189), 0x0010000000000005);
			UProperty* NewProp_bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf, FGear_Structure__pf863842189), 0x0010000000000005);
			UProperty* NewProp_bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A"), RF_Public|RF_Transient) UFloatProperty(CPP_PROPERTY_BASE(bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf, FGear_Structure__pf863842189), 0x0010000000000005);
			UProperty* NewProp_bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GearName_24_8202CC6F4B97B2BD39310FBF19B8239F"), RF_Public|RF_Transient) UStrProperty(CPP_PROPERTY_BASE(bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf, FGear_Structure__pf863842189), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Gear_Structure__pf863842189.h"));
			MetaData->SetValue(ReturnStruct, TEXT("OverrideNativeName"), TEXT("Gear_Structure"));
			MetaData->SetValue(ReturnStruct, TEXT("ReplaceConverted"), TEXT("/Game/Vehicles/00_Master_Vehicle/Structs/Gear_Structure.Gear_Structure"));
			MetaData->SetValue(NewProp_bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf, TEXT("Category"), TEXT("Gear_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf, TEXT("DisplayName"), TEXT("Gear Ratio"));
			MetaData->SetValue(NewProp_bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf, TEXT("ModuleRelativePath"), TEXT("Public/Gear_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf, TEXT("OverrideNativeName"), TEXT("GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3"));
			MetaData->SetValue(NewProp_bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf, TEXT("Tooltip"), TEXT(""));
			MetaData->SetValue(NewProp_bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf, TEXT("Category"), TEXT("Gear_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf, TEXT("DisplayName"), TEXT("Gear Down Ratio"));
			MetaData->SetValue(NewProp_bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf, TEXT("ModuleRelativePath"), TEXT("Public/Gear_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf, TEXT("OverrideNativeName"), TEXT("GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E"));
			MetaData->SetValue(NewProp_bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf, TEXT("Tooltip"), TEXT("0 - 1. (RPM min - RPM max) ratio to gear down."));
			MetaData->SetValue(NewProp_bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf, TEXT("Category"), TEXT("Gear_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf, TEXT("DisplayName"), TEXT("Gear Up Ratio"));
			MetaData->SetValue(NewProp_bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf, TEXT("ModuleRelativePath"), TEXT("Public/Gear_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf, TEXT("OverrideNativeName"), TEXT("GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A"));
			MetaData->SetValue(NewProp_bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf, TEXT("Tooltip"), TEXT("0 - 1. (RPM min - RPM max) ratio to gear up."));
			MetaData->SetValue(NewProp_bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf, TEXT("Category"), TEXT("Gear_Structure__pf863842189"));
			MetaData->SetValue(NewProp_bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf, TEXT("DisplayName"), TEXT("Gear Name"));
			MetaData->SetValue(NewProp_bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf, TEXT("ModuleRelativePath"), TEXT("Public/Gear_Structure__pf863842189.h"));
			MetaData->SetValue(NewProp_bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf, TEXT("OverrideNativeName"), TEXT("GearName_24_8202CC6F4B97B2BD39310FBF19B8239F"));
			MetaData->SetValue(NewProp_bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf, TEXT("Tooltip"), TEXT("Name for display only."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGear_Structure__pf863842189_CRC() { return 1999009693U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
