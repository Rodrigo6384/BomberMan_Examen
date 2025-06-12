// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/BombaHielo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaHielo() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABombaHielo_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABombaHielo();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABombaBase();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void ABombaHielo::StaticRegisterNativesABombaHielo()
	{
	}
	UClass* Z_Construct_UClass_ABombaHielo_NoRegister()
	{
		return ABombaHielo::StaticClass();
	}
	struct Z_Construct_UClass_ABombaHielo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABombaHielo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABombaBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombaHielo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BombaHielo.h" },
		{ "ModuleRelativePath", "BombaHielo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABombaHielo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaHielo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABombaHielo_Statics::ClassParams = {
		&ABombaHielo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABombaHielo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABombaHielo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABombaHielo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABombaHielo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombaHielo, 1795197119);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<ABombaHielo>()
	{
		return ABombaHielo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombaHielo(Z_Construct_UClass_ABombaHielo, &ABombaHielo::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("ABombaHielo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaHielo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
