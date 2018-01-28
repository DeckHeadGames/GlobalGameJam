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
	FVector MoveDirection;
	float MoveSpeed;
	float DefaultMoveSpeed;
	float TimerFloat;
	FTimerHandle SlowTimer;
	FTimerHandle DashTimer;
	FTimerHandle DashingTimer;
	float GetMoveSpeed();
	void ReturnSpeed();
	bool CanDash;
	void StartDash();
	void EndDash();
	void RefreshDash();
	void RayCast();
	void CheckFlashlight(float DeltaTime);

public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool HasFlashlight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool CanIBeUsed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsDash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Hit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DashCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DashSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DashDuration;

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void SlowCharacter(float time);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
