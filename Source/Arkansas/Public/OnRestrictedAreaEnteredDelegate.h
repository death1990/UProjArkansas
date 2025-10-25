#pragma once
#include "CoreMinimal.h"
#include "OnRestrictedAreaEnteredDelegate.generated.h"

class ARestrictedArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRestrictedAreaEntered, const ARestrictedArea*, RestrictedArea);

