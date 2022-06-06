// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveTerrestre.h"
#include "ProyectilBala.h"
#include "NaveTerrestreEnemiga01.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API ANaveTerrestreEnemiga01 : public ANaveTerrestre
{
	GENERATED_BODY()

public:
	ANaveTerrestreEnemiga01();
    
    virtual void Tick(float DeltaTime) override;
    //ProyectilBala

    void FireBala();

    //void FireShotBala();
    /* Handler for the fire timer expiry */
    void ShotTimerExpired();

    /** Offset from the ships location to spawn projectiles */
    UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
        FVector GunOffset;

    /* How fast the weapon will fire */
    UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
        float FireRate;

    const FVector FireDirection = FVector(-90.f, 0.f, 0.0f).GetClampedToMaxSize(1.0f);
    const FRotator FireRotation = FireDirection.Rotation();

    UPROPERTY(EditAnywhere)
        FVector Current_Velocity;

    FVector Current_Location;
    FRotator Current_Rotation;

    float RandomStart;

    float TotalTime;
 
    float TimeSinceLastShot;


protected:
    virtual void BeginPlay() override;

private:

    /* Flag to control firing  */
    uint32 bCanFire : 1;

    /** Handle for efficient management of ShotTimerExpired timer */
    FTimerHandle TimerHandle_ShotTimerExpired;


    float FireForwardValue;
    float FireRightValue;

};