#pragma once
#include "CoreMinimal.h"
#include "LockpickStartDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockpickStart, AActor*, Target);

