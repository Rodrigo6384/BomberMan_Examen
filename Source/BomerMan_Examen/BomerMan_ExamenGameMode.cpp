// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomerMan_ExamenGameMode.h"
#include "BomerMan_ExamenCharacter.h"
#include "EjercitoBuilder.h"
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
	AEjercitoBuilder* Builder = NewObject<AEjercitoBuilder>();
	Builder->SetComandanteLocation(FVector(-399.0f, 0.0f, 131.0f)); // Ubicación del comandante
	Builder->SetEnemigoOrcoLocation(FVector(-299.0f, 0.0f, 131.0f)); // Ubicación del enemigo cuerpo a cuerpo
	Builder->SetEnemigoCentauroLocation(FVector(-199.0f, 0.0f, 131.0f)); // Ubicación del enemigo a distancia
	Builder->CrearComandante();
	Builder->AgregarEnemigoOrco();
	Builder->AgregarEnemigoCentauro();
	Builder->ConstruirEjercito();
	AComandante* Comandante = Builder->ObtenerComandante();
	TArray<IInterEnemigo*> Enemigos = Builder->ObtenerEnemigos();
}
