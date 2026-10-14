// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyActor.h"

// Sets default values
AFlyActor::AFlyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TempoExecução = 0.f;
	DeltaAltura = 0.f;
	Novalocalização = FVector(0.f, 0.0f, 0.f);

}

// Called when the game starts or when spawned
void AFlyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Novalocalização = this->GetActorLocation();
	DeltaAltura = (FMath::Sin(TempoExecução + DeltaTime) - FMath::Sin(TempoExecução));
	Novalocalização.Z += DeltaAltura * 20.f;
	TempoExecução += DeltaTime;
	this->SetActorLocation(Novalocalização);
	

}

