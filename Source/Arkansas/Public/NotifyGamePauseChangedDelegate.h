#pragma once
#include "CoreMinimal.h"
#include "NotifyGamePauseChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyGamePauseChanged, bool, bIsPaused);

