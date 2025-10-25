#pragma once
#include "CoreMinimal.h"
#include "ToxicityMeterChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FToxicityMeterChange, float, PrevValue, float, CurrValue);

