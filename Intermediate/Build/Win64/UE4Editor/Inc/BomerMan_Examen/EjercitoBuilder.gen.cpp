// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/EjercitoBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEjercitoBuilder() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEjercitoBuilder_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEjercitoBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void AEjercitoBuilder::StaticRegisterNativesAEjercitoBuilder()
	{
	}
	UClass* Z_Construct_UClass_AEjercitoBuilder_NoRegister()
	{
		return AEjercitoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_AEjercitoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEjercitoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEjercitoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EjercitoBuilder.h" },
		{ "ModuleRelativePath", "EjercitoBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEjercitoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEjercitoBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEjercitoBuilder_Statics::ClassParams = {
		&AEjercitoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEjercitoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEjercitoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEjercitoBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEjercitoBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEjercitoBuilder, 2972149905);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<AEjercitoBuilder>()
	{
		return AEjercitoBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEjercitoBuilder(Z_Construct_UClass_AEjercitoBuilder, &AEjercitoBuilder::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("AEjercitoBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEjercitoBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
