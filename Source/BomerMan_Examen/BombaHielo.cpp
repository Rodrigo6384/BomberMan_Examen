// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaHielo.h"
#include "ComandoExplosionEnCruz.h"   

ABombaHielo::ABombaHielo()
{
    // Cargar el material
    static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
    if (ObjetoMaterial.Succeeded())
    {
        MallaBomba->SetMaterial(0, ObjetoMaterial.Object);
    }
}

void ABombaHielo::Detonar()
{
    GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Yellow, TEXT("�La bomba de Hielo explotar� en 4 segundos!"));

    // Aqu� puedes agregar la l�gica de detonaci�n, como infligir da�o a los enemigos cercanos o destruir la bomba.
        // Configurar el temporizador para detonar despu�s de 4 segundos
    GetWorld()->GetTimerManager().SetTimer(TimerHandle_Detonacion, this, &ABombaBase::EjecutarDetonacion, 4.0f, false);
}

void ABombaHielo::BeginPlay()
{
    Super::BeginPlay();

    SetComandoExplosion(ComandoExplosion);
}
