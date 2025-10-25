#pragma once
#include "CoreMinimal.h"
#include "OnScrollingPerkTransactionDelegate.generated.h"

class UScrollingPerksListEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnScrollingPerkTransaction, UScrollingPerksListEntry*, ClickedPerkEntry, bool, bIsPending, bool, bIsAcquired);

