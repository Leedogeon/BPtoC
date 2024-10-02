// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Forstat.generated.h"
/**
 * 
 */
class FORTEST_API ForStat
{
public:
	ForStat();
	~ForStat();
};

USTRUCT(BlueprintType)
struct FStat
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Lv;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Money;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxMP;
};