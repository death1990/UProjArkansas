#pragma once
#include "CoreMinimal.h"
#include "EDetectionType.h"
#include "OnDetectionChangeDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDetectionChange, AActor*, Detectee, EDetectionType, DetectionType);

