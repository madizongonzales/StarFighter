// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Decorator.h"
#include "MeleeEnemy.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTER_API AMeleeEnemy : public ADecorator
{
	GENERATED_BODY()
public:
	virtual void Fight() override;
	virtual int GetDamage() override;
	virtual void Die() override;
	
};
