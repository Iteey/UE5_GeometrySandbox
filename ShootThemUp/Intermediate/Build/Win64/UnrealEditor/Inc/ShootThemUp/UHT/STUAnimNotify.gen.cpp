// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/STUAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUAnimNotify() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUAnimNotify();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_USTUAnimNotify_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void USTUAnimNotify::StaticRegisterNativesUSTUAnimNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USTUAnimNotify);
	UClass* Z_Construct_UClass_USTUAnimNotify_NoRegister()
	{
		return USTUAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_USTUAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTUAnimNotify_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUAnimNotify_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "STUAnimNotify.h" },
		{ "ModuleRelativePath", "Public/STUAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUAnimNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USTUAnimNotify_Statics::ClassParams = {
		&USTUAnimNotify::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTUAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_USTUAnimNotify_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USTUAnimNotify()
	{
		if (!Z_Registration_Info_UClass_USTUAnimNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTUAnimNotify.OuterSingleton, Z_Construct_UClass_USTUAnimNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USTUAnimNotify.OuterSingleton;
	}
	template<> SHOOTTHEMUP_API UClass* StaticClass<USTUAnimNotify>()
	{
		return USTUAnimNotify::StaticClass();
	}
	USTUAnimNotify::USTUAnimNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUAnimNotify);
	USTUAnimNotify::~USTUAnimNotify() {}
	struct Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUAnimNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUAnimNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USTUAnimNotify, USTUAnimNotify::StaticClass, TEXT("USTUAnimNotify"), &Z_Registration_Info_UClass_USTUAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTUAnimNotify), 1813824940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUAnimNotify_h_2614841557(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUAnimNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
