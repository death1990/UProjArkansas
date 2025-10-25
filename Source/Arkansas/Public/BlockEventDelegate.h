#pragma once
#include "CoreMinimal.h"
#include "BlockEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBlockEvent, AActor*, Blocker, bool, bSkipAnimation);

