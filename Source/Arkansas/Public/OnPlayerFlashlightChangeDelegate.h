#pragma once
#include "CoreMinimal.h"
#include "OnPlayerFlashlightChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerFlashlightChange, bool, bFlashlightOn);

