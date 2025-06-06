// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InterMuros.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterMuros : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMERMAN_EXAMEN_API IInterMuros
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// Interface method to get wall durability
	//virtual float GetDurability() const = 0;

	// Interface method to get wall material name
	virtual FString GetMaterialName() const = 0;
};
