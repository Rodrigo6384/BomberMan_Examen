// Fill out your copyright notice in the Description page of Project Settings.


#include "ComandoExplosionEnCadena.h"
#include "BombaBase.h"

// Sets default values
AComandoExplosionEnCadena::AComandoExplosionEnCadena()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AComandoExplosionEnCadena::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComandoExplosionEnCadena::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AComandoExplosionEnCadena::EjecutarExplosion(ABombaBase* Bomba)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Explosión en CRUZ!"));
	// Aquí va tu lógica de explosión en cruz
}

