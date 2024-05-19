// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeSpawn.h"

#include "NaveEnemigaCaza.h"
#include "bomba.h"

// Sets default values
AFacadeSpawn::AFacadeSpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeSpawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFacadeSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Método para instanciar NaveEnemigaCaza
ANaveEnemigaCaza* AFacadeSpawn::SpawnNaveEnemigaCaza(FVector Location, FRotator Rotation, int cantidad)
{
    TArray<FVector> LocationsNaves;
    for (int i = 0; i < cantidad; i++)
    {
        LocationsNaves.Add(Location + FVector(i * 100, 0, 0)); // Adjust the offset as needed
    }

    for (const FVector& SpawnLocation : LocationsNaves)
    {
        ANaveEnemigaCaza* nave = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, Rotation);
    }

    return GetWorld()->SpawnActor<ANaveEnemigaCaza>(Location, Rotation);
}

// Método para instanciar bomba
Abomba* AFacadeSpawn::SpawneaBomba(FVector Location, FRotator Rotation, int cantidad)
{
    TArray<FVector> LocationsBombas;
    for (int i = 0; i < cantidad; i++)
    {
        LocationsBombas.Add(Location + FVector(i * 200, 0, 0)); // Adjust the offset as needed
    }
    for (const FVector& SpawnLocation : LocationsBombas)
    {
        Abomba* bomba = GetWorld()->SpawnActor<Abomba>(SpawnLocation, Rotation);
    }
	return GetWorld()->SpawnActor<Abomba>(Location, Rotation);
}

