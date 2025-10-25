#pragma once
#include "CoreMinimal.h"
#include "MovementEventWithParamDelegate.generated.h"

class UIndianaCharMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovementEventWithParam, UIndianaCharMovementComponent*, MovementComponent);

