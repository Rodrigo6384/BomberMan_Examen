// Fill out your copyright notice in the Description page of Project Settings.


#include "Fabrica_Muros.h"
#include "MuroHierro.h"
#include "MuroMadera.h"
#include "MuroConcreto.h"
#include "InterMuros.h"

// Sets default values
AFabrica_Muros::AFabrica_Muros()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabrica_Muros::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabrica_Muros::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AMuroBase* AFabrica_Muros::CreateMuros(const FString& BlockName, FVector Location)
{
    AMuroBase* NuevoMuro = nullptr;

    if (BlockName == TEXT("Muro_Hierro"))
    {
        NuevoMuro = GetWorld()->SpawnActor<AMuroHierro>(AMuroHierro::StaticClass(), Location, FRotator::ZeroRotator);
    }
    else if (BlockName == TEXT("Muro_Madera"))
    {
        NuevoMuro = GetWorld()->SpawnActor<AMuroMadera>(AMuroMadera::StaticClass(), Location, FRotator::ZeroRotator);
    }
    else if (BlockName == TEXT("Muro_Concreto"))
    {
        NuevoMuro = GetWorld()->SpawnActor<AMuroConcreto>(AMuroConcreto::StaticClass(), Location, FRotator::ZeroRotator);
    }
    if (NuevoMuro && NuevoMuro->GetClass()->ImplementsInterface(UInterMuros::StaticClass()))
    {
        IInterMuros* Interfaz = Cast<IInterMuros>(NuevoMuro);
        if (Interfaz)
        {
            FString MaterialName = Interfaz->GetMaterialName();
            // Mensaje en pantalla con el tipo de muro
            GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Yellow, FString::Printf(TEXT("Muro generado: %s"), *MaterialName));
            TodosLosMuros.Add(Interfaz);
        }
    }

    return NuevoMuro;
}

void AFabrica_Muros::EjecutarComportamientoMuros()
{
    TMap<FString, TArray<IInterMuros*>> MurosPorTipo;

    for (IInterMuros* Interfaz : TodosLosMuros)
    {
        // Acción individual
        Interfaz->AccionIndividual();

        // Agrupar por tipo
        FString Tipo = Interfaz->GetMaterialName();
        MurosPorTipo.FindOrAdd(Tipo).Add(Interfaz);
    }

    // Ejecutar acción grupal por tipo
    for (auto& Par : MurosPorTipo)
    {
        if (Par.Value.Num() > 0)
        {
            Par.Value[0]->AccionGrupal(); // Usamos el primer muro como representante
        }
    }

}

