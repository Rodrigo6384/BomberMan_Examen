// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/EjercitoDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEjercitoDirector() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEjercitoDirector_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEjercitoDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void AEjercitoDirector::StaticRegisterNativesAEjercitoDirector()
	{
	}
	UClass* Z_Construct_UClass_AEjercitoDirector_NoRegister()
	{
		return AEjercitoDirector::StaticClass();
	}
	struct Z_Construct_UClass_AEjercitoDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEjercitoDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEjercitoDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EjercitoDirector.h" },
		{ "ModuleRelativePath", "EjercitoDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEjercitoDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEjercitoDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEjercitoDirector_Statics::ClassParams = {
		&AEjercitoDirector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEjercitoDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEjercitoDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEjercitoDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEjercitoDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEjercitoDirector, 472037619);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<AEjercitoDirector>()
	{
		return AEjercitoDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEjercitoDirector(Z_Construct_UClass_AEjercitoDirector, &AEjercitoDirector::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("AEjercitoDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEjercitoDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
