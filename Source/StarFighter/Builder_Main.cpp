// Fill out your copyright notice in the Description page of Project Settings.


#include "Builder_Main.h"
#include "ConstellationSetBuilder.h"
#include "ConstructionEngineer.h"
#include "Constellation.h"

// Sets default values
ABuilder_Main::ABuilder_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilder_Main::BeginPlay()
{
	Super::BeginPlay();
	
	ConstellationSBuilder=GetWorld()->SpawnActor<AConstellationSetBuilder>(AConstellationSetBuilder::StaticClass());
	Engineer = GetWorld()->SpawnActor<AConstructionEngineer>(AConstructionEngineer::StaticClass());

	//Set the Builder for the Mechanic and create the buildings
	Engineer->SetConstellationBuilder(ConstellationSBuilder);
	Engineer->ConstructConstellation();

	//Get the Mechanic's Torretas and Logs the creates buildings
	AConstellation* Constellation = Engineer->GetConstellation();
	Constellation->ConstellationCharacteristics();

}

// Called every frame
void ABuilder_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

