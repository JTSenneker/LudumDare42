// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RisingWaters/Public/VoxelActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelActor() {}
// Cross Module References
	RISINGWATERS_API UClass* Z_Construct_UClass_AVoxelActor_NoRegister();
	RISINGWATERS_API UClass* Z_Construct_UClass_AVoxelActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RisingWaters();
	RISINGWATERS_API UFunction* Z_Construct_UFunction_AVoxelActor_calculateNoise();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static FName NAME_AVoxelActor_calculateNoise = FName(TEXT("calculateNoise"));
	TArray<int32> AVoxelActor::calculateNoise()
	{
		VoxelActor_eventcalculateNoise_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AVoxelActor_calculateNoise),&Parms);
		return Parms.ReturnValue;
	}
	void AVoxelActor::StaticRegisterNativesAVoxelActor()
	{
		UClass* Class = AVoxelActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "calculateNoise", &AVoxelActor::execcalculateNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VoxelActor_eventcalculateNoise_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, "calculateNoise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(VoxelActor_eventcalculateNoise_Parms), Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelActor_calculateNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoxelActor_calculateNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVoxelActor_NoRegister()
	{
		return AVoxelActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_proceduralComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_proceduralComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkFields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_chunkFields;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkFields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_halfVoxelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_halfVoxelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkLineElementsP2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkLineElementsP2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkZElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkZElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkTotalElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkTotalElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_freq_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_freq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zMult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zMult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yMult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_yMult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xMult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_xMult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkYIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkYIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkXIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkXIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkLineElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkLineElements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_voxelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_voxelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_randomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_randomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RisingWaters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoxelActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelActor_calculateNoise, "calculateNoise" }, // 3728697867
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelActor.h" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_proceduralComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_proceduralComponent = { UE4CodeGen_Private::EPropertyClass::Object, "proceduralComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AVoxelActor, proceduralComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_proceduralComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_proceduralComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields = { UE4CodeGen_Private::EPropertyClass::Array, "chunkFields", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkFields), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "chunkFields", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_halfVoxelSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_halfVoxelSize = { UE4CodeGen_Private::EPropertyClass::Int, "halfVoxelSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AVoxelActor, halfVoxelSize), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_halfVoxelSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_halfVoxelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2 = { UE4CodeGen_Private::EPropertyClass::Int, "chunkLineElementsP2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkLineElementsP2), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkZElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkZElements = { UE4CodeGen_Private::EPropertyClass::Int, "chunkZElements", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkZElements), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkZElements_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkZElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkTotalElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkTotalElements = { UE4CodeGen_Private::EPropertyClass::Int, "chunkTotalElements", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkTotalElements), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkTotalElements_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkTotalElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_freq_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_freq = { UE4CodeGen_Private::EPropertyClass::Float, "freq", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, freq), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_freq_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_freq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_weight = { UE4CodeGen_Private::EPropertyClass::Float, "weight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, weight), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_weight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_zMult_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_zMult = { UE4CodeGen_Private::EPropertyClass::Float, "zMult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, zMult), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_zMult_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_zMult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_yMult_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_yMult = { UE4CodeGen_Private::EPropertyClass::Float, "yMult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, yMult), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_yMult_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_yMult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_xMult_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_xMult = { UE4CodeGen_Private::EPropertyClass::Float, "xMult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, xMult), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_xMult_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_xMult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkYIndex_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkYIndex = { UE4CodeGen_Private::EPropertyClass::Int, "chunkYIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkYIndex), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkYIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkYIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkXIndex_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkXIndex = { UE4CodeGen_Private::EPropertyClass::Int, "chunkXIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkXIndex), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkXIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkXIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElements_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElements = { UE4CodeGen_Private::EPropertyClass::Int, "chunkLineElements", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkLineElements), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElements_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSize_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSize = { UE4CodeGen_Private::EPropertyClass::Int, "voxelSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, voxelSize), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_randomSeed_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_randomSeed = { UE4CodeGen_Private::EPropertyClass::Int, "randomSeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, randomSeed), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_randomSeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_randomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "VoxelActor" },
		{ "ModuleRelativePath", "Public/VoxelActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials = { UE4CodeGen_Private::EPropertyClass::Array, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, Materials), METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_proceduralComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkFields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_halfVoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElementsP2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkZElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkTotalElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_freq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_zMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_yMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_xMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkYIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkXIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_chunkLineElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_voxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_randomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelActor_Statics::NewProp_Materials_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelActor_Statics::ClassParams = {
		&AVoxelActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AVoxelActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVoxelActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelActor, 1673351149);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelActor(Z_Construct_UClass_AVoxelActor, &AVoxelActor::StaticClass, TEXT("/Script/RisingWaters"), TEXT("AVoxelActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
