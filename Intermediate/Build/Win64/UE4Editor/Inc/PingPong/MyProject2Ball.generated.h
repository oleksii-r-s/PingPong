// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINGPONG_MyProject2Ball_generated_h
#error "MyProject2Ball.generated.h already included, missing '#pragma once' in MyProject2Ball.h"
#endif
#define PINGPONG_MyProject2Ball_generated_h

#define PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_SPARSE_DATA
#define PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_RPC_WRAPPERS
#define PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject2Ball(); \
	friend struct Z_Construct_UClass_AMyProject2Ball_Statics; \
public: \
	DECLARE_CLASS(AMyProject2Ball, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(AMyProject2Ball)


#define PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject2Ball(); \
	friend struct Z_Construct_UClass_AMyProject2Ball_Statics; \
public: \
	DECLARE_CLASS(AMyProject2Ball, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(AMyProject2Ball)


#define PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject2Ball(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject2Ball) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject2Ball); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2Ball); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject2Ball(AMyProject2Ball&&); \
	NO_API AMyProject2Ball(const AMyProject2Ball&); \
public:


#define PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject2Ball(AMyProject2Ball&&); \
	NO_API AMyProject2Ball(const AMyProject2Ball&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject2Ball); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2Ball); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject2Ball)


#define PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ball() { return STRUCT_OFFSET(AMyProject2Ball, Ball); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AMyProject2Ball, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AMyProject2Ball, Camera); }


#define PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_8_PROLOG
#define PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_SPARSE_DATA \
	PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_RPC_WRAPPERS \
	PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_INCLASS \
	PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_SPARSE_DATA \
	PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_INCLASS_NO_PURE_DECLS \
	PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINGPONG_API UClass* StaticClass<class AMyProject2Ball>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PingPong_Source_PingPong_Public_Ball_MyProject2Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
