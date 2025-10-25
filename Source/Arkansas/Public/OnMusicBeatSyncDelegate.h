#pragma once
#include "CoreMinimal.h"
#include "OnMusicBeatSyncDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMusicBeatSync, float, BarDuration, float, BeatDuration, float, Tempo);

