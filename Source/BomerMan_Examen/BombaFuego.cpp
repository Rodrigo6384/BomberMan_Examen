// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaFuego.h"

ABombaFuego::ABombaFuego()
{
    // Cargar el material
    static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
    if (ObjetoMaterial.Succeeded())
    {
        MallaBomba->SetMaterial(0, ObjetoMaterial.Object);
    }
}

void ABombaFuego::Detonar()
{
	GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Red, TEXT("¡La bomba de Fuego explotará en 4 segundos!"));
	// Aquí puedes agregar la lógica de detonación, como infligir daño a los enemigos cercanos o destruir la bomba.
	// Configurar el temporizador para detonar después de 4 segundos
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Detonacion, this, &ABombaBase::EjecutarDetonacion, 4.0f, false);
}
