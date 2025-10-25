#pragma once
#include "CoreMinimal.h"
#include "EDetectionLevel.h"
#include "DetectionLevelChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDetectionLevelChangedDelegate, EDetectionLevel, OldDetectionLevel, EDetectionLevel, NewDetectionLevel);

