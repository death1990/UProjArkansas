#pragma once
#include "CoreMinimal.h"
#include "TrapArmInterruptedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapArmInterrupted, AActor*, Initiator);

