#pragma once
#include "CoreMinimal.h"
#include "ElevatorMoveEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElevatorMoveEnd, int32, DestinationFloor);

