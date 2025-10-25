#pragma once
#include "CoreMinimal.h"
#include "ERestType.h"
#include "PlayerWaitInitiatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerWaitInitiated, float, TimePassed, ERestType, RestType);

