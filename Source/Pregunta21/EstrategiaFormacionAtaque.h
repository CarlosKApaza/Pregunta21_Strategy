// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IStrategia.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaFormacionAtaque.generated.h"

UCLASS()
class PREGUNTA21_API AEstrategiaFormacionAtaque : public AActor, public IIStrategia
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaFormacionAtaque();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void Ejecutar(class ANaveGuerrera* Nave) override;
};
