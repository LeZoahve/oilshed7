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

    UWorld* GetWorld() const override
    {
        if (IsTemplate())
        {
            return nullptr;
        }

		if (UObject* Outer = GetOuter())
		{
			if (!HasAnyFlags(RF_ClassDefaultObject)
				&& !Outer->HasAnyFlags(RF_BeginDestroyed)
				&& !Outer->IsUnreachable())
			{
				return Outer->GetWorld();
			}
		}

		return nullptr;
    }
};
