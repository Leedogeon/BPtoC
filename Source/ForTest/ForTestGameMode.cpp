// Copyright Epic Games, Inc. All Rights Reserved.

#include "ForTestGameMode.h"
#include "ForTestCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include <Kismet/KismetSystemLibrary.h>
AForTestGameMode::AForTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AForTestGameMode::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(GetWorld(), TEXT("GamemodeBase"), true, true, FLinearColor::Green, 2.0f);
}




