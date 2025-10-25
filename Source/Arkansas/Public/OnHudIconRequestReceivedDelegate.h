#pragma once
#include "CoreMinimal.h"
#include "EHudIconDisplayArea.h"
#include "OnHudIconRequestReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHudIconRequestReceived, EHudIconDisplayArea, IconDisplayArea);

