#pragma once
#include "CoreMinimal.h"
#include "TrapDisarmInterruptedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapDisarmInterrupted, AActor*, Initiator);

