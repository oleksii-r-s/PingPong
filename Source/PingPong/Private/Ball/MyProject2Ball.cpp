#include "Ball/MyProject2Ball.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"

// Sets default values
AMyProject2Ball::AMyProject2Ball()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(
            TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh"));

        Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball0"));
        Ball->SetStaticMesh(BallMesh.Object);
        Ball->BodyInstance.SetCollisionProfileName(
            UCollisionProfile::PhysicsActor_ProfileName);
        Ball->SetSimulatePhysics(true);
        Ball->SetAngularDamping(0.1f);
        Ball->SetLinearDamping(0.1f);
        Ball->BodyInstance.MassScale = 3.5f;
        Ball->BodyInstance.MaxAngularVelocity = 800.0f;
        Ball->SetNotifyRigidBodyCollision(true);
        RootComponent = Ball;

        SpringArm =
            CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
        SpringArm->SetupAttachment(RootComponent);
        SpringArm->bDoCollisionTest = false;
        SpringArm->SetUsingAbsoluteRotation(
            true);  // Rotation of the ball should not affect rotation of boom
        SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));
        SpringArm->TargetArmLength = 1200.f;
        SpringArm->bEnableCameraLag = false;
        SpringArm->CameraLagSpeed = 3.f;

        // Create a camera and attach to boom
        Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
        Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
        Camera->bUsePawnControlRotation =
            false;

        // Set up forces
        RollTorque = 50000000.0f;
        JumpImpulse = 1.0f;
        Velocity = 1.0f;
        bCanJump = true;  // Start being able to jump
}

void AMyProject2Ball::BeginPlay()
{
	Super::BeginPlay();
    Movement(Velocity);
	
}

void AMyProject2Ball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyProject2Ball::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

        PlayerInputComponent->BindAxis("MoveForward", this,
                                       &AMyProject2Ball::MoveForward);

        PlayerInputComponent->BindTouch(IE_Pressed, this,
                                        &AMyProject2Ball::TouchStarted);
        PlayerInputComponent->BindTouch(IE_Released, this,
                                        &AMyProject2Ball::TouchStopped);

}

void AMyProject2Ball::MoveForward(float Val) {
        const FVector Torque = FVector(0.f, Val * RollTorque, 0.f);
        Ball->AddTorqueInRadians(Torque);
}

void AMyProject2Ball::Movement(float Vel) {
        
        AMyProject2Ball::MoveForward(Vel);
}

void AMyProject2Ball::NotifyHit(class UPrimitiveComponent* MyComp,
                                class AActor* Other,
                                class UPrimitiveComponent* OtherComp,
                                bool bSelfMoved, FVector HitLocation,
                                FVector HitNormal, FVector NormalImpulse,
                                const FHitResult& Hit) {
        Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation,
                         HitNormal, NormalImpulse, Hit);

        bCanJump = true;
}

void AMyProject2Ball::TouchStarted(ETouchIndex::Type FingerIndex,
                                   FVector Location) {
        if (bCanJump) {
          const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
          Ball->AddImpulse(Impulse);
          bCanJump = false;
        }
}

void AMyProject2Ball::TouchStopped(ETouchIndex::Type FingerIndex,
                                   FVector Location) {
        if (bCanJump) {
          const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
          Ball->AddImpulse(Impulse);
          bCanJump = false;
        }
}
