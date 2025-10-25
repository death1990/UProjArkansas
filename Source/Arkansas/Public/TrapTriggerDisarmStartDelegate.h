#pragma once
#include "CoreMinimal.h"
#include "TrapTriggerDisarmStartDelegate.generated.h"

class ATrapTrigger;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapTriggerDisarmStart, const ATrapTrigger*, TrapTrigger);

