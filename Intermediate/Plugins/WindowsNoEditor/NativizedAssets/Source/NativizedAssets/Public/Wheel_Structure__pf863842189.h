#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UParticleSystemComponent;
#include "Wheel_Structure__pf863842189.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Vehicles/00_Master_Vehicle/Structs/Wheel_Structure.Wheel_Structure", OverrideNativeName="Wheel_Structure"))
struct FWheel_Structure__pf863842189
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Bone Name", Tooltip, OverrideNativeName="BoneName_2_35CDCFD344E30F08729520B904EF9495"))
	FName bpv__BoneName_2_35CDCFD344E30F08729520B904EF9495__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Radius", Tooltip, OverrideNativeName="Radius_36_8EC73E4F4E9E454B04359EA77C200ACD"))
	float bpv__Radius_36_8EC73E4F4E9E454B04359EA77C200ACD__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Steering Angle", Tooltip, OverrideNativeName="SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5"))
	float bpv__SteeringAngle_5_DF05A7594C2D82D6CB6BC0B84A1CE9E5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mirror Steering", Tooltip, OverrideNativeName="MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE"))
	bool bpv__MirrorSteering_10_ACF1FD1D4FC8A35FEB5531A02CD21CFE__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Apply Torque", Tooltip, OverrideNativeName="ApplyTorque_8_65363D5440228F6F36C13DACF12AB372"))
	bool bpv__ApplyTorque_8_65363D5440228F6F36C13DACF12AB372__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Brake Strength Multiplier", Tooltip, OverrideNativeName="BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9"))
	float bpv__BrakeStrengthMultiplier_21_C649333F455074CEE545EDB443467AC9__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Apply HandBrake", Tooltip, OverrideNativeName="ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56"))
	bool bpv__ApplyHandBrake_23_6B9C46AE4889689E4236718D2D73EC56__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is on Ground", Tooltip, OverrideNativeName="IsonGround_40_1ACC8C104300A881FEE05DA9F2855688"))
	bool bpv__IsonGround_40_1ACC8C104300A881FEE05DA9F2855688__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Drifting", Tooltip, OverrideNativeName="IsDrifting_38_966D437D487EA024956950ABA5F36739"))
	bool bpv__IsDrifting_38_966D437D487EA024956950ABA5F36739__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Skid Emitter", Tooltip, OverrideNativeName="SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E"))
	UParticleSystemComponent* bpv__SkidEmitter_44_BE1B6F9348BF2F6C7397289CAA4F573E__pf;
	static FWheel_Structure__pf863842189 GetDefaultValue();
	bool operator== (const FWheel_Structure__pf863842189& __Other) const
	{
		return FWheel_Structure__pf863842189::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FWheel_Structure__pf863842189& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FWheel_Structure__pf863842189::StaticStruct()); }
};
