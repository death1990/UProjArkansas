#pragma once
#include "CoreMinimal.h"
#include "LerpTimerTickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FLerpTimerTick, float, Progress, bool, Complete);

