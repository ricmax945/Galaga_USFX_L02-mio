// Fill out your copyright notice in the Description page of Project Settings.
#include "componente_spawn_bombas.h"
#include "bomba.h"

// Sets default values for this component's properties
Ucomponente_spawn_bombas::Ucomponente_spawn_bombas()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	//Set ActorToSpawn to Proyectiles
	ActorToSpawn = Abomba::StaticClass();
}


// Called when the game starts

void Ucomponente_spawn_bombas::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
	
}
// Called when the game starts or when spawned

// Called every frame
void Ucomponente_spawn_bombas::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// Called to spawn a bomb
void Ucomponente_spawn_bombas::Spawn()
{
		UWorld* TheWorld = GetWorld();
		if (TheWorld != nullptr)
		{
			// Get the transform of the scene component
			FTransform ComponentTransform = this->GetComponentTransform();
			FVector SpawnLocation = ComponentTransform.GetLocation() - FVector(0.0f, 0.0f, 70.0f); // Update the spawn location
			FTransform SpawnTransform(SpawnLocation);
			TheWorld->SpawnActor(ActorToSpawn, &SpawnTransform);
		}
}

