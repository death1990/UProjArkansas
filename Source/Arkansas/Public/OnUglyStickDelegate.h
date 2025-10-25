#pragma once
#include "CoreMinimal.h"
#include "OnUglyStickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUglyStick, bool, bUglyStick);

