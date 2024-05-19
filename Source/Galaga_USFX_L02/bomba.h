// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "componente_spawn_bombas.h"


#include "bomba.generated.h"


UCLASS()
class GALAGA_USFX_L02_API Abomba : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Abomba();
	UStaticMeshComponent* mallabomba;
	Ucomponente_spawn_bombas* componente_spawn_bombas;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
