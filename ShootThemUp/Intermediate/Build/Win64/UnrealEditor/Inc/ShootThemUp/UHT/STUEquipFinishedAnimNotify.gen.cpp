// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/STUEquipFinishedAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUEquipFinishedAnimNotify() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUEquipFinishedAnimNotify();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUEquipFinishedAnimNotify_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void USTUEquipFinishedAnimNotify::StaticRegisterNativesUSTUEquipFinishedAnimNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USTUEquipFinishedAnimNotify);
	UClass* Z_Construct_UClass_USTUEquipFinishedAnimNotify_NoRegister()
	{
		return USTUEquipFinishedAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "STUEquipFinishedAnimNotify.h" },
		{ "ModuleRelativePath", "Public/STUEquipFinishedAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUEquipFinishedAnimNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::ClassParams = {
		&USTUEquipFinishedAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USTUEquipFinishedAnimNotify()
	{
		if (!Z_Registration_Info_UClass_USTUEquipFinishedAnimNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTUEquipFinishedAnimNotify.OuterSingleton, Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USTUEquipFinishedAnimNotify.OuterSingleton;
	}
	template<> SHOOTTHEMUP_API UClass* StaticClass<USTUEquipFinishedAnimNotify>()
	{
		return USTUEquipFinishedAnimNotify::StaticClass();
	}
	USTUEquipFinishedAnimNotify::USTUEquipFinishedAnimNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUEquipFinishedAnimNotify);
	USTUEquipFinishedAnimNotify::~USTUEquipFinishedAnimNotify() {}
	struct Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUEquipFinishedAnimNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUEquipFinishedAnimNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USTUEquipFinishedAnimNotify, USTUEquipFinishedAnimNotify::StaticClass, TEXT("USTUEquipFinishedAnimNotify"), &Z_Registration_Info_UClass_USTUEquipFinishedAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTUEquipFinishedAnimNotify), 2253901916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUEquipFinishedAnimNotify_h_1671408786(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUEquipFinishedAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUEquipFinishedAnimNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
