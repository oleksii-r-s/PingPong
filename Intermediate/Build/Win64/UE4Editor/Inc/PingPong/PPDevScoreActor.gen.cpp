// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PingPong/Public/Dev/PPDevScoreActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPDevScoreActor() {}
// Cross Module References
	PINGPONG_API UClass* Z_Construct_UClass_APPDevScoreActor_NoRegister();
	PINGPONG_API UClass* Z_Construct_UClass_APPDevScoreActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PingPong();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void APPDevScoreActor::StaticRegisterNativesAPPDevScoreActor()
	{
	}
	UClass* Z_Construct_UClass_APPDevScoreActor_NoRegister()
	{
		return APPDevScoreActor::StaticClass();
	}
	struct Z_Construct_UClass_APPDevScoreActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoFullDamage_MetaData[];
#endif
		static void NewProp_DoFullDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoFullDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APPDevScoreActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PingPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPDevScoreActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dev/PPDevScoreActor.h" },
		{ "ModuleRelativePath", "Public/Dev/PPDevScoreActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "PPDevScoreActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dev/PPDevScoreActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APPDevScoreActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "PPDevScoreActor" },
		{ "ModuleRelativePath", "Public/Dev/PPDevScoreActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APPDevScoreActor, Radius), METADATA_PARAMS(Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_SphereColor_MetaData[] = {
		{ "Category", "PPDevScoreActor" },
		{ "ModuleRelativePath", "Public/Dev/PPDevScoreActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_SphereColor = { "SphereColor", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APPDevScoreActor, SphereColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_SphereColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_SphereColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "PPDevScoreActor" },
		{ "ModuleRelativePath", "Public/Dev/PPDevScoreActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APPDevScoreActor, Damage), METADATA_PARAMS(Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_DoFullDamage_MetaData[] = {
		{ "Category", "PPDevScoreActor" },
		{ "ModuleRelativePath", "Public/Dev/PPDevScoreActor.h" },
	};
#endif
	void Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_DoFullDamage_SetBit(void* Obj)
	{
		((APPDevScoreActor*)Obj)->DoFullDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_DoFullDamage = { "DoFullDamage", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APPDevScoreActor), &Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_DoFullDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_DoFullDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_DoFullDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APPDevScoreActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_SphereColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPDevScoreActor_Statics::NewProp_DoFullDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APPDevScoreActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPDevScoreActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APPDevScoreActor_Statics::ClassParams = {
		&APPDevScoreActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APPDevScoreActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APPDevScoreActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APPDevScoreActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APPDevScoreActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APPDevScoreActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APPDevScoreActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APPDevScoreActor, 3822775529);
	template<> PINGPONG_API UClass* StaticClass<APPDevScoreActor>()
	{
		return APPDevScoreActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APPDevScoreActor(Z_Construct_UClass_APPDevScoreActor, &APPDevScoreActor::StaticClass, TEXT("/Script/PingPong"), TEXT("APPDevScoreActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APPDevScoreActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
