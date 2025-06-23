// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoPerseguir.h"
#include "EnemigoBase.h"

// Sets default values
AMovimientoPerseguir::AMovimientoPerseguir()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    Direccion = 1.0f; // 1 para derecha, -1 para izquierda
    Velocidad = 30.0f;// Un paso por tick
}

// Called when the game starts or when spawned
void AMovimientoPerseguir::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovimientoPerseguir::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMovimientoPerseguir::Mover(AEnemigoBase* Enemigo)
{
    FVector DireccionMovimiento = FVector(Direccion * Velocidad, 0.f, 0.f);
    FVector PosActual = Enemigo->GetActorLocation();
    FVector PosDestino = PosActual + DireccionMovimiento;
    // Hacer un trace para detectar colisión en la dirección X
    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(Enemigo); // ignorar al propio enemigo
    bool Colision = Enemigo->GetWorld()->LineTraceSingleByChannel(Hit,PosActual,PosDestino,ECC_WorldStatic,Params);
    // Opcional: dibujar el rayo
    //DrawDebugLine(Enemigo->GetWorld(), PosActual, PosDestino, FColor::Red, false, 1.0f, 0, 2.0f);

    if (Colision)
    {
        // Si colisiona, invertir la dirección
        Direccion *= -1;
    }
    else
    {
        // Si no hay colisión, mover al enemigo
        Enemigo->SetActorLocation(PosDestino);
    }
}

