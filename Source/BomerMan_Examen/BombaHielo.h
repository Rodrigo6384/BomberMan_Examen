// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BombaBase.h"
#include "BombaHielo.generated.h"

/**
 * 
 */
UCLASS()
class BOMERMAN_EXAMEN_API ABombaHielo : public ABombaBase
{
	GENERATED_BODY()
public:
	ABombaHielo();
protected:
	void Detonar();
	
};
