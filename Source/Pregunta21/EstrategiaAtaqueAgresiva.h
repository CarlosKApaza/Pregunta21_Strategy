// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IStrategia.h"
#include "GameFramework/Actor.h"
#include "EstrategiaAtaqueAgresiva.generated.h"

UCLASS()
class PREGUNTA21_API AEstrategiaAtaqueAgresiva : public AActor, public IIStrategia
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaAtaqueAgresiva();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Ejecutar(class ANaveGuerrera* Nave) override;
};
