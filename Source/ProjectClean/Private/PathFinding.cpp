// Fill out your copyright notice in the Description page of Project Settings.


#include "PathFinding.h"

// Sets default values
APathFinding::APathFinding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APathFinding::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APathFinding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APathFinding::DoSomething()
{
	//Yes
}
