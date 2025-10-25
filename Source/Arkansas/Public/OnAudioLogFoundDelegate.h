#pragma once
#include "CoreMinimal.h"
#include "OnAudioLogFoundDelegate.generated.h"

class UAudioLogItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAudioLogFound, UAudioLogItem*, AudioLogItem, bool, bIsNew);

