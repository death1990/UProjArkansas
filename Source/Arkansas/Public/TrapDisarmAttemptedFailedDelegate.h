#pragma once
#include "CoreMinimal.h"
#include "TrapDisarmAttemptedFailedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapDisarmAttemptedFailed, AActor*, Initiator);

