// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/STUBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUBaseCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseCharacter();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUBaseCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void ASTUBaseCharacter::StaticRegisterNativesASTUBaseCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTUBaseCharacter);
	UClass* Z_Construct_UClass_ASTUBaseCharacter_NoRegister()
	{
		return ASTUBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASTUBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "STUBaseCharacter.h" },
		{ "ModuleRelativePath", "Public/STUBaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the game starts or when spawned\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STUBaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the game starts or when spawned" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUBaseCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_SpringArmComponent_MetaData), Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_SpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STUBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUBaseCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_CameraComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTUBaseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUBaseCharacter_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUBaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTUBaseCharacter_Statics::ClassParams = {
		&ASTUBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTUBaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTUBaseCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUBaseCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASTUBaseCharacter()
	{
		if (!Z_Registration_Info_UClass_ASTUBaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTUBaseCharacter.OuterSingleton, Z_Construct_UClass_ASTUBaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASTUBaseCharacter.OuterSingleton;
	}
	template<> SHOOTTHEMUP_API UClass* StaticClass<ASTUBaseCharacter>()
	{
		return ASTUBaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUBaseCharacter);
	ASTUBaseCharacter::~ASTUBaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUBaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUBaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASTUBaseCharacter, ASTUBaseCharacter::StaticClass, TEXT("ASTUBaseCharacter"), &Z_Registration_Info_UClass_ASTUBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTUBaseCharacter), 441063589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUBaseCharacter_h_3194987711(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootThemUp_Source_ShootThemUp_Public_STUBaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
