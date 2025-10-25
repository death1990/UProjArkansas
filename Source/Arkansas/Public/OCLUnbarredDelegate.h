#pragma once
#include "CoreMinimal.h"
#include "OCLUnbarredDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOCLUnbarred, AActor*, Initiator);

