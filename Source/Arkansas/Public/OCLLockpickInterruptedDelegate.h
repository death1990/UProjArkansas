#pragma once
#include "CoreMinimal.h"
#include "OCLLockpickInterruptedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOCLLockpickInterrupted, AActor*, Initiator);

