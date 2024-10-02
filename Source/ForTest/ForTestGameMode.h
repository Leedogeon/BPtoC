// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ForTestGameMode.generated.h"

UCLASS(minimalapi)
class AForTestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AForTestGameMode();



public:
	UFUNCTION(BlueprintImplementableEvent, Category = "CustomEvents")
	void TEST();
protected:
	virtual void BeginPlay();

};



