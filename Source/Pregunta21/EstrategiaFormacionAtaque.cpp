// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaFormacionAtaque.h"
#include "NaveGuerrera.h"

// Sets default values
AEstrategiaFormacionAtaque::AEstrategiaFormacionAtaque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaFormacionAtaque::BeginPlay()
{
	Super::BeginPlay();	
}

void AEstrategiaFormacionAtaque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstrategiaFormacionAtaque::Ejecutar(ANaveGuerrera* Nave)
{
	ANaveGuerrera* NaveGuerrera = Cast<ANaveGuerrera>(Nave);
	if (NaveGuerrera)
	{
		// Lógica para formarse en grupo
		UE_LOG(LogTemp, Warning, TEXT("Estrategia de Formación de Ataque ejecutada"));
	}
}

