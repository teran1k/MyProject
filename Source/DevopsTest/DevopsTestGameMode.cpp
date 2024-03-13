// Copyright Epic Games, Inc. All Rights Reserved.

#include "DevopsTestGameMode.h"
#include "DevopsTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADevopsTestGameMode::ADevopsTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
