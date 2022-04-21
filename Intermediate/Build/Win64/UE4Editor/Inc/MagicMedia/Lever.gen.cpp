// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicMedia/Public/Lever.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLever() {}
// Cross Module References
	MAGICMEDIA_API UClass* Z_Construct_UClass_ALever_NoRegister();
	MAGICMEDIA_API UClass* Z_Construct_UClass_ALever();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MagicMedia();
	MAGICMEDIA_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	MAGICMEDIA_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALever::execOnRep_InteractWithMe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InteractWithMe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALever::execInteractWithMe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractWithMe();
		P_NATIVE_END;
	}
	void ALever::StaticRegisterNativesALever()
	{
		UClass* Class = ALever::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InteractWithMe", &ALever::execInteractWithMe },
			{ "OnRep_InteractWithMe", &ALever::execOnRep_InteractWithMe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALever_InteractWithMe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALever_InteractWithMe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALever_InteractWithMe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALever, nullptr, "InteractWithMe", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALever_InteractWithMe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_InteractWithMe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALever_InteractWithMe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALever_InteractWithMe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALever_OnRep_InteractWithMe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALever_OnRep_InteractWithMe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALever_OnRep_InteractWithMe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALever, nullptr, "OnRep_InteractWithMe", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALever_OnRep_InteractWithMe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_OnRep_InteractWithMe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALever_OnRep_InteractWithMe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALever_OnRep_InteractWithMe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALever_NoRegister()
	{
		return ALever::StaticClass();
	}
	struct Z_Construct_UClass_ALever_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[];
#endif
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__RootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__RootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeverMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightBulb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightBulb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALever_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicMedia,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALever_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALever_InteractWithMe, "InteractWithMe" }, // 2912547805
		{ &Z_Construct_UFunction_ALever_OnRep_InteractWithMe, "OnRep_InteractWithMe" }, // 3889796113
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lever.h" },
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "Lever" },
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_Door = { "Door", "OnRep_InteractWithMe", (EPropertyFlags)0x0010000100000821, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALever, Door), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALever_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp_bIsOpen_MetaData[] = {
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
	void Z_Construct_UClass_ALever_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((ALever*)Obj)->bIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_bIsOpen = { "bIsOpen", "OnRep_InteractWithMe", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALever), &Z_Construct_UClass_ALever_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALever_Statics::NewProp_bIsOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp_bIsOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp__RootComponent_MetaData[] = {
		{ "Category", "Lever" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp__RootComponent = { "_RootComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALever, _RootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALever_Statics::NewProp__RootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp__RootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp_LeverMesh_MetaData[] = {
		{ "Category", "Lever" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_LeverMesh = { "LeverMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALever, LeverMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALever_Statics::NewProp_LeverMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp_LeverMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp_LightBulb_MetaData[] = {
		{ "Category", "Lever" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_LightBulb = { "LightBulb", "OnRep_InteractWithMe", (EPropertyFlags)0x0010000100080029, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALever, LightBulb), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALever_Statics::NewProp_LightBulb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp_LightBulb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp_InteractionWidget_MetaData[] = {
		{ "Category", "Lever" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_InteractionWidget = { "InteractionWidget", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALever, InteractionWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALever_Statics::NewProp_InteractionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp_InteractionWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALever_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_bIsOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp__RootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_LeverMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_LightBulb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_InteractionWidget,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALever_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ALever, IInteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALever_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALever>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALever_Statics::ClassParams = {
		&ALever::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALever_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALever_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALever()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALever_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALever, 1975115656);
	template<> MAGICMEDIA_API UClass* StaticClass<ALever>()
	{
		return ALever::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALever(Z_Construct_UClass_ALever, &ALever::StaticClass, TEXT("/Script/MagicMedia"), TEXT("ALever"), false, nullptr, nullptr, nullptr);

	void ALever::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Door(TEXT("Door"));
		static const FName Name_bIsOpen(TEXT("bIsOpen"));
		static const FName Name_LightBulb(TEXT("LightBulb"));

		const bool bIsValid = true
			&& Name_Door == ClassReps[(int32)ENetFields_Private::Door].Property->GetFName()
			&& Name_bIsOpen == ClassReps[(int32)ENetFields_Private::bIsOpen].Property->GetFName()
			&& Name_LightBulb == ClassReps[(int32)ENetFields_Private::LightBulb].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALever"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALever);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
