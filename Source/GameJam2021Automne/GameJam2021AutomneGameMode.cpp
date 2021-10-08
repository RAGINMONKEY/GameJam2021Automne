// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJam2021AutomneGameMode.h"
#include "GameJam2021AutomnePlayerController.h"
#include "GameJam2021AutomneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameJam2021AutomneGameMode::AGameJam2021AutomneGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGameJam2021AutomnePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}