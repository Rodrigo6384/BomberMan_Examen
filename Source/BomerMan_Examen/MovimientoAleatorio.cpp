// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoAleatorio.h"
#include "EnemigoBase.h"
#include "BomerMan_ExamenCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMovimientoAleatorio::AMovimientoAleatorio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovimientoAleatorio::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovimientoAleatorio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMovimientoAleatorio::Mover(AEnemigoBase* Enemigo)
{
    ABomerMan_ExamenCharacter* Jugador = Cast<ABomerMan_ExamenCharacter>(UGameplayStatics::GetPlayerCharacter(Enemigo->GetWorld(), 0));

    if (Jugador)
    {
        FVector Direccion = Jugador->GetActorLocation() - Enemigo->GetActorLocation();

        // Elimina cualquier componente en Z para mantener el movimiento en X e Y
        Direccion.Z = 0.0f;

        float Distancia = Direccion.Size();

        if (Distancia > 100.0f) // evita sobreposiciones
        {
            FVector DireccionNormalizada = Direccion.GetSafeNormal();
            float Velocidad = 400.0f; // controlable, modificable
            Enemigo->AddActorWorldOffset(DireccionNormalizada * Velocidad * GetWorld()->GetDeltaSeconds(), true);
        }
    }
}

