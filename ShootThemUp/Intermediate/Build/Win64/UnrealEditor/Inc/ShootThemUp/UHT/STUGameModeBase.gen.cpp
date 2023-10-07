// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/STUGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUGameModeBase();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void ASTUGameModeBase::StaticRegisterNativesASTUGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTUGameModeBase);
	UClass* Z_Construct_UClass_ASTUGameModeBase_NoRegister()
	{
		return ASTUGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASTUGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "STUGameModeBase.h" },
		{ "ModuleRelativePath", "Public/STUGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTUGameModeBase_Statics::ClassParams = {
		&ASTUGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTUGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASTUGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASTUGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTUGameModeBase.OuterSingleton, Z_Construct_UClass_ASTUGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASTUGameModeBase.OuterSingleton;
	}
	template<> SHOOTTHEMUP_API UClass* StaticClass<ASTUGameModeBase>()
	{
		return ASTUGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUGameModeBase);
	ASTUGameModeBase::~ASTUGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASTUGameModeBase, ASTUGameModeBase::StaticClass, TEXT("ASTUGameModeBase"), &Z_Registration_Info_UClass_ASTUGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTUGameModeBase), 2948109277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUGameModeBase_h_3645583990(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
