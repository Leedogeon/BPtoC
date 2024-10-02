// Fill out your copyright notice in the Description page of Project Settings.


#include "CreatureInfo.h"

// Sets default values
ACreatureInfo::ACreatureInfo()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACreatureInfo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACreatureInfo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACreatureInfo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

