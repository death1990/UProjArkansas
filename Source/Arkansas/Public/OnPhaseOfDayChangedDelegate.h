#pragma once
#include "CoreMinimal.h"
#include "EPhaseOfDay.h"
#include "OnPhaseOfDayChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPhaseOfDayChanged, EPhaseOfDay, NewPhase);

