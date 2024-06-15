// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pregunta21/Pregunta21GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePregunta21GameMode() {}
// Cross Module References
	PREGUNTA21_API UClass* Z_Construct_UClass_APregunta21GameMode_NoRegister();
	PREGUNTA21_API UClass* Z_Construct_UClass_APregunta21GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Pregunta21();
// End Cross Module References
	void APregunta21GameMode::StaticRegisterNativesAPregunta21GameMode()
	{
	}
	UClass* Z_Construct_UClass_APregunta21GameMode_NoRegister()
	{
		return APregunta21GameMode::StaticClass();
	}
	struct Z_Construct_UClass_APregunta21GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APregunta21GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Pregunta21,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APregunta21GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Pregunta21GameMode.h" },
		{ "ModuleRelativePath", "Pregunta21GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APregunta21GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APregunta21GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APregunta21GameMode_Statics::ClassParams = {
		&APregunta21GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APregunta21GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APregunta21GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APregunta21GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APregunta21GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APregunta21GameMode, 3041746130);
	template<> PREGUNTA21_API UClass* StaticClass<APregunta21GameMode>()
	{
		return APregunta21GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APregunta21GameMode(Z_Construct_UClass_APregunta21GameMode, &APregunta21GameMode::StaticClass, TEXT("/Script/Pregunta21"), TEXT("APregunta21GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APregunta21GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
