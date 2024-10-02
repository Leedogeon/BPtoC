// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerGameInstance.h"
#include <Kismet/KismetSystemLibrary.h>
UPlayerGameInstance::UPlayerGameInstance()
{
}

void UPlayerGameInstance::Init()
{
	Super::Init();
	UKismetSystemLibrary::PrintString(GetWorld(), TEXT("GameInstance"), true, true, FLinearColor::Green, 2.0f);
}
