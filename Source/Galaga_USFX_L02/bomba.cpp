// Fill out your copyright notice in the Description page of Project Settings.
#include "bomba.h"



// Sets default values
Abomba::Abomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mallabomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));

	// creates a static mesh component
	mallabomba->SetupAttachment(RootComponent);
	RootComponent = mallabomba;

	// creates a static mesh object
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Chair.SM_Chair'"));
	mallabomba->SetStaticMesh(malla.Object);

}

// Called when the game starts or when spawned
void Abomba::BeginPlay()
{
	Super::BeginPlay();

	// crates an instance of the spawn component
	componente_spawn_bombas = NewObject<Ucomponente_spawn_bombas>(this);
	
	// attaches the spawn component to the root component
	componente_spawn_bombas->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	// set the bomb to destroy itself after 3 seconds
	SetLifeSpan(10);
}

// Called every frame
void Abomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


