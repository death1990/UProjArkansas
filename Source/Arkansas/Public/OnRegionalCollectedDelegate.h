#pragma once
#include "CoreMinimal.h"
#include "OnRegionalCollectedDelegate.generated.h"

class UTravelRegionData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRegionalCollected, const UTravelRegionData*, Region);

