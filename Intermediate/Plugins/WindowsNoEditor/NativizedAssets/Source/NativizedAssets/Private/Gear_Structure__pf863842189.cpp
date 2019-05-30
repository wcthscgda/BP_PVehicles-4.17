#include "NativizedAssets.h"
#include "Gear_Structure__pf863842189.h"
FGear_Structure__pf863842189 FGear_Structure__pf863842189::GetDefaultValue()
{
	FStructOnScope StructOnScope(FGear_Structure__pf863842189::StaticStruct());
	FGear_Structure__pf863842189& DefaultData__ = *((FGear_Structure__pf863842189*)StructOnScope.GetStructMemory());
	return DefaultData__;
}
