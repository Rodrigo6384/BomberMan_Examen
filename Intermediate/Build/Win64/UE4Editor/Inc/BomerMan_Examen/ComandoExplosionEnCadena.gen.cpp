// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/ComandoExplosionEnCadena.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComandoExplosionEnCadena() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AComandoExplosionEnCadena_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AComandoExplosionEnCadena();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterComandoExplosion_NoRegister();
// End Cross Module References
	void AComandoExplosionEnCadena::StaticRegisterNativesAComandoExplosionEnCadena()
	{
	}
	UClass* Z_Construct_UClass_AComandoExplosionEnCadena_NoRegister()
	{
		return AComandoExplosionEnCadena::StaticClass();
	}
	struct Z_Construct_UClass_AComandoExplosionEnCadena_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComandoExplosionEnCadena_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComandoExplosionEnCadena_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComandoExplosionEnCadena.h" },
		{ "ModuleRelativePath", "ComandoExplosionEnCadena.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AComandoExplosionEnCadena_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterComandoExplosion_NoRegister, (int32)VTABLE_OFFSET(AComandoExplosionEnCadena, IInterComandoExplosion), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComandoExplosionEnCadena_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComandoExplosionEnCadena>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComandoExplosionEnCadena_Statics::ClassParams = {
		&AComandoExplosionEnCadena::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AComandoExplosionEnCadena_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComandoExplosionEnCadena_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComandoExplosionEnCadena()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComandoExplosionEnCadena_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComandoExplosionEnCadena, 105448241);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<AComandoExplosionEnCadena>()
	{
		return AComandoExplosionEnCadena::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComandoExplosionEnCadena(Z_Construct_UClass_AComandoExplosionEnCadena, &AComandoExplosionEnCadena::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("AComandoExplosionEnCadena"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComandoExplosionEnCadena);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
