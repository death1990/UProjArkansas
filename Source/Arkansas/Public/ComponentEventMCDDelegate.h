#pragma once
#include "CoreMinimal.h"
#include "ComponentEvent.h"
#include "ComponentEventMCDDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FComponentEventMCD, const FComponentEvent&, Event);

