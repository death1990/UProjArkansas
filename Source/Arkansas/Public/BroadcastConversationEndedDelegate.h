#pragma once
#include "CoreMinimal.h"
#include "BroadcastConversationEndedDelegate.generated.h"

class UBroadcastStationAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBroadcastConversationEnded, const UBroadcastStationAsset*, Station);

