#pragma once
#include "CoreMinimal.h"
#include "DetectedTargetInfoReference.h"
#include "CanSwitchToTargetDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FCanSwitchToTargetDelegate, const FDetectedTargetInfoReference&, CurrentTarget, const FDetectedTargetInfoReference&, NewTarget);

