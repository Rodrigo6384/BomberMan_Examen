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
