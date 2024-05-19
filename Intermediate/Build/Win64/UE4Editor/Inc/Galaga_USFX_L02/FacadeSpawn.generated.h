// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class Abomba;
class ANaveEnemigaCaza;
#ifdef GALAGA_USFX_L02_FacadeSpawn_generated_h
#error "FacadeSpawn.generated.h already included, missing '#pragma once' in FacadeSpawn.h"
#endif
#define GALAGA_USFX_L02_FacadeSpawn_generated_h

#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_SPARSE_DATA
#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawneaBomba); \
	DECLARE_FUNCTION(execSpawnNaveEnemigaCaza);


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawneaBomba); \
	DECLARE_FUNCTION(execSpawnNaveEnemigaCaza);


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFacadeSpawn(); \
	friend struct Z_Construct_UClass_AFacadeSpawn_Statics; \
public: \
	DECLARE_CLASS(AFacadeSpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_L02"), NO_API) \
	DECLARE_SERIALIZER(AFacadeSpawn)


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFacadeSpawn(); \
	friend struct Z_Construct_UClass_AFacadeSpawn_Statics; \
public: \
	DECLARE_CLASS(AFacadeSpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_L02"), NO_API) \
	DECLARE_SERIALIZER(AFacadeSpawn)


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFacadeSpawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFacadeSpawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacadeSpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacadeSpawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacadeSpawn(AFacadeSpawn&&); \
	NO_API AFacadeSpawn(const AFacadeSpawn&); \
public:


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFacadeSpawn(AFacadeSpawn&&); \
	NO_API AFacadeSpawn(const AFacadeSpawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFacadeSpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFacadeSpawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFacadeSpawn)


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_PRIVATE_PROPERTY_OFFSET
#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_9_PROLOG
#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_SPARSE_DATA \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_RPC_WRAPPERS \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_INCLASS \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_SPARSE_DATA \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_INCLASS_NO_PURE_DECLS \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_L02_API UClass* StaticClass<class AFacadeSpawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_L02_master_Source_Galaga_USFX_L02_FacadeSpawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
