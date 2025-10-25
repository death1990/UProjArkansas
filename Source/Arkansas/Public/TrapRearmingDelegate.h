#pragma once
#include "CoreMinimal.h"
#include "TrapRearmingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapRearming, float, RearmingSeconds);

