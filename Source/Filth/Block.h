// Copyright© 2018 John Otis, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

UENUM(BlueprintType)
enum EPushBlockDirection
{
	PBD_Right   UMETA(DisplayName = "Right"),
	PBD_Left    UMETA(DisplayName = "Left"),
	PBD_Up		UMETA(DisplayName = "Up"),
	PBD_Down	UMETA(DisplayName = "Down"),
};

UCLASS()
class FILTH_API ABlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, Category = "Block")
	virtual void Move(EPushBlockDirection direction);
 
	
	
};
