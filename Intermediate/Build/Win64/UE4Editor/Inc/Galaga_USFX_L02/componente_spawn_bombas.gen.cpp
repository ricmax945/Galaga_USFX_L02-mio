// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L02/componente_spawn_bombas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecomponente_spawn_bombas() {}
// Cross Module References
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_Ucomponente_spawn_bombas_NoRegister();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_Ucomponente_spawn_bombas();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L02();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Ucomponente_spawn_bombas::execSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn();
		P_NATIVE_END;
	}
	void Ucomponente_spawn_bombas::StaticRegisterNativesUcomponente_spawn_bombas()
	{
		UClass* Class = Ucomponente_spawn_bombas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &Ucomponente_spawn_bombas::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Ucomponente_spawn_bombas_Spawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ucomponente_spawn_bombas_Spawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cookbook" },
		{ "ModuleRelativePath", "componente_spawn_bombas.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ucomponente_spawn_bombas_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ucomponente_spawn_bombas, nullptr, "Spawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ucomponente_spawn_bombas_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ucomponente_spawn_bombas_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ucomponente_spawn_bombas_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ucomponente_spawn_bombas_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Ucomponente_spawn_bombas_NoRegister()
	{
		return Ucomponente_spawn_bombas::StaticClass();
	}
	struct Z_Construct_UClass_Ucomponente_spawn_bombas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Ucomponente_spawn_bombas_Spawn, "Spawn" }, // 2499180765
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "componente_spawn_bombas.h" },
		{ "ModuleRelativePath", "componente_spawn_bombas.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "componente_spawn_bombas" },
		{ "ModuleRelativePath", "componente_spawn_bombas.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ucomponente_spawn_bombas, ActorToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::NewProp_ActorToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::NewProp_ActorToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ucomponente_spawn_bombas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::ClassParams = {
		&Ucomponente_spawn_bombas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ucomponente_spawn_bombas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ucomponente_spawn_bombas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ucomponente_spawn_bombas, 273415898);
	template<> GALAGA_USFX_L02_API UClass* StaticClass<Ucomponente_spawn_bombas>()
	{
		return Ucomponente_spawn_bombas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ucomponente_spawn_bombas(Z_Construct_UClass_Ucomponente_spawn_bombas, &Ucomponente_spawn_bombas::StaticClass, TEXT("/Script/Galaga_USFX_L02"), TEXT("Ucomponente_spawn_bombas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ucomponente_spawn_bombas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
