#pragma once
#include "CoreMinimal.h"
#include "OnFullRegionalCollectedDelegate.generated.h"

class UTravelRegionData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFullRegionalCollected, const UTravelRegionData*, Region);

