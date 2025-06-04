// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomerMan_ExamenGameMode.h"
#include "BomerMan_ExamenCharacter.h"
#include "EjercitoBuilder.h"
#include "EjercitoDirector.h"
#include "EnemigoOrco.h"
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
        FVector BuilderLocation(0.0f, 0.0f, 0.0f); // Cambia esto a la ubicación deseada
        AEjercitoBuilder* Builder = GetWorld()->SpawnActor<AEjercitoBuilder>(AEjercitoBuilder::StaticClass(), BuilderLocation, FRotator::ZeroRotator);
        // Spawn del Director actor en el mundo
        FVector DirectorLocation(0.0f, 0.0f, 0.0f); // Cambia esto a la ubicación deseada
        AEjercitoDirector* Director = GetWorld()->SpawnActor<AEjercitoDirector>(AEjercitoDirector::StaticClass(), DirectorLocation, FRotator::ZeroRotator);
        if (Builder && Director)
        {
            // Setear el builder en el director
            Director->SetBuilder(Builder);
            // Invocar la construcción del ejército
            Director->ConstruirEjercitoCompleto(GetWorld());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("No se pudo crear Builder o Director"));
        }
}
