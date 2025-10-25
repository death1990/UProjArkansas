#pragma once
#include "CoreMinimal.h"
#include "OnScrollingPerkEntryClickedDelegate.generated.h"

class UScrollingPerksListEntry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScrollingPerkEntryClicked, UScrollingPerksListEntry*, ClickedPerkEntry);

