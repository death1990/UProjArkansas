#pragma once
#include "CoreMinimal.h"
#include "PlayerProximityChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerProximityChangeDelegate, bool, bEnteredProximity);

