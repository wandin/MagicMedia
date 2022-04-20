// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Lever.h"
#include "Door.generated.h"

UCLASS()
class MAGICMEDIA_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Door;

	UPROPERTY(EditAnywhere)
	float OpenedYaw = 90.0f;
	float ClosedYaw = -90.0f;

public:	

	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OpenDoor();

	virtual void CloseDoor();

};
