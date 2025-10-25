#pragma once
#include "CoreMinimal.h"
#include "ETrapState.h"
#include "TrapChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrapChanged, ETrapState, PreviousState, ETrapState, CurrentState);

