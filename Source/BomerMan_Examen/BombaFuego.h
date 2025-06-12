// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BombaBase.h"
#include "BombaFuego.generated.h"

/**
 * 
 */
UCLASS()
class BOMERMAN_EXAMEN_API ABombaFuego : public ABombaBase
{
	GENERATED_BODY()
public:
	ABombaFuego();
protected:
	void Detonar();
	
};
