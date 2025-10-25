#pragma once
#include "CoreMinimal.h"
#include "OCLLockpickLoopStopDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOCLLockpickLoopStop, AActor*, Initiator);

