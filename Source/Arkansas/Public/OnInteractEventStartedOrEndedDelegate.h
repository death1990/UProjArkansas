#pragma once
#include "CoreMinimal.h"
#include "OnInteractEventStartedOrEndedDelegate.generated.h"

class UInteractionEventBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractEventStartedOrEnded, UInteractionEventBase*, InteractionEventStartedOrEnded);

