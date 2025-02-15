// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "GrimoiresPage.h"

#include "GrimoiresBook.generated.h"

UCLASS(Blueprintable, BlueprintType)
class OILSHED7_API UGrimoiresBook : public UObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UGrimoiresBook();

	UFUNCTION(BlueprintCallable)
	UGrimoiresPage* GetCurrentPage();

	UFUNCTION(BlueprintCallable)
	UGrimoiresPage* GetLastReadPage();

	UFUNCTION(BlueprintCallable)
	void TurnPage();

	UFUNCTION(BlueprintCallable)
	void Reset();

	UFUNCTION(BlueprintImplementableEvent)
	void OnTurnPage();

	UFUNCTION(BlueprintImplementableEvent)
	void OnReset();

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	TArray<UGrimoiresPage*> Pages;


	/////////////////////////////////
	//Game Logic => NO UPROPERTY HERE
	/////////////////////////////////


	TArray<UGrimoiresPage*> ReadPages;
	TArray<UGrimoiresPage*> ToReadPages;
};
