#pragma once
#include "CoreMinimal.h"
#include "OCLLockedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOCLLocked, AActor*, Initiator, bool, IgnoreSound, bool, InstantAnimation);

