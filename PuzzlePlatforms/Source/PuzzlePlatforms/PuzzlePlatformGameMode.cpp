// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatformGameMode.h"
#include "PuzzlePlatformsCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzlePlatformGameMode::APuzzlePlatformGameMode()
{
	// set default pawn class to our Blueprinted Character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}