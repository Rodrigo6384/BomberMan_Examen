// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InterBomba.h"
#include "InterComandoExplosion.h"
#include "GameFramework/Actor.h"
#include "BombaBase.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API ABombaBase : public AActor, public IInterBomba{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABombaBase();
	UStaticMeshComponent* MallaBomba;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FTimerHandle TimerHandle_Detonacion;
	void Detonar();
	void EjecutarDetonacion();
	// Seteo del comando
	void SetComandoExplosion(IInterComandoExplosion* NuevoComando);
protected:
	IInterComandoExplosion* ComandoExplosion;
};
