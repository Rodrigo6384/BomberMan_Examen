// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoBasicoBuilder.h"
#include "Fabrica_Muros.h"


// Sets default values
ALaberintoBasicoBuilder::ALaberintoBasicoBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALaberintoBasicoBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaberintoBasicoBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberintoBasicoBuilder::Reset()
{
	Matriz.Empty();
}

void ALaberintoBasicoBuilder::GenerarMatriz()
{
	Matriz = {
	{1, 0, 2},
	{2, 3, 1},
	{0, 1, 3}
	};
}

void ALaberintoBasicoBuilder::ConstruirMuros(UWorld* World, AFabrica_Muros* Fabrica)
{
    const float Espaciado = 100.f;
    FVector Origen = FVector(-2350.f, -1950.f, 130.f);

    for (int i = 0; i < Matriz.Num(); ++i)
    {
        for (int j = 0; j < Matriz[i].Num(); ++j)
        {
            int Tipo = Matriz[i][j];
            FString NombreMuro;

            switch (Tipo)
            {
            case 1: NombreMuro = TEXT("Muro_Madera"); break;
            case 2: NombreMuro = TEXT("Muro_Concreto"); break;
            case 3: NombreMuro = TEXT("Muro_Hierro"); break;
            default: continue;
            }

            FVector Pos = Origen + FVector(i * Espaciado, j * Espaciado, 0.f);
            Fabrica->CreateMuros(NombreMuro, Pos);
        }
    }

    Fabrica->EjecutarComportamientoMuros();
}

