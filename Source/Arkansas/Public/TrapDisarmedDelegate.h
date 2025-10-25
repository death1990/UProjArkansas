#pragma once
#include "CoreMinimal.h"
#include "TrapDisarmedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapDisarmed, AActor*, Initiator);

