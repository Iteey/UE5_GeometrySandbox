// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Public/STUDevDamageActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUDevDamageActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUDevDamageActor();
	SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUDevDamageActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References
	void ASTUDevDamageActor::StaticRegisterNativesASTUDevDamageActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTUDevDamageActor);
	UClass* Z_Construct_UClass_ASTUDevDamageActor_NoRegister()
	{
		return ASTUDevDamageActor::StaticClass();
	}
	struct Z_Construct_UClass_ASTUDevDamageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoFullDamage_MetaData[];
#endif
		static void NewProp_DoFullDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoFullDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUDevDamageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STUDevDamageActor.h" },
		{ "ModuleRelativePath", "Public/STUDevDamageActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "STUDevDamageActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STUDevDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUDevDamageActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SceneComponent_MetaData), Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SceneComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "STUDevDamageActor" },
		{ "ModuleRelativePath", "Public/STUDevDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUDevDamageActor, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Radius_MetaData), Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Radius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SphereColor_MetaData[] = {
		{ "Category", "STUDevDamageActor" },
		{ "ModuleRelativePath", "Public/STUDevDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SphereColor = { "SphereColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUDevDamageActor, SphereColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SphereColor_MetaData), Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SphereColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "STUDevDamageActor" },
		{ "ModuleRelativePath", "Public/STUDevDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTUDevDamageActor, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage_MetaData[] = {
		{ "Category", "STUDevDamageActor" },
		{ "ModuleRelativePath", "Public/STUDevDamageActor.h" },
	};
#endif
	void Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage_SetBit(void* Obj)
	{
		((ASTUDevDamageActor*)Obj)->DoFullDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage = { "DoFullDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASTUDevDamageActor), &Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage_MetaData), Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTUDevDamageActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SphereColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUDevDamageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUDevDamageActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTUDevDamageActor_Statics::ClassParams = {
		&ASTUDevDamageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTUDevDamageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTUDevDamageActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASTUDevDamageActor()
	{
		if (!Z_Registration_Info_UClass_ASTUDevDamageActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTUDevDamageActor.OuterSingleton, Z_Construct_UClass_ASTUDevDamageActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASTUDevDamageActor.OuterSingleton;
	}
	template<> SHOOTTHEMUP_API UClass* StaticClass<ASTUDevDamageActor>()
	{
		return ASTUDevDamageActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUDevDamageActor);
	ASTUDevDamageActor::~ASTUDevDamageActor() {}
	struct Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUDevDamageActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUDevDamageActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASTUDevDamageActor, ASTUDevDamageActor::StaticClass, TEXT("ASTUDevDamageActor"), &Z_Registration_Info_UClass_ASTUDevDamageActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTUDevDamageActor), 401075338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUDevDamageActor_h_4106542008(TEXT("/Script/ShootThemUp"),
		Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUDevDamageActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dev_Documents_GitHub_UE5_GeometrySandbox_ShootThemUp_Source_ShootThemUp_Public_STUDevDamageActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
