#pragma once
#include "CoreMinimal.h"
#include "InteractionDescription.h"
#include "GetInteractHoldTimeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(float, FGetInteractHoldTime, const FInteractionDescription&, Description);

