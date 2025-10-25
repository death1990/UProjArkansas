#pragma once
#include "CoreMinimal.h"
#include "OCLUnsealedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOCLUnsealed, AActor*, Initiator);

