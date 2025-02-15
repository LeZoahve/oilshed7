// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"



#include "GrimoiresPage.generated.h"

UCLASS(Blueprintable, BlueprintType)
class OILSHED7_API UGrimoiresPage : public UObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UGrimoiresPage();

	UFUNCTION(BlueprintImplementableEvent)
	void OnTurn();

private:
};
