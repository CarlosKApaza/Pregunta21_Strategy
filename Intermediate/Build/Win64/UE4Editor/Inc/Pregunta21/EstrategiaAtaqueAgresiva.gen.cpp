// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pregunta21/EstrategiaAtaqueAgresiva.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaAtaqueAgresiva() {}
// Cross Module References
	PREGUNTA21_API UClass* Z_Construct_UClass_AEstrategiaAtaqueAgresiva_NoRegister();
	PREGUNTA21_API UClass* Z_Construct_UClass_AEstrategiaAtaqueAgresiva();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pregunta21();
	PREGUNTA21_API UClass* Z_Construct_UClass_UIStrategia_NoRegister();
// End Cross Module References
	void AEstrategiaAtaqueAgresiva::StaticRegisterNativesAEstrategiaAtaqueAgresiva()
	{
	}
	UClass* Z_Construct_UClass_AEstrategiaAtaqueAgresiva_NoRegister()
	{
		return AEstrategiaAtaqueAgresiva::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaAtaqueAgresiva_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaAtaqueAgresiva_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pregunta21,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaAtaqueAgresiva_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaAtaqueAgresiva.h" },
		{ "ModuleRelativePath", "EstrategiaAtaqueAgresiva.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaAtaqueAgresiva_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIStrategia_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaAtaqueAgresiva, IIStrategia), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaAtaqueAgresiva_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaAtaqueAgresiva>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaAtaqueAgresiva_Statics::ClassParams = {
		&AEstrategiaAtaqueAgresiva::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaAtaqueAgresiva_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaAtaqueAgresiva_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaAtaqueAgresiva()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategiaAtaqueAgresiva_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategiaAtaqueAgresiva, 4071103197);
	template<> PREGUNTA21_API UClass* StaticClass<AEstrategiaAtaqueAgresiva>()
	{
		return AEstrategiaAtaqueAgresiva::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategiaAtaqueAgresiva(Z_Construct_UClass_AEstrategiaAtaqueAgresiva, &AEstrategiaAtaqueAgresiva::StaticClass, TEXT("/Script/Pregunta21"), TEXT("AEstrategiaAtaqueAgresiva"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaAtaqueAgresiva);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
