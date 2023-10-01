// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGeometryActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYSANDBOX_BaseGeometryActor_generated_h
#error "BaseGeometryActor.generated.h already included, missing '#pragma once' in BaseGeometryActor.h"
#endif
#define GEOMETRYSANDBOX_BaseGeometryActor_generated_h

#define FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryData_Statics; \
	GEOMETRYSANDBOX_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYSANDBOX_API UScriptStruct* StaticStruct<struct FGeometryData>();

#define FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_SPARSE_DATA
#define FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_ACCESSORS
#define FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGeometryActor(); \
	friend struct Z_Construct_UClass_ABaseGeometryActor_Statics; \
public: \
	DECLARE_CLASS(ABaseGeometryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometrySandbox"), NO_API) \
	DECLARE_SERIALIZER(ABaseGeometryActor)


#define FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGeometryActor(ABaseGeometryActor&&); \
	NO_API ABaseGeometryActor(const ABaseGeometryActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGeometryActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGeometryActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGeometryActor) \
	NO_API virtual ~ABaseGeometryActor();


#define FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_32_PROLOG
#define FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_SPARSE_DATA \
	FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_ACCESSORS \
	FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_INCLASS_NO_PURE_DECLS \
	FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSANDBOX_API UClass* StaticClass<class ABaseGeometryActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeometrySandbox_Source_GeometrySandbox_Public_BaseGeometryActor_h


#define FOREACH_ENUM_EMOVEMENTTYPE(op) \
	op(EMovementType::Sin) \
	op(EMovementType::Static) 

enum class EMovementType : uint8;
template<> struct TIsUEnumClass<EMovementType> { enum { Value = true }; };
template<> GEOMETRYSANDBOX_API UEnum* StaticEnum<EMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
