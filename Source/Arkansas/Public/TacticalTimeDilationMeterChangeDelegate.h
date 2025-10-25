#pragma once
#include "CoreMinimal.h"
#include "TacticalTimeDilationMeterChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTacticalTimeDilationMeterChange, float, PrevValue, float, CurrValue);

