#pragma once
#include "CoreMinimal.h"
#include "OnTTDMaxChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTTDMaxChanged, float, NewMaxEnergy);

