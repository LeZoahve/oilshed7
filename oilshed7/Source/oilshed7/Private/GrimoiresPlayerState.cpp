// Fill out your copyright notice in the Description page of Project Settings.


#include "GrimoiresPlayerState.h"
#include "Kismet/KismetMathLibrary.h"



void AGrimoiresPlayerState::LoseHP(int _HPLoss)
{
	HP = FMath::Max(0, HP - _HPLoss);
	
	OnHPLost.Broadcast(_HPLoss);
}

void AGrimoiresPlayerState::GainHP(int _HPGain)
{
	HP = FMath::Min(InitialHP, HP + _HPGain);

	OnHPGained.Broadcast(_HPGain);
}

void AGrimoiresPlayerState::UpdateManipulations(int _ManipulationsDelta)
{
	Manipulations = FMath::Max(0, Manipulations + _ManipulationsDelta);
}


void AGrimoiresPlayerState::UpdateInspiration(int _InspirationDelta)
{
	Inspiration = FMath::Max(0, Manipulations + _InspirationDelta);
}