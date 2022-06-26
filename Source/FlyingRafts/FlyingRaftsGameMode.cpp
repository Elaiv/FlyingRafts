// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlyingRaftsGameMode.h"
#include "FlyingRaftsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFlyingRaftsGameMode::AFlyingRaftsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
