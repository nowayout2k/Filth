// Copyright© 2018 John Otis, All rights reserved.

#include "Trigger.h"
#include "Triggeree.h"


// Sets default values
ATrigger::ATrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrigger::Activate()
{
}

void ATrigger::Deactivate()
{
}

