// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"

#include "GrimoiresBook.h"
#include "GrimoiresHand.h"

#include "GrimoiresPlayerState.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHPLost, int, _HPLoss);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHPGained, int, _HPGain);

/**
 * 
 */
UCLASS(BlueprintType)
class OILSHED7_API AGrimoiresPlayerState : public APlayerState
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SetInitialHP(int _InitialHP) { InitialHP = _InitialHP; }


	UFUNCTION(BlueprintCallable)
	void LoseHP(int _HPLoss);

	UFUNCTION(BlueprintCallable)
	void GainHP(int _HPGain);


	UFUNCTION(BlueprintCallable)
	void UpdateManipulations(int _ManipulationsDelta);

	UFUNCTION(BlueprintCallable)
	void UpdateInspiration(int _InspirationDelta);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	int InitialHP = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	int HP = 0;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	int Manipulations = 0;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	int Inspiration = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UGrimoiresBook* Book = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	UGrimoiresHand* Hand = nullptr;


	UPROPERTY(BlueprintAssignable, VisibleAnywhere)
	FOnHPLost OnHPLost;

	UPROPERTY(BlueprintAssignable, VisibleAnywhere)
	FOnHPGained OnHPGained;


	//Book
	//Hand
	//Shields?
	//Summons?
};
