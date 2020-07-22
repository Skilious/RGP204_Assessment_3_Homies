// Copyright Epic Games, Inc. All Rights Reserved.

#include "RGP204GameMode.h"
#include "RGP204PlayerController.h"
#include "RGP204Character.h"
#include "UObject/ConstructorHelpers.h"

ARGP204GameMode::ARGP204GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARGP204PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}