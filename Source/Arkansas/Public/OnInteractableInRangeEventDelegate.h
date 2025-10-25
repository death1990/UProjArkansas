#pragma once
#include "CoreMinimal.h"
#include "OnInteractableInRangeEventDelegate.generated.h"

class UInteractableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractableInRangeEvent, UInteractableComponent*, Interactable);

