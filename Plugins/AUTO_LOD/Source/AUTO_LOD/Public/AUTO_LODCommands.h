// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "AUTO_LODStyle.h"

class FAUTO_LODCommands : public TCommands<FAUTO_LODCommands>
{
public:

	FAUTO_LODCommands()
		: TCommands<FAUTO_LODCommands>(TEXT("AUTO_LOD"), NSLOCTEXT("Contexts", "AUTO_LOD", "AUTO_LOD Plugin"), NAME_None, FAUTO_LODStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
