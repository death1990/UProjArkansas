#pragma once
#include "CoreMinimal.h"
#include "OnPreventTTDChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreventTTDChanged, bool, bPreventTTD);

