// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroBase.h"

// Sets default values
AMuroBase::AMuroBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Initialize the material name
	MaterialName = TEXT("Material base ");
	//malla
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent")); // Crear el RootComponent
    // Crear el componente de malla
    MallaMuroBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
    MallaMuroBase->SetupAttachment(RootComponent); // Adjuntar la malla al RootComponent
    // Cargar la malla
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaMuroBase(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

    if (ObjetoMallaMuroBase.Succeeded())
    {
        MallaMuroBase->SetStaticMesh(ObjetoMallaMuroBase.Object);
        MallaMuroBase->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
    }

}

// Called when the game starts or when spawned
void AMuroBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMuroBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AMuroBase::GetMaterialName() const
{
	return MaterialName;
}

void AMuroBase::AccionIndividual()
{
	// Implementación del comportamiento individual
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Acción individual del muro: %s"), *MaterialName));
}

void AMuroBase::AccionGrupal()
{
	// Implementación del comportamiento grupal
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Acción grupal del muro: %s"), *MaterialName));
}

