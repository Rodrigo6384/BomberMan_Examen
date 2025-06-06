// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/InterMuros.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterMuros() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterMuros_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterMuros();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void UInterMuros::StaticRegisterNativesUInterMuros()
	{
	}
	UClass* Z_Construct_UClass_UInterMuros_NoRegister()
	{
		return UInterMuros::StaticClass();
	}
	struct Z_Construct_UClass_UInterMuros_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterMuros_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterMuros_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterMuros.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterMuros_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterMuros>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterMuros_Statics::ClassParams = {
		&UInterMuros::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterMuros_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterMuros_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterMuros()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterMuros_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterMuros, 4183020340);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<UInterMuros>()
	{
		return UInterMuros::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterMuros(Z_Construct_UClass_UInterMuros, &UInterMuros::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("UInterMuros"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterMuros);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
