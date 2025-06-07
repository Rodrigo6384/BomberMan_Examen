// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InterLaberintoBuilder.h"
#include "GameFramework/Actor.h"
#include "LaberintoDirector.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API ALaberintoDirector : public AActor{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberintoDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void SetBuilder(IInterLaberintoBuilder* NuevoBuilder);
	void ConstruirLaberinto(UWorld* World, class AFabrica_Muros* Fabrica);
	IInterLaberintoBuilder* Builder;

};
