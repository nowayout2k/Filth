// Copyright© 2018 John Otis, All rights reserved.

#include "Triggeree.h"


// Sets default values
ATriggeree::ATriggeree()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATriggeree::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATriggeree::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATriggeree::Unlock()
{

}

