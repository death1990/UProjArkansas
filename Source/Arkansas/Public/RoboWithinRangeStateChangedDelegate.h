#pragma once
#include "CoreMinimal.h"
#include "RoboWithinRangeStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRoboWithinRangeStateChanged, int32, PrevRoboCount, int32, CurrRoboCount);

