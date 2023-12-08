// Copyright Epic Games, Inc. All Rights Reserved.

#include "AUTO_LODStyle.h"
#include "AUTO_LOD.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FAUTO_LODStyle::StyleInstance = nullptr;

void FAUTO_LODStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FAUTO_LODStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FAUTO_LODStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("AUTO_LODStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FAUTO_LODStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("AUTO_LODStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("AUTO_LOD")->GetBaseDir() / TEXT("Resources"));

	Style->Set("AUTO_LOD.PluginAction", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));
	return Style;
}

void FAUTO_LODStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FAUTO_LODStyle::Get()
{
	return *StyleInstance;
}
