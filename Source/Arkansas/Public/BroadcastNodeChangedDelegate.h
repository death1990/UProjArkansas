#pragma once
#include "CoreMinimal.h"
#include "BroadcastNodeChangedDelegate.generated.h"

class UBroadcastStationAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBroadcastNodeChanged, const UBroadcastStationAsset*, Station, int32, NodeID);

