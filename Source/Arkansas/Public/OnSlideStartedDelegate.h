#pragma once
#include "CoreMinimal.h"
#include "OnSlideStartedDelegate.generated.h"

class UPlayerMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlideStarted, UPlayerMovementComponent*, MovementComponent);

