// Fill out your copyright notice in the Description page of Project Settings.


#include "ComandoExplosionEnCruz.h"
#include "BombaBase.h"

// Sets default values
AComandoExplosionEnCruz::AComandoExplosionEnCruz()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AComandoExplosionEnCruz::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComandoExplosionEnCruz::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AComandoExplosionEnCruz::EjecutarExplosion(ABombaBase* Bomba)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Explosi�n en CADENA!"));
	// Aqu� va tu l�gica de explosi�n en cadena
}

