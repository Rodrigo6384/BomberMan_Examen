// Fill out your copyright notice in the Description page of Project Settings.


#include "EjercitoDirector.h"
#include "Comandante.h"
#include "EjercitoBuilder.h"
#include "EnemigoOrco.h"
#include "EnemigoCentauro.h"

// Sets default values


void AEjercitoDirector::SetBuilder(AEjercitoBuilder* NewBuilder)
{
    Builder = NewBuilder;
}

void AEjercitoDirector::ConstruirEjercitoCompleto(UWorld* World)
{
    // Configurar ubicaciones base (puedes modificar según necesidades)
    Builder->SetComandanteLocation(FVector(-399.f, 0.f, 150.f));
    //Builder->SetEnemigoOrcoLocation(FVector(-599.f, 0.f, 150.f));
    //Builder->SetEnemigoCentauroLocation(FVector(-199.f, 0.f, 150.f));
    // Crear el comandante y enemigos
    Builder->CrearComandante();
    //Builder->AgregarEnemigoOrco(2);
    //Builder->AgregarEnemigoCentauro(3);
    Builder->AgregarEnemigoOrco();
    Builder->AgregarEnemigoCentauro();

    // Ejecutar la lógica para que el ejército actúe
    Builder->ConstruirEjercito();
    if (GEngine) {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Ejército construido por el director."));
    }

}

AEjercitoDirector::AEjercitoDirector()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEjercitoDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEjercitoDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

