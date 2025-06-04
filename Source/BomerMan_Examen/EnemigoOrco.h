// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoBase.h"
#include "EnemigoOrco.generated.h"

/**
 * 
 */
UCLASS()
class BOMERMAN_EXAMEN_API AEnemigoOrco : public AEnemigoBase
{
	GENERATED_BODY()
public:
	AEnemigoOrco();
public:
	void Atacar() override;
	void Defender() override;
};
