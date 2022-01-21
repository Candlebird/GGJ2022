// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GGJ2022GAME_GGJ2022GameProjectile_generated_h
#error "GGJ2022GameProjectile.generated.h already included, missing '#pragma once' in GGJ2022GameProjectile.h"
#endif
#define GGJ2022GAME_GGJ2022GameProjectile_generated_h

#define GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_SPARSE_DATA
#define GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGGJ2022GameProjectile(); \
	friend struct Z_Construct_UClass_AGGJ2022GameProjectile_Statics; \
public: \
	DECLARE_CLASS(AGGJ2022GameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGJ2022Game"), NO_API) \
	DECLARE_SERIALIZER(AGGJ2022GameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGGJ2022GameProjectile(); \
	friend struct Z_Construct_UClass_AGGJ2022GameProjectile_Statics; \
public: \
	DECLARE_CLASS(AGGJ2022GameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGJ2022Game"), NO_API) \
	DECLARE_SERIALIZER(AGGJ2022GameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGGJ2022GameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGGJ2022GameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGGJ2022GameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGGJ2022GameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGGJ2022GameProjectile(AGGJ2022GameProjectile&&); \
	NO_API AGGJ2022GameProjectile(const AGGJ2022GameProjectile&); \
public:


#define GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGGJ2022GameProjectile(AGGJ2022GameProjectile&&); \
	NO_API AGGJ2022GameProjectile(const AGGJ2022GameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGGJ2022GameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGGJ2022GameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGGJ2022GameProjectile)


#define GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGGJ2022GameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGGJ2022GameProjectile, ProjectileMovement); }


#define GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_12_PROLOG
#define GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_SPARSE_DATA \
	GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_RPC_WRAPPERS \
	GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_INCLASS \
	GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_SPARSE_DATA \
	GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ2022GAME_API UClass* StaticClass<class AGGJ2022GameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GGJ2022Game_Source_GGJ2022Game_GGJ2022GameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
