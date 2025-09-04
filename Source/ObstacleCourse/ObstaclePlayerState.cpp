// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaclePlayerState.h"

int AObstaclePlayerState::GetCoin()
{
	return Coins;
}

bool AObstaclePlayerState::SetCoins(int amount)
{
	Coins = amount;
	return true;
}

bool AObstaclePlayerState::AddCoins(int amount)
{
	int coins = GetCoin();
	int newCoinAmount = coins + amount;
	SetCoins(newCoinAmount);
	OnCoinUpdateDispatcher.Broadcast(amount, newCoinAmount);
	return true;
}
