// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "GoGoCarGameMode.h"
#include "GoGoCarPawn.h"
#include "GoGoCarHud.h"

AGoGoCarGameMode::AGoGoCarGameMode()
{
	DefaultPawnClass = AGoGoCarPawn::StaticClass();
	HUDClass = AGoGoCarHud::StaticClass();
}
