#pragma once
#include "CoreMinimal.h"
#include "OnLadderSlideStartedDelegate.generated.h"

class UPlayerMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLadderSlideStarted, UPlayerMovementComponent*, MovementComponent);

