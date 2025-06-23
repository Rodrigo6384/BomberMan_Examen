// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterComandoExplosion.h"
#include "ComandoExplosionEnCruz.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API AComandoExplosionEnCruz : public AActor, public IInterComandoExplosion{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AComandoExplosionEnCruz();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void EjecutarExplosion(ABombaBase* Bomba)override;

};
