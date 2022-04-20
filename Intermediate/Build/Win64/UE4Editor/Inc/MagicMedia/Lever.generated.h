// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICMEDIA_Lever_generated_h
#error "Lever.generated.h already included, missing '#pragma once' in Lever.h"
#endif
#define MAGICMEDIA_Lever_generated_h

#define MagicMedia_Source_MagicMedia_Public_Lever_h_23_SPARSE_DATA
#define MagicMedia_Source_MagicMedia_Public_Lever_h_23_RPC_WRAPPERS
#define MagicMedia_Source_MagicMedia_Public_Lever_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define MagicMedia_Source_MagicMedia_Public_Lever_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALever(); \
	friend struct Z_Construct_UClass_ALever_Statics; \
public: \
	DECLARE_CLASS(ALever, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicMedia"), NO_API) \
	DECLARE_SERIALIZER(ALever) \
	virtual UObject* _getUObject() const override { return const_cast<ALever*>(this); }


#define MagicMedia_Source_MagicMedia_Public_Lever_h_23_INCLASS \
private: \
	static void StaticRegisterNativesALever(); \
	friend struct Z_Construct_UClass_ALever_Statics; \
public: \
	DECLARE_CLASS(ALever, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicMedia"), NO_API) \
	DECLARE_SERIALIZER(ALever) \
	virtual UObject* _getUObject() const override { return const_cast<ALever*>(this); }


#define MagicMedia_Source_MagicMedia_Public_Lever_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALever(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALever) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALever); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALever); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALever(ALever&&); \
	NO_API ALever(const ALever&); \
public:


#define MagicMedia_Source_MagicMedia_Public_Lever_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALever(ALever&&); \
	NO_API ALever(const ALever&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALever); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALever); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALever)


#define MagicMedia_Source_MagicMedia_Public_Lever_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___RootComponent() { return STRUCT_OFFSET(ALever, _RootComponent); } \
	FORCEINLINE static uint32 __PPO__LeverMesh() { return STRUCT_OFFSET(ALever, LeverMesh); } \
	FORCEINLINE static uint32 __PPO__LightBulb() { return STRUCT_OFFSET(ALever, LightBulb); } \
	FORCEINLINE static uint32 __PPO__InteractionWidget() { return STRUCT_OFFSET(ALever, InteractionWidget); } \
	FORCEINLINE static uint32 __PPO__bIsOpen() { return STRUCT_OFFSET(ALever, bIsOpen); } \
	FORCEINLINE static uint32 __PPO__Door() { return STRUCT_OFFSET(ALever, Door); }


#define MagicMedia_Source_MagicMedia_Public_Lever_h_20_PROLOG
#define MagicMedia_Source_MagicMedia_Public_Lever_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagicMedia_Source_MagicMedia_Public_Lever_h_23_PRIVATE_PROPERTY_OFFSET \
	MagicMedia_Source_MagicMedia_Public_Lever_h_23_SPARSE_DATA \
	MagicMedia_Source_MagicMedia_Public_Lever_h_23_RPC_WRAPPERS \
	MagicMedia_Source_MagicMedia_Public_Lever_h_23_INCLASS \
	MagicMedia_Source_MagicMedia_Public_Lever_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MagicMedia_Source_MagicMedia_Public_Lever_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagicMedia_Source_MagicMedia_Public_Lever_h_23_PRIVATE_PROPERTY_OFFSET \
	MagicMedia_Source_MagicMedia_Public_Lever_h_23_SPARSE_DATA \
	MagicMedia_Source_MagicMedia_Public_Lever_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	MagicMedia_Source_MagicMedia_Public_Lever_h_23_INCLASS_NO_PURE_DECLS \
	MagicMedia_Source_MagicMedia_Public_Lever_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICMEDIA_API UClass* StaticClass<class ALever>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MagicMedia_Source_MagicMedia_Public_Lever_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
