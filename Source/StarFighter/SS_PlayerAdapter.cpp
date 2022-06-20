// Fill out your copyright notice in the Description page of Project Settings.


#include "SS_PlayerAdapter.h"

// Sets default values
ASS_PlayerAdapter::ASS_PlayerAdapter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASS_PlayerAdapter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASS_PlayerAdapter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASS_PlayerAdapter::MoveUp1(float AxisValue)
{
	if (!Move)
	{
		UE_LOG(LogTemp, Warning, TEXT("Sling(); Weapon is Nulll , make sure it`s initialized"));
	}

	Move->MoveUp_1(AxisValue);
}

void ASS_PlayerAdapter::MoveRight1(float AxisValue)
{
	if (!Move)
	{
		UE_LOG(LogTemp, Warning, TEXT("Sling(); Weapon is Nulll , make sure it`s initialized"));
	}

	Move->MoveRight_1(AxisValue);
}

