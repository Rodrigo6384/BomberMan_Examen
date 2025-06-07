// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InterFachadaJuego.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInterFachadaJuego : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMERMAN_EXAMEN_API IInterFachadaJuego
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void ConstruirLaberinto(UWorld* World) = 0;
	virtual void ConstruirEjercito(UWorld* World) = 0;
	virtual void ClonarEnemigo(UWorld* World, FVector Posicion) = 0;
};
