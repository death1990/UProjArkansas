#pragma once
#include "CoreMinimal.h"
#include "WirePowerChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWirePowerChanged, bool, bEnabled);

