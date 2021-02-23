// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "actorrsef.generated.h"

UCLASS()
class CALL_OF_GRUTY_API Aactorrsef : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aactorrsef();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
