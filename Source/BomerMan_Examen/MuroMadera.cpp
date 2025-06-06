// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroMadera.h"

AMuroMadera::AMuroMadera()
{
	MaterialName = TEXT("Muro de Madera");
	//Material de la malla
	static ConstructorHelpers::FObjectFinder<UMaterial> ObjetoMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Wood_Floor_Walnut_Polished.M_Wood_Floor_Walnut_Polished'"));
	if (ObjetoMaterial.Succeeded())
	{
		MallaMuroBase->SetMaterial(0, ObjetoMaterial.Object);
	}

}

void AMuroMadera::AccionIndividual()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, TEXT("Accion individual: Muro de Madera se está astillando"));
}

void AMuroMadera::AccionGrupal()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Orange, TEXT("Accion grupal: Todos los muros de Madera vibran"));
}
