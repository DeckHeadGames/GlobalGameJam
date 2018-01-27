// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class GGJ2018_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;
	static const FName FaceForwardBinding;
	static const FName FaceRightBinding;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, Category = "Movement")
		FVector GetMoveDirection(float DeltaSeconds);

	UFUNCTION(BlueprintCallable, Category = "Movement")
		FVector GetFaceDirection();

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void MovePlayerCharacter(FVector Movement, FVector FireDirection, float DeltaTime);

	FVector FaceDirection;
	float MoveSpeed;
	FTimerHandle SlowTimer;

	void ReturnSpeed();

public:	

	UPROPERTY(EditAnywhere)
		bool HasFlashlight;

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void SlowCharacter(float time);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
