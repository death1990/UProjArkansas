#pragma once
#include "CoreMinimal.h"
#include "OnSprintDelayDelegate.generated.h"

class UIndianaCharMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSprintDelay, UIndianaCharMovementComponent*, MovementComponent);

