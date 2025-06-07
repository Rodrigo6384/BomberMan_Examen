// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/LaberintoBasicoBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoBasicoBuilder() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ALaberintoBasicoBuilder_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ALaberintoBasicoBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterLaberintoBuilder_NoRegister();
// End Cross Module References
	void ALaberintoBasicoBuilder::StaticRegisterNativesALaberintoBasicoBuilder()
	{
	}
	UClass* Z_Construct_UClass_ALaberintoBasicoBuilder_NoRegister()
	{
		return ALaberintoBasicoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ALaberintoBasicoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaberintoBasicoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaberintoBasicoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoBasicoBuilder.h" },
		{ "ModuleRelativePath", "LaberintoBasicoBuilder.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberintoBasicoBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterLaberintoBuilder_NoRegister, (int32)VTABLE_OFFSET(ALaberintoBasicoBuilder, IInterLaberintoBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaberintoBasicoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoBasicoBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoBasicoBuilder_Statics::ClassParams = {
		&ALaberintoBasicoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALaberintoBasicoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoBasicoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaberintoBasicoBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaberintoBasicoBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaberintoBasicoBuilder, 696660277);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<ALaberintoBasicoBuilder>()
	{
		return ALaberintoBasicoBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaberintoBasicoBuilder(Z_Construct_UClass_ALaberintoBasicoBuilder, &ALaberintoBasicoBuilder::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("ALaberintoBasicoBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoBasicoBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
