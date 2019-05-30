#include "NativizedAssets.h"
#include "Vehicle_Save__pf1010915279.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UVehicle_Save_C__pf1010915279::UVehicle_Save_C__pf1010915279(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UVehicle_Save_C__pf1010915279::StaticClass() == GetClass()))
	{
		UVehicle_Save_C__pf1010915279::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Mileage__pf = 0.000000f;
	bpv__FuelxAmmount__pfT = 100.000000f;
}
void UVehicle_Save_C__pf1010915279::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UVehicle_Save_C__pf1010915279::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
void UVehicle_Save_C__pf1010915279::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void UVehicle_Save_C__pf1010915279::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{92, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
	};
	for(const FCompactBlueprintDependencyData CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(
			F__NativeDependencies::Get(CompactData.ObjectRefIndex)
			,CompactData.ClassDependency
			,CompactData.CDODependency
			,CompactData.ObjectRefIndex
		));
	} 
}
struct FRegisterHelper__UVehicle_Save_C__pf1010915279
{
	FRegisterHelper__UVehicle_Save_C__pf1010915279()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Vehicle_Save"), &UVehicle_Save_C__pf1010915279::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UVehicle_Save_C__pf1010915279 Instance;
};
FRegisterHelper__UVehicle_Save_C__pf1010915279 FRegisterHelper__UVehicle_Save_C__pf1010915279::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
