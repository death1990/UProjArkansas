#pragma once
#include "CoreMinimal.h"
#include "OnEncumberedChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncumberedChangeDelegate, bool, bEncumbered);

