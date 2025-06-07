// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoDirector.h"
#include "InterLaberintoBuilder.h"

// Sets default values
ALaberintoDirector::ALaberintoDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALaberintoDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaberintoDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberintoDirector::SetBuilder(IInterLaberintoBuilder* NuevoBuilder)
{
	Builder = NuevoBuilder;
}

void ALaberintoDirector::ConstruirLaberinto(UWorld* World, AFabrica_Muros* Fabrica)
{
	if (Builder)
	{
		Builder->Reset();
		Builder->GenerarMatriz();
		Builder->ConstruirMuros(World, Fabrica);
	}
}

