// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/Comandante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComandante() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AComandante_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AComandante();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterComandante_NoRegister();
// End Cross Module References
	void AComandante::StaticRegisterNativesAComandante()
	{
	}
	UClass* Z_Construct_UClass_AComandante_NoRegister()
	{
		return AComandante::StaticClass();
	}
	struct Z_Construct_UClass_AComandante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComandante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComandante_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Comandante.h" },
		{ "ModuleRelativePath", "Comandante.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AComandante_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterComandante_NoRegister, (int32)VTABLE_OFFSET(AComandante, IInterComandante), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComandante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComandante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComandante_Statics::ClassParams = {
		&AComandante::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AComandante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComandante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComandante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComandante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComandante, 3311785533);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<AComandante>()
	{
		return AComandante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComandante(Z_Construct_UClass_AComandante, &AComandante::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("AComandante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComandante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
