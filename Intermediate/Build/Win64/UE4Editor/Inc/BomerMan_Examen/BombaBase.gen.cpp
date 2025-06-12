// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/BombaBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaBase() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABombaBase_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABombaBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterBomba_NoRegister();
// End Cross Module References
	void ABombaBase::StaticRegisterNativesABombaBase()
	{
	}
	UClass* Z_Construct_UClass_ABombaBase_NoRegister()
	{
		return ABombaBase::StaticClass();
	}
	struct Z_Construct_UClass_ABombaBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABombaBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombaBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BombaBase.h" },
		{ "ModuleRelativePath", "BombaBase.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABombaBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterBomba_NoRegister, (int32)VTABLE_OFFSET(ABombaBase, IInterBomba), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABombaBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABombaBase_Statics::ClassParams = {
		&ABombaBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABombaBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABombaBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABombaBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABombaBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombaBase, 581230884);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<ABombaBase>()
	{
		return ABombaBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombaBase(Z_Construct_UClass_ABombaBase, &ABombaBase::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("ABombaBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
