// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveGuerrera.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

ANaveGuerrera::ANaveGuerrera()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PepeMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (PepeMesh.Object == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("PepeMesh is nullptr!"));
	}

	MeshNaveGuerrera = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MeshNaveGuerrera->SetStaticMesh(PepeMesh.Object);
	MeshNaveGuerrera->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	RootComponent = MeshNaveGuerrera;

}

// Called when the game starts or when spawned
void ANaveGuerrera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveGuerrera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EjecutarEstrategia();
}

void ANaveGuerrera::SetEstrategia(AActor*  NuevaEstrategia)
{
	EstrategiaActual = Cast<IIStrategia>(NuevaEstrategia);
}

void ANaveGuerrera::EjecutarEstrategia()
{
	if (EstrategiaActual)
	{
		EstrategiaActual->Ejecutar(this);
	}
}

