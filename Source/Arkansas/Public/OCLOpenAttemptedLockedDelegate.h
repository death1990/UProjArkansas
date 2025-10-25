#pragma once
#include "CoreMinimal.h"
#include "OCLOpenAttemptedLockedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOCLOpenAttemptedLocked, AActor*, Initiator);

