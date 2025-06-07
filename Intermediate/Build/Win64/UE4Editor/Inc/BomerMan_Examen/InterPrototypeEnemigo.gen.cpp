// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/InterPrototypeEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterPrototypeEnemigo() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterPrototypeEnemigo_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterPrototypeEnemigo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void UInterPrototypeEnemigo::StaticRegisterNativesUInterPrototypeEnemigo()
	{
	}
	UClass* Z_Construct_UClass_UInterPrototypeEnemigo_NoRegister()
	{
		return UInterPrototypeEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_UInterPrototypeEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterPrototypeEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterPrototypeEnemigo_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterPrototypeEnemigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterPrototypeEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterPrototypeEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterPrototypeEnemigo_Statics::ClassParams = {
		&UInterPrototypeEnemigo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterPrototypeEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterPrototypeEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterPrototypeEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterPrototypeEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterPrototypeEnemigo, 2091845233);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<UInterPrototypeEnemigo>()
	{
		return UInterPrototypeEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterPrototypeEnemigo(Z_Construct_UClass_UInterPrototypeEnemigo, &UInterPrototypeEnemigo::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("UInterPrototypeEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterPrototypeEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
