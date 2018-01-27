// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}
// Cross Module References
	GGJ2018_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	GGJ2018_API UClass* Z_Construct_UClass_APlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ggj2018();
	GGJ2018_API UFunction* Z_Construct_UFunction_APlayerCharacter_GetFaceDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GGJ2018_API UFunction* Z_Construct_UFunction_APlayerCharacter_GetMoveDirection();
	GGJ2018_API UFunction* Z_Construct_UFunction_APlayerCharacter_MovePlayerCharacter();
	GGJ2018_API UFunction* Z_Construct_UFunction_APlayerCharacter_SlowCharacter();
// End Cross Module References
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
		UClass* Class = APlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFaceDirection", (Native)&APlayerCharacter::execGetFaceDirection },
			{ "GetMoveDirection", (Native)&APlayerCharacter::execGetMoveDirection },
			{ "MovePlayerCharacter", (Native)&APlayerCharacter::execMovePlayerCharacter },
			{ "SlowCharacter", (Native)&APlayerCharacter::execSlowCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APlayerCharacter_GetFaceDirection()
	{
		struct PlayerCharacter_eventGetFaceDirection_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerCharacter_eventGetFaceDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "PlayerCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, "GetFaceDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04880401, sizeof(PlayerCharacter_eventGetFaceDirection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCharacter_GetMoveDirection()
	{
		struct PlayerCharacter_eventGetMoveDirection_Parms
		{
			float DeltaSeconds;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerCharacter_eventGetMoveDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCharacter_eventGetMoveDirection_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaSeconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "PlayerCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, "GetMoveDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04880401, sizeof(PlayerCharacter_eventGetMoveDirection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCharacter_MovePlayerCharacter()
	{
		struct PlayerCharacter_eventMovePlayerCharacter_Parms
		{
			FVector Movement;
			FVector FireDirection;
			float DeltaTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCharacter_eventMovePlayerCharacter_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "FireDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCharacter_eventMovePlayerCharacter_Parms, FireDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Movement = { UE4CodeGen_Private::EPropertyClass::Struct, "Movement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCharacter_eventMovePlayerCharacter_Parms, Movement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Movement,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "PlayerCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, "MovePlayerCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04880401, sizeof(PlayerCharacter_eventMovePlayerCharacter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APlayerCharacter_SlowCharacter()
	{
		struct PlayerCharacter_eventSlowCharacter_Parms
		{
			float time;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time = { UE4CodeGen_Private::EPropertyClass::Float, "time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerCharacter_eventSlowCharacter_Parms, time), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_time,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "PlayerCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, "SlowCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlayerCharacter_eventSlowCharacter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_ggj2018,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APlayerCharacter_GetFaceDirection, "GetFaceDirection" }, // 2558739570
				{ &Z_Construct_UFunction_APlayerCharacter_GetMoveDirection, "GetMoveDirection" }, // 637140
				{ &Z_Construct_UFunction_APlayerCharacter_MovePlayerCharacter, "MovePlayerCharacter" }, // 3188783185
				{ &Z_Construct_UFunction_APlayerCharacter_SlowCharacter, "SlowCharacter" }, // 2039650549
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "PlayerCharacter.h" },
				{ "ModuleRelativePath", "PlayerCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashCooldown_MetaData[] = {
				{ "Category", "PlayerCharacter" },
				{ "ModuleRelativePath", "PlayerCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashCooldown = { UE4CodeGen_Private::EPropertyClass::Float, "DashCooldown", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerCharacter, DashCooldown), METADATA_PARAMS(NewProp_DashCooldown_MetaData, ARRAY_COUNT(NewProp_DashCooldown_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanIBeUsed_MetaData[] = {
				{ "Category", "PlayerCharacter" },
				{ "ModuleRelativePath", "PlayerCharacter.h" },
			};
#endif
			auto NewProp_CanIBeUsed_SetBit = [](void* Obj){ ((APlayerCharacter*)Obj)->CanIBeUsed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanIBeUsed = { UE4CodeGen_Private::EPropertyClass::Bool, "CanIBeUsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayerCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CanIBeUsed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CanIBeUsed_MetaData, ARRAY_COUNT(NewProp_CanIBeUsed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasFlashlight_MetaData[] = {
				{ "Category", "PlayerCharacter" },
				{ "ModuleRelativePath", "PlayerCharacter.h" },
			};
#endif
			auto NewProp_HasFlashlight_SetBit = [](void* Obj){ ((APlayerCharacter*)Obj)->HasFlashlight = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasFlashlight = { UE4CodeGen_Private::EPropertyClass::Bool, "HasFlashlight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APlayerCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HasFlashlight_SetBit)>::SetBit, METADATA_PARAMS(NewProp_HasFlashlight_MetaData, ARRAY_COUNT(NewProp_HasFlashlight_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DashCooldown,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanIBeUsed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HasFlashlight,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayerCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCharacter, 3955211035);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCharacter(Z_Construct_UClass_APlayerCharacter, &APlayerCharacter::StaticClass, TEXT("/Script/ggj2018"), TEXT("APlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
