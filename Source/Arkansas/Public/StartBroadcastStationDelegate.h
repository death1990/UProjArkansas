#pragma once
#include "CoreMinimal.h"
#include "StartBroadcastStationDelegate.generated.h"

class UBroadcastStationAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartBroadcastStation, const UBroadcastStationAsset*, Station);

