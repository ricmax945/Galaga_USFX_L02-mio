// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "componente_spawn_bombas.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L02_API Ucomponente_spawn_bombas : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Ucomponente_spawn_bombas();

public:
	UFUNCTION(BlueprintCallable, Category = Cookbook)
	void Spawn();
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorToSpawn;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
