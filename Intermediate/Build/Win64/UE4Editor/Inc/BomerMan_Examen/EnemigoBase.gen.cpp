// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/EnemigoBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoBase() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEnemigoBase_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AEnemigoBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterEnemigo_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterPrototypeEnemigo_NoRegister();
// End Cross Module References
	void AEnemigoBase::StaticRegisterNativesAEnemigoBase()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoBase_NoRegister()
	{
		return AEnemigoBase::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoBase.h" },
		{ "ModuleRelativePath", "EnemigoBase.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemigoBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterEnemigo_NoRegister, (int32)VTABLE_OFFSET(AEnemigoBase, IInterEnemigo), false },
			{ Z_Construct_UClass_UInterPrototypeEnemigo_NoRegister, (int32)VTABLE_OFFSET(AEnemigoBase, IInterPrototypeEnemigo), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoBase_Statics::ClassParams = {
		&AEnemigoBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoBase, 4255786420);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<AEnemigoBase>()
	{
		return AEnemigoBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoBase(Z_Construct_UClass_AEnemigoBase, &AEnemigoBase::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("AEnemigoBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
