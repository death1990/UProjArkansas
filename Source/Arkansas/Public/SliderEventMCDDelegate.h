#pragma once
#include "CoreMinimal.h"
#include "SliderEvent.h"
#include "SliderEventMCDDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSliderEventMCD, const FSliderEvent&, Event);

