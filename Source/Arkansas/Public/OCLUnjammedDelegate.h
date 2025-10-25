#pragma once
#include "CoreMinimal.h"
#include "OCLUnjammedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOCLUnjammed, AActor*, Initiator);

