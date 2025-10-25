#pragma once
#include "CoreMinimal.h"
#include "OnOccupiedElevatorMoveDelegateDelegate.generated.h"

class AElevator;
class UEnvironmentInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOccupiedElevatorMoveDelegate, UEnvironmentInteractionComponent*, EnvironmentComponent, AElevator*, Elevator);

