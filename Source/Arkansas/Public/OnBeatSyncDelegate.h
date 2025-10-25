#pragma once
#include "CoreMinimal.h"
#include "OnBeatSyncDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBeatSync, float, BarDuration, float, BeatDuration, float, Tempo);

