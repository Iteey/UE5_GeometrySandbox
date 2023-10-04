// Fill out your copyright notice in the Description page of Project Settings.


#include "GeometrySandboxGamemodeBase.h"
#include "MyDefaultPawn.h"

AGeometrySandboxGamemodeBase::AGeometrySandboxGamemodeBase() {
	DefaultPawnClass = AMyDefaultPawn::StaticClass();
	PlayerControllerClass = AGeometryPlayerController::StaticClass();
}

