// Fill out your copyright notice in the Description page of Project Settings.


#include "Lever.h"

#include "Net/UnrealNetwork.h"

// Sets default values
ALever::ALever()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	_RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	RootComponent = _RootComponent;

	LeverMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lever Mesh"));
	LeverMesh->SetupAttachment(RootComponent);

	LightBulb = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	LightBulb->SetupAttachment(RootComponent);


	InteractionWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget Component"));
	InteractionWidget->SetupAttachment(RootComponent);

	bIsOpen = false;

	bReplicates = true;
	
}

// Called when the game starts or when spawned
void ALever::BeginPlay()
{
	Super::BeginPlay();

	LightBulb->SetIntensity(0);
	InteractionWidget->SetVisibility(false);

}

// Called every frame
void ALever::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALever::InteractWithMe()
{
	if (Door == nullptr) return;

	if (!bIsOpen)
	{
		LightBulb->SetIntensity(10000);
		bIsOpen = true;
		UE_LOG(LogTemp, Warning, TEXT("You Opened the door!"));
		
		Door->OpenDoor();
	}
	else
	{
		LightBulb->SetIntensity(0);
		bIsOpen = false;
		UE_LOG(LogTemp, Warning, TEXT("You Closed the door!"));
		Door->CloseDoor();
	}
}

void ALever::ShowInteractionWidget()
{
	InteractionWidget->SetVisibility(true);
}

void ALever::HideInteractionWidget()
{
	InteractionWidget->SetVisibility(false);
}