// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootThemUp_init() {}
	SHOOTTHEMUP_API UFunction* Z_Construct_UDelegateFunction_ShootThemUp_BpOnDeath__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShootThemUp;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShootThemUp()
	{
		if (!Z_Registration_Info_UPackage__Script_ShootThemUp.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ShootThemUp_BpOnDeath__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShootThemUp",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA1B52852,
				0x91738B27,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShootThemUp.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShootThemUp.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShootThemUp(Z_Construct_UPackage__Script_ShootThemUp, TEXT("/Script/ShootThemUp"), Z_Registration_Info_UPackage__Script_ShootThemUp, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA1B52852, 0x91738B27));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
