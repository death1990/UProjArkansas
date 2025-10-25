#pragma once
#include "CoreMinimal.h"
#include "OCLOpenAttemptedBarredDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOCLOpenAttemptedBarred, AActor*, Initiator);

