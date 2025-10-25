#pragma once
#include "CoreMinimal.h"
#include "OCLOnPowerChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOCLOnPowerChanged, bool, bHasPower);

