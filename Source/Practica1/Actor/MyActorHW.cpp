// Fill out your copyright notice in the Description page of Project Settings.


#include "Practica1/Actor/MyActorHW.h"

// Sets default values
AMyActorHW::AMyActorHW()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActorHW::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello World!"));
	UE_LOG(LogTemp, Warning, TEXT("Hola Mundo!"));
	
}

// Called every frame
void AMyActorHW::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

