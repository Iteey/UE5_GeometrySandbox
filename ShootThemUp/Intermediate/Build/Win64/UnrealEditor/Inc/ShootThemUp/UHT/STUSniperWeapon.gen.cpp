// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/STUSniperWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUSniperWeapon() {}
// Cross Module References
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseWeapon();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUSniperWeapon();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUSniperWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void ASTUSniperWeapon::StaticRegisterNativesASTUSniperWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTUSniperWeapon);
	UClass* Z_Construct_UClass_ASTUSniperWeapon_NoRegister()
	{
		return ASTUSniperWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASTUSniperWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenShots_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SniperZoomPlus_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SniperZoomPlus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SniperTraceMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SniperTraceMaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUSniperWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTUBaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUSniperWeapon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUSniperWeapon_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "STUSniperWeapon.h" },
		{ "ModuleRelativePath", "Public/STUSniperWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_TimeBetweenShots_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUSniperWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUSniperWeapon, TimeBetweenShots), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_TimeBetweenShots_MetaData), Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_TimeBetweenShots_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_BulletSpread_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUSniperWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_BulletSpread = { "BulletSpread", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUSniperWeapon, BulletSpread), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_BulletSpread_MetaData), Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_BulletSpread_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperZoomPlus_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUSniperWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperZoomPlus = { "SniperZoomPlus", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUSniperWeapon, SniperZoomPlus), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperZoomPlus_MetaData), Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperZoomPlus_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperTraceMaxDistance_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUSniperWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperTraceMaxDistance = { "SniperTraceMaxDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUSniperWeapon, SniperTraceMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperTraceMaxDistance_MetaData), Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperTraceMaxDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTUSniperWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_TimeBetweenShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_BulletSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperZoomPlus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperTraceMaxDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUSniperWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUSniperWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTUSniperWeapon_Statics::ClassParams = {
		&ASTUSniperWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTUSniperWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTUSniperWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUSniperWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTUSniperWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUSniperWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASTUSniperWeapon()
	{
		if (!Z_Registration_Info_UClass_ASTUSniperWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTUSniperWeapon.OuterSingleton, Z_Construct_UClass_ASTUSniperWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASTUSniperWeapon.OuterSingleton;
	}
	template<> SHOOTTHEMUP_API UClass* StaticClass<ASTUSniperWeapon>()
	{
		return ASTUSniperWeapon::StaticClass();
	}
	ASTUSniperWeapon::ASTUSniperWeapon() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUSniperWeapon);
	ASTUSniperWeapon::~ASTUSniperWeapon() {}
	struct Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUSniperWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUSniperWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASTUSniperWeapon, ASTUSniperWeapon::StaticClass, TEXT("ASTUSniperWeapon"), &Z_Registration_Info_UClass_ASTUSniperWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTUSniperWeapon), 3669475283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUSniperWeapon_h_3252779387(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUSniperWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUSniperWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
