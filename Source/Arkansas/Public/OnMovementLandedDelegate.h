#pragma once
#include "CoreMinimal.h"
#include "OnMovementLandedDelegate.generated.h"

class UIndianaCharMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMovementLanded, UIndianaCharMovementComponent*, MovementComponent, float, FallDistance);

