#pragma once
#include "CoreMinimal.h"
#include "ETrapTriggerState.h"
#include "TrapTriggerStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrapTriggerStateChanged, ETrapTriggerState, PreviousState, ETrapTriggerState, CurrentState);

