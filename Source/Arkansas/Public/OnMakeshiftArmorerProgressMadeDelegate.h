#pragma once
#include "CoreMinimal.h"
#include "OnMakeshiftArmorerProgressMadeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMakeshiftArmorerProgressMade, int32, CurrentDTBonus, float, ProgressToNextDTBonus);

