#pragma once
#include "CoreMinimal.h"
#include "TrapDeactivatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapDeactivated, AActor*, Initiator);

