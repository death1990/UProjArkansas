#pragma once
#include "CoreMinimal.h"
#include "OnLadderSlideEndedDelegate.generated.h"

class UPlayerMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLadderSlideEnded, UPlayerMovementComponent*, MovementComponent);

