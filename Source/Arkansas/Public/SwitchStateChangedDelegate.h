#pragma once
#include "CoreMinimal.h"
#include "SwitchStateChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwitchStateChanged, AActor*, Initiator, int32, StateIndex);

