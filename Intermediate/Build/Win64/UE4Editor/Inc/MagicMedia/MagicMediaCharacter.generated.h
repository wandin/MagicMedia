// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MAGICMEDIA_MagicMediaCharacter_generated_h
#error "MagicMediaCharacter.generated.h already included, missing '#pragma once' in MagicMediaCharacter.h"
#endif
#define MAGICMEDIA_MagicMediaCharacter_generated_h

#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_SPARSE_DATA
#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_RPC_WRAPPERS \
	virtual void StartInteract_Implementation(); \
 \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap); \
	DECLARE_FUNCTION(execStartInteract);


#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StartInteract_Implementation(); \
 \
	DECLARE_FUNCTION(execOnBoxEndOverlap); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap); \
	DECLARE_FUNCTION(execStartInteract);


#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_EVENT_PARMS
#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_CALLBACK_WRAPPERS
#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagicMediaCharacter(); \
	friend struct Z_Construct_UClass_AMagicMediaCharacter_Statics; \
public: \
	DECLARE_CLASS(AMagicMediaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicMedia"), NO_API) \
	DECLARE_SERIALIZER(AMagicMediaCharacter)


#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMagicMediaCharacter(); \
	friend struct Z_Construct_UClass_AMagicMediaCharacter_Statics; \
public: \
	DECLARE_CLASS(AMagicMediaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicMedia"), NO_API) \
	DECLARE_SERIALIZER(AMagicMediaCharacter)


#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagicMediaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagicMediaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicMediaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicMediaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicMediaCharacter(AMagicMediaCharacter&&); \
	NO_API AMagicMediaCharacter(const AMagicMediaCharacter&); \
public:


#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagicMediaCharacter(AMagicMediaCharacter&&); \
	NO_API AMagicMediaCharacter(const AMagicMediaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagicMediaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagicMediaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMagicMediaCharacter)


#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMagicMediaCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMagicMediaCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__InteractionBox() { return STRUCT_OFFSET(AMagicMediaCharacter, InteractionBox); }


#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_15_PROLOG \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_EVENT_PARMS


#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_SPARSE_DATA \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_RPC_WRAPPERS \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_CALLBACK_WRAPPERS \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_INCLASS \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_SPARSE_DATA \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_CALLBACK_WRAPPERS \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_INCLASS_NO_PURE_DECLS \
	MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICMEDIA_API UClass* StaticClass<class AMagicMediaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MagicMedia_Source_MagicMedia_Public_MagicMediaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
