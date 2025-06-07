// Fill out your copyright notice in the Description page of Project Settings.


#include "FachadaJuego.h"
#include "Fabrica_Muros.h"
#include "LaberintoBasicoBuilder.h"
#include "LaberintoDirector.h"
#include "EjercitoBuilder.h"
#include "EjercitoDirector.h"
#include "EnemigoCentauro.h"
#include "EnemigoOrco.h"
#include "InterPrototypeEnemigo.h"


// Sets default values
AFachadaJuego::AFachadaJuego()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFachadaJuego::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFachadaJuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFachadaJuego::ConstruirLaberinto(UWorld* World)
{
    // Construye laberinto
    AFabrica_Muros* MuroFactory = World->SpawnActor<AFabrica_Muros>();
    ALaberintoBasicoBuilder* Builder = World->SpawnActor<ALaberintoBasicoBuilder>();
    ALaberintoDirector* Director = World->SpawnActor<ALaberintoDirector>();
    Director->SetBuilder(Builder);
    Director->ConstruirLaberinto(World, MuroFactory);
}

void AFachadaJuego::ConstruirEjercito(UWorld* World)
{
    // Construye ejército
    AEjercitoBuilder* BuilderEjercito = World->SpawnActor<AEjercitoBuilder>();
    AEjercitoDirector* DirectorEjercito = World->SpawnActor<AEjercitoDirector>();
    DirectorEjercito->SetBuilder(BuilderEjercito);
    DirectorEjercito->ConstruirEjercitoCompleto(World);
}

void AFachadaJuego::ClonarEnemigo(UWorld* World, FVector Pos)
{
    // Crear el prototipo (usamos cualquier clase que implemente la interfaz)
    AEnemigoCentauro* PrototipoActor = World->SpawnActor<AEnemigoCentauro>();

    // Usar la interfaz en lugar de clase directa
    IInterPrototypeEnemigo* Prototipo = Cast<IInterPrototypeEnemigo>(PrototipoActor);
    if (Prototipo)
    {
        // Clonar el prototipo
        AActor* ClonActor = Prototipo->Clonar(Pos);

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

