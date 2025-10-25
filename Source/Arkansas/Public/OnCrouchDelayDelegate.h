#pragma once
#include "CoreMinimal.h"
#include "OnCrouchDelayDelegate.generated.h"

class UIndianaCharMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCrouchDelay, UIndianaCharMovementComponent*, MovementComponent);

