// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/InterComandante.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterComandante() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterComandante_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterComandante();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void UInterComandante::StaticRegisterNativesUInterComandante()
	{
	}
	UClass* Z_Construct_UClass_UInterComandante_NoRegister()
	{
		return UInterComandante::StaticClass();
	}
	struct Z_Construct_UClass_UInterComandante_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterComandante_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterComandante_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterComandante.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterComandante_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterComandante>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterComandante_Statics::ClassParams = {
		&UInterComandante::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterComandante_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterComandante_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterComandante()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterComandante_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterComandante, 2603238126);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<UInterComandante>()
	{
		return UInterComandante::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterComandante(Z_Construct_UClass_UInterComandante, &UInterComandante::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("UInterComandante"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterComandante);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
