// Copyright© 2018 John Otis, All rights reserved.

#include "PlayerCharacter.h"
#include "Classes/Camera/CameraComponent.h"
#include "Classes/Components/CapsuleComponent.h"
#include "Classes/GameFramework/CharacterMovementComponent.h"

APlayerCharacter::APlayerCharacter()
{
	health = 100.0f;
	isAttacking = false;

	UCharacterMovementComponent* movement = GetCharacterMovement();
	UCapsuleComponent* capsule = GetCapsuleComponent();

	movement->GravityScale = 0.0f;
	movement->DefaultLandMovementMode = EMovementMode::MOVE_Flying;
	movement->MaxFlySpeed = 100.0f;
	movement->BrakingDecelerationFlying = 200.0f;
	movement->SetPlaneConstraintNormal(FVector(0,1,0));
	movement->SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting::Y);


	capsule->SetCapsuleRadius(5.0f);
	capsule->SetCapsuleHalfHeight(5.0f);

 

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetWorldLocation(FVector(0.f,0.f,0.f));
	camera->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	FString str = "TEST!!!!!";
	UE_LOG(LogTemp, Warning, TEXT("Your message %s"), *str);
}
void APlayerCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent * playerInputComponent)
{
	Super::SetupPlayerInputComponent(playerInputComponent);
}
