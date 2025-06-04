// Fill out your copyright notice in the Description page of Project Settings.


#include "Comandante.h"

// Sets default values
AComandante::AComandante()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Crear el RootComponent
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    // Crear el componente de malla
    MallaComandante = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaComandante"));
    MallaComandante->SetupAttachment(RootComponent); // Adjuntar la malla al RootComponent
    // Cargar la malla
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaComandante(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));

    if (ObjetoMallaComandante.Succeeded())
    {
        MallaComandante->SetStaticMesh(ObjetoMallaComandante.Object);
        MallaComandante->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
    }
    // Cargar el material
    static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
    if (ObjetoMaterial.Succeeded())
    {
        MallaComandante->SetMaterial(0, ObjetoMaterial.Object);
    }
}

// Called when the game starts or when spawned
void AComandante::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComandante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AComandante::DarOrdenes()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Blue, FString::Printf(TEXT("El comandante ordena atacar")));
}

void AComandante::Estrategia()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Blue, FString::Printf(TEXT("El comandante establece una estrategia defensiva")));
}

