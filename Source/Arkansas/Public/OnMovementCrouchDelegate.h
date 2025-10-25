#pragma once
#include "CoreMinimal.h"
#include "OnMovementCrouchDelegate.generated.h"

class UIndianaCharMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMovementCrouch, UIndianaCharMovementComponent*, MovementComponent, bool, bPlayerToggled);

