#pragma once
#include "CoreMinimal.h"
#include "ButtonEvent.h"
#include "ButtonEventMCDDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonEventMCD, const FButtonEvent&, Event);

