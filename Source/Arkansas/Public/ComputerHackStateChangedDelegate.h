#pragma once
#include "CoreMinimal.h"
#include "EComputerHackState.h"
#include "ComputerHackStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FComputerHackStateChanged, EComputerHackState, PreviousState, EComputerHackState, CurrentState);

