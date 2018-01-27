// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef GGJ2018_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define GGJ2018_PlayerCharacter_generated_h

#define ggj2018_Source_ggj2018_PlayerCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSlowCharacter) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SlowCharacter(Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMovePlayerCharacter) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Movement); \
		P_GET_STRUCT(FVector,Z_Param_FireDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MovePlayerCharacter(Z_Param_Movement,Z_Param_FireDirection,Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetFaceDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoveDirection) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetMoveDirection(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	}


#define ggj2018_Source_ggj2018_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSlowCharacter) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SlowCharacter(Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMovePlayerCharacter) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Movement); \
		P_GET_STRUCT(FVector,Z_Param_FireDirection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MovePlayerCharacter(Z_Param_Movement,Z_Param_FireDirection,Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetFaceDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoveDirection) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetMoveDirection(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	}


#define ggj2018_Source_ggj2018_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend GGJ2018_API class UClass* Z_Construct_UClass_APlayerCharacter(); \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ggj2018"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ggj2018_Source_ggj2018_PlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend GGJ2018_API class UClass* Z_Construct_UClass_APlayerCharacter(); \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ggj2018"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ggj2018_Source_ggj2018_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define ggj2018_Source_ggj2018_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define ggj2018_Source_ggj2018_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define ggj2018_Source_ggj2018_PlayerCharacter_h_9_PROLOG
#define ggj2018_Source_ggj2018_PlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ggj2018_Source_ggj2018_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ggj2018_Source_ggj2018_PlayerCharacter_h_12_RPC_WRAPPERS \
	ggj2018_Source_ggj2018_PlayerCharacter_h_12_INCLASS \
	ggj2018_Source_ggj2018_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ggj2018_Source_ggj2018_PlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ggj2018_Source_ggj2018_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ggj2018_Source_ggj2018_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ggj2018_Source_ggj2018_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ggj2018_Source_ggj2018_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ggj2018_Source_ggj2018_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
