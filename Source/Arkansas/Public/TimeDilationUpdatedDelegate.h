#pragma once
#include "CoreMinimal.h"
#include "TimeDilationUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimeDilationUpdated, float, Value);

