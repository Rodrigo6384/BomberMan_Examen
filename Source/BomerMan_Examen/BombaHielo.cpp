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
    GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Yellow, TEXT("¡La bomba de Hielo explotará en 4 segundos!"));

    // Aquí puedes agregar la lógica de detonación, como infligir daño a los enemigos cercanos o destruir la bomba.
        // Configurar el temporizador para detonar después de 4 segundos
    GetWorld()->GetTimerManager().SetTimer(TimerHandle_Detonacion, this, &ABombaBase::EjecutarDetonacion, 4.0f, false);
}

void ABombaHielo::BeginPlay()
{
    Super::BeginPlay();

    SetComandoExplosion(ComandoExplosion);
}
