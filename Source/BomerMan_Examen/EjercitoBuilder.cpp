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
		Comandante = GetWorld()->SpawnActor<AComandante>(AComandante::StaticClass(), ComandanteLocation, FRotator::ZeroRotator);
		if (Comandante) {
			GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Blue, TEXT("Comandante creado exitosamente!"));
		}
	}
}
void AEjercitoBuilder::AgregarEnemigoOrco(int Cantidad)
{

	//Enemigos.Add(GetWorld()->SpawnActor<AEnemigoOrco>(AEnemigoOrco::StaticClass(),EnemigoOrcoLocation,FRotator::ZeroRotator));
	//GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, TEXT("Enemigo Orco agregado al ejercito!"));
	for (int i = 0; i < Cantidad; ++i) {
		FVector SpawnLocationOrco = EnemigoOrcoLocation + FVector(i * -200.0f, 0.0f, 0.0f);
		AEnemigoOrco* EnemigoOrco = GetWorld()->SpawnActor<AEnemigoOrco>(AEnemigoOrco::StaticClass(), SpawnLocationOrco, FRotator::ZeroRotator);
		if (EnemigoOrco) {
			Enemigos.Add(EnemigoOrco);
			GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, *FString::Printf(TEXT("Enemigo orco %d agregado al ejercito!"), i + 1));
		}
	}
}
void AEjercitoBuilder::AgregarEnemigoCentauro(int Cantidad)
{

	//Enemigos.Add(GetWorld()->SpawnActor<AEnemigoCentauro>(AEnemigoCentauro::StaticClass(), EnemigoCentauroLocation, FRotator::ZeroRotator));
	//GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Black, TEXT("Enemigo Centauro agregado al ejercito!"));
	for (int i = 0; i < Cantidad; ++i) {
		FVector SpawnLocationCentauro = EnemigoCentauroLocation + FVector(i * 200.0f, 0.0f, 0.0f);
		AEnemigoCentauro* Enemigo = GetWorld()->SpawnActor<AEnemigoCentauro>(AEnemigoCentauro::StaticClass(), SpawnLocationCentauro, FRotator::ZeroRotator);
		if (Enemigo) {
			Enemigos.Add(Enemigo);
			GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Black, *FString::Printf(TEXT("Enemigo Centauro %d agregado al ejercito!"), i + 1));
		}
	}
}
void AEjercitoBuilder::ConstruirEjercito()
{
	if (Comandante) {
		Comandante->DarOrdenes();
		Comandante->Estrategia();
	}
	for (IInterEnemigo* Enemigo : Enemigos) {
		Enemigo->Atacar();
		//Enemigo->Defender();
	}
}

void AEjercitoBuilder::SetComandanteLocation(FVector NewLocation)
{
	ComandanteLocation = NewLocation; // CORRECTO: asignar el nuevo valor al miembro
}
void AEjercitoBuilder::SetEnemigoOrcoLocation(FVector NewLocation)
{
	EnemigoOrcoLocation = NewLocation; // CORREGIDO
}
void AEjercitoBuilder::SetEnemigoCentauroLocation(FVector NewLocation)
{
	EnemigoCentauroLocation = NewLocation; // CORREGIDO
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

