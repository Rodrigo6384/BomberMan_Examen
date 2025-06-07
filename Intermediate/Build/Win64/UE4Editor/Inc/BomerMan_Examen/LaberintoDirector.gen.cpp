// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/LaberintoDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoDirector() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ALaberintoDirector_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ALaberintoDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void ALaberintoDirector::StaticRegisterNativesALaberintoDirector()
	{
	}
	UClass* Z_Construct_UClass_ALaberintoDirector_NoRegister()
	{
		return ALaberintoDirector::StaticClass();
	}
	struct Z_Construct_UClass_ALaberintoDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaberintoDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaberintoDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoDirector.h" },
		{ "ModuleRelativePath", "LaberintoDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaberintoDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoDirector_Statics::ClassParams = {
		&ALaberintoDirector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALaberintoDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaberintoDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaberintoDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaberintoDirector, 273937360);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<ALaberintoDirector>()
	{
		return ALaberintoDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaberintoDirector(Z_Construct_UClass_ALaberintoDirector, &ALaberintoDirector::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("ALaberintoDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
