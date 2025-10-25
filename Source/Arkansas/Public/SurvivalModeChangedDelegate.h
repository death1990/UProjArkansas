#pragma once
#include "CoreMinimal.h"
#include "SurvivalModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSurvivalModeChanged, bool, NewSurvivalMode);

