// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Comandante.h" // Para usar la clase Comandante
#include "InterEnemigo.h" // Para usar la interfaz de enemigos
#include "GameFramework/Actor.h"
#include "EjercitoBuilder.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API AEjercitoBuilder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEjercitoBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	AComandante* Comandante; // Puntero al comandante
	TArray<IInterEnemigo*> Enemigos; // Array de enemigos
	FVector ComandanteLocation; // Ubicación del comandante
	FVector EnemigoOrcoLocation; // Ubicación del enemigo cuerpo a cuerpo
	FVector EnemigoCentauroLocation; // Ubicación del enemigo a distancia
public:
	void CrearComandante();//spawn comandante 
	void AgregarEnemigoOrco(/*int Cantidad*/);//spawn ejesito
	void AgregarEnemigoCentauro(/*int Cantidad*/);
	void ConstruirEjercito();//construye el ejercito

	void SetComandanteLocation(FVector NewLocation);
	void SetEnemigoOrcoLocation(FVector NewLocation);
	void SetEnemigoCentauroLocation(FVector NewLocation);

};
