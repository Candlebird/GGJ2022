// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ2022Game/GGJ2022GameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGJ2022GameGameMode() {}
// Cross Module References
	GGJ2022GAME_API UClass* Z_Construct_UClass_AGGJ2022GameGameMode_NoRegister();
	GGJ2022GAME_API UClass* Z_Construct_UClass_AGGJ2022GameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GGJ2022Game();
// End Cross Module References
	void AGGJ2022GameGameMode::StaticRegisterNativesAGGJ2022GameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGGJ2022GameGameMode_NoRegister()
	{
		return AGGJ2022GameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGGJ2022GameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGGJ2022GameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GGJ2022Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGGJ2022GameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GGJ2022GameGameMode.h" },
		{ "ModuleRelativePath", "GGJ2022GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGGJ2022GameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGJ2022GameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGGJ2022GameGameMode_Statics::ClassParams = {
		&AGGJ2022GameGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGGJ2022GameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGGJ2022GameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGGJ2022GameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGGJ2022GameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGGJ2022GameGameMode, 465904847);
	template<> GGJ2022GAME_API UClass* StaticClass<AGGJ2022GameGameMode>()
	{
		return AGGJ2022GameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGGJ2022GameGameMode(Z_Construct_UClass_AGGJ2022GameGameMode, &AGGJ2022GameGameMode::StaticClass, TEXT("/Script/GGJ2022Game"), TEXT("AGGJ2022GameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGGJ2022GameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
