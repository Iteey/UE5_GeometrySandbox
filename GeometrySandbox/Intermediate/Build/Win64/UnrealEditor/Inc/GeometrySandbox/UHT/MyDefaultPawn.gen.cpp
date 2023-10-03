// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometrySandbox/Public/MyDefaultPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDefaultPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AMyDefaultPawn();
	GEOMETRYSANDBOX_API UClass* Z_Construct_UClass_AMyDefaultPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometrySandbox();
// End Cross Module References
	void AMyDefaultPawn::StaticRegisterNativesAMyDefaultPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyDefaultPawn);
	UClass* Z_Construct_UClass_AMyDefaultPawn_NoRegister()
	{
		return AMyDefaultPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyDefaultPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyDefaultPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometrySandbox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDefaultPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDefaultPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyDefaultPawn.h" },
		{ "ModuleRelativePath", "Public/MyDefaultPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "MyDefaultPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyDefaultPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDefaultPawn, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_SceneComponent_MetaData), Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_SceneComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "MyDefaultPawn" },
		{ "ModuleRelativePath", "Public/MyDefaultPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDefaultPawn, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_Velocity_MetaData), Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "MyDefaultPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyDefaultPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDefaultPawn, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_StaticMeshComponent_MetaData), Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_StaticMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "MyDefaultPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyDefaultPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyDefaultPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_CameraComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyDefaultPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyDefaultPawn_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyDefaultPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDefaultPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyDefaultPawn_Statics::ClassParams = {
		&AMyDefaultPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyDefaultPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyDefaultPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDefaultPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyDefaultPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDefaultPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyDefaultPawn()
	{
		if (!Z_Registration_Info_UClass_AMyDefaultPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyDefaultPawn.OuterSingleton, Z_Construct_UClass_AMyDefaultPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyDefaultPawn.OuterSingleton;
	}
	template<> GEOMETRYSANDBOX_API UClass* StaticClass<AMyDefaultPawn>()
	{
		return AMyDefaultPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDefaultPawn);
	AMyDefaultPawn::~AMyDefaultPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_GeometrySandbox_Source_GeometrySandbox_Public_MyDefaultPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_GeometrySandbox_Source_GeometrySandbox_Public_MyDefaultPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyDefaultPawn, AMyDefaultPawn::StaticClass, TEXT("AMyDefaultPawn"), &Z_Registration_Info_UClass_AMyDefaultPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyDefaultPawn), 2503443476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_GeometrySandbox_Source_GeometrySandbox_Public_MyDefaultPawn_h_822318167(TEXT("/Script/GeometrySandbox"),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_GeometrySandbox_Source_GeometrySandbox_Public_MyDefaultPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_GeometrySandbox_Source_GeometrySandbox_Public_MyDefaultPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
