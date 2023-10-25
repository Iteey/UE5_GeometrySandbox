// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/STUWeaponComponentv1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUWeaponComponentv1() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseWeapon_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUWeaponComponentv1();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUWeaponComponentv1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void USTUWeaponComponentv1::StaticRegisterNativesUSTUWeaponComponentv1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USTUWeaponComponentv1);
	UClass* Z_Construct_UClass_USTUWeaponComponentv1_NoRegister()
	{
		return USTUWeaponComponentv1::StaticClass();
	}
	struct Z_Construct_UClass_USTUWeaponComponentv1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachPointName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponAttachPointName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUWeaponComponentv1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponComponentv1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponComponentv1_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "STUWeaponComponentv1.h" },
		{ "ModuleRelativePath", "Public/STUWeaponComponentv1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUWeaponComponentv1.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTUWeaponComponentv1, WeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASTUBaseWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_WeaponClass_MetaData), Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_WeaponClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_WeaponAttachPointName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUWeaponComponentv1.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_WeaponAttachPointName = { "WeaponAttachPointName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTUWeaponComponentv1, WeaponAttachPointName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_WeaponAttachPointName_MetaData), Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_WeaponAttachPointName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/STUWeaponComponentv1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTUWeaponComponentv1, CurrentWeapon), Z_Construct_UClass_ASTUBaseWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_CurrentWeapon_MetaData), Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_CurrentWeapon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUWeaponComponentv1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_WeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_WeaponAttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponComponentv1_Statics::NewProp_CurrentWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUWeaponComponentv1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUWeaponComponentv1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USTUWeaponComponentv1_Statics::ClassParams = {
		&USTUWeaponComponentv1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUWeaponComponentv1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponComponentv1_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponComponentv1_Statics::Class_MetaDataParams), Z_Construct_UClass_USTUWeaponComponentv1_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponComponentv1_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USTUWeaponComponentv1()
	{
		if (!Z_Registration_Info_UClass_USTUWeaponComponentv1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTUWeaponComponentv1.OuterSingleton, Z_Construct_UClass_USTUWeaponComponentv1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USTUWeaponComponentv1.OuterSingleton;
	}
	template<> SHOOTTHEMUP_API UClass* StaticClass<USTUWeaponComponentv1>()
	{
		return USTUWeaponComponentv1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUWeaponComponentv1);
	USTUWeaponComponentv1::~USTUWeaponComponentv1() {}
	struct Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUWeaponComponentv1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUWeaponComponentv1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USTUWeaponComponentv1, USTUWeaponComponentv1::StaticClass, TEXT("USTUWeaponComponentv1"), &Z_Registration_Info_UClass_USTUWeaponComponentv1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTUWeaponComponentv1), 1698230418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUWeaponComponentv1_h_230756699(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUWeaponComponentv1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUWeaponComponentv1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
