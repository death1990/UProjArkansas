#pragma once
#include "CoreMinimal.h"
#include "EAlertState.h"
#include "AlertStateChangeDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAlertStateChangeDelegate, AActor*, TargetActor, EAlertState, PreviousAlertState, EAlertState, TargetAlertState, bool, bRestoring);

