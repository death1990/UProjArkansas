#pragma once
#include "CoreMinimal.h"
#include "OnSprintStartedDelegate.generated.h"

class UIndianaCharMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSprintStarted, UIndianaCharMovementComponent*, MovementComponent);

