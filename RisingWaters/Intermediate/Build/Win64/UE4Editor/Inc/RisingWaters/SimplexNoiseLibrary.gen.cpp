// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RisingWaters/Public/SimplexNoiseLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplexNoiseLibrary() {}
// Cross Module References
	RISINGWATERS_API UClass* Z_Construct_UClass_USimplexNoiseLibrary_NoRegister();
	RISINGWATERS_API UClass* Z_Construct_UClass_USimplexNoiseLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RisingWaters();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D();
// End Cross Module References
	void USimplexNoiseLibrary::StaticRegisterNativesUSimplexNoiseLibrary()
	{
		UClass* Class = USimplexNoiseLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "setNoiseSeed", &USimplexNoiseLibrary::execsetNoiseSeed },
			{ "SimplexNoise1D", &USimplexNoiseLibrary::execSimplexNoise1D },
			{ "SimplexNoise2D", &USimplexNoiseLibrary::execSimplexNoise2D },
			{ "SimplexNoise3D", &USimplexNoiseLibrary::execSimplexNoise3D },
			{ "SimplexNoise4D", &USimplexNoiseLibrary::execSimplexNoise4D },
			{ "SimplexNoiseInRange1D", &USimplexNoiseLibrary::execSimplexNoiseInRange1D },
			{ "SimplexNoiseInRange2D", &USimplexNoiseLibrary::execSimplexNoiseInRange2D },
			{ "SimplexNoiseInRange3D", &USimplexNoiseLibrary::execSimplexNoiseInRange3D },
			{ "SimplexNoiseInRange4D", &USimplexNoiseLibrary::execSimplexNoiseInRange4D },
			{ "SimplexNoiseScaled1D", &USimplexNoiseLibrary::execSimplexNoiseScaled1D },
			{ "SimplexNoiseScaled2D", &USimplexNoiseLibrary::execSimplexNoiseScaled2D },
			{ "SimplexNoiseScaled3D", &USimplexNoiseLibrary::execSimplexNoiseScaled3D },
			{ "SimplexNoiseScaled4D", &USimplexNoiseLibrary::execSimplexNoiseScaled4D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics
	{
		struct SimplexNoiseLibrary_eventsetNoiseSeed_Parms
		{
			int32 newSeed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::NewProp_newSeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::NewProp_newSeed = { UE4CodeGen_Private::EPropertyClass::Int, "newSeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventsetNoiseSeed_Parms, newSeed), METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::NewProp_newSeed_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::NewProp_newSeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::NewProp_newSeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "setNoiseSeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SimplexNoiseLibrary_eventsetNoiseSeed_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoise1D_Parms
		{
			float x;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise1D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoise1D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoise1D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoise2D_Parms
		{
			float x;
			float y;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise2D_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise2D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoise2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoise2D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoise3D_Parms
		{
			float x;
			float y;
			float z;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoise3D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoise3D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoise4D_Parms
		{
			float x;
			float y;
			float z;
			float w;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_w = { UE4CodeGen_Private::EPropertyClass::Float, "w", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_w,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoise4D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoise4D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms
		{
			float x;
			float rangeMin;
			float rangeMax;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, rangeMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, rangeMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_rangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
		{ "ToolTip", "Return value in Range between two float numbers\nReturn Value is scaled by difference between rangeMin & rangeMax value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseInRange1D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms
		{
			float x;
			float y;
			float rangeMin;
			float rangeMax;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, rangeMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, rangeMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_rangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseInRange2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms
		{
			float x;
			float y;
			float z;
			float rangeMin;
			float rangeMax;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, rangeMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, rangeMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_rangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseInRange3D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms
		{
			float x;
			float y;
			float z;
			float w;
			float rangeMin;
			float rangeMax;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMax;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMin;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, rangeMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, rangeMin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_w = { UE4CodeGen_Private::EPropertyClass::Float, "w", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_rangeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_w,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseInRange4D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms
		{
			float x;
			float s;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_s;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_s = { UE4CodeGen_Private::EPropertyClass::Float, "s", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms, s), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_s,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
		{ "ToolTip", "Scaled by float value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseScaled1D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms
		{
			float x;
			float y;
			float s;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_s;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_s = { UE4CodeGen_Private::EPropertyClass::Float, "s", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, s), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_s,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseScaled2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms
		{
			float x;
			float y;
			float z;
			float s;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_s;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_s = { UE4CodeGen_Private::EPropertyClass::Float, "s", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, s), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_s,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseScaled3D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms
		{
			float x;
			float y;
			float z;
			float w;
			float s;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_s;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_s = { UE4CodeGen_Private::EPropertyClass::Float, "s", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, s), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_w = { UE4CodeGen_Private::EPropertyClass::Float, "w", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_s,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_w,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplexNoise" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseScaled4D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms), Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimplexNoiseLibrary_NoRegister()
	{
		return USimplexNoiseLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimplexNoiseLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplexNoiseLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RisingWaters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimplexNoiseLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed, "setNoiseSeed" }, // 3750812202
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D, "SimplexNoise1D" }, // 498083690
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D, "SimplexNoise2D" }, // 3732351036
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D, "SimplexNoise3D" }, // 1866598781
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D, "SimplexNoise4D" }, // 3634304098
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D, "SimplexNoiseInRange1D" }, // 541230597
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D, "SimplexNoiseInRange2D" }, // 1822340792
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D, "SimplexNoiseInRange3D" }, // 2769481618
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D, "SimplexNoiseInRange4D" }, // 944349478
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D, "SimplexNoiseScaled1D" }, // 659154199
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D, "SimplexNoiseScaled2D" }, // 3279074178
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D, "SimplexNoiseScaled3D" }, // 4020956671
		{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D, "SimplexNoiseScaled4D" }, // 1104498364
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplexNoiseLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimplexNoiseLibrary.h" },
		{ "ModuleRelativePath", "Public/SimplexNoiseLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplexNoiseLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplexNoiseLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimplexNoiseLibrary_Statics::ClassParams = {
		&USimplexNoiseLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USimplexNoiseLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USimplexNoiseLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplexNoiseLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimplexNoiseLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimplexNoiseLibrary, 1433182181);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimplexNoiseLibrary(Z_Construct_UClass_USimplexNoiseLibrary, &USimplexNoiseLibrary::StaticClass, TEXT("/Script/RisingWaters"), TEXT("USimplexNoiseLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplexNoiseLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
