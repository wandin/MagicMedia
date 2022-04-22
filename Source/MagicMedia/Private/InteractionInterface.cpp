// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionInterface.h"
#include "Lever.h"

#include "Net/UnrealNetwork.h"

// Add default functionality here for any IInteractionInterface functions that are not pure virtual.

void IInteractionInterface::InteractWithMe_Implementation()
{
}

bool IInteractionInterface::InteractWithMe_Validate()
{
	return true;
}


void IInteractionInterface::OnRep_InteractWithMe_Implementation()
{

}

bool IInteractionInterface::OnRep_InteractWithMe_Validate()
{
	return true;
}

void IInteractionInterface::ShowInteractionWidget()
{
}

void IInteractionInterface::HideInteractionWidget()
{
}