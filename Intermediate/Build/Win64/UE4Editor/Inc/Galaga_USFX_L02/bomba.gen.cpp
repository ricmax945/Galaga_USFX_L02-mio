// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L02/bomba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebomba() {}
// Cross Module References
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_Abomba_NoRegister();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_Abomba();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L02();
// End Cross Module References
	void Abomba::StaticRegisterNativesAbomba()
	{
	}
	UClass* Z_Construct_UClass_Abomba_NoRegister()
	{
		return Abomba::StaticClass();
	}
	struct Z_Construct_UClass_Abomba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Abomba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Abomba_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "bomba.h" },
		{ "ModuleRelativePath", "bomba.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Abomba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Abomba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Abomba_Statics::ClassParams = {
		&Abomba::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Abomba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Abomba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Abomba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Abomba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Abomba, 1833447755);
	template<> GALAGA_USFX_L02_API UClass* StaticClass<Abomba>()
	{
		return Abomba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Abomba(Z_Construct_UClass_Abomba, &Abomba::StaticClass, TEXT("/Script/Galaga_USFX_L02"), TEXT("Abomba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Abomba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
