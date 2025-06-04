// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoCentauro.h"

AEnemigoCentauro::AEnemigoCentauro()
{

    static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));
    if (ObjetoMaterial.Succeeded())
    {
        MallaEnemigoBase->SetMaterial(0, ObjetoMaterial.Object);
    }
}

void AEnemigoCentauro::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Black, FString::Printf(TEXT("El centauro ataca con lanzas ")));
}
void AEnemigoCentauro::Defender()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Black, FString::Printf(TEXT("El centauro defiende con escudo ")));
}
