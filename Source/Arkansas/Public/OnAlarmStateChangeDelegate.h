#pragma once
#include "CoreMinimal.h"
#include "EAlarmState.h"
#include "OnAlarmStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAlarmStateChange, EAlarmState, AlarmState);

