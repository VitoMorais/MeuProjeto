// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyActor.h"

// Sets default values
AFlyActor::AFlyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TempoExecucao = 0.f;
	DeltaAltura = 0.f;
	NovaLocalizacao = FVector(0.f, 0.0f, 0.f);
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

	NovaLocalizacao = this->GetActorLocation();
	DeltaAltura = (FMath::Sin(TempoExecucao + DeltaTime) - FMath::Sin(TempoExecucao));
	NovaLocalizacao.Z = +DeltaAltura * 20.f;
	TempoExecucao += DeltaTime;
	this->SetActorLocation(NovaLocalizacao);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuracao")
	int32 Numero = 0;

	UFUNCTION(BlueprintCallable, Category = "Configuracao")
	void AlterarNumero(int32 NovoNumero);

}

