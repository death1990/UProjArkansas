#pragma once
#include "CoreMinimal.h"
#include "EOCLState.h"
#include "OCLStateChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOCLStateChanged, AActor*, Initiator, EOCLState, PreviousState, EOCLState, CurrentState);

