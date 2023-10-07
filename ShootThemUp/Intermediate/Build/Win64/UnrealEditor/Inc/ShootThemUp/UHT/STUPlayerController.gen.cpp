// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/STUPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUPlayerController();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void ASTUPlayerController::StaticRegisterNativesASTUPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTUPlayerController);
	UClass* Z_Construct_UClass_ASTUPlayerController_NoRegister()
	{
		return ASTUPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASTUPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "STUPlayerController.h" },
		{ "ModuleRelativePath", "Public/STUPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTUPlayerController_Statics::ClassParams = {
		&ASTUPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTUPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASTUPlayerController()
	{
		if (!Z_Registration_Info_UClass_ASTUPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTUPlayerController.OuterSingleton, Z_Construct_UClass_ASTUPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASTUPlayerController.OuterSingleton;
	}
	template<> SHOOTTHEMUP_API UClass* StaticClass<ASTUPlayerController>()
	{
		return ASTUPlayerController::StaticClass();
	}
	ASTUPlayerController::ASTUPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUPlayerController);
	ASTUPlayerController::~ASTUPlayerController() {}
	struct Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASTUPlayerController, ASTUPlayerController::StaticClass, TEXT("ASTUPlayerController"), &Z_Registration_Info_UClass_ASTUPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTUPlayerController), 3536571988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUPlayerController_h_351809358(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
