// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Game254_Assignment2.h"
#include "Game254_Assignment2GameMode.h"
#include "Game254_Assignment2Character.h"

AGame254_Assignment2GameMode::AGame254_Assignment2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
