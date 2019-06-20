// Fill out your copyright notice in the Description page of Project Settings.

#include "Game254_Assignment2.h"
#include "CapsulePowerUp.h"

// Capsule Constructor
ACapsulePowerUp::ACapsulePowerUp() :Super()
{
	Volume = CreateAbstractDefaultSubobject<UCapsuleComponent>(TEXT("Volume"));
	Volume->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	Volume->OnComponentBeginOverlap.AddDynamic(this, &APowerUp::onPlayerEnterPowerUpBox);
	Volume->AttachToComponent(Root, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	rotationRate = 180.f;
}

// Called every frame
void ACapsulePowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator MyRot = GetActorRotation();

	MyRot.Pitch += rotationAxis.Pitch*rotationRate * DeltaTime;
	MyRot.Roll += rotationAxis.Roll*rotationRate * DeltaTime;
	MyRot.Yaw += rotationAxis.Yaw*rotationRate * DeltaTime;

	SetActorRotation(MyRot);

}

