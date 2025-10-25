#pragma once
#include "CoreMinimal.h"
#include "ElevatorMoveStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElevatorMoveStart, int32, DestinationFloor, bool, FromStationary);

