// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L02GameMode.h"
#include "Galaga_USFX_L02Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"

#include "FacadeSpawn.h"
#include "bomba.h"

AGalaga_USFX_L02GameMode::AGalaga_USFX_L02GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L02Pawn::StaticClass();
	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L02GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionInicialNavesEnemigas = FVector(0.0f, 0.0f, 150.0f);
	FVector ubicacionActualNaveEnemiga = ubicacionInicialNavesEnemigas;
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		/*
	
		for (int i = 0; i < 5; i++) {
			ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActualNaveEnemiga, rotacionNave);
			//TANavesEnemigasCaza.Add(NaveEnemigaCazaActual);
			NaveEnemigaCazaActual->SetNombre("nave enemiga caza " + FString::FromInt(i));
			TANavesEnemigas.Add(NaveEnemigaCazaActual);
			TMPosicionesNavesEnemigas.Add(NaveEnemigaCazaActual, ubicacionActualNaveEnemiga);

			ubicacionActualNaveEnemiga.Y = ubicacionActualNaveEnemiga.Y + 150.0f;
		}

		ubicacionActualNaveEnemiga.X = ubicacionActualNaveEnemiga.X - 150.0f;
		ubicacionActualNaveEnemiga.Y = ubicacionInicialNavesEnemigas.Y;
		for (int j = 0; j < 5; j++) {
			
			ANaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionActualNaveEnemiga, rotacionNave);
			//TANavesEnemigasTransporte.Add(NaveEnemigaTransporteActual);
			NaveEnemigaTransporteActual->SetNombre("nave enemiga transporte" + FString::FromInt(j));
			TANavesEnemigas.Add(NaveEnemigaTransporteActual);
			TMPosicionesNavesEnemigas.Add(NaveEnemigaTransporteActual, ubicacionActualNaveEnemiga);

			ubicacionActualNaveEnemiga.Y = ubicacionActualNaveEnemiga.Y + 150.0f;
		}

		FTimerHandle FTHVisualizacionPosicionesNavesEnemigas;

		GetWorldTimerManager().SetTimer(FTHVisualizacionPosicionesNavesEnemigas, this, &AGalaga_USFX_L02GameMode::MostrarPosicionesNavesEnemigas, 1.0f, true);
		
		*/
	}


	FVector Location = FVector(0.0f, 0.0f, 150.0f);
	FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);
	// Cantidad de naves enemigas y bombas a instanciar
	int cantidadNavesEnemigas = 15;
	int cantidadBombas = 15;
	// Instancia un objeto de la clase FacadeSpawn
	AFacadeSpawn* FacadeSpawn = GetWorld()->SpawnActor<AFacadeSpawn>();
	// Llama a los métodos de FacadeSpawn para instanciar NaveEnemigaCaza y bomba
	ANaveEnemigaCaza* NaveEnemigaCaza = FacadeSpawn->SpawnNaveEnemigaCaza(Location, Rotation, cantidadNavesEnemigas);
	Abomba* Bomba = FacadeSpawn->SpawneaBomba(Location, Rotation, cantidadBombas);
}

void AGalaga_USFX_L02GameMode::MostrarPosicionesNavesEnemigas()
{
	/*
	for (auto ElementoActual : TMPosicionesNavesEnemigas) {
		ANaveEnemiga* naveEnemigaActual = ElementoActual.Key;
		FVector posicionActualNaveEnemiga = ElementoActual.Value;
		FString mensaje = "La nave " + naveEnemigaActual->GetNombre() + " esta en la posicion> " + posicionActualNaveEnemiga.ToString();

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, mensaje);

			/*FString mensaje = "Nombre NaveEnemiga: " + Clave->GetNombre() + " Posicion NaveEnemiga: " + Valor.ToString();
			GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, mensaje);

		}

		TMPosicionesNavesEnemigas[naveEnemigaActual] = naveEnemigaActual->GetActorLocation();
	}
	*/
}
