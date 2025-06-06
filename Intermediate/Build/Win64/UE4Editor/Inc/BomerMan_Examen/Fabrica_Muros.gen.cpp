// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomerMan_Examen/Fabrica_Muros.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabrica_Muros() {}
// Cross Module References
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AFabrica_Muros_NoRegister();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AFabrica_Muros();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomerMan_Examen();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BOMERMAN_EXAMEN_API UClass* Z_Construct_UClass_AMuroBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFabrica_Muros::execCreateMuros)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BlockName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMuroBase**)Z_Param__Result=P_THIS->CreateMuros(Z_Param_BlockName,Z_Param_Location);
		P_NATIVE_END;
	}
	void AFabrica_Muros::StaticRegisterNativesAFabrica_Muros()
	{
		UClass* Class = AFabrica_Muros::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMuros", &AFabrica_Muros::execCreateMuros },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics
	{
		struct Fabrica_Muros_eventCreateMuros_Parms
		{
			FString BlockName;
			FVector Location;
			AMuroBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BlockName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::NewProp_BlockName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::NewProp_BlockName = { "BlockName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fabrica_Muros_eventCreateMuros_Parms, BlockName), METADATA_PARAMS(Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::NewProp_BlockName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::NewProp_BlockName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fabrica_Muros_eventCreateMuros_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fabrica_Muros_eventCreateMuros_Parms, ReturnValue), Z_Construct_UClass_AMuroBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::NewProp_BlockName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wall Factory" },
		{ "Comment", "// Factory method to create walls\n" },
		{ "ModuleRelativePath", "Fabrica_Muros.h" },
		{ "ToolTip", "Factory method to create walls" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFabrica_Muros, nullptr, "CreateMuros", nullptr, nullptr, sizeof(Fabrica_Muros_eventCreateMuros_Parms), Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFabrica_Muros_CreateMuros()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFabrica_Muros_CreateMuros_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFabrica_Muros_NoRegister()
	{
		return AFabrica_Muros::StaticClass();
	}
	struct Z_Construct_UClass_AFabrica_Muros_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabrica_Muros_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomerMan_Examen,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFabrica_Muros_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFabrica_Muros_CreateMuros, "CreateMuros" }, // 3312941999
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabrica_Muros_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fabrica_Muros.h" },
		{ "ModuleRelativePath", "Fabrica_Muros.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabrica_Muros_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabrica_Muros>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabrica_Muros_Statics::ClassParams = {
		&AFabrica_Muros::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabrica_Muros_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabrica_Muros_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabrica_Muros()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabrica_Muros_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabrica_Muros, 1642053024);
	template<> BOMERMAN_EXAMEN_API UClass* StaticClass<AFabrica_Muros>()
	{
		return AFabrica_Muros::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabrica_Muros(Z_Construct_UClass_AFabrica_Muros, &AFabrica_Muros::StaticClass, TEXT("/Script/BomerMan_Examen"), TEXT("AFabrica_Muros"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabrica_Muros);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
