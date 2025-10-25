#pragma once
#include "CoreMinimal.h"
#include "InteractionDescription.h"
#include "InteractableSelectionChangedDynamicDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractableSelectionChangedDynamic, const FInteractionDescription&, InteractionDescription);

