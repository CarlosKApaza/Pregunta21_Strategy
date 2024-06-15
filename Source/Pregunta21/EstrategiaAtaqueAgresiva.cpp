// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaAtaqueAgresiva.h"
#include "Pregunta21Projectile.h"
#include "NaveGuerrera.h"

// Sets default values
AEstrategiaAtaqueAgresiva::AEstrategiaAtaqueAgresiva()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaAtaqueAgresiva::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaAtaqueAgresiva::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaAtaqueAgresiva::Ejecutar(ANaveGuerrera* Nave)
{
	ANaveGuerrera* NaveGuerrera = Cast<ANaveGuerrera>(Nave);
	if (NaveGuerrera)
	{
		FVector Location = NaveGuerrera->GetActorLocation();
		FRotator Rotation = NaveGuerrera->GetActorRotation();
		FActorSpawnParameters SpawnParams;

		NaveGuerrera->GetWorld()->SpawnActor<APregunta21Projectile>(Location + FVector(100, 0, 0), Rotation, SpawnParams);

		UE_LOG(LogTemp, Warning, TEXT("Estrategia de Ataque Agresivo ejecutada"));
	}
}

