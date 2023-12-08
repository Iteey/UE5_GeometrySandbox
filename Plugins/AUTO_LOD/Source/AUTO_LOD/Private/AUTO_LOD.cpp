// Copyright Epic Games, Inc. All Rights Reserved.

#include "AUTO_LOD.h"
#include "AUTO_LODStyle.h"
#include "AUTO_LODCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"

static const FName AUTO_LODTabName("AUTO_LOD");

#define LOCTEXT_NAMESPACE "FAUTO_LODModule"

void FAUTO_LODModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FAUTO_LODStyle::Initialize();
	FAUTO_LODStyle::ReloadTextures();

	FAUTO_LODCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FAUTO_LODCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FAUTO_LODModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FAUTO_LODModule::RegisterMenus));
}

void FAUTO_LODModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FAUTO_LODStyle::Shutdown();

	FAUTO_LODCommands::Unregister();
}

void FAUTO_LODModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
							LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
							FText::FromString(TEXT("FAUTO_LODModule::PluginButtonClicked()")),
							FText::FromString(TEXT("AUTO_LOD.cpp"))
					   );
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FAUTO_LODModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FAUTO_LODCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FAUTO_LODCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAUTO_LODModule, AUTO_LOD)