// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PlayerGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class FORTEST_API UPlayerGameInstance : public UGameInstance
{
	GENERATED_BODY()

	
public:
	UPlayerGameInstance();

	UFUNCTION(BlueprintImplementableEvent, Category = "CustomEvents")
	void TESTInstance();

protected:
	virtual void Init();

};
