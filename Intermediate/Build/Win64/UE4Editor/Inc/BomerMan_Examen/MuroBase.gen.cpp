// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/MuroBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroBase() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AMuroBase_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AMuroBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_UInterMuros_NoRegister();
// End Cross Module References
	void AMuroBase::StaticRegisterNativesAMuroBase()
	{
	}
	UClass* Z_Construct_UClass_AMuroBase_NoRegister()
	{
		return AMuroBase::StaticClass();
	}
	struct Z_Construct_UClass_AMuroBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroBase.h" },
		{ "ModuleRelativePath", "MuroBase.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMuroBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterMuros_NoRegister, (int32)VTABLE_OFFSET(AMuroBase, IInterMuros), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroBase_Statics::ClassParams = {
		&AMuroBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroBase, 4056167226);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<AMuroBase>()
	{
		return AMuroBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroBase(Z_Construct_UClass_AMuroBase, &AMuroBase::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("AMuroBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
