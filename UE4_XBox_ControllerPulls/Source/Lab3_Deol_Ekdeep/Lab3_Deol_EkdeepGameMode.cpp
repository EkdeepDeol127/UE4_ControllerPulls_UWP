// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Lab3_Deol_EkdeepGameMode.h"
#include "Lab3_Deol_EkdeepCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALab3_Deol_EkdeepGameMode::ALab3_Deol_EkdeepGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
