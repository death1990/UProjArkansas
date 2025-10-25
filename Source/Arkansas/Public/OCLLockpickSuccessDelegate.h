#pragma once
#include "CoreMinimal.h"
#include "OCLLockpickSuccessDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOCLLockpickSuccess, AActor*, Initiator);

