// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pregunta21/NaveGuerrera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveGuerrera() {}
// Cross Module References
	PREGUNTA21_API UClass* Z_Construct_UClass_ANaveGuerrera_NoRegister();
	PREGUNTA21_API UClass* Z_Construct_UClass_ANaveGuerrera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pregunta21();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveGuerrera::StaticRegisterNativesANaveGuerrera()
	{
	}
	UClass* Z_Construct_UClass_ANaveGuerrera_NoRegister()
	{
		return ANaveGuerrera::StaticClass();
	}
	struct Z_Construct_UClass_ANaveGuerrera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshNaveGuerrera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshNaveGuerrera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveGuerrera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pregunta21,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveGuerrera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveGuerrera.h" },
		{ "ModuleRelativePath", "NaveGuerrera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveGuerrera_Statics::NewProp_MeshNaveGuerrera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveGuerrera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveGuerrera_Statics::NewProp_MeshNaveGuerrera = { "MeshNaveGuerrera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveGuerrera, MeshNaveGuerrera), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveGuerrera_Statics::NewProp_MeshNaveGuerrera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveGuerrera_Statics::NewProp_MeshNaveGuerrera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveGuerrera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveGuerrera_Statics::NewProp_MeshNaveGuerrera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveGuerrera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveGuerrera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveGuerrera_Statics::ClassParams = {
		&ANaveGuerrera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveGuerrera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveGuerrera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveGuerrera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveGuerrera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveGuerrera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveGuerrera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveGuerrera, 3730367987);
	template<> PREGUNTA21_API UClass* StaticClass<ANaveGuerrera>()
	{
		return ANaveGuerrera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveGuerrera(Z_Construct_UClass_ANaveGuerrera, &ANaveGuerrera::StaticClass, TEXT("/Script/Pregunta21"), TEXT("ANaveGuerrera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveGuerrera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
