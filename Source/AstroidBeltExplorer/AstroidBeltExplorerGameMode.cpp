// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstroidBeltExplorerGameMode.h"
#include "AstroidBeltExplorerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAstroidBeltExplorerGameMode::AAstroidBeltExplorerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
