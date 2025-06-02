// Fill out your copyright notice in the Description page of Project Settings.


#include "EjercitoBuilder.h"
#include "EnemigoOrco.h"
#include "EnemigoCentauro.h"

// Sets default values
AEjercitoBuilder::AEjercitoBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Comandante = nullptr;
}

void AEjercitoBuilder::CrearComandante()
{
	// Spawnear el comandante
	if (Comandante == nullptr) {
		Comandante = NewObject<AComandante>();
		//Comandante = GetWorld()->SpawnActor<AComandante>(AComandante::StaticClass(), ComandanteLocation, FRotator::ZeroRotator);
		if (Comandante) {
			GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Blue, TEXT("Comandante creado exitosamente!"));
		}
	}
}
void AEjercitoBuilder::AgregarEnemigoOrco()
{
	Enemigos.Add(NewObject<AEnemigoOrco>());
	//Enemigos.Add(GetWorld()->SpawnActor<AEnemigoOrco>(AEnemigoOrco::StaticClass(),EnemigoOrcoLocation,FRotator::ZeroRotator));
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, TEXT("Enemigo Orco agregado al ejercito!"));
}
void AEjercitoBuilder::AgregarEnemigoCentauro()
{
	Enemigos.Add(NewObject<AEnemigoCentauro>());
	//Enemigos.Add(GetWorld()->SpawnActor<AEnemigoCentauro>(AEnemigoCentauro::StaticClass(), EnemigoCentauroLocation, FRotator::ZeroRotator));
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Black, TEXT("Enemigo Centauro agregado al ejercito!"));
}
void AEjercitoBuilder::ConstruirEjercito()
{
	if (Comandante) {
		Comandante->DarOrdenes();
		Comandante->Estrategia();
	}
	for (IInterEnemigo* Enemigo : Enemigos) {
		Enemigo->Atacar();
	}
}

// Called when the game starts or when spawned
void AEjercitoBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEjercitoBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

