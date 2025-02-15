// Fill out your copyright notice in the Description page of Project Settings.


#include "GrimoiresBook.h"

// Sets default values
UGrimoiresBook::UGrimoiresBook()
{
}


UGrimoiresPage* UGrimoiresBook::GetCurrentPage()
{
	if (!ToReadPages.IsEmpty())
	{
		return ToReadPages[0];
	}
	return nullptr;
}

UGrimoiresPage* UGrimoiresBook::GetLastReadPage()
{
	if (!ReadPages.IsEmpty())
	{
		int readPagesCount = ReadPages.Num();

		return ReadPages[readPagesCount - 1];
	}
	return nullptr;
}

void UGrimoiresBook::TurnPage()
{
	if (ToReadPages.IsEmpty())
		return;

	UGrimoiresPage* currentPage = ToReadPages[0];
	if (currentPage == nullptr)
		return;

	currentPage->OnTurn();

	ReadPages.Add(currentPage);
	ToReadPages.RemoveAt(0);

	OnTurnPage();

	if (ToReadPages.IsEmpty())
	{
		Reset();
		TurnPage();
	}
}

void UGrimoiresBook::Reset()
{
	ToReadPages.Insert(ReadPages, 0);
	ReadPages.Empty();

	OnReset();
}