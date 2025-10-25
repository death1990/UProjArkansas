#pragma once
#include "CoreMinimal.h"
#include "DetectedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDetectedDelegate, AActor*, Detectee, AActor*, Detector, float, TimeSpentUndetected);

