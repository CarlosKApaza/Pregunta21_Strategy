// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Pregunta21GameMode.generated.h"

UCLASS(MinimalAPI)
class APregunta21GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APregunta21GameMode();

protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;
public:

	TArray<class ANaveGuerrera*> NavesGuerreras;

	class ANaveGuerrera* NaveGuerrera;
	class AEstrategiaAtaqueAgresiva* EstrategiaAtaqueAgresiva;
	class AEstrategiaFormacionAtaque* EstrategiaFormacionAtaque;
};




