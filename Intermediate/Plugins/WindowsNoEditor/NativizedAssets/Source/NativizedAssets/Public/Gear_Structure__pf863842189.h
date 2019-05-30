#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Gear_Structure__pf863842189.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Vehicles/00_Master_Vehicle/Structs/Gear_Structure.Gear_Structure", OverrideNativeName="Gear_Structure"))
struct FGear_Structure__pf863842189
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Gear Name", Tooltip="Name for display only.", OverrideNativeName="GearName_24_8202CC6F4B97B2BD39310FBF19B8239F"))
	FString bpv__GearName_24_8202CC6F4B97B2BD39310FBF19B8239F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Gear Up Ratio", Tooltip="0 - 1. (RPM min - RPM max) ratio to gear up.", OverrideNativeName="GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A"))
	float bpv__GearUpRatio_47_B9B70AC24DBE8CAEEC10618209D5C32A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Gear Down Ratio", Tooltip="0 - 1. (RPM min - RPM max) ratio to gear down.", OverrideNativeName="GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E"))
	float bpv__GearDownRatio_46_8C85DFD34A43E1F23F2A389F550A405E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Gear Ratio", Tooltip, OverrideNativeName="GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3"))
	float bpv__GearRatio_45_10E21ADD448930CC200DADBAFC7B8AC3__pf;
	static FGear_Structure__pf863842189 GetDefaultValue();
	bool operator== (const FGear_Structure__pf863842189& __Other) const
	{
		return FGear_Structure__pf863842189::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FGear_Structure__pf863842189& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FGear_Structure__pf863842189::StaticStruct()); }
};
