// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterBomba.h"
#include "BombaComposite.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API ABombaComposite : public AActor, public IInterBomba{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABombaComposite();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void AgregarBomba(IInterBomba* Bomba);
	void Detonar() override;

private:
	TArray<IInterBomba*> Bombas;
};
