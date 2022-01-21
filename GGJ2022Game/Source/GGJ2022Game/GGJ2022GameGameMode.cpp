// Copyright Epic Games, Inc. All Rights Reserved.

#include "GGJ2022GameGameMode.h"
#include "GGJ2022GameHUD.h"
#include "GGJ2022GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGGJ2022GameGameMode::AGGJ2022GameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGGJ2022GameHUD::StaticClass();
}
