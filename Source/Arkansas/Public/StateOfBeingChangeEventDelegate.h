#pragma once
#include "CoreMinimal.h"
#include "EStateOfBeing.h"
#include "StateOfBeingChangeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateOfBeingChangeEvent, EStateOfBeing, StateOfBeing);

