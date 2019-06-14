// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Juego_Fase1GameMode.h"
#include "Juego_Fase1Character.h"
#include "UObject/ConstructorHelpers.h"

AJuego_Fase1GameMode::AJuego_Fase1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
