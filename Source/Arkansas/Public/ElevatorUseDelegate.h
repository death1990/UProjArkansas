#pragma once
#include "CoreMinimal.h"
#include "ElevatorUseDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElevatorUse, AActor*, Initiator);

