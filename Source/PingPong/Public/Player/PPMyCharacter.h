// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PPMyCharacter.generated.h"
class UPPScoreActorComponent;
class UTextRenderComponent;

class UCameraComponent;
UCLASS()
class PINGPONG_API APPMyCharacter : public ACharacter {
  GENERATED_BODY()

 public:
  // Sets default values for this character's properties
  APPMyCharacter();

 protected:
  UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
  UCameraComponent* CameraComponent;
  UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
  UPPScoreActorComponent* ScoreActorComponent;

  UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
  UTextRenderComponent* ScoreTextActorComponent;

  // Called when the game starts or when spawned
  virtual void BeginPlay() override;

 public:
  // Called every frame
  virtual void Tick(float DeltaTime) override;

  // Called to bind functionality to input
  virtual void SetupPlayerInputComponent(
      class UInputComponent* PlayerInputComponent) override;

 private:
  void MoveRight(float Amount);
  void MoveForward(float Amount);
};
