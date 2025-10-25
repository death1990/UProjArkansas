#pragma once
#include "CoreMinimal.h"
#include "NewFootstepDataDelegate.generated.h"

class UFootstepData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewFootstepData, const UFootstepData*, FootstepData);

