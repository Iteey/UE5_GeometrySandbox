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
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseWeapon();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTULauncherWeapon();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTULauncherWeapon_NoRegister();
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTULauncherWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTULauncherWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTULauncherWeapon_Statics::ClassParams = {
		&ASTULauncherWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTULauncherWeapon_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_ASTULauncherWeapon, ASTULauncherWeapon::StaticClass, TEXT("ASTULauncherWeapon"), &Z_Registration_Info_UClass_ASTULauncherWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTULauncherWeapon), 648659057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STULauncherWeapon_h_81462656(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STULauncherWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STULauncherWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
