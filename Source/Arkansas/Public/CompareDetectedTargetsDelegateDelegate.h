#pragma once
#include "CoreMinimal.h"
#include "DetectedTargetInfoReference.h"
#include "CompareDetectedTargetsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FCompareDetectedTargetsDelegate, const FDetectedTargetInfoReference&, TargetA, const FDetectedTargetInfoReference&, TargetB);

