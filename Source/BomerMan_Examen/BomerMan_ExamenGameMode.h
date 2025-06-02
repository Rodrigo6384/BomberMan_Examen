// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomerMan_ExamenGameMode.generated.h"

UCLASS(minimalapi)
class ABomerMan_ExamenGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomerMan_ExamenGameMode();

	
	virtual void BeginPlay() override;
};



