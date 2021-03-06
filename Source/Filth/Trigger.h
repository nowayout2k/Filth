// Copyright© 2018 John Otis, All rights reserved.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "Trigger.generated.h"

UCLASS()
class FILTH_API ATrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Trigger")
	void Activate();

	UFUNCTION(BlueprintCallable, Category = "Trigger")
	void Deactivate();

private:
	UPROPERTY(Category = "Trigger", EditAnywhere)
		class ATriggeree* triggeree;
};
