#pragma once
#include "CoreMinimal.h"
#include "ComputerUseDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComputerUse, AActor*, Initiator);

