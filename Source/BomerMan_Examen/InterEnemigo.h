// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InterEnemigo.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterEnemigo : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMERMAN_EXAMEN_API IInterEnemigo
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Atacar() = 0;
	virtual void Defender() = 0;
};
