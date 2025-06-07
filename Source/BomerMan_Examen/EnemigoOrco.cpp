// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoOrco.h"

AEnemigoOrco::AEnemigoOrco()
{
    // Cargar el material
    static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust'"));
    if (ObjetoMaterial.Succeeded())
    {
        MallaEnemigoBase->SetMaterial(0, ObjetoMaterial.Object);
    }
}

void AEnemigoOrco::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Green, TEXT("El orco ataca con su hacha!"));
}
void AEnemigoOrco::Defender()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Green, TEXT("El orco se defiende con su escudo!"));
}
AActor* AEnemigoOrco::Clonar(FVector Posicion)
{
    return GetWorld()->SpawnActor<AEnemigoOrco>(GetClass(), Posicion, FRotator::ZeroRotator);
}
