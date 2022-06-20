// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SS_MovimientoNaveAereaJugador.h"
#include "SS_Player.h"
#include "SS_PlayerAdapter.generated.h"

class ASS_Player;

UCLASS()
class STARFIGHTER_API ASS_PlayerAdapter : public AActor, public ISS_MovimientoNaveAereaJugador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASS_PlayerAdapter();

private:
	UPROPERTY()
		ASS_Player* Move;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void MoveUp1(float AxisValue) override;
	virtual void MoveRight1(float AxisValue) override;
};
