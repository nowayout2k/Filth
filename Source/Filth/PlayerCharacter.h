// Copyright© 2018 John Otis, All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class FILTH_API APlayerCharacter : public APaperCharacter
{
	GENERATED_BODY()


private:
	UPROPERTY(Category = "Player", VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* camera;

	int32 health;
	bool isAttacking;

protected:
	virtual void BeginPlay() override;

public:
	APlayerCharacter();

	virtual void Tick(float deltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* playerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetHealth(int32 newHealth) { health = newHealth; }

	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetIsAttacking(bool attacking) { isAttacking = attacking; }

	UFUNCTION(BlueprintCallable, Category = "Player")
	void AddHealth(int32 change) { health += change; }

	UFUNCTION(BlueprintPure, Category = "Player")
	FORCEINLINE bool GetIsAttacking() const { return isAttacking; }

	UFUNCTION(BlueprintPure, Category = "Player")
	FORCEINLINE int32 GetHealth() const { return health; }

	FORCEINLINE class UCameraComponent* GetCamera() const { return camera; }
};
