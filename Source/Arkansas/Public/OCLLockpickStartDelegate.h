#pragma once
#include "CoreMinimal.h"
#include "OCLLockpickStartDelegate.generated.h"

class AActor;
class UOCLComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOCLLockpickStart, AActor*, Initiator, UOCLComponent*, OCLComponent, float, LockpickSeconds, uint8, LockpickNumResources);

