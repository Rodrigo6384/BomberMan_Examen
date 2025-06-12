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
	GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Red, TEXT("�La bomba de Fuego explotar� en 4 segundos!"));
	// Aqu� puedes agregar la l�gica de detonaci�n, como infligir da�o a los enemigos cercanos o destruir la bomba.
	// Configurar el temporizador para detonar despu�s de 4 segundos
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Detonacion, this, &ABombaBase::EjecutarDetonacion, 4.0f, false);
}
