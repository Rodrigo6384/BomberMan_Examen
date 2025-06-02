// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/EnemigoCentauro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoCentauro() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEnemigoCentauro_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEnemigoCentauro();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEnemigoBase();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void AEnemigoCentauro::StaticRegisterNativesAEnemigoCentauro()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoCentauro_NoRegister()
	{
		return AEnemigoCentauro::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoCentauro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoCentauro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoCentauro_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoCentauro.h" },
		{ "ModuleRelativePath", "EnemigoCentauro.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoCentauro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoCentauro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoCentauro_Statics::ClassParams = {
		&AEnemigoCentauro::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoCentauro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoCentauro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoCentauro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoCentauro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoCentauro, 3411650264);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<AEnemigoCentauro>()
	{
		return AEnemigoCentauro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoCentauro(Z_Construct_UClass_AEnemigoCentauro, &AEnemigoCentauro::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("AEnemigoCentauro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoCentauro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
