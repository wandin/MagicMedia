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

void ADoor::ToggleDoor_Implementation()
{
	UWorld* const World = GetWorld();
	if (World == NULL) return;

	CurrentRotation = GetActorRotation();
	CurrentRotation.Yaw += DoorYaw;
	SetActorRotation(CurrentRotation);
}

bool ADoor::ToggleDoor_Validate()
{
	return true;
}

void ADoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME(ADoor, DoorYaw);
	DOREPLIFETIME(ADoor, CurrentRotation);
	DOREPLIFETIME(ADoor, Door);
}