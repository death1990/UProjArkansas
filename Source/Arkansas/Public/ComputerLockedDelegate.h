#pragma once
#include "CoreMinimal.h"
#include "ComputerLockedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComputerLocked, AActor*, Initiator);

