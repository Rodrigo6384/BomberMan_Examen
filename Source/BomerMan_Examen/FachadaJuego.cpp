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
#include "BombaHielo.h"
#include "BombaFuego.h"
#include "BombaComposite.h"
#include "InterBomba.h"
#include "Kismet/GameplayStatics.h"
#include "EnemigoBase.h"
#include "MovimientoPerseguir.h"
#include "MovimientoAleatorio.h"


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
    // Asignar estrategias
    TArray<AActor*> Enemigos;
    UGameplayStatics::GetAllActorsOfClass(World, AEnemigoBase::StaticClass(), Enemigos);

    for (AActor* Actor : Enemigos)
    {
        AEnemigoBase* Enemigo = Cast<AEnemigoBase>(Actor);
        if (Enemigo)
        {
            AActor* Estrategia = nullptr;

            // Ejemplo: según el tipo, asigna una estrategia
            if (Enemigo->IsA(AEnemigoCentauro::StaticClass()))
            {
                Estrategia = World->SpawnActor<AMovimientoPerseguir>();
            }
            else if (Enemigo->IsA(AEnemigoOrco::StaticClass()))
            {
                Estrategia = World->SpawnActor<AMovimientoAleatorio>();
            }

            if (Estrategia)
            {
                Enemigo->SetMovimiento(Estrategia);
            }
        }
    }
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

void AFachadaJuego::GenerarBombas(UWorld* World)
{
    // Crear bombas simples
    ABombaHielo* Bomba1 = World->SpawnActor<ABombaHielo>(FVector(-2330.0f, -1400.0f, 200.0f), FRotator::ZeroRotator);
    ABombaFuego* Bomba2 = World->SpawnActor<ABombaFuego>(FVector(-2330.0f, -1000.0f, 200.0f), FRotator::ZeroRotator);

    // Crear bomba compuesta
    ABombaComposite* BombaMaestra = GetWorld()->SpawnActor<ABombaComposite>();

    BombaMaestra->AgregarBomba(Cast<IInterBomba>(Bomba1));
    BombaMaestra->AgregarBomba(Cast<IInterBomba>(Bomba2));
    if (BombaMaestra)
    {
        BombaMaestra->Detonar(); // Detona todo
    }
}
