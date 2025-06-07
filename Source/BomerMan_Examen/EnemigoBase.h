// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InterEnemigo.h"
#include "InterPrototypeEnemigo.h"
#include "GameFramework/Actor.h"
#include "EnemigoBase.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API AEnemigoBase : public AActor, public IInterEnemigo, public IInterPrototypeEnemigo {
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigoBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UStaticMeshComponent* MallaEnemigoBase;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Atacar();
	void Defender();

	AActor* Clonar(FVector Posicion) override;

};
