#pragma once
#include "CoreMinimal.h"
#include "OnSprintEndedDelegate.generated.h"

class UIndianaCharMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSprintEnded, UIndianaCharMovementComponent*, MovementComponent);

