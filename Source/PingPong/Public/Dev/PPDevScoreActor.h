// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PPDevScoreActor.generated.h"

UCLASS()
class PINGPONG_API APPDevScoreActor : public AActor
{
	GENERATED_BODY()
	
public:	

	APPDevScoreActor();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USceneComponent* SceneComponent;
        UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        float Radius = 300.0f;
        UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        FColor SphereColor = FColor::Red;
        UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        float Damage = 1.0f;
        UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        bool DoFullDamage = false;
       protected:

	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;

};
