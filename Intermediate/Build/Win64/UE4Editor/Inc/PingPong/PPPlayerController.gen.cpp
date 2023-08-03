// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PingPong/Public/Player/PPPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPPlayerController() {}
// Cross Module References
	PINGPONG_API UClass* Z_Construct_UClass_APPPlayerController_NoRegister();
	PINGPONG_API UClass* Z_Construct_UClass_APPPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PingPong();
// End Cross Module References
	void APPPlayerController::StaticRegisterNativesAPPPlayerController()
	{
	}
	UClass* Z_Construct_UClass_APPPlayerController_NoRegister()
	{
		return APPPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APPPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APPPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PingPong,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/PPPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/PPPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APPPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APPPlayerController_Statics::ClassParams = {
		&APPPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APPPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APPPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APPPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APPPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APPPlayerController, 695048294);
	template<> PINGPONG_API UClass* StaticClass<APPPlayerController>()
	{
		return APPPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APPPlayerController(Z_Construct_UClass_APPPlayerController, &APPPlayerController::StaticClass, TEXT("/Script/PingPong"), TEXT("APPPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APPPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
