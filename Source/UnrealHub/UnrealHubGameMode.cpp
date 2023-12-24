// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealHubGameMode.h"
#include "UnrealHubCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealHubGameMode::AUnrealHubGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
