// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/Public/GeometryPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometryPlayerController();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AGeometryPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
// End Cross Module References
	void AGeometryPlayerController::StaticRegisterNativesAGeometryPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryPlayerController);
	UClass* Z_Construct_UClass_AGeometryPlayerController_NoRegister()
	{
		return AGeometryPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pawns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pawns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GeometryPlayerController.h" },
		{ "ModuleRelativePath", "Public/GeometryPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryPlayerController_Statics::NewProp_Pawns_Inner = { "Pawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryPlayerController_Statics::NewProp_Pawns_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeometryPlayerController_Statics::NewProp_Pawns = { "Pawns", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeometryPlayerController, Pawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryPlayerController_Statics::NewProp_Pawns_MetaData), Z_Construct_UClass_AGeometryPlayerController_Statics::NewProp_Pawns_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryPlayerController_Statics::NewProp_Pawns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryPlayerController_Statics::NewProp_Pawns,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryPlayerController_Statics::ClassParams = {
		&AGeometryPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeometryPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeometryPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGeometryPlayerController()
	{
		if (!Z_Registration_Info_UClass_AGeometryPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryPlayerController.OuterSingleton, Z_Construct_UClass_AGeometryPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometryPlayerController.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<AGeometryPlayerController>()
	{
		return AGeometryPlayerController::StaticClass();
	}
	AGeometryPlayerController::AGeometryPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryPlayerController);
	AGeometryPlayerController::~AGeometryPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_GeometrySandbox_Source_GeometrySandbox_Public_GeometryPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_GeometrySandbox_Source_GeometrySandbox_Public_GeometryPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryPlayerController, AGeometryPlayerController::StaticClass, TEXT("AGeometryPlayerController"), &Z_Registration_Info_UClass_AGeometryPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryPlayerController), 3922114202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_GeometrySandbox_Source_GeometrySandbox_Public_GeometryPlayerController_h_3342494468(TEXT("/Script/GeometrySandbox"),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_GeometrySandbox_Source_GeometrySandbox_Public_GeometryPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_GeometrySandbox_Source_GeometrySandbox_Public_GeometryPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
