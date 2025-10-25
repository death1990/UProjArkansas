#pragma once
#include "CoreMinimal.h"
#include "InteractionDescription.h"
#include "InteractableModifiedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractableModifiedDelegate, const FInteractionDescription&, InteractionDescription);

