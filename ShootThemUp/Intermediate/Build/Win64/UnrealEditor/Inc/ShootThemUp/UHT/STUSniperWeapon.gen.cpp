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
	DEFINE_FUNCTION(ASTUSniperWeapon::execGetSniperAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSniperAiming();
		P_NATIVE_END;
	}
	void ASTUSniperWeapon::StaticRegisterNativesASTUSniperWeapon()
	{
		UClass* Class = ASTUSniperWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSniperAiming", &ASTUSniperWeapon::execGetSniperAiming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics
	{
		struct STUSniperWeapon_eventGetSniperAiming_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((STUSniperWeapon_eventGetSniperAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STUSniperWeapon_eventGetSniperAiming_Parms), &Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUSniperWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTUSniperWeapon, nullptr, "GetSniperAiming", nullptr, nullptr, Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::STUSniperWeapon_eventGetSniperAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::STUSniperWeapon_eventGetSniperAiming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTUSniperWeapon);
	UClass* Z_Construct_UClass_ASTUSniperWeapon_NoRegister()
	{
		return ASTUSniperWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASTUSniperWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SniperAimingNow_MetaData[];
#endif
		static void NewProp_SniperAimingNow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SniperAimingNow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUSniperWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTUBaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUSniperWeapon_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASTUSniperWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTUSniperWeapon_GetSniperAiming, "GetSniperAiming" }, // 1817764072
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUSniperWeapon_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperAimingNow_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STUSniperWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperAimingNow_SetBit(void* Obj)
	{
		((ASTUSniperWeapon*)Obj)->SniperAimingNow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperAimingNow = { "SniperAimingNow", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASTUSniperWeapon), &Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperAimingNow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperAimingNow_MetaData), Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperAimingNow_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTUSniperWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_TimeBetweenShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_BulletSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperZoomPlus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperTraceMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUSniperWeapon_Statics::NewProp_SniperAimingNow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUSniperWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUSniperWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTUSniperWeapon_Statics::ClassParams = {
		&ASTUSniperWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASTUSniperWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ASTUSniperWeapon, ASTUSniperWeapon::StaticClass, TEXT("ASTUSniperWeapon"), &Z_Registration_Info_UClass_ASTUSniperWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTUSniperWeapon), 2107436760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUSniperWeapon_h_868520792(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUSniperWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUSniperWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
