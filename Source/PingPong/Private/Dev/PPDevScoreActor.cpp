// Fill out your copyright notice in the Description page of Project Settings.


#include "Dev/PPDevScoreActor.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
APPDevScoreActor::APPDevScoreActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
        SceneComponent =
            CreateDefaultSubobject<USceneComponent>("SceneComponent");
        SetRootComponent(SceneComponent);
}

// Called when the game starts or when spawned
void APPDevScoreActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APPDevScoreActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
        DrawDebugSphere(GetWorld(), GetActorLocation(), Radius, 24,
                        SphereColor);
        UGameplayStatics::ApplyRadialDamage(GetWorld(), Damage,
                                            GetActorLocation(), Radius, nullptr,
                                            {}, this, nullptr, DoFullDamage);
}

