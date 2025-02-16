// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GrimoiresPageEffect.generated.h"

/**
 *
 */
UCLASS(Blueprintable,BlueprintType)
class OILSHED7_API UGrimoiresPageEffect : public UObject
{
	GENERATED_BODY()

	UWorld* GetWorld() const override;
};
