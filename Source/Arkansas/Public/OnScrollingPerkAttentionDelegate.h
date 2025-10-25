#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnScrollingPerkAttentionDelegate.generated.h"

class UPerk;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScrollingPerkAttention, TSubclassOf<UPerk>, AttentionPerkClass);

