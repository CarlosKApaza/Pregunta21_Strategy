// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IStrategia.h"
#include "NaveGuerrera.generated.h"

UCLASS()
class PREGUNTA21_API ANaveGuerrera : public AActor
{
	GENERATED_BODY()
	
public:	
	ANaveGuerrera();

protected:
	
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshNaveGuerrera;

	void SetEstrategia(AActor* NuevaEstrategia);
	void EjecutarEstrategia();

public:
	IIStrategia* EstrategiaActual;
};
