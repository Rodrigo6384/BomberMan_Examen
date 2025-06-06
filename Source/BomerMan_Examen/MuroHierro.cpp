// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroHierro.h"

AMuroHierro::AMuroHierro()
{
	// Set the material name for iron wall
	MaterialName = TEXT("Muro de Hierro");
	// Set the material for the mesh
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaMuroBase->SetMaterial(0, ObjetoMaterial.Object);
	}
}

void AMuroHierro::AccionIndividual()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, TEXT("Accion individual: Muro de Hierro se calienta"));
}

void AMuroHierro::AccionGrupal()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Orange, TEXT("Accion grupal: Todos los muros de Hierro resuenan"));
}
