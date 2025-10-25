#pragma once
#include "CoreMinimal.h"
#include "OnPlayerConversationProximityChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerConversationProximityChange, bool, bInProximity);

