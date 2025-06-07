// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/InterFachadaJuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterFachadaJuego() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterFachadaJuego_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterFachadaJuego();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void UInterFachadaJuego::StaticRegisterNativesUInterFachadaJuego()
	{
	}
	UClass* Z_Construct_UClass_UInterFachadaJuego_NoRegister()
	{
		return UInterFachadaJuego::StaticClass();
	}
	struct Z_Construct_UClass_UInterFachadaJuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterFachadaJuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterFachadaJuego_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterFachadaJuego.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterFachadaJuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterFachadaJuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterFachadaJuego_Statics::ClassParams = {
		&UInterFachadaJuego::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterFachadaJuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterFachadaJuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterFachadaJuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterFachadaJuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterFachadaJuego, 1550405590);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<UInterFachadaJuego>()
	{
		return UInterFachadaJuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterFachadaJuego(Z_Construct_UClass_UInterFachadaJuego, &UInterFachadaJuego::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("UInterFachadaJuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterFachadaJuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
