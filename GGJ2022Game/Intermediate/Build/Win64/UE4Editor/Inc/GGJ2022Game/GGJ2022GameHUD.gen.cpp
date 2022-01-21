// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2022Game/GGJ2022GameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGJ2022GameHUD() {}
// Cross Module References
	GGJ2022GAME_API UClass* Z_Construct_UClass_AGGJ2022GameHUD_NoRegister();
	GGJ2022GAME_API UClass* Z_Construct_UClass_AGGJ2022GameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GGJ2022Game();
// End Cross Module References
	void AGGJ2022GameHUD::StaticRegisterNativesAGGJ2022GameHUD()
	{
	}
	UClass* Z_Construct_UClass_AGGJ2022GameHUD_NoRegister()
	{
		return AGGJ2022GameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGGJ2022GameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGGJ2022GameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2022Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGJ2022GameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GGJ2022GameHUD.h" },
		{ "ModuleRelativePath", "GGJ2022GameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGGJ2022GameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGJ2022GameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGGJ2022GameHUD_Statics::ClassParams = {
		&AGGJ2022GameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGGJ2022GameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGGJ2022GameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGGJ2022GameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGGJ2022GameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGGJ2022GameHUD, 2780921190);
	template<> GGJ2022GAME_API UClass* StaticClass<AGGJ2022GameHUD>()
	{
		return AGGJ2022GameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGGJ2022GameHUD(Z_Construct_UClass_AGGJ2022GameHUD, &AGGJ2022GameHUD::StaticClass, TEXT("/Script/GGJ2022Game"), TEXT("AGGJ2022GameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGGJ2022GameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
