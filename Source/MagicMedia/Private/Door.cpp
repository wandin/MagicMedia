// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

#include "Net/UnrealNetwork.h"

// Sets default values
ADoor::ADoor()
{
	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	// set door as the root
	Door->SetupAttachment(RootComponent);

	bReplicates = true;

	
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor::OpenDoor()
{
	FRotator CurrentRotation = GetActorRotation();
	CurrentRotation.Yaw += OpenedYaw;
	SetActorRotation(CurrentRotation);
}

void ADoor::CloseDoor()
{
	FRotator CurrentRotation = GetActorRotation();
	CurrentRotation.Yaw += ClosedYaw;
	SetActorRotation(CurrentRotation);
}