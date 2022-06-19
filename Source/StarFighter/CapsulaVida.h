// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaVida.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API ACapsulaVida : public ACapsula
{
	GENERATED_BODY()

public:
	ACapsulaVida();

protected:
	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* CapsulaMeshComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Generar() override;
	
};
