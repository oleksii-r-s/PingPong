// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINGPONG_PPMyCharacter_generated_h
#error "PPMyCharacter.generated.h already included, missing '#pragma once' in PPMyCharacter.h"
#endif
#define PINGPONG_PPMyCharacter_generated_h

#define PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_SPARSE_DATA
#define PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_RPC_WRAPPERS
#define PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPPMyCharacter(); \
	friend struct Z_Construct_UClass_APPMyCharacter_Statics; \
public: \
	DECLARE_CLASS(APPMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(APPMyCharacter)


#define PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPPMyCharacter(); \
	friend struct Z_Construct_UClass_APPMyCharacter_Statics; \
public: \
	DECLARE_CLASS(APPMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(APPMyCharacter)


#define PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APPMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APPMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APPMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APPMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APPMyCharacter(APPMyCharacter&&); \
	NO_API APPMyCharacter(const APPMyCharacter&); \
public:


#define PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APPMyCharacter(APPMyCharacter&&); \
	NO_API APPMyCharacter(const APPMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APPMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APPMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APPMyCharacter)


#define PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(APPMyCharacter, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__ScoreActorComponent() { return STRUCT_OFFSET(APPMyCharacter, ScoreActorComponent); } \
	FORCEINLINE static uint32 __PPO__ScoreTextActorComponent() { return STRUCT_OFFSET(APPMyCharacter, ScoreTextActorComponent); }


#define PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_12_PROLOG
#define PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_SPARSE_DATA \
	PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_RPC_WRAPPERS \
	PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_INCLASS \
	PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_SPARSE_DATA \
	PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_INCLASS_NO_PURE_DECLS \
	PingPong_Source_PingPong_Public_Player_PPMyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINGPONG_API UClass* StaticClass<class APPMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PingPong_Source_PingPong_Public_Player_PPMyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
