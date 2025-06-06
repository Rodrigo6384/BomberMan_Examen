// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InterMuros.h"
#include "GameFramework/Actor.h"
#include "MuroBase.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API AMuroBase : public AActor, public IInterMuros {
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMuroBase();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString MaterialName;
	UStaticMeshComponent* MallaMuroBase;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Implementación del método de la interfaz para obtener el nombre del material
	FString GetMaterialName() const;

};
