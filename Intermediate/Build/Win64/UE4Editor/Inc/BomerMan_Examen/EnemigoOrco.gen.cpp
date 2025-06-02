// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/EnemigoOrco.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoOrco() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEnemigoOrco_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEnemigoOrco();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEnemigoBase();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void AEnemigoOrco::StaticRegisterNativesAEnemigoOrco()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoOrco_NoRegister()
	{
		return AEnemigoOrco::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoOrco_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoOrco_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoOrco_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoOrco.h" },
		{ "ModuleRelativePath", "EnemigoOrco.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoOrco_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoOrco>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoOrco_Statics::ClassParams = {
		&AEnemigoOrco::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoOrco_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoOrco_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoOrco()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoOrco_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoOrco, 1024416395);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<AEnemigoOrco>()
	{
		return AEnemigoOrco::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoOrco(Z_Construct_UClass_AEnemigoOrco, &AEnemigoOrco::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("AEnemigoOrco"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoOrco);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
