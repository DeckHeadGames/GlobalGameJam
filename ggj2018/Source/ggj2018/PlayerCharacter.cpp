// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"
#include "Engine.h"


const FName APlayerCharacter::MoveForwardBinding("MoveForward");
const FName APlayerCharacter::MoveRightBinding("MoveRight");
const FName APlayerCharacter::FaceForwardBinding("FaceForward");
const FName APlayerCharacter::FaceRightBinding("FaceRight");



// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	MoveSpeed = 1000.0f;
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	const FVector Movement = GetMoveDirection(DeltaTime);
	FaceDirection = GetFaceDirection();

	MovePlayerCharacter(Movement, FaceDirection, DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FaceForwardBinding);
	PlayerInputComponent->BindAxis(FaceRightBinding);

}

FVector APlayerCharacter::GetMoveDirection(float DeltaSeconds) {

	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);
	MoveDirection.Normalize();

	return (MoveDirection);

}


FVector APlayerCharacter::GetFaceDirection() {

	const float FireForwardValue = GetInputAxisValue(FaceForwardBinding);
	const float FireRightValue = GetInputAxisValue(FaceRightBinding);

	if (FireForwardValue != 0.0f && FireRightValue != 0.0f) {

		FaceDirection = FVector(FireForwardValue, FireRightValue, 0.0f);

	}

	return FaceDirection;
}


void APlayerCharacter::MovePlayerCharacter(FVector Movement, FVector FireDirection, float DeltaTime) {



	AddMovementInput(Movement, MoveSpeed * DeltaTime);
	// If non-zero size, move this actor

	FRotator direction = FireDirection.Rotation();
	SetActorRotation(direction);
}

void APlayerCharacter::SlowCharacter(float time) {
	MoveSpeed = 20.0f;
	GetWorld()->GetTimerManager().SetTimer(SlowTimer, this, &APlayerCharacter::ReturnSpeed, time, false);

}

void APlayerCharacter::ReturnSpeed() {
	MoveSpeed = 1000.0f;
	GetWorld()->GetTimerManager().ClearTimer(SlowTimer);
}

