#pragma once
#include "CoreMinimal.h"
#include "OnSlideEndedDelegate.generated.h"

class UPlayerMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlideEnded, UPlayerMovementComponent*, MovementComponent);

