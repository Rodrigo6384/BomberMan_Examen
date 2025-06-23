// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterMovimiento.h"
#include "MovimientoPerseguir.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API AMovimientoPerseguir : public AActor, public IInterMovimiento{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovimientoPerseguir();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void Mover(class AEnemigoBase* Enemigo) override;
private:
	float Direccion ; // 1 para derecha, -1 para izquierda
	float Velocidad ; // Un paso por tick
};
