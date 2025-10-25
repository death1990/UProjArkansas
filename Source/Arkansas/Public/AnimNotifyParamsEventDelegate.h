#pragma once
#include "CoreMinimal.h"
#include "EAnimNotify.h"
#include "AnimNotifyParamsEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAnimNotifyParamsEvent, EAnimNotify, AnimEvent, FName, OptionalSocket);

