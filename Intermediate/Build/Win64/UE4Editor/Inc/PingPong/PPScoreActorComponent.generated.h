// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef PINGPONG_PPScoreActorComponent_generated_h
#error "PPScoreActorComponent.generated.h already included, missing '#pragma once' in PPScoreActorComponent.h"
#endif
#define PINGPONG_PPScoreActorComponent_generated_h

#define PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_SPARSE_DATA
#define PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage);


#define PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage);


#define PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPPScoreActorComponent(); \
	friend struct Z_Construct_UClass_UPPScoreActorComponent_Statics; \
public: \
	DECLARE_CLASS(UPPScoreActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(UPPScoreActorComponent)


#define PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPPScoreActorComponent(); \
	friend struct Z_Construct_UClass_UPPScoreActorComponent_Statics; \
public: \
	DECLARE_CLASS(UPPScoreActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PingPong"), NO_API) \
	DECLARE_SERIALIZER(UPPScoreActorComponent)


#define PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPPScoreActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPPScoreActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPPScoreActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPPScoreActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPPScoreActorComponent(UPPScoreActorComponent&&); \
	NO_API UPPScoreActorComponent(const UPPScoreActorComponent&); \
public:


#define PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPPScoreActorComponent(UPPScoreActorComponent&&); \
	NO_API UPPScoreActorComponent(const UPPScoreActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPPScoreActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPPScoreActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPPScoreActorComponent)


#define PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxScore() { return STRUCT_OFFSET(UPPScoreActorComponent, MaxScore); }


#define PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_10_PROLOG
#define PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_SPARSE_DATA \
	PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_RPC_WRAPPERS \
	PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_INCLASS \
	PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_SPARSE_DATA \
	PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_INCLASS_NO_PURE_DECLS \
	PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PINGPONG_API UClass* StaticClass<class UPPScoreActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PingPong_Source_PingPong_Public_Components_PPScoreActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
