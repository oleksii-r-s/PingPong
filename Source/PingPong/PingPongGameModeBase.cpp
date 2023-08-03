// Copyright Epic Games, Inc. All Rights Reserved.


#include "PingPongGameModeBase.h"
#include "Player/PPMyCharacter.h"
#include "Player/PPPlayerController.h"

 APingPongGameModeBase::APingPongGameModeBase() {
  DefaultPawnClass = APPMyCharacter::StaticClass();
   PlayerControllerClass = APPPlayerController::StaticClass();
 }