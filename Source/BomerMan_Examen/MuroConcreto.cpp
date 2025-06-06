// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroConcreto.h"

AMuroConcreto::AMuroConcreto()
{
	// Set the material name for concrete wall
	MaterialName = TEXT("Muro de Concreto");
	// Set the material for the mesh
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Concrete_Tiles.M_Concrete_Tiles'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaMuroBase->SetMaterial(0, ObjetoMaterial.Object);
	}
}
