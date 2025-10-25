#pragma once
#include "CoreMinimal.h"
#include "OCLCloseStartDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOCLCloseStart, AActor*, Initiator);

