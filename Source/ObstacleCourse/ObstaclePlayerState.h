// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ObstaclePlayerState.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCoinUpdateDispatcher, float, NewCoinAmount, float, TotalCoinAmount);

UCLASS()
class OBSTACLECOURSE_API AObstaclePlayerState : public APlayerState
{
	GENERATED_BODY()
	

private:

	int Coins = 0;

public:
	int GetCoin();
	bool SetCoins(int amount);
	UFUNCTION(BluePrintCallable)
	bool AddCoins(int amount);

	UPROPERTY(BlueprintAssignable)
	FOnCoinUpdateDispatcher OnCoinUpdateDispatcher;

};
