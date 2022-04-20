// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicMedia/Public/MagicMediaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicMediaGameMode() {}
// Cross Module References
	MAGICMEDIA_API UClass* Z_Construct_UClass_AMagicMediaGameMode_NoRegister();
	MAGICMEDIA_API UClass* Z_Construct_UClass_AMagicMediaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MagicMedia();
// End Cross Module References
	void AMagicMediaGameMode::StaticRegisterNativesAMagicMediaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMagicMediaGameMode_NoRegister()
	{
		return AMagicMediaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMagicMediaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicMediaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicMedia,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicMediaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MagicMediaGameMode.h" },
		{ "ModuleRelativePath", "Public/MagicMediaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicMediaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicMediaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagicMediaGameMode_Statics::ClassParams = {
		&AMagicMediaGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMagicMediaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicMediaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicMediaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagicMediaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagicMediaGameMode, 3506399253);
	template<> MAGICMEDIA_API UClass* StaticClass<AMagicMediaGameMode>()
	{
		return AMagicMediaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagicMediaGameMode(Z_Construct_UClass_AMagicMediaGameMode, &AMagicMediaGameMode::StaticClass, TEXT("/Script/MagicMedia"), TEXT("AMagicMediaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicMediaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
