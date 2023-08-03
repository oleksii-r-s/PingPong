// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PPScoreActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PINGPONG_API UPPScoreActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPPScoreActorComponent();
 int GetScore() const { return Score; }

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
 int MaxScore = 7;
	virtual void BeginPlay() override;		
	private:
        int Score = 0;
         UFUNCTION()
         void OnTakeAnyDamage(AActor* DamagedActor, float Damage,
                                    const class UDamageType* DamageType,
                                    class AController* InstigatedBy,
                                    AActor* DamageCauser);
};
