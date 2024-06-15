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
#ifdef PREGUNTA21_Pregunta21Projectile_generated_h
#error "Pregunta21Projectile.generated.h already included, missing '#pragma once' in Pregunta21Projectile.h"
#endif
#define PREGUNTA21_Pregunta21Projectile_generated_h

#define Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_SPARSE_DATA
#define Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPregunta21Projectile(); \
	friend struct Z_Construct_UClass_APregunta21Projectile_Statics; \
public: \
	DECLARE_CLASS(APregunta21Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pregunta21"), NO_API) \
	DECLARE_SERIALIZER(APregunta21Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPregunta21Projectile(); \
	friend struct Z_Construct_UClass_APregunta21Projectile_Statics; \
public: \
	DECLARE_CLASS(APregunta21Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pregunta21"), NO_API) \
	DECLARE_SERIALIZER(APregunta21Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APregunta21Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APregunta21Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APregunta21Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APregunta21Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APregunta21Projectile(APregunta21Projectile&&); \
	NO_API APregunta21Projectile(const APregunta21Projectile&); \
public:


#define Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APregunta21Projectile(APregunta21Projectile&&); \
	NO_API APregunta21Projectile(const APregunta21Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APregunta21Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APregunta21Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APregunta21Projectile)


#define Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APregunta21Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APregunta21Projectile, ProjectileMovement); }


#define Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_12_PROLOG
#define Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_SPARSE_DATA \
	Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_RPC_WRAPPERS \
	Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_INCLASS \
	Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_SPARSE_DATA \
	Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_INCLASS_NO_PURE_DECLS \
	Pregunta21_Source_Pregunta21_Pregunta21Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PREGUNTA21_API UClass* StaticClass<class APregunta21Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pregunta21_Source_Pregunta21_Pregunta21Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
