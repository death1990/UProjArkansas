#pragma once
#include "CoreMinimal.h"
#include "TrapDisarmStartDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrapDisarmStart, AActor*, Initiator, uint8, DisarmSeconds);

