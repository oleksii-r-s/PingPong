
#include "Player/PPMyCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/PPScoreActorComponent.h"
#include "Components/TextRenderComponent.h"

DEFINE_LOG_CATEGORY_STATIC(BaseCharacter_Log, All, All);
// Sets default values
APPMyCharacter::APPMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraComponent =
            CreateDefaultSubobject<UCameraComponent>("CameraComponent");
        CameraComponent->SetupAttachment(GetRootComponent());

    ScoreActorComponent = 
        CreateDefaultSubobject<UPPScoreActorComponent>("ScoreActorComponent");
    ScoreTextActorComponent =
            CreateDefaultSubobject<UTextRenderComponent>("ScoreTextActorComponent");
    ScoreTextActorComponent->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void APPMyCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APPMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
        const auto Score = ScoreActorComponent->GetScore();
        ScoreTextActorComponent->SetText(
            FText::FromString(FString::Printf(TEXT("%.0f"), Score)));
}

// Called to bind functionality to input
void APPMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveRight", this,
                                       &APPMyCharacter::MoveRight);
        PlayerInputComponent->BindAxis("MoveForward", this,
                                       &APPMyCharacter::MoveForward);
}

void APPMyCharacter::MoveRight(float Amount) {
        AddMovementInput(GetActorRightVector(), Amount);
}
void APPMyCharacter::MoveForward(float Amount) {
        AddMovementInput(GetActorForwardVector(), Amount);
}


