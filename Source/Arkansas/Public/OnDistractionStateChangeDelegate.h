#pragma once
#include "CoreMinimal.h"
#include "EDistractionDeviceState.h"
#include "OnDistractionStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDistractionStateChange, EDistractionDeviceState, DistractionState);

