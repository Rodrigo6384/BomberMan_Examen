// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoBase.h"
#include "EnemigoCentauro.generated.h"

/**
 * 
 */
UCLASS()
class BOMERMAN_EXAMEN_API AEnemigoCentauro : public AEnemigoBase
{
	GENERATED_BODY()
public:
	AEnemigoCentauro();
public:
	void Atacar() override;
	void Defender() override;
};
