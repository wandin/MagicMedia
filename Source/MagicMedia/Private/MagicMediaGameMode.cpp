// Copyright Epic Games, Inc. All Rights Reserved.

#include "MagicMediaGameMode.h"
#include "MagicMediaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMagicMediaGameMode::AMagicMediaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
