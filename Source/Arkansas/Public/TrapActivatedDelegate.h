#pragma once
#include "CoreMinimal.h"
#include "TrapActivatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrapActivated, AActor*, Initiator, float, DetonationSeconds);

