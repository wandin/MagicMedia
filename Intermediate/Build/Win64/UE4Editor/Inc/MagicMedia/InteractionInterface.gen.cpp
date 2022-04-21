// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicMedia/Public/InteractionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionInterface() {}
// Cross Module References
	MAGICMEDIA_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
	MAGICMEDIA_API UClass* Z_Construct_UClass_UInteractionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MagicMedia();
// End Cross Module References
	DEFINE_FUNCTION(IInteractionInterface::execOnRep_InteractWithMe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InteractWithMe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractionInterface::execInteractWithMe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractWithMe();
		P_NATIVE_END;
	}
	void UInteractionInterface::StaticRegisterNativesUInteractionInterface()
	{
		UClass* Class = UInteractionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InteractWithMe", &IInteractionInterface::execInteractWithMe },
			{ "OnRep_InteractWithMe", &IInteractionInterface::execOnRep_InteractWithMe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionInterface_InteractWithMe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_InteractWithMe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_InteractWithMe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "InteractWithMe", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_InteractWithMe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_InteractWithMe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionInterface_InteractWithMe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionInterface_InteractWithMe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionInterface_OnRep_InteractWithMe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionInterface_OnRep_InteractWithMe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_OnRep_InteractWithMe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "OnRep_InteractWithMe", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionInterface_OnRep_InteractWithMe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_OnRep_InteractWithMe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionInterface_OnRep_InteractWithMe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionInterface_OnRep_InteractWithMe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionInterface_NoRegister()
	{
		return UInteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicMedia,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionInterface_InteractWithMe, "InteractWithMe" }, // 1861033145
		{ &Z_Construct_UFunction_UInteractionInterface_OnRep_InteractWithMe, "OnRep_InteractWithMe" }, // 2828019742
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInterface_Statics::ClassParams = {
		&UInteractionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionInterface, 3026764086);
	template<> MAGICMEDIA_API UClass* StaticClass<UInteractionInterface>()
	{
		return UInteractionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionInterface(Z_Construct_UClass_UInteractionInterface, &UInteractionInterface::StaticClass, TEXT("/Script/MagicMedia"), TEXT("UInteractionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
