// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/STUBaseWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUBaseWeapon() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseWeapon();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseWeapon_NoRegister();
	SHOOTTHEMUP_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AmmoData;
class UScriptStruct* FAmmoData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AmmoData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AmmoData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmmoData, (UObject*)Z_Construct_UPackage__Script_ShootThemUp(), TEXT("AmmoData"));
	}
	return Z_Registration_Info_UScriptStruct_AmmoData.OuterSingleton;
}
template<> SHOOTTHEMUP_API UScriptStruct* StaticStruct<FAmmoData>()
{
	return FAmmoData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAmmoData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bullets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bullets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clips_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Clips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Infinite_MetaData[];
#endif
		static void NewProp_Infinite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Infinite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/STUBaseWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAmmoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmmoData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets = { "Bullets", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmoData, Bullets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData), Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xd0\x9a\xd0\xbe\xd0\xbb\xd0\xb8\xd1\x87\xd0\xb5\xd1\x81\xd1\x82\xd0\xb2\xd0\xbe \xd0\xbf\xd0\xb0\xd1\x82\xd1\x80\xd0\xbe\xd0\xbd \xd0\xb2 \xd0\xbc\xd0\xb0\xd0\xb3\xd0\xb0\xd0\xb7\xd0\xb8\xd0\xbd\xd0\xb5\n" },
#endif
		{ "EditCondition", "!Infinite" },
		{ "ModuleRelativePath", "Public/STUBaseWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9a\xd0\xbe\xd0\xbb\xd0\xb8\xd1\x87\xd0\xb5\xd1\x81\xd1\x82\xd0\xb2\xd0\xbe \xd0\xbf\xd0\xb0\xd1\x82\xd1\x80\xd0\xbe\xd0\xbd \xd0\xb2 \xd0\xbc\xd0\xb0\xd0\xb3\xd0\xb0\xd0\xb7\xd0\xb8\xd0\xbd\xd0\xb5" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips = { "Clips", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmoData, Clips), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData), Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x9a\xd0\xbe\xd0\xbb\xd0\xb8\xd1\x87\xd0\xb5\xd1\x81\xd1\x82\xd0\xb2\xd0\xbe \xd0\xbc\xd0\xb0\xd0\xb3\xd0\xb0\xd0\xb7\xd0\xb8\xd0\xbd\xd0\xbe\xd0\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/STUBaseWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x9a\xd0\xbe\xd0\xbb\xd0\xb8\xd1\x87\xd0\xb5\xd1\x81\xd1\x82\xd0\xb2\xd0\xbe \xd0\xbc\xd0\xb0\xd0\xb3\xd0\xb0\xd0\xb7\xd0\xb8\xd0\xbd\xd0\xbe\xd0\xb2" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite_SetBit(void* Obj)
	{
		((FAmmoData*)Obj)->Infinite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite = { "Infinite", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmmoData), &Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite_MetaData), Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmmoData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Bullets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Clips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoData_Statics::NewProp_Infinite,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmmoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
		nullptr,
		&NewStructOps,
		"AmmoData",
		Z_Construct_UScriptStruct_FAmmoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::PropPointers),
		sizeof(FAmmoData),
		alignof(FAmmoData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAmmoData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAmmoData()
	{
		if (!Z_Registration_Info_UScriptStruct_AmmoData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AmmoData.InnerSingleton, Z_Construct_UScriptStruct_FAmmoData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AmmoData.InnerSingleton;
	}
	void ASTUBaseWeapon::StaticRegisterNativesASTUBaseWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTUBaseWeapon);
	UClass* Z_Construct_UClass_ASTUBaseWeapon_NoRegister()
	{
		return ASTUBaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASTUBaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUBaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseWeapon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STUBaseWeapon.h" },
		{ "ModuleRelativePath", "Public/STUBaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STUBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUBaseWeapon, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_WeaponMesh_MetaData), Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_WeaponMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/STUBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_MuzzleSocketName = { "MuzzleSocketName", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUBaseWeapon, MuzzleSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData), Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_TraceMaxDistance_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_TraceMaxDistance = { "TraceMaxDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUBaseWeapon, TraceMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_TraceMaxDistance_MetaData), Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_TraceMaxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_DefaultAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_DefaultAmmo = { "DefaultAmmo", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUBaseWeapon, DefaultAmmo), Z_Construct_UScriptStruct_FAmmoData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_DefaultAmmo_MetaData), Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_DefaultAmmo_MetaData) }; // 3673290527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUBaseWeapon, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_DamageAmount_MetaData), Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_DamageAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_ZoomMultiplier_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_ZoomMultiplier = { "ZoomMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUBaseWeapon, ZoomMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_ZoomMultiplier_MetaData), Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_ZoomMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTUBaseWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_MuzzleSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_TraceMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_DefaultAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseWeapon_Statics::NewProp_ZoomMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUBaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUBaseWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTUBaseWeapon_Statics::ClassParams = {
		&ASTUBaseWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTUBaseWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTUBaseWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASTUBaseWeapon()
	{
		if (!Z_Registration_Info_UClass_ASTUBaseWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTUBaseWeapon.OuterSingleton, Z_Construct_UClass_ASTUBaseWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASTUBaseWeapon.OuterSingleton;
	}
	template<> SHOOTTHEMUP_API UClass* StaticClass<ASTUBaseWeapon>()
	{
		return ASTUBaseWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUBaseWeapon);
	ASTUBaseWeapon::~ASTUBaseWeapon() {}
	struct Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUBaseWeapon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUBaseWeapon_h_Statics::ScriptStructInfo[] = {
		{ FAmmoData::StaticStruct, Z_Construct_UScriptStruct_FAmmoData_Statics::NewStructOps, TEXT("AmmoData"), &Z_Registration_Info_UScriptStruct_AmmoData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmmoData), 3673290527U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUBaseWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASTUBaseWeapon, ASTUBaseWeapon::StaticClass, TEXT("ASTUBaseWeapon"), &Z_Registration_Info_UClass_ASTUBaseWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTUBaseWeapon), 2211802718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUBaseWeapon_h_3364797161(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUBaseWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUBaseWeapon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUBaseWeapon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUBaseWeapon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
