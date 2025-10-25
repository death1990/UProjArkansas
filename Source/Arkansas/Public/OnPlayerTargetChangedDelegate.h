#pragma once
#include "CoreMinimal.h"
#include "OnPlayerTargetChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerTargetChanged, const AActor*, NewTarget);

