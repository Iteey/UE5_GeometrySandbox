// Shoot Them Up Game, All Rights Reserved

#include "STUAICharacter.h"

#include "STUAIController.h"

ASTUAICharacter::ASTUAICharacter(const FObjectInitializer& ObjInit)
{
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = ASTUAIController::StaticClass();
}
