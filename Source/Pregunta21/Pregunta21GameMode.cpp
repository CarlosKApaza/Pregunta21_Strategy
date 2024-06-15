// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pregunta21GameMode.h"
#include "Pregunta21Pawn.h"
#include "NaveGuerrera.h"

#include "IStrategia.h"
#include "EstrategiaAtaqueAgresiva.h"
#include "EstrategiaFormacionAtaque.h"

#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"


APregunta21GameMode::APregunta21GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APregunta21Pawn::StaticClass();
}

void APregunta21GameMode::BeginPlay()
{
    Super::BeginPlay();

    for (int i = 0; i < 10; i++)
    {
        FVector PosicionNaveGuerrera = FVector(-200.0f, -1000.0f + i * 300, 200.0f);

        ANaveGuerrera* NuevaNaveGuerrera = GetWorld()->SpawnActor<ANaveGuerrera>(PosicionNaveGuerrera, FRotator::ZeroRotator);
        if (NuevaNaveGuerrera)
        {
            if (i % 2 == 0)
            {
                // Asigna la estrategia de ataque agresiva
                AEstrategiaAtaqueAgresiva* EstrategiaAgresiva = GetWorld()->SpawnActor<AEstrategiaAtaqueAgresiva>();
                NuevaNaveGuerrera->SetEstrategia(EstrategiaAgresiva);
            }
            else
            {
                // Asigna la estrategia de formación para ataque
                AEstrategiaFormacionAtaque* EstrategiaFormacion = GetWorld()->SpawnActor<AEstrategiaFormacionAtaque>();
                NuevaNaveGuerrera->SetEstrategia(EstrategiaFormacion);
            }
        }
    }
}

void APregunta21GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}