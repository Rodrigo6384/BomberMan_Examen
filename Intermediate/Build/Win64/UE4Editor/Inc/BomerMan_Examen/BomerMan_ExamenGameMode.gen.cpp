// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/BomerMan_ExamenGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomerMan_ExamenGameMode() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABomerMan_ExamenGameMode_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_ABomerMan_ExamenGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
// End Cross Module References
	void ABomerMan_ExamenGameMode::StaticRegisterNativesABomerMan_ExamenGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABomerMan_ExamenGameMode_NoRegister()
	{
		return ABomerMan_ExamenGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABomerMan_ExamenGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomerMan_ExamenGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomerMan_ExamenGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BomerMan_ExamenGameMode.h" },
		{ "ModuleRelativePath", "BomerMan_ExamenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomerMan_ExamenGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomerMan_ExamenGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomerMan_ExamenGameMode_Statics::ClassParams = {
		&ABomerMan_ExamenGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABomerMan_ExamenGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomerMan_ExamenGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomerMan_ExamenGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomerMan_ExamenGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomerMan_ExamenGameMode, 1937078897);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<ABomerMan_ExamenGameMode>()
	{
		return ABomerMan_ExamenGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomerMan_ExamenGameMode(Z_Construct_UClass_ABomerMan_ExamenGameMode, &ABomerMan_ExamenGameMode::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("ABomerMan_ExamenGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomerMan_ExamenGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
