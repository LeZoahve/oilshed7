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

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default", meta = (AllowPrivateAccess = "true"))
	TArray<UGrimoiresPage*> Pages;
};
