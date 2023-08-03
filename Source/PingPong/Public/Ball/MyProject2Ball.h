
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyProject2Ball.generated.h"

UCLASS(config = Game)
class PINGPONG_API AMyProject2Ball : public APawn
{
	GENERATED_BODY()
  /** StaticMesh used for the ball */
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball,
            meta = (AllowPrivateAccess = "true"))
  class UStaticMeshComponent* Ball;

  /** Spring arm for positioning the camera above the ball */
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball,
            meta = (AllowPrivateAccess = "true"))
  class USpringArmComponent* SpringArm;

  /** Camera to view the ball */
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball,
            meta = (AllowPrivateAccess = "true"))
  class UCameraComponent* Camera;

public:
	// Sets default values for this pawn's properties
	AMyProject2Ball();
 /** Vertical impulse to apply when pressing jump */
 UPROPERTY(EditAnywhere, Category = Ball)
 float JumpImpulse;

 /** Torque to apply when trying to roll ball */
 UPROPERTY(EditAnywhere, Category = Ball)
 float RollTorque;

 UPROPERTY(EditAnywhere, Category = Ball)
 float Velocity;

 /** Indicates whether we can currently jump, use to prevent double jumping */
 bool bCanJump;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

 /** Called to move ball forwards and backwards */
 void MoveForward(float Val);

 void Movement(float Vel);

 // AActor interface
 virtual void NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other,
                        class UPrimitiveComponent* OtherComp, bool bSelfMoved,
                        FVector HitLocation, FVector HitNormal,
                        FVector NormalImpulse, const FHitResult& Hit) override;
 // End of AActor interface

 // APawn interface
 virtual void SetupPlayerInputComponent(
     class UInputComponent* InputComponent) override;
 // End of APawn interface

 /** Handler for when a touch input begins. */
 void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

 /** Handler for when a touch input stops. */
 void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
