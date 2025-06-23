// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomerMan_ExamenGameMode.h"
#include "BomerMan_ExamenCharacter.h"
#include "FachadaJuego.h"
#include "InterFachadaJuego.h"
#include "BombaHielo.h"
#include "BombaFuego.h"
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


	//CrearEjercitoBuilder();
	//CrearLaberintoBuilder();
	//CrearClon();FVector(-450.0f, -840.0f, 140.0f)

	AActor* FachadaActor = GetWorld()->SpawnActor<AFachadaJuego>();
	IInterFachadaJuego* Fachada = Cast<IInterFachadaJuego>(FachadaActor);

	if (Fachada)
	{
		Fachada->ConstruirLaberinto(GetWorld());
		Fachada->ConstruirEjercito(GetWorld());
		//Fachada->ClonarEnemigo(GetWorld(), FVector(-450, -840, 140));
		//Fachada->GenerarBombas(GetWorld());
	}
}