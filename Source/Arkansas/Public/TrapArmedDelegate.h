#pragma once
#include "CoreMinimal.h"
#include "TrapArmedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapArmed, AActor*, Initiator);

