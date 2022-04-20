// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicMedia/Public/PlayerNameUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerNameUI() {}
// Cross Module References
	MAGICMEDIA_API UClass* Z_Construct_UClass_UPlayerNameUI_NoRegister();
	MAGICMEDIA_API UClass* Z_Construct_UClass_UPlayerNameUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MagicMedia();
// End Cross Module References
	void UPlayerNameUI::StaticRegisterNativesUPlayerNameUI()
	{
	}
	UClass* Z_Construct_UClass_UPlayerNameUI_NoRegister()
	{
		return UPlayerNameUI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerNameUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerNameUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicMedia,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerNameUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerNameUI.h" },
		{ "ModuleRelativePath", "Public/PlayerNameUI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerNameUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerNameUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerNameUI_Statics::ClassParams = {
		&UPlayerNameUI::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerNameUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNameUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerNameUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerNameUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerNameUI, 2653543172);
	template<> MAGICMEDIA_API UClass* StaticClass<UPlayerNameUI>()
	{
		return UPlayerNameUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerNameUI(Z_Construct_UClass_UPlayerNameUI, &UPlayerNameUI::StaticClass, TEXT("/Script/MagicMedia"), TEXT("UPlayerNameUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerNameUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
