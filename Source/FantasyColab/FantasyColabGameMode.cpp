// Copyright Epic Games, Inc. All Rights Reserved.

#include "FantasyColabGameMode.h"
#include "FantasyColabCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFantasyColabGameMode::AFantasyColabGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
