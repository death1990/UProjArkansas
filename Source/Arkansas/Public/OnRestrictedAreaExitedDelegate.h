#pragma once
#include "CoreMinimal.h"
#include "OnRestrictedAreaExitedDelegate.generated.h"

class ARestrictedArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRestrictedAreaExited, const ARestrictedArea*, RestrictedArea);

