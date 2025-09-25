// Copyright Epic Games, Inc. All Rights Reserved.

#include "Home_work6GameMode.h"
#include "Home_work6Character.h"
#include "UObject/ConstructorHelpers.h"

AHome_work6GameMode::AHome_work6GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
