#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnScrollingPerkAttentionLostDelegate.generated.h"

class UPerk;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScrollingPerkAttentionLost, TSubclassOf<UPerk>, LastPerkClass);

