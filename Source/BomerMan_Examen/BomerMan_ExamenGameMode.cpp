// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomerMan_ExamenGameMode.h"
#include "BomerMan_ExamenCharacter.h"
#include "EjercitoBuilder.h"
#include "EjercitoDirector.h"
#include "EnemigoOrco.h"
#include "EnemigoCentauro.h"
#include "InterMuros.h"
#include "LaberintoBasicoBuilder.h"
#include "LaberintoDirector.h"
#include "UObject/ConstructorHelpers.h"

ABomerMan_ExamenGameMode::ABomerMan_ExamenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomerMan_ExamenGameMode::BeginPlay()
{
	Super::BeginPlay();
    // Spawn del Builder actor en el mundo
    AEjercitoBuilder* BuilderEjercito = GetWorld()->SpawnActor<AEjercitoBuilder>(AEjercitoBuilder::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
    // Spawn del Director actor en el mundo
    AEjercitoDirector* DirectorEjercito = GetWorld()->SpawnActor<AEjercitoDirector>(AEjercitoDirector::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
    // Setear el builder en el director
    DirectorEjercito->SetBuilder(BuilderEjercito);
    // Invocar la construcción del ejército
    DirectorEjercito->ConstruirEjercitoCompleto(GetWorld());


	// Generar el laberinto ----------------------
    MuroFactoryPtr = GetWorld()->SpawnActor<AFabrica_Muros>();
    // Crear builder y director
    ALaberintoBasicoBuilder* Builder = GetWorld()->SpawnActor<ALaberintoBasicoBuilder>();
    ALaberintoDirector* Director = GetWorld()->SpawnActor<ALaberintoDirector>();

    Director->SetBuilder(Builder);
    Director->ConstruirLaberinto(GetWorld(), MuroFactoryPtr);
}
