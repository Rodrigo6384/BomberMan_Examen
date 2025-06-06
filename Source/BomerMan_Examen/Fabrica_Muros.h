// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MuroBase.h"
#include "GameFramework/Actor.h"
#include "Fabrica_Muros.generated.h"

UCLASS()
class BOMERMAN_EXAMEN_API AFabrica_Muros : public AActor {
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabrica_Muros();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	// Factory method to create walls
	UFUNCTION(BlueprintCallable, Category = "Wall Factory")
	AMuroBase* CreateMuros(const FString& BlockName, FVector Location);

};
