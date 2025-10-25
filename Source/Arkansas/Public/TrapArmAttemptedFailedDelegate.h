#pragma once
#include "CoreMinimal.h"
#include "TrapArmAttemptedFailedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapArmAttemptedFailed, AActor*, Initiator);

