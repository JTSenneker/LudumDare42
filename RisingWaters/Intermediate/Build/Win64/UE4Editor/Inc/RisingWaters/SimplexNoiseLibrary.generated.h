// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RISINGWATERS_SimplexNoiseLibrary_generated_h
#error "SimplexNoiseLibrary.generated.h already included, missing '#pragma once' in SimplexNoiseLibrary.h"
#endif
#define RISINGWATERS_SimplexNoiseLibrary_generated_h

#define RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSimplexNoiseInRange4D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_rangeMin,Z_Param_rangeMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseInRange3D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange3D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_rangeMin,Z_Param_rangeMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseInRange2D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange2D(Z_Param_x,Z_Param_y,Z_Param_rangeMin,Z_Param_rangeMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseInRange1D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange1D(Z_Param_x,Z_Param_rangeMin,Z_Param_rangeMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseScaled4D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_s); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_s); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseScaled3D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_s); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled3D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_s); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseScaled2D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_s); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled2D(Z_Param_x,Z_Param_y,Z_Param_s); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseScaled1D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_s); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled1D(Z_Param_x,Z_Param_s); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoise4D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoise3D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise3D(Z_Param_x,Z_Param_y,Z_Param_z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoise2D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise2D(Z_Param_x,Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoise1D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise1D(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetNoiseSeed) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_newSeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USimplexNoiseLibrary::setNoiseSeed(Z_Param_Out_newSeed); \
		P_NATIVE_END; \
	}


#define RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSimplexNoiseInRange4D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_rangeMin,Z_Param_rangeMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseInRange3D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange3D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_rangeMin,Z_Param_rangeMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseInRange2D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange2D(Z_Param_x,Z_Param_y,Z_Param_rangeMin,Z_Param_rangeMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseInRange1D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rangeMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseInRange1D(Z_Param_x,Z_Param_rangeMin,Z_Param_rangeMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseScaled4D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_s); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_s); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseScaled3D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_s); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled3D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_s); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseScaled2D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_s); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled2D(Z_Param_x,Z_Param_y,Z_Param_s); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoiseScaled1D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_s); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoiseScaled1D(Z_Param_x,Z_Param_s); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoise4D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_w); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise4D(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoise3D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise3D(Z_Param_x,Z_Param_y,Z_Param_z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoise2D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise2D(Z_Param_x,Z_Param_y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimplexNoise1D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USimplexNoiseLibrary::SimplexNoise1D(Z_Param_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetNoiseSeed) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_newSeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USimplexNoiseLibrary::setNoiseSeed(Z_Param_Out_newSeed); \
		P_NATIVE_END; \
	}


#define RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimplexNoiseLibrary(); \
	friend struct Z_Construct_UClass_USimplexNoiseLibrary_Statics; \
public: \
	DECLARE_CLASS(USimplexNoiseLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RisingWaters"), NO_API) \
	DECLARE_SERIALIZER(USimplexNoiseLibrary)


#define RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUSimplexNoiseLibrary(); \
	friend struct Z_Construct_UClass_USimplexNoiseLibrary_Statics; \
public: \
	DECLARE_CLASS(USimplexNoiseLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RisingWaters"), NO_API) \
	DECLARE_SERIALIZER(USimplexNoiseLibrary)


#define RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimplexNoiseLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimplexNoiseLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimplexNoiseLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimplexNoiseLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimplexNoiseLibrary(USimplexNoiseLibrary&&); \
	NO_API USimplexNoiseLibrary(const USimplexNoiseLibrary&); \
public:


#define RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimplexNoiseLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimplexNoiseLibrary(USimplexNoiseLibrary&&); \
	NO_API USimplexNoiseLibrary(const USimplexNoiseLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimplexNoiseLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimplexNoiseLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimplexNoiseLibrary)


#define RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_PRIVATE_PROPERTY_OFFSET
#define RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_30_PROLOG
#define RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_RPC_WRAPPERS \
	RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_INCLASS \
	RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_PRIVATE_PROPERTY_OFFSET \
	RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_INCLASS_NO_PURE_DECLS \
	RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RisingWaters_Source_RisingWaters_Public_SimplexNoiseLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
