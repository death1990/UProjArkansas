#pragma once
#include "CoreMinimal.h"
#include "EndBroadcastStationDelegate.generated.h"

class UBroadcastStationAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndBroadcastStation, const UBroadcastStationAsset*, Station);

