// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EjercitoBuilder.h"
#include "GameFramework/Actor.h"
#include "EjercitoDirector.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API AEjercitoDirector : public AActor{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEjercitoDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	AEjercitoBuilder* Builder;
public:
	// Asignar el builder que usará el director
	void SetBuilder(AEjercitoBuilder* NewBuilder);
	// Método para construir todo el ejército
	void ConstruirEjercitoCompleto(UWorld* World);

};
