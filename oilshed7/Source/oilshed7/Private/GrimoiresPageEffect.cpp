// Fill out your copyright notice in the Description page of Project Settings.


#include "GrimoiresPageEffect.h"

UWorld* UGrimoiresPageEffect::GetWorld() const
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