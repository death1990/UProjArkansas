#pragma once
#include "CoreMinimal.h"
#include "OnOccupiedElevatorChangedDelegate.generated.h"

class AElevator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOccupiedElevatorChanged, AElevator*, Elevator, bool, bOccupied);

