// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/STULauncherWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTULauncherWeapon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseWeapon();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTULauncherWeapon();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTULauncherWeapon_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void ASTULauncherWeapon::StaticRegisterNativesASTULauncherWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTULauncherWeapon);
	UClass* Z_Construct_UClass_ASTULauncherWeapon_NoRegister()
	{
		return ASTULauncherWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASTULauncherWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LauncherZoomPlus_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LauncherZoomPlus;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AmmoTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SecondProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTULauncherWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTUBaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTULauncherWeapon_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "STULauncherWeapon.h" },
		{ "ModuleRelativePath", "Public/STULauncherWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_LauncherZoomPlus_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STULauncherWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_LauncherZoomPlus = { "LauncherZoomPlus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTULauncherWeapon, LauncherZoomPlus), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_LauncherZoomPlus_MetaData), Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_LauncherZoomPlus_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_AmmoTypes_Inner = { "AmmoTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASTUProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_AmmoTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/STULauncherWeapon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_AmmoTypes = { "AmmoTypes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTULauncherWeapon, AmmoTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_AmmoTypes_MetaData), Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_AmmoTypes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STULauncherWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTULauncherWeapon, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASTUProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_ProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_SecondProjectileClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STULauncherWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_SecondProjectileClass = { "SecondProjectileClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTULauncherWeapon, SecondProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASTUProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_SecondProjectileClass_MetaData), Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_SecondProjectileClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTULauncherWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_LauncherZoomPlus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_AmmoTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_AmmoTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_SecondProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTULauncherWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTULauncherWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTULauncherWeapon_Statics::ClassParams = {
		&ASTULauncherWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTULauncherWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTULauncherWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASTULauncherWeapon()
	{
		if (!Z_Registration_Info_UClass_ASTULauncherWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTULauncherWeapon.OuterSingleton, Z_Construct_UClass_ASTULauncherWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASTULauncherWeapon.OuterSingleton;
	}
	template<> SHOOTTHEMUP_API UClass* StaticClass<ASTULauncherWeapon>()
	{
		return ASTULauncherWeapon::StaticClass();
	}
	ASTULauncherWeapon::ASTULauncherWeapon() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTULauncherWeapon);
	ASTULauncherWeapon::~ASTULauncherWeapon() {}
	struct Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STULauncherWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STULauncherWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASTULauncherWeapon, ASTULauncherWeapon::StaticClass, TEXT("ASTULauncherWeapon"), &Z_Registration_Info_UClass_ASTULauncherWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTULauncherWeapon), 2903584701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STULauncherWeapon_h_758022881(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STULauncherWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STULauncherWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
