// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/ComandoExplosionEnCruz.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComandoExplosionEnCruz() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AComandoExplosionEnCruz_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AComandoExplosionEnCruz();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterComandoExplosion_NoRegister();
// End Cross Module References
	void AComandoExplosionEnCruz::StaticRegisterNativesAComandoExplosionEnCruz()
	{
	}
	UClass* Z_Construct_UClass_AComandoExplosionEnCruz_NoRegister()
	{
		return AComandoExplosionEnCruz::StaticClass();
	}
	struct Z_Construct_UClass_AComandoExplosionEnCruz_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComandoExplosionEnCruz_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComandoExplosionEnCruz_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComandoExplosionEnCruz.h" },
		{ "ModuleRelativePath", "ComandoExplosionEnCruz.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AComandoExplosionEnCruz_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterComandoExplosion_NoRegister, (int32)VTABLE_OFFSET(AComandoExplosionEnCruz, IInterComandoExplosion), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComandoExplosionEnCruz_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComandoExplosionEnCruz>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComandoExplosionEnCruz_Statics::ClassParams = {
		&AComandoExplosionEnCruz::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AComandoExplosionEnCruz_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComandoExplosionEnCruz_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComandoExplosionEnCruz()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComandoExplosionEnCruz_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComandoExplosionEnCruz, 769400836);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<AComandoExplosionEnCruz>()
	{
		return AComandoExplosionEnCruz::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComandoExplosionEnCruz(Z_Construct_UClass_AComandoExplosionEnCruz, &AComandoExplosionEnCruz::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("AComandoExplosionEnCruz"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComandoExplosionEnCruz);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
