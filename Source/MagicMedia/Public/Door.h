// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Door.generated.h"

UCLASS()
class MAGICMEDIA_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_ToggleDoor)
	UStaticMeshComponent* Door;

	UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_ToggleDoor)
	float DoorYaw = 90.0f;

	UPROPERTY(ReplicatedUsing = OnRep_ToggleDoor)
	FRotator CurrentRotation;

public:	

	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	UFUNCTION()
	void ToggleDoor();

	UFUNCTION()
	void OnRep_ToggleDoor();
};
