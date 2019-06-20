// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "PowerUp.generated.h"

UCLASS()
class GAME254_ASSIGNMENT2_API APowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category = Powerup)
	USceneComponent* Root;

	// The static mesh for the pickup
	UPROPERTY(EditAnywhere, Category = Powerup)
	UStaticMeshComponent* Mesh;

	// Surround Volume
	UPROPERTY(EditAnywhere, Category = Powerup)
	UShapeComponent* Volume;

	UPROPERTY(EditAnywhere, Category = Powerup)
	float rotationRate;

	UPROPERTY(EditAnywhere, Category = Powerup)
	FRotator rotationAxis;

	UFUNCTION()
	void onPlayerEnterPowerUpBox(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
};
