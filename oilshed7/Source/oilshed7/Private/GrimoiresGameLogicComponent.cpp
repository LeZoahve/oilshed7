// Fill out your copyright notice in the Description page of Project Settings.


#include "GrimoiresGameLogicComponent.h"

#include "GameFramework/PlayerController.h"

#include "GrimoiresPlayerState.h"

// Sets default values for this component's properties
UGrimoiresGameLogicComponent::UGrimoiresGameLogicComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrimoiresGameLogicComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGrimoiresGameLogicComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UGrimoiresGameLogicComponent::CastCurrentBookSpell()
{
	AActor* owner = GetOwner();

	APlayerController* playerController = Cast<APlayerController>(owner);
	if (playerController == nullptr)
		return;

	AGrimoiresPlayerState* playerState = playerController->GetPlayerState<AGrimoiresPlayerState>();
	if (playerState == nullptr)
		return;

	playerState->LoseHP(1);
}
