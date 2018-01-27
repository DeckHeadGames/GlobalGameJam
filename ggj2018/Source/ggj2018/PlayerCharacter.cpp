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
	DashCooldown = 4.0f;
	CanDash = true;
	CanIBeUsed = false;
	FaceDirection = GetActorForwardVector();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (HasFlashlight) {
		RayCast();
	}
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

	PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &APlayerCharacter::StartDash);

}

FVector APlayerCharacter::GetMoveDirection(float DeltaTime) {

	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);
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
	MoveSpeed = 10.0f;
	GetWorld()->GetTimerManager().SetTimer(SlowTimer, this, &APlayerCharacter::ReturnSpeed, time, false);

}

void APlayerCharacter::ReturnSpeed() {
	MoveSpeed = 1000.0f;
	GetWorld()->GetTimerManager().ClearTimer(SlowTimer);
}

void APlayerCharacter::StartDash() {

	if (CanDash) {
		FVector DeltaDist = MoveDirection;
		DeltaDist.Normalize();
		float modifier;
		if (MoveSpeed < 100) {
			modifier = 500.0f;
		}
		else {
			modifier = MoveSpeed;
		}
		LaunchCharacter(4.0f * modifier * DeltaDist, true, true);
		CanDash = false;
		GetWorld()->GetTimerManager().SetTimer(DashTimer, this, &APlayerCharacter::RefreshDash, DashCooldown, false);
	}
}

void APlayerCharacter::RefreshDash() {
	CanDash = true;
	GetWorld()->GetTimerManager().ClearTimer(DashTimer);
}

void APlayerCharacter::RayCast() {
	for (int i = -20; i < 20; ++i) {
		FRotator rot = FRotator(0, i, 0);
		FHitResult* HitResult = new FHitResult;
		FVector temp = rot.RotateVector(FaceDirection);
		FaceDirection.Normalize();
		FVector StartTrace = GetActorLocation() + (50.0f * FaceDirection);
		FVector EndTrace = (temp * 1000) + StartTrace;
		if (GetWorld()->LineTraceSingleByChannel(*HitResult, StartTrace, EndTrace, ECC_Pawn)) {
			
			DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::Red, true);
			
			
			if (HitResult->GetActor() != NULL) {
				if (HitResult->GetActor()->GetClass()->IsChildOf(APlayerCharacter::StaticClass())) {
					APlayerCharacter* other = Cast<APlayerCharacter>(HitResult->GetActor());
					other->CanIBeUsed = true;
					//GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Cyan, TEXT("Found a character"), true);
				}
			}
		}
		
	}
}

void APlayerCharacter::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {

}


