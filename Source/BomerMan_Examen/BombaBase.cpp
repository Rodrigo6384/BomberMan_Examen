// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaBase.h"
#include "TimerManager.h"

// Sets default values
ABombaBase::ABombaBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear el componente raíz
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	MallaBomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBomba"));
	MallaBomba->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMallaBomba(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (ObjetoMallaBomba.Succeeded())
	{
		MallaBomba->SetStaticMesh(ObjetoMallaBomba.Object);
		MallaBomba->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
	}
	ComandoExplosion = nullptr;
}

// Called when the game starts or when spawned
void ABombaBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABombaBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABombaBase::Detonar()
{
	GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Yellow, TEXT("¡La bomba explotará en 4 segundos!"));

	// Aquí puedes agregar la lógica de detonación, como infligir daño a los enemigos cercanos o destruir la bomba.
		// Configurar el temporizador para detonar después de 4 segundos
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Detonacion, this, &ABombaBase::EjecutarDetonacion, 4.0f, false);
}

void ABombaBase::EjecutarDetonacion()
{
	if (ComandoExplosion)
	{
		ComandoExplosion->EjecutarExplosion(this);
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("¡La bomba ha explotado!"));
	Destroy(); // Destruye la bomba después de detonar
}

void ABombaBase::SetComandoExplosion(IInterComandoExplosion* NuevoComando)
{
	ComandoExplosion = NuevoComando;
}

