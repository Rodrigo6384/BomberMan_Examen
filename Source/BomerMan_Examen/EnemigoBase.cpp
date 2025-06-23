// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoBase.h"

// Sets default values
AEnemigoBase::AEnemigoBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Crear el RootComponent
    // Crear el componente de malla
    MallaEnemigoBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
    MallaEnemigoBase->SetupAttachment(RootComponent); // Adjuntar la malla al RootComponent
    // Cargar la malla
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaEnemigoBase(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

    if (ObjetoMallaEnemigoBase.Succeeded())
    {
        MallaEnemigoBase->SetStaticMesh(ObjetoMallaEnemigoBase.Object);
        MallaEnemigoBase->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
    }

}

// Called when the game starts or when spawned
void AEnemigoBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigoBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    if (MovimientoEstrategia)
    {
        MovimientoEstrategia->Mover(this);
    }

}
void AEnemigoBase::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 7., FColor::Blue, FString::Printf(TEXT("El enemigo Ataca")));
}

void AEnemigoBase::Defender()
{
	GEngine->AddOnScreenDebugMessage(-1, 7., FColor::Red, FString::Printf(TEXT("El enemigo Defiende")));
}

AActor* AEnemigoBase::Clonar(FVector Posicion)
{
    return GetWorld()->SpawnActor<AEnemigoBase>(GetClass(), Posicion, FRotator::ZeroRotator);;
}

void AEnemigoBase::SetMovimiento(AActor* MovimientoActor)
{
    MovimientoEstrategia = Cast<IInterMovimiento>(MovimientoActor);
}

