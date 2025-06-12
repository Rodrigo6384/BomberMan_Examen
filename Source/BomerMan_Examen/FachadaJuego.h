// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterFachadaJuego.h"
#include "FachadaJuego.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API AFachadaJuego : public AActor, public IInterFachadaJuego{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFachadaJuego();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void ConstruirLaberinto(UWorld* World) override;
	void ConstruirEjercito(UWorld* World) override;
	void ClonarEnemigo(UWorld* World, FVector Posicion) override;
	void GenerarBombas(UWorld* World) override; // <-- Nueva función
};
