// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomerMan_ExamenGameMode.h"
#include "BomerMan_ExamenCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABomerMan_ExamenGameMode::ABomerMan_ExamenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
