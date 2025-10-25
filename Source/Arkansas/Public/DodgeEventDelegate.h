#pragma once
#include "CoreMinimal.h"
#include "EDodgeDirection.h"
#include "DodgeEventDelegate.generated.h"

class UIndianaCharMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDodgeEvent, UIndianaCharMovementComponent*, MovementComponent, EDodgeDirection, DodgeDirection);

