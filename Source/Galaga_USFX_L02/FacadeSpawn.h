// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeSpawn.generated.h"

UCLASS()
class GALAGA_USFX_L02_API AFacadeSpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeSpawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	UFUNCTION(BlueprintCallable, Category = "Spawning")
	ANaveEnemigaCaza* SpawnNaveEnemigaCaza(FVector Location, FRotator Rotation, int cantidad);

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	Abomba* SpawneaBomba(FVector Location, FRotator Rotation, int cantidad);

};
