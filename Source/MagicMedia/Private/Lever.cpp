// Fill out your copyright notice in the Description page of Project Settings.


#include "Lever.h"

#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ALever::ALever()
{
	_RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	RootComponent = _RootComponent;

	LeverMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lever Mesh"));
	LeverMesh->SetupAttachment(RootComponent);

	LightBulb = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	LightBulb->SetupAttachment(RootComponent);

	InteractionWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget Component"));
	InteractionWidget->SetupAttachment(RootComponent);
				/*---------------------------------------------------------*/

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
	if (HasNetOwner())
	{
		OnRep_InteractWithMe();
	}
}

void ALever::OnRep_InteractWithMe()
{
	if (Door == nullptr) return;

	if (!bIsOpen)
	{
		LightBulb->SetIntensity(10000);
		Door->OnRep_ToggleDoor();
		bIsOpen = true;
		UE_LOG(LogTemp, Warning, TEXT("The door is %d"), bIsOpen);
	}
	else
	{
		LightBulb->SetIntensity(0);
		Door->OnRep_ToggleDoor();
		bIsOpen = false;
		UE_LOG(LogTemp, Warning, TEXT("The door is %d"), bIsOpen);
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

void ALever::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME(ALever, bIsOpen);
	DOREPLIFETIME(ALever, Door);
	DOREPLIFETIME(ALever, LightBulb);
}