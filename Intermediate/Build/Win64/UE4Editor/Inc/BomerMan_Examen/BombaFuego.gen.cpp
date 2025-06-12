// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/BombaFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaFuego() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABombaFuego_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABombaFuego();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABombaBase();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void ABombaFuego::StaticRegisterNativesABombaFuego()
	{
	}
	UClass* Z_Construct_UClass_ABombaFuego_NoRegister()
	{
		return ABombaFuego::StaticClass();
	}
	struct Z_Construct_UClass_ABombaFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABombaFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABombaBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombaFuego_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BombaFuego.h" },
		{ "ModuleRelativePath", "BombaFuego.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABombaFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABombaFuego_Statics::ClassParams = {
		&ABombaFuego::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABombaFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABombaFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABombaFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABombaFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombaFuego, 2548678200);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<ABombaFuego>()
	{
		return ABombaFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombaFuego(Z_Construct_UClass_ABombaFuego, &ABombaFuego::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("ABombaFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
