// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICMEDIA_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define MAGICMEDIA_InteractionInterface_generated_h

#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_SPARSE_DATA
#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_RPC_WRAPPERS
#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MAGICMEDIA_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MAGICMEDIA_API, UInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MAGICMEDIA_API UInteractionInterface(UInteractionInterface&&); \
	MAGICMEDIA_API UInteractionInterface(const UInteractionInterface&); \
public:


#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MAGICMEDIA_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MAGICMEDIA_API UInteractionInterface(UInteractionInterface&&); \
	MAGICMEDIA_API UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MAGICMEDIA_API, UInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface)


#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct Z_Construct_UClass_UInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MagicMedia"), MAGICMEDIA_API) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_10_PROLOG
#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_SPARSE_DATA \
	MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_RPC_WRAPPERS \
	MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_SPARSE_DATA \
	MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MagicMedia_Source_MagicMedia_Public_InteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICMEDIA_API UClass* StaticClass<class UInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MagicMedia_Source_MagicMedia_Public_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
