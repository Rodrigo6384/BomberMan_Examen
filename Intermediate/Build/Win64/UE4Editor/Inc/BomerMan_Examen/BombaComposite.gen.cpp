// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/BombaComposite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaComposite() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABombaComposite_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABombaComposite();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterBomba_NoRegister();
// End Cross Module References
	void ABombaComposite::StaticRegisterNativesABombaComposite()
	{
	}
	UClass* Z_Construct_UClass_ABombaComposite_NoRegister()
	{
		return ABombaComposite::StaticClass();
	}
	struct Z_Construct_UClass_ABombaComposite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABombaComposite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombaComposite_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BombaComposite.h" },
		{ "ModuleRelativePath", "BombaComposite.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABombaComposite_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterBomba_NoRegister, (int32)VTABLE_OFFSET(ABombaComposite, IInterBomba), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABombaComposite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaComposite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABombaComposite_Statics::ClassParams = {
		&ABombaComposite::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABombaComposite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABombaComposite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABombaComposite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABombaComposite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombaComposite, 2412503256);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<ABombaComposite>()
	{
		return ABombaComposite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombaComposite(Z_Construct_UClass_ABombaComposite, &ABombaComposite::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("ABombaComposite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaComposite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
