#pragma once
#include "CoreMinimal.h"
#include "TrapPreDetonateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapPreDetonate, float, SecondsTilDetonation);

