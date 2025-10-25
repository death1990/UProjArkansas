#pragma once
#include "CoreMinimal.h"
#include "TrapTriggerDelegateWithInitiatorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapTriggerDelegateWithInitiator, AActor*, Initiator);

