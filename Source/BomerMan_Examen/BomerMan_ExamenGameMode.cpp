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
#include "InterPrototypeEnemigo.h"
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
	CrearClon();

}

void ABomerMan_ExamenGameMode::CrearEjercitoBuilder()
{
    // Spawn del Builder actor en el mundo
    AEjercitoBuilder* BuilderEjercito = GetWorld()->SpawnActor<AEjercitoBuilder>(AEjercitoBuilder::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
    // Spawn del Director actor en el mundo
    AEjercitoDirector* DirectorEjercito = GetWorld()->SpawnActor<AEjercitoDirector>(AEjercitoDirector::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
    // Setear el builder en el director
    DirectorEjercito->SetBuilder(BuilderEjercito);
    // Invocar la construcción del ejército
    DirectorEjercito->ConstruirEjercitoCompleto(GetWorld());
}

void ABomerMan_ExamenGameMode::CrearLaberintoBuilder()
{
    // Generar el laberinto ----------------------
    MuroFactoryPtr = GetWorld()->SpawnActor<AFabrica_Muros>();
    // Crear builder y director
    ALaberintoBasicoBuilder* Builder = GetWorld()->SpawnActor<ALaberintoBasicoBuilder>();
    ALaberintoDirector* Director = GetWorld()->SpawnActor<ALaberintoDirector>();

    Director->SetBuilder(Builder);
    Director->ConstruirLaberinto(GetWorld(), MuroFactoryPtr);
}

void ABomerMan_ExamenGameMode::CrearClon()
{
    // Crear el prototipo (usamos cualquier clase que implemente la interfaz)
    AEnemigoCentauro* PrototipoActor = GetWorld()->SpawnActor<AEnemigoCentauro>();

    // Usar la interfaz en lugar de clase directa
    IInterPrototypeEnemigo* Prototipo = Cast<IInterPrototypeEnemigo>(PrototipoActor);
    if (Prototipo)
    {
        // Clonar el prototipo
        AActor* ClonActor = Prototipo->Clonar(FVector(-450.0f, -840.0f, 140.0f));

        // Lógica extra si necesitas acceder a funciones específicas del clon (opcional)
        if (ClonActor)
        {
            // Por ejemplo, si el clon también implementa una interfaz de comportamiento (como atacar o defender):
            AEnemigoCentauro* CentauroClon = Cast<AEnemigoCentauro>(ClonActor);
            if (CentauroClon)
            {
                CentauroClon->Defender();
            }
        }
    }
}
