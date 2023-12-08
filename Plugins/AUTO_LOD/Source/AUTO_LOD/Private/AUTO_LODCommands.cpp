// Copyright Epic Games, Inc. All Rights Reserved.

#include "AUTO_LODCommands.h"

#define LOCTEXT_NAMESPACE "FAUTO_LODModule"

void FAUTO_LODCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "AUTO_LOD", "Execute AUTO_LOD action", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
