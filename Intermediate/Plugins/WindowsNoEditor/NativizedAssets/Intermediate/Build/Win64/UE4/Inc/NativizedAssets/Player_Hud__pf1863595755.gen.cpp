// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Player_Hud__pf1863595755.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Hud__pf1863595755() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPlayer_HUD_C__pf1863595755_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPlayer_HUD_C__pf1863595755();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	void UPlayer_HUD_C__pf1863595755::StaticRegisterNativesUPlayer_HUD_C__pf1863595755()
	{
	}
	UClass* Z_Construct_UClass_UPlayer_HUD_C__pf1863595755_NoRegister()
	{
		return UPlayer_HUD_C__pf1863595755::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayer_HUD_C__pf1863595755()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/UMG/Player_Hud"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Player_HUD_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			Z_Construct_UClass_UUserWidget();
			OuterClass = UPlayer_HUD_C__pf1863595755::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A01080u;


				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UPlayer_HUD_C__pf1863595755> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Player_Hud__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Player_Hud__pf1863595755.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("OverrideNativeName"), TEXT("Player_HUD_C"));
				MetaData->SetValue(OuterClass, TEXT("ReplaceConverted"), TEXT("/Game/UMG/Player_Hud.Player_HUD_C"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UPlayer_HUD_C__pf1863595755, TEXT("Player_HUD_C"), 518031166);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayer_HUD_C__pf1863595755(Z_Construct_UClass_UPlayer_HUD_C__pf1863595755, &UPlayer_HUD_C__pf1863595755::StaticClass, TEXT("/Game/UMG/Player_Hud"), TEXT("Player_HUD_C"), true, TEXT("/Game/UMG/Player_Hud"), TEXT("/Game/UMG/Player_Hud.Player_HUD_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer_HUD_C__pf1863595755);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
