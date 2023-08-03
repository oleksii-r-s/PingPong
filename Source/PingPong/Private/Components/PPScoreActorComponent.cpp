// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/PPScoreActorComponent.h"
#include "GameFramework/Actor.h"

DEFINE_LOG_CATEGORY_STATIC(LogScoreComponent, All, All);

UPPScoreActorComponent::UPPScoreActorComponent()
{
	
	PrimaryComponentTick.bCanEverTick = false;

}

void UPPScoreActorComponent::BeginPlay() { Super::BeginPlay(); 
	Score = 0;
        AActor* ComponentOwner = GetOwner();
        if(ComponentOwner) {
          ComponentOwner->OnTakeAnyDamage.AddDynamic(this, &UPPScoreActorComponent::OnTakeAnyDamage);
        }
}

void UPPScoreActorComponent::OnTakeAnyDamage(AActor* DamagedActor,
                                                  float Damage,
                                           const UDamageType* DamageType,
                                           AController* InstigatedBy,
                                           AActor* DamageCauser) {
        Score += 1;
        UE_LOG(LogScoreComponent, Display, TEXT("Score: %f"), Damage);
}