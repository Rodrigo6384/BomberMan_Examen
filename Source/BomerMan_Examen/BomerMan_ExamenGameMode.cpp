// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomerMan_ExamenGameMode.h"
#include "BomerMan_ExamenCharacter.h"
#include "EjercitoBuilder.h"
#include "EjercitoDirector.h"
#include "EnemigoOrco.h"
#include "EnemigoCentauro.h"
#include "InterMuros.h"
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
        //// Spawn del Builder actor en el mundo
        //AEjercitoBuilder* Builder = GetWorld()->SpawnActor<AEjercitoBuilder>(AEjercitoBuilder::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
        //// Spawn del Director actor en el mundo
        //AEjercitoDirector* Director = GetWorld()->SpawnActor<AEjercitoDirector>(AEjercitoDirector::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
        //// Setear el builder en el director
        //Director->SetBuilder(Builder);
        //// Invocar la construcción del ejército
        //Director->ConstruirEjercitoCompleto(GetWorld());


        //Fabrica de muros--------------------------
        MuroFactoryPtr = GetWorld()->SpawnActor<AFabrica_Muros>(AFabrica_Muros::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);

        // Ejemplo de laberinto manual:
        Laberinto1 = {
            {1, 0, 2},
            {0, 3, 1},
            {2, 1, 0}
        };

        GenerarLaberinto();
}

void ABomerMan_ExamenGameMode::GenerarLaberinto()
{
    const float Espaciado = 100.f;
    FVector Origen = FVector(-2350.0f, -1950.0f, 130.0f);

    MatrizMuros.SetNum(Laberinto1.Num());

    for (int32 i = 0; i < Laberinto1.Num(); ++i)
    {
        MatrizMuros[i].SetNum(Laberinto1[i].Num());

        for (int32 j = 0; j < Laberinto1[i].Num(); ++j)
        {
            int32 Tipo = Laberinto1[i][j];
            FString NombreMuro;

            switch (Tipo)
            {
            case 1: NombreMuro = TEXT("Muro_Madera"); break;
            case 2: NombreMuro = TEXT("Muro_Concreto"); break;
            case 3: NombreMuro = TEXT("Muro_Hierro"); break;
            default: continue; // No crear muro si es 0
            }

            FVector Posicion = Origen + FVector(i * Espaciado, j * Espaciado, 0.f);
            AMuroBase* Muro = MuroFactoryPtr->CreateMuros(NombreMuro, Posicion);
            MatrizMuros[i][j] = Muro;
            // ? Llamar a la interfaz si el actor implementa InterMuros
                if (Muro)
                {
                    IInterMuros* Interfaz = Cast<IInterMuros>(Muro);
                    if (Interfaz)
                    {
                        FString MaterialName = Interfaz->GetMaterialName();
                        // Mensaje en pantalla con el tipo de muro
                        GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Yellow,FString::Printf(TEXT("Muro generado: %s"), *MaterialName));
                    }
                }
        }
    }
}
