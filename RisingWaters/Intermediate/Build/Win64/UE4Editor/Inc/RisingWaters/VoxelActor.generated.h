// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RISINGWATERS_VoxelActor_generated_h
#error "VoxelActor.generated.h already included, missing '#pragma once' in VoxelActor.h"
#endif
#define RISINGWATERS_VoxelActor_generated_h

#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_RPC_WRAPPERS \
	virtual TArray<int32> calculateNoise_Implementation(); \
 \
	DECLARE_FUNCTION(execcalculateNoise) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->calculateNoise_Implementation(); \
		P_NATIVE_END; \
	}


#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcalculateNoise) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=P_THIS->calculateNoise_Implementation(); \
		P_NATIVE_END; \
	}


#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_EVENT_PARMS \
	struct VoxelActor_eventcalculateNoise_Parms \
	{ \
		TArray<int32> ReturnValue; \
	};


#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_CALLBACK_WRAPPERS
#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelActor(); \
	friend struct Z_Construct_UClass_AVoxelActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RisingWaters"), NO_API) \
	DECLARE_SERIALIZER(AVoxelActor)


#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelActor(); \
	friend struct Z_Construct_UClass_AVoxelActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RisingWaters"), NO_API) \
	DECLARE_SERIALIZER(AVoxelActor)


#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelActor(AVoxelActor&&); \
	NO_API AVoxelActor(const AVoxelActor&); \
public:


#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelActor(AVoxelActor&&); \
	NO_API AVoxelActor(const AVoxelActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelActor)


#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_PRIVATE_PROPERTY_OFFSET
#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_11_PROLOG \
	RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_EVENT_PARMS


#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_PRIVATE_PROPERTY_OFFSET \
	RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_RPC_WRAPPERS \
	RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_CALLBACK_WRAPPERS \
	RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_INCLASS \
	RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_PRIVATE_PROPERTY_OFFSET \
	RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_CALLBACK_WRAPPERS \
	RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_INCLASS_NO_PURE_DECLS \
	RisingWaters_Source_RisingWaters_Public_VoxelActor_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RisingWaters_Source_RisingWaters_Public_VoxelActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
