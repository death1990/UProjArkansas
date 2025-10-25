#pragma once
#include "CoreMinimal.h"
#include "OnGodVisionChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGodVisionChange, bool, bGodVision);

