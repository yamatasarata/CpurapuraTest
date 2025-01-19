// Copyright Epic Games, Inc. All Rights Reserved.

#include "CpurapuraTestGameMode.h"
#include "CpurapuraTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACpurapuraTestGameMode::ACpurapuraTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
