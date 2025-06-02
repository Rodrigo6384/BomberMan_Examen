// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/InterEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterEnemigo() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterEnemigo_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterEnemigo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void UInterEnemigo::StaticRegisterNativesUInterEnemigo()
	{
	}
	UClass* Z_Construct_UClass_UInterEnemigo_NoRegister()
	{
		return UInterEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_UInterEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterEnemigo_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterEnemigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterEnemigo_Statics::ClassParams = {
		&UInterEnemigo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterEnemigo, 520837907);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<UInterEnemigo>()
	{
		return UInterEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterEnemigo(Z_Construct_UClass_UInterEnemigo, &UInterEnemigo::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("UInterEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
