// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGICMEDIA_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define MAGICMEDIA_Door_generated_h

#define MagicMedia_Source_MagicMedia_Public_Door_h_13_SPARSE_DATA
#define MagicMedia_Source_MagicMedia_Public_Door_h_13_RPC_WRAPPERS \
	virtual bool ToggleDoor_Validate(); \
	virtual void ToggleDoor_Implementation(); \
 \
	DECLARE_FUNCTION(execToggleDoor);


#define MagicMedia_Source_MagicMedia_Public_Door_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ToggleDoor_Validate(); \
	virtual void ToggleDoor_Implementation(); \
 \
	DECLARE_FUNCTION(execToggleDoor);


#define MagicMedia_Source_MagicMedia_Public_Door_h_13_EVENT_PARMS
#define MagicMedia_Source_MagicMedia_Public_Door_h_13_CALLBACK_WRAPPERS
#define MagicMedia_Source_MagicMedia_Public_Door_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicMedia"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Door=NETFIELD_REP_START, \
		DoorYaw, \
		CurrentRotation, \
		NETFIELD_REP_END=CurrentRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define MagicMedia_Source_MagicMedia_Public_Door_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MagicMedia"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Door=NETFIELD_REP_START, \
		DoorYaw, \
		CurrentRotation, \
		NETFIELD_REP_END=CurrentRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define MagicMedia_Source_MagicMedia_Public_Door_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define MagicMedia_Source_MagicMedia_Public_Door_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define MagicMedia_Source_MagicMedia_Public_Door_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Door() { return STRUCT_OFFSET(ADoor, Door); } \
	FORCEINLINE static uint32 __PPO__DoorYaw() { return STRUCT_OFFSET(ADoor, DoorYaw); } \
	FORCEINLINE static uint32 __PPO__CurrentRotation() { return STRUCT_OFFSET(ADoor, CurrentRotation); }


#define MagicMedia_Source_MagicMedia_Public_Door_h_10_PROLOG \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_EVENT_PARMS


#define MagicMedia_Source_MagicMedia_Public_Door_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_PRIVATE_PROPERTY_OFFSET \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_SPARSE_DATA \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_RPC_WRAPPERS \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_CALLBACK_WRAPPERS \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_INCLASS \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MagicMedia_Source_MagicMedia_Public_Door_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_PRIVATE_PROPERTY_OFFSET \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_SPARSE_DATA \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_CALLBACK_WRAPPERS \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_INCLASS_NO_PURE_DECLS \
	MagicMedia_Source_MagicMedia_Public_Door_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGICMEDIA_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MagicMedia_Source_MagicMedia_Public_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
