// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PathFinding.generated.h"

UCLASS()
class PROJECTCLEAN_API APathFinding : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APathFinding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category="MyOwnCategory")
		void DoSomething();

};
