// Fill out your copyright notice in the Description page of Project Settings.


#include "NewCoin.h"

// Sets default values
ANewCoin::ANewCoin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Coin = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("COIN"));
	Coin->OnComponentBeginOverlap.AddDynamic(this, &ANewCoin::BeginOverlap);
}

// Called when the game starts or when spawned
void ANewCoin::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANewCoin::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{


}

// Called every frame
void ANewCoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

