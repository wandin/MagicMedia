// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "InteractionInterface.h"
#include "Door.h"
#include "Components/PointLightComponent.h"
#include "Components/WidgetComponent.h"

#include "Kismet/GameplayStatics.h"

#include "Lever.generated.h"

class IInteractionInterface;
class ADoor;

UCLASS()
class MAGICMEDIA_API ALever : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALever();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void InteractWithMe() override;
	UFUNCTION()
	virtual void OnRep_InteractWithMe() override;


	virtual void ShowInteractionWidget() override;
	virtual void HideInteractionWidget() override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	UPROPERTY(EditInstanceOnly, ReplicatedUsing = OnRep_InteractWithMe)
	ADoor* Door;

public:
	UPROPERTY(ReplicatedUsing = OnRep_InteractWithMe)
	bool bIsOpen;

	UPROPERTY(EditAnywhere)
	class USceneComponent* _RootComponent;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* LeverMesh;

	UPROPERTY(EditAnywhere, ReplicatedUsing = OnRep_InteractWithMe)
	class UPointLightComponent* LightBulb;

	UPROPERTY(EditAnywhere)
	class UWidgetComponent* InteractionWidget;

};