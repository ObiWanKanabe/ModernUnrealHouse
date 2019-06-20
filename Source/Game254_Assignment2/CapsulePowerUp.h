// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PowerUp.h"
#include "CapsulePowerUp.generated.h"

/**
 * 
 */
UCLASS()
class GAME254_ASSIGNMENT2_API ACapsulePowerUp : public APowerUp
{
	GENERATED_BODY()
public:

		// Sets default values for this actor's properties
		ACapsulePowerUp();

		// Called every frame
		virtual void Tick(float DeltaSeconds) override;
	
};
