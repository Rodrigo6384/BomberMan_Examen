// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaComposite.h"

// Sets default values
ABombaComposite::ABombaComposite()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABombaComposite::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABombaComposite::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABombaComposite::AgregarBomba(IInterBomba* Bomba)
{
	Bombas.Add(Bomba);
}

void ABombaComposite::Detonar()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("?? Bomba compuesta activada"));
    for (IInterBomba* Bomba : Bombas)
    {
        if (Bomba)
        {
            Bomba->Detonar();
        }
    }
}

