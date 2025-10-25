#pragma once
#include "CoreMinimal.h"
#include "OnCinematicModeChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinematicModeChangeDelegate, bool, bCinematicMode);

