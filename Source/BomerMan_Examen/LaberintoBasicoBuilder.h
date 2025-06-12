// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InterLaberintoBuilder.h"
#include "GameFramework/Actor.h"
#include "LaberintoBasicoBuilder.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API ALaberintoBasicoBuilder : public AActor, public IInterLaberintoBuilder{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberintoBasicoBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void Reset() override;
	//virtual void GenerarMatriz() override;
	//virtual void ConstruirMuros(UWorld* World, class AFabrica_Muros* Fabrica) override;
	void GenerarZonaSuperior(UWorld* World, class AFabrica_Muros* Fabrica) override;
	void GenerarZonaCentral(UWorld* World, class AFabrica_Muros* Fabrica) override;
	void GenerarZonaInferior(UWorld* World, class AFabrica_Muros* Fabrica) override;
	//TArray<TArray<int32>> Matriz;
	TArray<TArray<int32>> ZonaSuperior;
	TArray<TArray<int32>> ZonaCentral;
	TArray<TArray<int32>> ZonaInferior;

};
