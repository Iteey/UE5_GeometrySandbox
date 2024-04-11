// Copyright Epic Games, Inc. All Rights Reserved.

#include "LodToolBL.h"

#define LOCTEXT_NAMESPACE "FLodToolBLModule"

void FLodToolBLModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FLodToolBLModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLodToolBLModule, LodToolBL)